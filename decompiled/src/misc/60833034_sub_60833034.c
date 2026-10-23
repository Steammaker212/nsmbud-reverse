/* sub_60833034
 * address: 0x60833034   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int32x4_t *__fastcall sub_60833034(int32x4_t *a1, unsigned __int64 *a2)
{
  int32x4_t *v3; // r1
  int32x4_t *result; // r0
  int32x4_t v5; // 0:q9.16
  int32x4_t v6; // 0:q10.16
  int32x4x2_t v7; // 0:kr00_32.32
  int32x4x2_t v8; // 0:q8.16,16:q9.16
  int32x4x2_t v9; // 0:q11.16,16:q10.16

  v5 = *((int32x4_t *)a2 + 2);
  v6 = *((int32x4_t *)a2 + 3);
  v3 = a1 + 2;
  v8 = vzipq_s32(*(int32x4_t *)a2, v5);
  v9 = vzipq_s32(*((int32x4_t *)a2 + 1), v6);
  v7 = vzipq_s32(v8.val[0], v9.val[0]);
  *a1 = v7.val[0];
  result = a1 + 1;
  *result = v7.val[1];
  *v3 = (int32x4_t)vzipq_s32(v8.val[1], v9.val[1]).val;
  return result;
}
