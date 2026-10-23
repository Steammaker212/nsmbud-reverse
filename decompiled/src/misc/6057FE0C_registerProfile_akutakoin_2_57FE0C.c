/* registerProfile_akutakoin_2_57FE0C
 * address: 0x6057FE0C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutakoin_2_57FE0C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = "アクター重力付コイン";
  Profile__ctor(&stru_60CAEFA4, Actor_akutakoin_2_build, 0x1A5u, &v0, &stru_60B048F0, 8194);
}
