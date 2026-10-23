/* registerProfile_zumu_RDash_8321CC
 * address: 0x608321CC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_zumu_RDash_8321CC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AE4FA4;
  Profile__ctor(&stru_60CC7258, Actor_zumu_RDash_build, 0x240u, &v0, &stru_60B0E1B4, 0);
}
