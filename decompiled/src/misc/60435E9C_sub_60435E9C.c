/* sub_60435E9C
 * address: 0x60435E9C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60435E9C(int a1, int a2, int32x4_t *a3, _DWORD *a4)
{
  int v4; // r2
  int8x16_t v5; // q13
  unsigned int result; // r0
  int32x4x2_t v7; // 0:q8.16,16:q9.16
  int32x4x2_t v8; // 0:q10.16,16:q11.16

  v7 = vzipq_s32(*a3, a3[1]);
  v8 = vzipq_s32(a3[2], (int32x4_t)0);
  v4 = *(_DWORD *)(FIELD_U32(a1, 68) + 12) + 96 * a2;
  v5 = vextq_s8(v8.val[0], v7.val[0], 8u);
  *(int8x16_t *)(v4 + 32) = vextq_s8(vextq_s8(v7.val[0], v7.val[0], 8u), v8.val[0], 8u);
  v8.val[0] = vextq_s8(v7.val[1], v7.val[1], 8u);
  v7.val[1] = vextq_s8(v7.val[1], vextq_s8(v8.val[1], v7.val[1], 8u), 8u);
  *(int8x16_t *)(v4 + 48) = vextq_s8(v7.val[0], v5, 8u);
  v7.val[0] = vextq_s8(v8.val[0], v8.val[1], 8u);
  *(int32x4x2_t *)(v4 + 64) = v7;
  FIELD_U32(v4, 16) = *a4;
  FIELD_U32(v4, 20) = a4[1];
  FIELD_U32(v4, 24) = a4[2];
  result = *(_DWORD *)v4 & 0xF0FFFFFF;
  *(_DWORD *)v4 = result;
  return result;
}
