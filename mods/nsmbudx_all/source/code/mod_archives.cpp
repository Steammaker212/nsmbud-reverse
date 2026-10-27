// mod_archives.cpp -- see nsmbudx/mod_archives.h.

#include "nsmbudx/mod_archives.h"
#include "nsmbudx/log.h"
#include "profile.h"

inline void* operator new(size_t, void* where) noexcept { return where; }

// symbols/resources.sym: nn::fs::GetEntryType(DirectoryEntryType* out, const char* path)
extern "C" u32 nn_fs_GetEntryType(u32* type, const char* path);

namespace {

constexpr u32 cMaxKept = 256;
alignas(sead::SafeString) u8 sKeptStorage[cMaxKept][sizeof(sead::SafeString)];
u32 sKept;
bool sDone;

bool sameName(const char* a, const char* b)
{
    while (*a && *a == *b) { a++; b++; }
    return *a == *b;
}

// Named by any vanilla profile: the game's own archive (a pack or a file), left alone.
bool isVanilla(const char* name)
{
    for (u32 id = 0; id < Profile::NUM_PROFILES_ORIGINAL; id++) {
        const sead::SafeString* list = Profile::getResourceList(id);
        u8 count = Profile::getResourceCount(id);
        for (u32 i = 0; list && i < count; i++)
            if (list[i].data && sameName(list[i].data, name))
                return true;
    }
    return false;
}

// "content:/Model/<name>.Nin_NX_NVN.szs", as Profile_loadResources builds it
// (format "Model/%s.Nin_NX_NVN.szs" at 0x60AB916D) on the content: mount.
bool fileExists(const char* name)
{
    char path[160];
    const char* parts[] = { "content:/Model/", name, ".Nin_NX_NVN.szs" };
    u32 n = 0;
    for (const char* part : parts)
        for (const char* c = part; *c && n < sizeof(path) - 1; c++)
            path[n++] = *c;
    path[n] = 0;
    u32 type = 0;
    return nn_fs_GetEntryType(&type, path) == 0;    // nn::Result success; type 1 = file
}

} // namespace

namespace nsmbudx {

void dropMissingModArchives()
{
    if (sDone)
        return;
    sDone = true;
    for (u32 c = 0; c < Profile::NUM_PROFILES_CUSTOM; c++) {
        const sead::SafeString* list = Profile::resourceListsCustom[c];
        u32 count = Profile::resourceCountCustom[c];
        if (!list || !count)
            continue;
        bool dropAny = false;
        for (u32 i = 0; i < count && !dropAny; i++)
            dropAny = list[i].data && !isVanilla(list[i].data) && !fileExists(list[i].data);
        if (!dropAny)
            continue;
        // Repoint this profile at a copy without the missing archives.
        sead::SafeString* kept = (sead::SafeString*)sKeptStorage[sKept];
        u32 n = 0;
        for (u32 i = 0; i < count && sKept + n < cMaxKept; i++) {
            const char* name = list[i].data;
            if (name && !isVanilla(name) && !fileExists(name)) {
                nsmbudx::log("mod archive missing: romfs/Model/", name,
                             ".Nin_NX_NVN.szs -- not loading it; its actors use the game's model");
                continue;
            }
            new (sKeptStorage[sKept + n]) sead::SafeString(name);
            n++;
        }
        sKept += n;
        Profile::resourceListsCustom[c] = n ? kept : nullptr;
        Profile::resourceCountCustom[c] = (u8)n;
        if (!n)
            Profile::hasResourcesCustom[c] = 0;
    }
}

} // namespace nsmbudx
