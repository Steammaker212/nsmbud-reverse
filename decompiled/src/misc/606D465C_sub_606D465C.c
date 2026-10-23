/* sub_606D465C
 * address: 0x606D465C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_606D465C(int a1, unsigned int *a2, int a3, float *a4, int a5)
{
  unsigned int v5; // r12
  float *v6; // r1
  float v7; // s14
  float v8; // s0
  float v9; // s4
  float v10; // s8
  __n128 result; // q0

  v5 = a5 + FIELD_U32(a3, 164) + 0x40000000;
  *a2 = v5;
  v6 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v7 = a4[1];
  v8 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v9 = *v6 + (float)(v6[1] * v8);
  v10 = v6[2] + (float)(v8 * v6[3]);
  result.n128_f32[0] = FIELD_F32(a3, 108) + (float)((float)(*a4 * v10) - (float)(v9 * v7));
  result.n128_f32[2] = (float)((float)(v7 * v10) + (float)(*a4 * v9)) + FIELD_F32(a3, 112);
  *(_DWORD *)a1 = result.n128_u32[0];
  FIELD_F32(a1, 4) = result.n128_f32[2];
  return result;
}
