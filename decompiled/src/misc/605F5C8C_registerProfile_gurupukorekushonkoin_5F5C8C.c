/* registerProfile_gurupukorekushonkoin_5F5C8C
 * address: 0x605F5C8C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_gurupukorekushonkoin_5F5C8C()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD2E95;
  Profile__ctor(&stru_60CB2280, Actor_gurupukorekushonkoin_build, 0x1ABu, v0, &stru_60B05E10, 8194);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD2EBA;
  Profile__ctor(&stru_60CB2298, Actor_gurupukorekushonkoin_build, 0x1ACu, v0, &stru_60B05E34, 8194);
}
