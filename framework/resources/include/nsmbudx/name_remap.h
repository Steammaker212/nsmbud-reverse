// nsmbudx/name_remap.h -- give an existing actor your own model, by name.
//
// Game code names its archives and models as string literals. The Fire Flower
// item, for example, does ResArchiveMgr::get("I_fireflower") and then
// ResArchive::getModel("I_fireflower") in six different functions. Rather than
// rewriting those functions, a ScopedNameRemap swaps the names inside the two
// lookups for as long as it is alive:
//
//   static const nsmbudx::NameRemap kRemap = {
//       "I_fireflower", "my_item",        // archive  from -> to
//       "I_fireflower", "MyItem",         // model    from -> to (may be null)
//   };
//   {
//       nsmbudx::ScopedNameRemap remap(kRemap);
//       return originalItemFunction(item);   // the game's own code, your model
//   }
//
// The remap applies only to lookups made on the thread that created the scope,
// so the level-loading thread looking up the real "I_fireflower" at the same
// moment is unaffected. If the replacement archive or model is not available,
// the lookup falls back to the original name and logs a warning, instead of
// handing the game a null pointer.
//
// Remember that an archive must be *loaded* to be found: list it in the
// profile's resources (PROFILE_RESOURCES) of an actor that is in the level.
//
// Hooks: ResArchiveMgr::get (0x0043B548), ResArchive::getModel (0x00430090);
// names and signatures from codedx (resarchive.h / main.sym).
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "types.h"

namespace nsmbudx {

struct NameRemap
{
    const char* archiveFrom;
    const char* archiveTo;
    const char* modelFrom;   // null: leave model names alone
    const char* modelTo;
};

class ScopedNameRemap
{
public:
    explicit ScopedNameRemap(const NameRemap& remap) : ScopedNameRemap(&remap, 1) {}
    ScopedNameRemap(const NameRemap* remaps, u32 count);   // first match wins
    ~ScopedNameRemap();

    ScopedNameRemap(const ScopedNameRemap&) = delete;
    ScopedNameRemap& operator=(const ScopedNameRemap&) = delete;

private:
    const NameRemap* mPrev;
    u32 mPrevCount;
    void* mPrevThread;
    u32 mPrevFellBack;
};

// True if ResArchiveMgr currently holds an archive with this name.
bool isArchiveLoaded(const char* name);

} // namespace nsmbudx
