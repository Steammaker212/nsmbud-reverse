/* registerProfile_DVgrass_flower_spawn_5FBE84
 * address: 0x605FBE84   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_DVgrass_flower_spawn_5FBE84()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB25C8 = 0;
  dword_60CB25CC = 0;
  dword_60CB25D0 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD3232;
  Profile__ctor(&stru_60CB25D4, Actor_DVgrass_flower_spawn_build, 0x2EBu, &v0, &stru_60B06080, 0);
}
