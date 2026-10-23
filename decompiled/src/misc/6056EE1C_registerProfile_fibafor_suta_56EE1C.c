/* registerProfile_fibafor_suta_56EE1C
 * address: 0x6056EE1C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_fibafor_suta_56EE1C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD1723;
  Profile__ctor(&stru_60CAE7B8, Actor_fibafor_suta_build, 0x135u, &v0, 0, 0);
}
