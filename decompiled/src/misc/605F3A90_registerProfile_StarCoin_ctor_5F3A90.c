/* registerProfile_StarCoin_ctor_5F3A90
 * address: 0x605F3A90   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_StarCoin_ctor_5F3A90()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD2E37;
  Profile__ctor(&stru_60CB21B8, StarCoin_ctor, 0x1AAu, &v0, &stru_60B05DC0, 8194);
}
