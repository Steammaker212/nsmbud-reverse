/* registerProfile_lava_pendulum_Lift_center_63D95C
 * address: 0x6063D95C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_lava_pendulum_Lift_center_63D95C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD4FD3;
  Profile__ctor(&stru_60CB56F8, Actor_lava_pendulum_Lift_center_build, 0x322u, &v0, &stru_60B07344, 0);
}
