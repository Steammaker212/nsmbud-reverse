// name_remap.cpp -- see nsmbudx/name_remap.h.

#include "nsmbudx/name_remap.h"
#include "nsmbudx/log.h"

namespace {

// sead::SafeStringBase<char>: { vtable, cstr }. The callee calls
// assureTermination through the vtable, so a substituted name keeps the
// caller's vtable and only changes cstr.
struct SafeStr
{
    void* vtable;
    const char* cstr;
};

const nsmbudx::NameRemap* sActive;
u32 sActiveCount;
void* sThread;

// TPIDRURO holds the thread's TLS pointer: a cheap, unique thread identity.
inline void* currentThread()
{
    void* tls;
    asm volatile("mrc p15, 0, %0, c13, c0, 3" : "=r"(tls));
    return tls;
}

bool same(const char* a, const char* b)
{
    if (!a || !b)
        return false;
    while (*a && *a == *b)
        a++, b++;
    return *a == *b;
}

// The remap whose archive (or model) name matches, on this thread only.
const nsmbudx::NameRemap* findArchive(const char* name)
{
    if (!sActive || sThread != currentThread())
        return nullptr;
    for (u32 i = 0; i < sActiveCount; i++)
        if (sActive[i].archiveTo && same(name, sActive[i].archiveFrom))
            return &sActive[i];
    return nullptr;
}

const nsmbudx::NameRemap* findModel(const char* name)
{
    if (!sActive || sThread != currentThread())
        return nullptr;
    for (u32 i = 0; i < sActiveCount; i++)
        if (sActive[i].modelTo && same(name, sActive[i].modelFrom))
            return &sActive[i];
    return nullptr;
}

} // namespace

extern "C" void* NameRemap_archiveGet_orig(void* mgr, SafeStr* name);
extern "C" void* NameRemap_getModel_orig(void* archive, SafeStr* name, u32 numSkl, u32 numTex,
                                         u32 numShu, u32 numVis, u32 numSha, bool unk, void* heap);

extern "C" void* NameRemap_archiveGet(void* mgr, SafeStr* name)
{
    if (const nsmbudx::NameRemap* r = findArchive(name->cstr)) {
        SafeStr swapped = { name->vtable, r->archiveTo };
        if (void* archive = NameRemap_archiveGet_orig(mgr, &swapped))
            return archive;
        nsmbudx::log("remap: archive '", r->archiveTo, "' is not loaded; using '", name->cstr, "'");
    }
    return NameRemap_archiveGet_orig(mgr, name);
}

extern "C" void* NameRemap_getModel(void* archive, SafeStr* name, u32 numSkl, u32 numTex,
                                    u32 numShu, u32 numVis, u32 numSha, bool unk, void* heap)
{
    if (const nsmbudx::NameRemap* r = findModel(name->cstr)) {
        SafeStr swapped = { name->vtable, r->modelTo };
        if (void* model = NameRemap_getModel_orig(archive, &swapped, numSkl, numTex, numShu,
                                                  numVis, numSha, unk, heap))
            return model;
        nsmbudx::log("remap: model '", r->modelTo, "' not found; using '", name->cstr, "'");
    }
    return NameRemap_getModel_orig(archive, name, numSkl, numTex, numShu, numVis, numSha, unk, heap);
}

namespace nsmbudx {

ScopedNameRemap::ScopedNameRemap(const NameRemap* remaps, u32 count)
    : mPrev(sActive), mPrevCount(sActiveCount), mPrevThread(sThread)
{
    sActive = remaps;
    sActiveCount = count;
    sThread = currentThread();
}

ScopedNameRemap::~ScopedNameRemap()
{
    sActive = mPrev;
    sActiveCount = mPrevCount;
    sThread = mPrevThread;
}

extern "C" u8 _ZN13ResArchiveMgr8instanceE[];          // codedx main.sym: ResArchiveMgr::instance
extern "C" void* _ZTVN4sead14SafeStringBaseIcEE[];      // codedx main.sym: SafeString vtable

bool isArchiveLoaded(const char* name)
{
    // Objects hold _ZTV + 8 (offset-to-top and RTTI come first): ledger F0025.
    SafeStr s = { (u8*)_ZTVN4sead14SafeStringBaseIcEE + 8, name };
    void* mgr = *(void**)_ZN13ResArchiveMgr8instanceE;
    return mgr && NameRemap_archiveGet_orig(mgr, &s) != nullptr;
}

} // namespace nsmbudx
