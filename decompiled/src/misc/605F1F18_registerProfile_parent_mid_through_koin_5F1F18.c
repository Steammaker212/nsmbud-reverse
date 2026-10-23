/* registerProfile_parent_mid_through_koin_5F1F18
 * address: 0x605F1F18   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_parent_mid_through_koin_5F1F18()
{
  sead__SafeString v0[3]; // [sp+10h] [bp-18h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD2DC1;
  Profile__ctor(&stru_60CB20F0, Actor_parent_mid_through_koin_build, 0x2Du, v0, &stru_60B05D30, 0);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD2DD7;
  Profile__ctor(&stru_60CB2108, Actor_parent_mid_through_koin_build, 0x2Eu, v0, &stru_60B05D54, 0);
}
