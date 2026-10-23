/* registerProfile_akutalevel_koin_57EF20
 * address: 0x6057EF20   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutalevel_koin_57EF20()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = "アクター画面追従コイン";
  Profile__ctor(&stru_60CAEF44, Actor_akutalevel_koin_build, 0x198u, &v0, &stru_60B048A8, 8194);
}
