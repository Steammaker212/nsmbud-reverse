// name_remap.cpp -- see modbase/name_remap.h.

#include "modbase/name_remap.h"
#include "modbase/log.h"
#include "graphics/resarchive.h"

namespace ModBase {
namespace nameRemap {

// sead::SafeStringBase<char>: { vtable, cstr }. The callee calls
// assureTermination through the vtable, so a substituted name keeps the
// caller's vtable and only changes cstr. Outside the anonymous namespace so the
// hooks below, which take it, keep external linkage.
struct SafeStr
{
    void* vtable;
    const char* cstr;
};

} // namespace nameRemap
} // namespace ModBase

namespace {

using ModBase::nameRemap::SafeStr;

const ModBase::NameRemap* sActive;
u32 sActiveCount;
void* sThread;
// Bit i: remap i fell back to the vanilla archive in this scope, so its model
// swap is skipped too -- the vanilla archive does not contain the custom model
// name, and asking it for one was the Hammer Flower crash (ledger F0204).
u32 sArchiveFellBack;

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
const ModBase::NameRemap* findArchive(const char* name)
{
    if (!sActive || sThread != currentThread())
        return nullptr;
    for (u32 i = 0; i < sActiveCount; i++)
        if (sActive[i].archiveTo && same(name, sActive[i].archiveFrom))
            return &sActive[i];
    return nullptr;
}

const ModBase::NameRemap* findModel(const char* name)
{
    if (!sActive || sThread != currentThread())
        return nullptr;
    for (u32 i = 0; i < sActiveCount; i++)
        if (sActive[i].modelTo && same(name, sActive[i].modelFrom))
            return &sActive[i];
    return nullptr;
}

} // namespace

namespace ModBase { namespace nameRemap { void* archiveGet_orig(void* mgr, SafeStr* name); } }
namespace ModBase { namespace nameRemap { void* getModel_orig(void* archive, SafeStr* name, u32 numSkl, u32 numTex,
                                         u32 numShu, u32 numVis, u32 numSha, bool unk, void* heap); } }

namespace ModBase { namespace nameRemap { void* archiveGet(void* mgr, SafeStr* name); } }
void* ModBase::nameRemap::archiveGet(void* mgr, SafeStr* name)
{
    if (const ModBase::NameRemap* r = findArchive(name->cstr)) {
        SafeStr swapped = { name->vtable, r->archiveTo };
        if (void* archive = ModBase::nameRemap::archiveGet_orig(mgr, &swapped))
            return archive;
        sArchiveFellBack |= 1u << (u32)(r - sActive);
        ModBase::log("remap: archive '", r->archiveTo, "' is not loaded; using '", name->cstr, "'");
    }
    return ModBase::nameRemap::archiveGet_orig(mgr, name);
}

namespace ModBase { namespace nameRemap { void* getModel(void* archive, SafeStr* name, u32 numSkl, u32 numTex,
                                    u32 numShu, u32 numVis, u32 numSha, bool unk, void* heap); } }
void* ModBase::nameRemap::getModel(void* archive, SafeStr* name, u32 numSkl, u32 numTex,
                                    u32 numShu, u32 numVis, u32 numSha, bool unk, void* heap)
{
    if (const ModBase::NameRemap* r = findModel(name->cstr)) {
        if (sArchiveFellBack & (1u << (u32)(r - sActive)))
            return ModBase::nameRemap::getModel_orig(archive, name, numSkl, numTex, numShu, numVis, numSha, unk, heap);
        SafeStr swapped = { name->vtable, r->modelTo };
        if (void* model = ModBase::nameRemap::getModel_orig(archive, &swapped, numSkl, numTex, numShu,
                                                  numVis, numSha, unk, heap))
            return model;
        ModBase::log("remap: model '", r->modelTo, "' not found; using '", name->cstr, "'");
    }
    return ModBase::nameRemap::getModel_orig(archive, name, numSkl, numTex, numShu, numVis, numSha, unk, heap);
}

namespace ModBase {

ScopedNameRemap::ScopedNameRemap(const NameRemap* remaps, u32 count)
    : mPrev(sActive), mPrevCount(sActiveCount), mPrevThread(sThread)
{
    mPrevFellBack = sArchiveFellBack;
    sArchiveFellBack = 0;
    sActive = remaps;
    sActiveCount = count;
    sThread = currentThread();
}

ScopedNameRemap::~ScopedNameRemap()
{
    sArchiveFellBack = mPrevFellBack;
    sActive = mPrev;
    sActiveCount = mPrevCount;
    sThread = mPrevThread;
}

// The SafeString vtable has no C++ spelling, so it is reached by its mangled name
// (symbols/nintendo/sead.sym: vtable for sead::SafeStringBase<char>).
extern "C" void* _ZTVN4sead14SafeStringBaseIcEE[];

bool isArchiveLoaded(const char* name)
{
    // Objects hold _ZTV + 8 (offset-to-top and RTTI come first): ledger F0025.
    SafeStr s = { (u8*)_ZTVN4sead14SafeStringBaseIcEE + 8, name };
    void* mgr = (void*)ResArchiveMgr::instance;
    return mgr && ModBase::nameRemap::archiveGet_orig(mgr, &s) != nullptr;
}

} // namespace ModBase
