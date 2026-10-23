/* registerProfile_raitowith_tarirotate_Lift_63AF28
 * address: 0x6063AF28   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_raitowith_tarirotate_Lift_63AF28()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC74D7;
  Profile__ctor(&stru_60CB54C8, Actor_raitowith_tarirotate_Lift_build, 0x61u, &v0, &stru_60B072C4, 2);
}
