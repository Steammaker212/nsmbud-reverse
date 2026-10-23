/* registerProfile_akutaakoyafor_koin_577DCC
 * address: 0x60577DCC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutaakoyafor_koin_577DCC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = "アクターアコヤ貝用コイン";
  Profile__ctor(&stru_60CAEC44, Actor_akutaakoyafor_koin_build, 0x19Cu, &v0, &stru_60B04700, 8194);
}
