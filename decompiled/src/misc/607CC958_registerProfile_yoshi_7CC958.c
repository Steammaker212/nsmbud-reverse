/* registerProfile_yoshi_7CC958
 * address: 0x607CC958   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_yoshi_7CC958()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60ADC29E;
  Profile__ctor(&stru_60CC5380, Actor_yoshi_build, 0x1BAu, &v0, &stru_60B0D0C4, 0);
}
