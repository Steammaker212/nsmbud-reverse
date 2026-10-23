/* jc_demo_W8_appear_ref_CB3B0
 * address: 0x600CB3B0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_demo_W8_appear_ref_CB3B0(int a1)
{
  int v1; // r0
  int v2; // r4
  int result; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  v2 = a1 + 6300;
  v1 = FIELD_U32(a1, 6300);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "jc_demo_W8_appear";
  sub_60421AE4(v1, v4, 0);
  result = **(_DWORD **)(*(_DWORD *)v2 + 28);
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
