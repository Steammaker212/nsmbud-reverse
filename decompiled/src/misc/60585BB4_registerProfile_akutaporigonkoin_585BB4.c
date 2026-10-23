/* registerProfile_akutaporigonkoin_585BB4
 * address: 0x60585BB4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutaporigonkoin_585BB4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = "アクターポリゴン追従コイン";
  Profile__ctor(&stru_60CAF168, Actor_akutaporigonkoin_build, 0x18Eu, &v0, &stru_60B049FC, 8198);
}
