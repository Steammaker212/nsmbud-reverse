/* registerProfile_fibafor_suta_45D6F8
 * address: 0x6045D6F8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_fibafor_suta_45D6F8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC9856;
  Profile__ctor(&stru_60C9D124, Actor_fibafor_suta_build, 0x355u, &v0, 0, 0);
}
