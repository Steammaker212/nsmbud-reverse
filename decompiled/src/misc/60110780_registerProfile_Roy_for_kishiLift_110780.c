/* registerProfile_Roy_for_kishiLift_110780
 * address: 0x60110780   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Roy_for_kishiLift_110780()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60ABE378;
  Profile__ctor(&stru_60C868A8, Actor_Roy_for_kishiLift_build, 0x2C4u, &v0, &stru_60AF6280, 2);
}
