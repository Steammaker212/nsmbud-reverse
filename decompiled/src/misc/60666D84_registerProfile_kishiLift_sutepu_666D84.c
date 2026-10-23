/* registerProfile_kishiLift_sutepu_666D84
 * address: 0x60666D84   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kishiLift_sutepu_666D84()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD5BFC;
  Profile__ctor(&stru_60CB6C24, Actor_kishiLift_sutepu_build, 0xD8u, &v0, &stru_60B079B8, 2);
}
