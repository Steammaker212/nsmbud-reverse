/* sub_6054B120
 * address: 0x6054B120   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054B120(int a1)
{
  int result; // r0
  _DWORD v3[6]; // [sp+0h] [bp-18h] BYREF

  FIELD_U8(a1, 3594) = 1;
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "In";
  result = sub_60473DE4((_DWORD *)(a1 + 40), 0, v3, 0);
  FIELD_U8(a1, 3593) = 1;
  return result;
}
