/* sub_608A2788
 * address: 0x608A2788   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A2788(float32x2_t *a1, float32x2x2_t *a2, int a3, int a4, int a5, int a6)
{
  int v6; // lr
  unsigned int v7; // r12
  float v8; // s0
  float v9; // s2
  unsigned __int64 v10; // d1
  float32x2x2_t v12; // 0:d16.8,8:d17.8

  v6 = FIELD_U32(a3, 136);
  v7 = FIELD_U32(a3, 144);
  v8 = FIELD_F32(a6, 152);
  v9 = FIELD_F32(v6, 2136);
  FIELD_U32(a3, 144) = 1103515245 * v7 + 12345;
  v12 = vld1q_dup_f32((const float *)&dword_608A281C);
  HIDWORD(v10) = v12.val[1].n64_u32[1];
  *(float *)&v10 = (float)((float)((float)(v9 * v8) + (float)((float)(v9 * v8) * FIELD_F32(v6, 2132))) * -0.5)
                 + (float)((float)(v9 * v8) * (float)((float)v7 * 2.3283e-10));
  FIELD_U64(a1, 0x0)[0] = (unsigned __int64)v12.val[0];
  a1[1].n64_u64[0] = v10;
  v12.val[1].n64_u32[0] = FIELD_U32(a6, 108);
  *a2 = v12;
  return 1;
}
