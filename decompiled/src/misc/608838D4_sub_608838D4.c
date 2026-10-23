/* sub_608838D4
 * address: 0x608838D4   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_608838D4(double a1, int a2, float *a3, int a4, _DWORD *a5, int a6)
{
  float v9; // s16
  int v10; // r4
  float v11; // s18
  int v12; // r0
  float v13; // r1
  float v14; // r2
  float32x2_t v15; // d1
  float32x2_t v16; // d0
  unsigned __int32 *v17; // r1
  unsigned __int32 *v18; // r0
  unsigned int *v19; // r2
  float32x4_t v20; // q1
  float32x4_t v21; // q2
  float32x4_t v22; // q3
  float32x4_t v25; // q14
  float32x4_t v26; // q10
  float32x4_t v27; // q11
  float32x4_t v34; // q10
  float32x4_t v35; // q11
  float32x2_t v36; // d24
  float32x4_t v39; // q13
  int64x2_t v40; // q9
  int64x2_t v41; // q10
  int32x4_t v42; // q8
  float v43; // s16
  float v44; // s20
  float32x4_t v45; // q13
  float v46; // s24
  float32x4_t v47; // q9
  __int64 v48; // d3
  __int64 v49; // d2
  float v50; // s0
  int32x4_t v51; // q10
  int32x4_t v52; // q11
  float32x4_t v53; // q2
  float v55; // [sp+8h] [bp-60h] BYREF
  float v56; // [sp+Ch] [bp-5Ch]
  float v57; // [sp+10h] [bp-58h]
  int32x4x2_t v58; // 0:kr00_32.32
  int32x4x2_t v59; // 0:q8.16,16:q11.16
  int32x4x2_t v60; // 0:q9.16,16:q10.16

  v9 = FIELD_F32(a4, 72);
  v10 = *(_DWORD *)(FIELD_U32(a4, 348) + 476);
  v11 = *(float *)(a5[3] + 16 * a6 + 12);
  v12 = FIELD_U32(v10, 16);
  if ( v12 )
  {
    sub_60882748(a1, v12, &v55, a4, v10 + 16, a6);
  }
  else
  {
    v13 = FIELD_F32(v10, 8);
    v14 = FIELD_F32(v10, 12);
    v55 = FIELD_F32(v10, 4);
    v56 = v13;
    v57 = v14;
  }
  if ( *(_BYTE *)v10 )
  {
    v15.n64_u32[1] = 0;
    v15.n64_f32[0] = v9 * (float)(v11 * v57);
    v16.n64_f32[1] = v9 * (float)(v11 * v56);
    v16.n64_f32[0] = v9 * (float)(v11 * v55);
    if ( *(_BYTE *)(FIELD_U32(a4, 136) + 1875) == 1 )
    {
      v17 = (unsigned __int32 *)(a5[9] + 16 * a6);
      v18 = (unsigned __int32 *)(a5[8] + 16 * a6);
      v19 = (unsigned int *)(a5[10] + 16 * a6);
      v20.n128_u32[1] = v17[2];
      v21.n128_u32[1] = v17[1];
      v22.n128_u32[1] = *v17;
      v20.n128_u32[0] = v18[2];
      v21.n128_u32[0] = v18[1];
      v22.n128_u32[0] = *v18;
      v20.n128_u64[1] = v19[2];
      v21.n128_u64[1] = v19[1];
      v22.n128_u64[1] = *v19;
      _Q8 = vmulq_f32(v20, v20);
      _Q9 = vmulq_f32(v21, v21);
      v25 = vmulq_f32(v22, v22);
      _Q8.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q8.n128_i8[8], (float32x2_t)_Q8.n128_u64[0]).n64_u64[0];
      *(float32x2_t *)&_Q8.n128_i8[8] = vadd_f32(*(float32x2_t *)&_Q9.n128_i8[8], (float32x2_t)_Q9.n128_u64[0]);
      _Q9.n128_u64[0] = vpadd_f32((float32x2_t)_Q8.n128_u64[0], (float32x2_t)_Q8.n128_u64[0]).n64_u64[0];
      _Q8.n128_u64[0] = vpadd_f32(*(float32x2_t *)&_Q8.n128_i8[8], *(float32x2_t *)&_Q8.n128_i8[8]).n64_u64[0];
      _Q9.n128_u64[1] = _Q9.n128_u64[0];
      _Q8.n128_u64[1] = _Q8.n128_u64[0];
      v26 = vrsqrteq_f32(_Q9);
      v27 = vrsqrteq_f32(_Q8);
      __asm
      {
        VCEQ.F32        Q4, Q9, #0.0
        VCEQ.F32        Q5, Q8, #0.0
      }
      v34 = vmulq_f32(v26, vrsqrtsq_f32(v26, vmulq_f32(v26, _Q9)));
      v35 = vmulq_f32(v27, vrsqrtsq_f32(v27, vmulq_f32(v27, _Q8)));
      v36.n64_u64[0] = vadd_f32(*(float32x2_t *)&v25.n128_i8[8], (float32x2_t)v25.n128_u64[0]).n64_u64[0];
      _Q12.n128_u64[0] = vpadd_f32(v36, v36).n64_u64[0];
      _Q12.n128_u64[1] = _Q12.n128_u64[0];
      __asm { VCEQ.F32        Q6, Q12, #0.0 }
      v39 = vrsqrteq_f32(_Q12);
      v40 = vmulq_f32(_Q9, vmulq_f32(v34, vrsqrtsq_f32(v34, vmulq_f32(_Q9, v34))));
      v41 = vmulq_f32(_Q8, vmulq_f32(v35, vrsqrtsq_f32(v35, vmulq_f32(_Q8, v35))));
      v42 = 0u;
      LODWORD(v43) = vbslq_s64(_Q4, (int64x2_t)0, v40).n128_u32[0];
      LODWORD(v44) = vbslq_s64(_Q5, (int64x2_t)0, v41).n128_u32[0];
      v45 = vmulq_f32(v39, vrsqrtsq_f32(v39, vmulq_f32(v39, _Q12)));
      v46 = vbslq_s64(_Q6, (int64x2_t)0, vmulq_f32(_Q12, vmulq_f32(v45, vrsqrtsq_f32(v45, vmulq_f32(_Q12, v45))))).n128_f32[0];
      if ( v46 > 0.0 )
        v42 = vmulq_n_f32(v22, 1.0 / v46);
      if ( v44 <= 0.0 )
      {
        v47.n128_u64[0] = 0;
        v47.n128_u64[1] = 0;
      }
      else
      {
        v47 = vmulq_n_f32(v21, 1.0 / v44);
      }
      v51 = 0u;
      v52 = 0u;
      if ( v43 > 0.0 )
        v52 = vmulq_n_f32(v20, 1.0 / v43);
    }
    else
    {
      v51 = 0u;
      v47 = *(float32x4_t *)(a4 + 624);
      v52 = *(int32x4_t *)(a4 + 640);
      v42 = *(int32x4_t *)(a4 + 608);
    }
    v60 = vzipq_s32(v47, v51);
    v59 = vzipq_s32(v42, v52);
    v58 = vzipq_s32(v59.val[0], v60.val[0]);
    v53 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v58.val[0], v16.n64_f32[0]), v58.val[1], v16, 1),
            (float32x4_t)vzipq_s32(v59.val[1], v60.val[1]).val,
            v15,
            0);
    *(float *)&v49 = *a3 + v53.n128_f32[0];
    *((float *)&v49 + 1) = a3[1] + v53.n128_f32[1];
    v50 = a3[2] + v53.n128_f32[2];
  }
  else
  {
    v48 = *((_QWORD *)a3 + 1);
    *(float *)&v49 = *a3 + (float)(v9 * (float)(v11 * v55));
    *((float *)&v49 + 1) = a3[1] + (float)(v9 * (float)(v11 * v56));
    *(_QWORD *)a3 = v49;
    *((_QWORD *)a3 + 1) = v48;
    v50 = *(float *)&v48 + (float)(v9 * (float)(v11 * v57));
  }
  *(_QWORD *)a3 = v49;
  *((_QWORD *)a3 + 1) = LODWORD(v50);
  return &flt_60883B60;
}
