/* sub_60435F34
 * address: 0x60435F34   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int32x4x2_t *__fastcall sub_60435F34(int a1, int a2, int32x4x2_t *a3, _DWORD *a4)
{
  int32x4x2_t *result; // r0
  unsigned __int32 v5; // r12
  _OWORD *v6; // r0
  _DWORD *v7; // r0
  int32x4_t v8; // 0:q8.16
  int32x4_t v9; // 0:q9.16
  int32x4_t v10; // 0:q10.16
  int32x4_t v11; // 0:q11.16
  int32x4x2_t v12; // 0:q9.16,16:q8.16
  int32x4x2_t v13; // 0:q11.16,16:q10.16

  result = *(int32x4x2_t **)(a1 + 68);
  v5 = FIELD_U32(result, 0x0)[0].n128_u32[3];
  if ( a3 )
  {
    v6 = (_OWORD *)(v5 + 96 * a2);
    v8 = (int32x4_t)v6[5];
    v9 = (int32x4_t)v6[3];
    v10 = (int32x4_t)v6[4];
    v11 = (int32x4_t)v6[2];
    result = a3 + 1;
    v12 = vzipq_s32(v9, v8);
    v13 = vzipq_s32(v11, v10);
    *a3 = vzipq_s32(v13.val[0], v12.val[0]);
    FIELD_U32(a3 + (1) * 32, 0x0)[0] = (int32x4_t)vzipq_s32(v13.val[1], v12.val[1]).val;
  }
  if ( a4 )
  {
    v7 = (_DWORD *)(v5 + 96 * a2);
    *a4 = v7[4];
    a4[1] = v7[5];
    result = (int32x4x2_t *)v7[6];
    a4[2] = result;
  }
  return result;
}
