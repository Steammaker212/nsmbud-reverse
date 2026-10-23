/* registerProfile_tariporigon_fort_for_6A32F8
 * address: 0x606A32F8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_tariporigon_fort_for_6A32F8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD6F99;
  Profile__ctor(&stru_60CB9A20, Actor_tariporigon_fort_for_build, 0x37u, &v0, &stru_60B083CC, 0);
}
