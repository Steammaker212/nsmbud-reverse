/* sub_60436028
 * address: 0x60436028   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int32x4x2_t *__fastcall sub_60436028(int a1, int a2, int32x4x2_t *a3)
{
  int32x4_t *v3; // r1
  int32x4x2_t v5; // 0:q8.16,16:q9.16
  int32x4x2_t v6; // 0:q11.16,16:q10.16

  v3 = (int32x4_t *)(*(_DWORD *)(FIELD_U32(a1, 68) + 16) + (a2 << 6));
  v5 = vzipq_s32(*v3, v3[2]);
  v6 = vzipq_s32(v3[1], v3[3]);
  *a3 = vzipq_s32(v5.val[0], v6.val[0]);
  a3[1].val[0] = (int32x4_t)vzipq_s32(v5.val[1], v6.val[1]).val;
  return a3 + 1;
}
