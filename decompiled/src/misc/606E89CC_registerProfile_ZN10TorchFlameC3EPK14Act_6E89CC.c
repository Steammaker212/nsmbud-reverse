/* registerProfile_ZN10TorchFlameC3EPK14Act_6E89CC
 * address: 0x606E89CC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_ZN10TorchFlameC3EPK14Act_6E89CC()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD8220;
  Profile__ctor(&stru_60CBBFDC, TorchFlame__ctor, 0x266u, &v1, &stru_60B091FC, 0);
  *result = &off_60C1FB68;
  return result;
}
