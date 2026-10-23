/* sub_608A01A4
 * address: 0x608A01A4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A01A4(_QWORD *a1, float32x4_t *a2, int a3, int a4, int a5, int a6)
{
  __int16 v6; // r3
  int v7; // r12

  *a1 = 0;
  a1[1] = 0;
  v6 = FIELD_U16(a3, 142);
  v7 = dword_60CC8014;
  FIELD_U16(a3, 142) = v6 + 1;
  *a2 = vmulq_f32(*(float32x4_t *)(v7 + 16 * (v6 & 0x1FF)), (float32x4_t)vld1q_dup_f32((const float *)(a6 + 108)));
  return 1;
}
