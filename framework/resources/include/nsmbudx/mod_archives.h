// nsmbudx/mod_archives.h -- a mod's model archive may be missing; don't crash.
//
// Custom profiles list the archives the game loads for them (at game start for
// items, with each level for actors; nsmbudx/profile_resources.h). An archive
// that is listed but not on the SD card fails to load, and the game then looks
// it up anyway and dereferences null in the archive manager (0x608228E4,
// ledger F0222; seen again 2026-10-26 with romfs/Model/hammer removed).
//
// dropMissingModArchives() runs once, before the first load pass
// (framework/actors calls it from the LoadProfileArchives hook): every name in
// a custom profile's list that no vanilla profile uses is a mod archive, and
// if content:/Model/<name>.Nin_NX_NVN.szs does not exist it is taken out of
// the list and logged. The name remap then falls back to the game's model, as
// it does for any archive that is not loaded.
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "types.h"

namespace nsmbudx {

void dropMissingModArchives();

} // namespace nsmbudx
