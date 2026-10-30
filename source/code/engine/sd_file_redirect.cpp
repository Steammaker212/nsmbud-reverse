#include "nintendo/nn.h"
#include "core/string.h"
#include "modbase/log.h"

// nn::fs::OpenFile (0x609ADBEC), every file the game opens:
//  * content:/<path> -> sd:/nsmbudx/content/<path> when that file exists there;
//  * save:/<name> (the save files) -> sd:/nsmbudx/<name>, rp_savedata.dat as
//    sd:/nsmbudx/savedata.dat.
//
// The game opens its save through sead's save device (0x608E27F4): read with
// OpenMode Read (1), write with Write | AllowAppend (6, the mode table at
// 0x60AF2CC4) after making sure the file exists on the save mount, then sets
// its size to 0 and writes 0xC274 bytes. The same mode works on the SD file,
// which is made here first if it is missing.
//
// Only the SD card's saves are ever read: one that is missing (or empty) there
// is reported missing (nn::fs ResultPathNotFound, 0x202), whatever the console
// holds. The boot load (save manager 0x60CC6E04, loader 0x6082A2A4, run by
// 0x607DF9E4) then sets load status 1, "no file", and builds a new save in
// memory; the boot sequence's state 3 (0x607DED50) sees status 1 and moves to
// state 4, which saves at once (0x60829330) -- so a new save is made on the SD
// card from scratch as the game starts, as on a console with no save at all.
//
// Mounting the SD card needs the game's FS permissions to allow it (the
// main.npdm FsAccessControl): a failed mount is logged once and nothing is
// redirected.

namespace {

enum SdMountStatus { SdNotMounted = 0, SdMounted = 1, SdMountFailed = 2 };
SdMountStatus sSdMountStatus = SdNotMounted;

constexpr s32 cOpenWrite = 2;   // nn::fs::OpenMode_Write
constexpr u32 cResultPathNotFound = 0x202;  // nn::fs: module 2, description 1 (sead checks this value, 0x608E28DC)

bool mountSd()
{
    if (sSdMountStatus == SdNotMounted) {
        nn::Result rc = nn::fs::MountSdCard("sd");
        if (rc.isSuccess()) {
            sSdMountStatus = SdMounted;
            nn::fs::CreateDirectory("sd:/nsmbudx");
            ModBase::log("sd: SD card mounted; saves go to sd:/nsmbudx");
        } else {
            sSdMountStatus = SdMountFailed;
            ModBase::log("sd: cannot mount the SD card (result ", rc.value,
                         "); content and saves stay where the game keeps them");
        }
    }
    return sSdMountStatus == SdMounted;
}

// save:/name or save://name -> the name, else nullptr.
const char* saveFileName(const char* path)
{
    if (strncmp(path, "save:/", 6) != 0)
        return nullptr;
    path += 6;
    while (*path == '/')
        path++;
    return *path ? path : nullptr;
}

bool sdFileHasData(const char* path)
{
    nn::fs::FileHandle h;
    if (!nn::fs::OpenFile(&h, path, 1 /* Read */).isSuccess())
        return false;
    s64 size = 0;
    nn::fs::GetFileSize(&size, h);
    nn::fs::CloseFile(h);
    return size > 0;
}

} // namespace

nn::Result nn_fs_OpenFile_hook(nn::fs::FileHandle* out, const char* path, s32 mode)
{
    nn::Result rc;
    static char redirectPath[nn::fs::PathLengthMax+1];

    if (!mountSd())
        return nn::fs::OpenFile(out, path, mode);

    if (strncmp(path, "content:/", 9) == 0)
    {
        nn::util::SNPrintf(redirectPath, nn::fs::PathLengthMax, "sd:/nsmbudx/content/%s", path + 9);

        rc = nn::fs::OpenFile(out, redirectPath, mode);
        if (rc.isSuccess())
            return rc;
    }

    else if (const char* name = saveFileName(path))
    {
        if (strncmp(name, "rp_savedata.dat", 16) == 0)
            nn::util::SNPrintf(redirectPath, nn::fs::PathLengthMax, "sd:/nsmbudx/savedata.dat");
        else
            nn::util::SNPrintf(redirectPath, nn::fs::PathLengthMax, "sd:/nsmbudx/%s", name);

        if (mode & cOpenWrite) {
            nn::fs::CreateFile(redirectPath, 0);    // fails harmlessly if it exists
            rc = nn::fs::OpenFile(out, redirectPath, mode);
            if (rc.isSuccess())
                return rc;
        } else {
            if (sdFileHasData(redirectPath))
                return nn::fs::OpenFile(out, redirectPath, mode);
            ModBase::log("sd: no ", redirectPath, " yet; the game starts that file anew");
            return nn::Result(cResultPathNotFound);
        }
    }

    return nn::fs::OpenFile(out, path, mode);
}
