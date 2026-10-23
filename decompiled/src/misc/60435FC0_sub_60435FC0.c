/* sub_60435FC0
 * address: 0x60435FC0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int8x16_t *__fastcall sub_60435FC0(int a1, int a2, int32x4_t *a3)
{
  int8x16_t *v3; // r0
  int8x16_t *v4; // r1
  int8x16_t *result; // r0
  int32x4x2_t v6; // 0:q8.16,16:q9.16
  int32x4x2_t v7; // 0:q10.16,16:q11.16

  v6 = vzipq_s32(*a3, a3[1]);
  v7 = vzipq_s32(a3[2], (int32x4_t)0);
  v3 = (int8x16_t *)(*(_DWORD *)(FIELD_U32(a1, 68) + 16) + (a2 << 6));
  *v3 = vextq_s8(vextq_s8(v6.val[0], v6.val[0], 8u), v7.val[0], 8u);
  v3[1] = vextq_s8(v6.val[0], vextq_s8(v7.val[0], v6.val[0], 8u), 8u);
  v4 = v3 + 3;
  result = v3 + 2;
  *result = vextq_s8(vextq_s8(v6.val[1], v6.val[1], 8u), v7.val[1], 8u);
  *v4 = vextq_s8(v6.val[1], vextq_s8(v7.val[1], v6.val[1], 8u), 8u);
  return result;
}
