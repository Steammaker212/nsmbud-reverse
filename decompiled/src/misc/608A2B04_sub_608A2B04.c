/* sub_608A2B04
 * address: 0x608A2B04   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A2B04(float32x4_t *a1, float32x4_t *a2, int a3, int a4, int a5, int a6)
{
  int v9; // r0
  int v10; // r5
  int v11; // r0
  unsigned int v12; // s2
  __int16 v13; // r1
  int v14; // r0
  float32x4_t v15; // q8
  int v16; // r4
  int v17; // r0
  float32x4_t v18; // q0
  float32x4_t v19; // q1
  int v20; // r0
  int v21; // r0
  int v22; // r0

  v9 = FIELD_U32(a3, 348);
  v10 = FIELD_U32(v9, 80);
  if ( v10 )
  {
    v11 = *(_DWORD *)(FIELD_U32(v9, 12) + 2164);
    if ( v11 == 2 )
    {
      v16 = FIELD_U32(a3, 56);
      v17 = (**(int (__fastcall ***)(int))v10)(v10);
      ++FIELD_U32(a3, 56);
      a4 = v16 % v17;
    }
    else if ( v11 == 1 )
    {
      v12 = FIELD_U32(a3, 144);
      FIELD_U32(a3, 144) = 1103515245 * v12 + 12345;
      a4 = (int)(float)((float)((float)v12 * 2.3283e-10) * (float)(**(int (__fastcall ***)(int))v10)(v10));
    }
    v18.n128_u64[0] = FIELD_U64(a6, 144);
    v18.n128_u64[1] = FIELD_U32(a6, 152);
    if ( FIELD_U32(v10, 12) >= a4 )
    {
      v20 = FIELD_U32(v10, 80) + 16 * a4;
      v19.n128_u64[0] = *(_QWORD *)v20;
      v19.n128_u64[1] = FIELD_U32(v20, 8);
      FIELD_U64(a1, 0x0)[0] = *(_QWORD *)v20;
      FIELD_U64(a1, 0x0)[1] = v19.n128_u64[1];
    }
    else
    {
      v19 = *a1;
    }
    *a1 = vmulq_f32(v18, v19);
    v21 = FIELD_U32(v10, 84);
    if ( v21 )
    {
      if ( FIELD_U32(v10, 12) < a4 )
      {
        v18 = *a2;
LABEL_16:
        v15 = vmulq_f32(v18, (float32x4_t)vld1q_dup_f32((const float *)(a6 + 108)));
        goto LABEL_17;
      }
      v22 = v21 + 16 * a4;
      v18.n128_u64[0] = *(_QWORD *)v22;
      v18.n128_u32[2] = FIELD_U32(v22, 8);
    }
    else
    {
      v18 = 0u;
    }
    *a2 = v18;
    goto LABEL_16;
  }
  FIELD_U64(a1, 0x0)[0] = 0;
  FIELD_U64(a1, 0x0)[1] = 0;
  v13 = FIELD_U16(a3, 142);
  v14 = dword_60CC8014;
  FIELD_U16(a3, 142) = v13 + 1;
  v15 = vmulq_f32(*(float32x4_t *)(v14 + 16 * (v13 & 0x1FF)), (float32x4_t)vld1q_dup_f32((const float *)(a6 + 108)));
LABEL_17:
  *a2 = v15;
  return 1;
}
