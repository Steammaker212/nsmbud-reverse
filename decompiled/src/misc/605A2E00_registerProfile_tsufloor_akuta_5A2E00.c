/* registerProfile_tsufloor_akuta_5A2E00
 * address: 0x605A2E00   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_tsufloor_akuta_5A2E00()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD2187;
  Profile__ctor(&stru_60CAFE94, Actor_tsufloor_akuta_build, 0x5Bu, &v0, &stru_60B04E78, 0);
}
