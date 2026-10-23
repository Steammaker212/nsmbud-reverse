/* registerProfile_ball_riLift_6E4B64
 * address: 0x606E4B64   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_ball_riLift_6E4B64()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD81B3;
  Profile__ctor(&stru_60CBBF50, Actor_ball_riLift_build, 0x17Cu, &v0, &stru_60B0916C, 2);
}
