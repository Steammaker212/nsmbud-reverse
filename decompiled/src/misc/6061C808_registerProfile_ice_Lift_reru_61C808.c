/* registerProfile_ice_Lift_reru_61C808
 * address: 0x6061C808   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_ice_Lift_reru_61C808()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD3D6E;
  Profile__ctor(&stru_60CB352C, Actor_ice_Lift_reru_build, 0x165u, &v0, &stru_60B06738, 2);
}
