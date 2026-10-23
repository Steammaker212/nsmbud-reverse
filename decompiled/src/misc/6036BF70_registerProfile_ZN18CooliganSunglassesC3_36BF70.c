/* registerProfile_ZN18CooliganSunglassesC3_36BF70
 * address: 0x6036BF70   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_ZN18CooliganSunglassesC3_36BF70()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C95E74 = 0;
  dword_60C95E78 = 0;
  dword_60C95E7C = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC52BF;
  Profile__ctor(&stru_60C95E80, CooliganSunglasses__ctor, 0x20Eu, &v0, 0, 34);
}
