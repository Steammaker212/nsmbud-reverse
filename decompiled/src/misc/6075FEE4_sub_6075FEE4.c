/* sub_6075FEE4
 * address: 0x6075FEE4   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6075FEE4(int a1, float *a2)
{
  int v4; // r0
  int v5; // r0
  __n128 result; // q0
  float v7; // s4
  int (**v8)(); // [sp+4h] [bp-24h] BYREF
  const char *v9; // [sp+8h] [bp-20h]
  float v10[7]; // [sp+Ch] [bp-1Ch] BYREF

  v4 = FIELD_U32(a1, 648);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "ankle_l1";
  sub_60793F04(FIELD_U32(v4, 4), v10, &v8);
  v5 = FIELD_U32(a1, 648);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "ankle_r1";
  sub_60793F04(FIELD_U32(v5, 4), a2, &v8);
  result.n128_f32[0] = (float)(v10[0] + *a2) * 0.5;
  result.n128_f32[2] = (float)(v10[1] + a2[1]) * 0.5;
  v7 = (float)(v10[2] + a2[2]) * 0.5;
  *a2 = result.n128_f32[0];
  a2[1] = result.n128_f32[2];
  a2[2] = v7;
  return result;
}
