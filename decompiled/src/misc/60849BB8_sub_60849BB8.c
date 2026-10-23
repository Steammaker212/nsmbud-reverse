/* sub_60849BB8
 * address: 0x60849BB8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60849BB8(int a1, float a2, float a3)
{
  float v5; // s18
  int v6; // r0
  float result; // s0

  v5 = a2
     / (float)(*(int (__fastcall **)(_DWORD, float, float))(**(_DWORD **)(a1 + 40) + 16))(FIELD_U32(a1, 40), a2, a3);
  v6 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 40) + 20))(FIELD_U32(a1, 40));
  FIELD_F32(a1, 12) = v5;
  result = a3 / (float)v6;
  FIELD_F32(a1, 16) = result;
  return result;
}
