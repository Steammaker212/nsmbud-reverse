/* registerProfile_ZN10YoshiFlameC3EPK14Act_7D2E14
 * address: 0x607D2E14   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_ZN10YoshiFlameC3EPK14Act_7D2E14()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "ヨッシーの炎";
  Profile__ctor(&stru_60CC5418, YoshiFlame__ctor, 0x1DEu, &v1, &stru_60B0D334, 34);
  dword_60CC5430 = 1067869798;
  dword_60CC5434 = 1067869798;
  dword_60CC5438 = 1067869798;
  return &dword_60CC5430;
}
