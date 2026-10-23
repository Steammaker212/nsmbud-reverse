/* registerProfile_ZN8BgCenterC1EPK14ActorB_82D318
 * address: 0x6082D318   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_ZN8BgCenterC1EPK14ActorB_82D318()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AE4CEE;
  Profile__ctor(&stru_60CC6E58, BgCenter__ctor, 0x24Bu, &v0, &stru_60B0DF24, 0);
}
