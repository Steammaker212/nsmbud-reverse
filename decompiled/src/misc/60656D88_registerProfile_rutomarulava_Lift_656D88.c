/* registerProfile_rutomarulava_Lift_656D88
 * address: 0x60656D88   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_rutomarulava_Lift_656D88()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD585A;
  Profile__ctor(&stru_60CB6484, Actor_rutomarulava_Lift_build, 0xB4u, &v0, &stru_60B07710, 2);
}
