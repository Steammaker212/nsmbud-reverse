// archive_guard.cpp -- name the archive before the game dereferences a missing one.
//
// sub_608226EC (archive manager getFile) looks an archive up by name in a
// sead string tree and, when the name is absent, calls a virtual through a null
// pointer: "Invalid memory access at 0x0" on the Prepare Thread, with no hint
// of which archive it wanted. This hook repeats the game's own lookup first and,
// if it will miss, writes the archive and file names to the log through
// ModBase::logRaw (the log server or svc 0x27, by MODBASE_NETWORK_LOG). It then
// calls the original unchanged, so behaviour is identical.
//
// Layout, read from sub_608226EC itself:
//   mgr+0x14     tree root
//   node[1]/[2]  left/right child (left when requested < node, bytewise)
//   node+0x10    sead::SafeString key { vtable, cstr }
//
// Deluxe (Switch) v1.0.0 only.

#include "core/types.h"
#include "modbase/log.h"

namespace ModBase { namespace archiveGuard { void* getFile_orig(void* mgr, void* archive, void* path, u32* outSize); } }

namespace {

struct SafeStr
{
    void* vtable;
    const char* cstr;
};

struct Node
{
    void* _0;
    Node* left;     // 4
    Node* right;    // 8
    void* _c;
    SafeStr key;    // 10
};

void debugPrint(const char* s, u32 len)
{
    ModBase::logRaw(s, len);     // follows MODBASE_NETWORK_LOG like every other log
}

struct Line
{
    char buf[256];
    u32 len = 0;

    void put(const char* s)
    {
        if (!s)
            s = "(null)";
        for (u32 i = 0; s[i] && len < sizeof(buf) - 1 && i < 120; i++)
            buf[len++] = s[i];
        buf[len] = '\0';
    }
};

// Same comparison as the game: bytewise, stop at the first difference or NUL.
int compare(const char* a, const char* b)
{
    for (u32 i = 0; i < 0x80000; i++) {
        int d = (u8)a[i] - (u8)b[i];
        if (d || !a[i])
            return d;
    }
    return 0;
}

const char* cstr(void* safeString)
{
    return safeString ? ((SafeStr*)safeString)->cstr : nullptr;
}

bool isLoaded(void* mgr, const char* name, bool* badKey)
{
    for (Node* n = *(Node**)((u8*)mgr + 0x14); n; ) {
        if (!n->key.cstr) {
            *badKey = true;
            return false;
        }
        int d = compare(name, n->key.cstr);
        if (!d)
            return true;
        n = d < 0 ? n->left : n->right;
    }
    return false;
}

} // namespace

namespace ModBase { namespace archiveGuard { void* getFile(void* mgr, void* archive, void* path, u32* outSize); } }
void* ModBase::archiveGuard::getFile(void* mgr, void* archive, void* path, u32* outSize)
{
    const char* name = cstr(archive);
    bool badKey = false;
    if (name && !isLoaded(mgr, name, &badKey)) {
        Line line;
        line.put(badKey ? "[ModBase] getFile: archive tree has a node with a null name, looking up '"
                        : "[ModBase] getFile: archive '");
        line.put(name);
        line.put(badKey ? "'" : "' is not loaded");
        line.put(" (file '");
        line.put(cstr(path));
        line.put("'); the game dereferences null next");
        debugPrint(line.buf, line.len);
    }
    return ModBase::archiveGuard::getFile_orig(mgr, archive, path, outSize);
}
