/* registerProfile_akutaDRCkoin_586238
 * address: 0x60586238   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutaDRCkoin_586238()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = "アクターＤＲＣ出現コイン";
  Profile__ctor(&stru_60CAF188, Actor_akutaDRCkoin_build, 0x1A7u, &v0, &stru_60B04A20, 8194);
}
