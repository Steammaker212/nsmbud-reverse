/* registerProfile_akutarareexclusive_koin_57E758
 * address: 0x6057E758   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutarareexclusive_koin_57E758()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = "アクター食べられ専用コイン";
  Profile__ctor(&stru_60CAEF08, Actor_akutarareexclusive_koin_build, 0x1A8u, &v0, &stru_60B04884, 2);
}
