// ===========================================================================
//  CORRECTION (ledger F0204), read this first.
//
//  The null-dereference path below is right. The two "reasons" are not:
//   1. There is no vanilla hammer archive. romfs/Model/hammer on the SD card is
//      the user's own model; the base game has none (Model/ and every Pack
//      checked; the Fire Flower's I_fireflower lives in jyotyuActorPack).
//   2. Custom profile archives DO reach the loader: Profile_loadResources
//      (0x60017FCC) reads Profile_getResourceListById (0x60020FF0), which
//      codedx's template hooks. What was missing is the load class (F0202):
//      the Hammer Flower was registered as class 1 (per level), so its
//      archives loaded only in levels placing sprite 734, and a Hammer Flower
//      from a ?-block elsewhere found "hammer" unmounted. Items are class 0
//      (loaded at game start) in vanilla; nsmbudx/profile_resources.h now
//      registers the Hammer Flower the same way.
// ===========================================================================
//
// ItemModelCrash.cpp -- why "archive not loaded" is a hard crash, not a fallback.
//
// ===========================================================================
//  THE FAILURE, IN ONE LINE
//
//  Item code asks ResArchiveMgr for an archive and then asks that archive for
//  a model. If the archive is not *mounted*, the manager returns null, the
//  model lookup is handed null, and the model builder stores that null into an
//  object and reloads it as a vtable pointer. There is no null check anywhere
//  on the path. The guest faults at address 0.
// ===========================================================================
//
//  Addresses are RVAs (VA - 0x60000000), Deluxe v1.0.0.
//
//  Observed twice, identically, on Ryujinx Canary 1.3.272:
//
//    19:56:56 run, crash at 00:01:18.805
//    20:08:17 run, crash at 00:01:04.372
//
//    [nsmbudx] remap: archive 'hammer' is not loaded; using 'I_fireflower'
//    Cpu InvalidAccessHandler: Invalid memory address at virtual address 0x0
//      PC = 0x6087CEF0   r0 = 0
//
// ---------------------------------------------------------------------------
//  The two lookups
// ---------------------------------------------------------------------------
//
//  ResArchiveMgr::get        0x6043B548   (name) -> ResArchive*  | null
//  ResArchive::getModel      0x60430090   (name, counts...) -> Model*  | null
//
//  Both take a sead::SafeStringBase<char> = { vtable, cstr } by reference, so a
//  caller can be given a different name without its own code changing. That is
//  what nsmbudx::ScopedNameRemap does (framework/resources): it swaps cstr
//  inside the two lookups for the life of a scope, on one thread only.
//
//  The remap is deliberately fail-soft: when the substitute name misses, it
//  logs and retries the caller's original name. That is correct for the
//  *lookup*. It is not sufficient for the *caller*, because the caller only
//  falls back to something safe if the original name also resolves.
//
// ---------------------------------------------------------------------------
//  FireFlower item createModel  (0x6045D79C) -- the shape of the caller
// ---------------------------------------------------------------------------
//
//  void FireFlower_createModel(StageActor* item)          // simplified
//  {
//      sead::SafeString name = { vtbl, "I_fireflower" };   // built on the stack
//
//      ResArchive*  arc = ResArchiveMgr::get(&name);        // bl 0x6043B548
//      Model*       mdl = ResArchive::getModel(arc, &name, ...); // bl 0x60430090
//
//      buildModel(mdl, ...);                               // bl 0x6040F050
//      //                        ^ no test of arc or mdl before this call
//  }
//
//  The five sibling functions that play the item's animations (0x6045D980,
//  0x6045DA4C, 0x6045DB18, 0x6045DBF8, 0x6045DCC4) do the same pair of lookups
//  and then index the result, so they fault the same way.
//
// ---------------------------------------------------------------------------
//  buildModel  (0x6040F050) -- where null becomes a fault
// ---------------------------------------------------------------------------
//
//  It stores the model pointer into a freshly constructed object and then
//  reloads it to dispatch:
//
//      str  r5, [r0], #4        // object->model = mdl
//      ldr  r0, [r5]            // r0 = *(Model*)mdl   <-- null dereference
//      ldr  r1, [r0, #0xC0]     // vtable slot
//      blx  r1
//
//  With mdl == null the first load reads address 0. The PC in the crash report
//  is 0x6087CEF0, a helper whose first two instructions are exactly this shape:
//
//      0x6087CEF0  push {r4, r5, r6, lr}
//      0x6087CEF4  ldm  r0, {r1, ip}      // r0 == 0  ->  fault
//
//  So the guest reaches a register load through a null base, and the emulator
//  reports "Invalid memory access at virtual address 0x0" with every other
//  register plausible (only r0, and the callee-saved set, are zero).
//
// ---------------------------------------------------------------------------
//  Why the archive was missing at all -- two independent reasons
// ---------------------------------------------------------------------------
//
//  1. Wrong archive contents. romfs/Model/hammer.Nin_NX_NVN.szs is the *Boss
//     Bro's weapon*. Its FMDL exports bros_hammer / bros_hammer_handle /
//     bros_hammer_model, and its only animations are down_wait / jump_st /
//     jump_md / jump_ed. The item code wants animations named out, out2, out3,
//     wait and wait2 -- all five are absent (F0200). Even if a name had matched
//     a mesh, the animation lookups would still have failed.
//
//  2. The archive was never mounted. A profile's resource list is how the game
//     learns which archives an actor needs. For a custom profile that list
//     lives in Profile::resourceListsCustom, which this framework populates
//     (mods/*/code/*.cpp) -- but no hook exposes it to the loader, so nothing
//     ever mounts a custom profile's declared archives. "Not loaded" is the
//     expected outcome for *any* custom archive name, not just this one.
//
//  Reason 2 is the important one: it means the same crash is reachable by any
//  mod that points a remap at a name it ships as a file. Until a custom
//  profile's resources actually reach the loader, a remap target must be a name
//  the base game already mounts.
//
// ---------------------------------------------------------------------------
//  How to tell this apart from a missing *asset* in future logs
// ---------------------------------------------------------------------------
//
//  A remap miss always logs first:
//
//      [nsmbudx] remap: archive '<to>' is not loaded; using '<from>'
//      [nsmbudx] remap: model   '<to>' not found;      using '<from>'
//
//  The crash follows within a few milliseconds on the same thread. If a crash
//  has no such line before it, the null came from somewhere else -- use
//  ArchiveGuard_getFile (framework/resources/hooks/archive_guard.hks, hooking
//  0x608226EC) to name the archive+file that the manager tree was missing.
//
//  Provenance: F0200 (archive contents), F0201 (the null-dereference path),
//  F0025 (SafeStringBase object layout), F0026-F0028 (the resource tables).
//  Tier 1: binary disassembly plus two runtime crash dumps.
