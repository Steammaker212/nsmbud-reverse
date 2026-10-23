/* registerProfile_akutarotate_koin_578DD8
 * address: 0x60578DD8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutarotate_koin_578DD8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = "アクター回転板追従コイン";
  Profile__ctor(&stru_60CAECA4, Actor_akutarotate_koin_build, 0x196u, &v0, &stru_60B04748, 0x2000);
}
