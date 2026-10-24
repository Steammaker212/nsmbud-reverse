/* sub_608831F0
 * address: 0x608831F0   size: 768   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608831F0(
        float a1,
        int a2,
        float32x2_t *a3,
        float32x2_t *a4,
        float *a5,
        int a6,
        _DWORD *a7,
        int a8,
        int a9)
{
  int result; // r0
  unsigned __int8 *v10; // lr
  int v11; // r4
  float v12; // s2
  unsigned __int32 *v13; // r5
  unsigned __int32 *v14; // r6
  unsigned int *v15; // r0
  float32x4_t v16; // q4
  int8x8x2_t v17; // q1
  int8x8x2_t v18; // q2
  int32x4_t v19; // q3
  float32x2_t v20; // d2
  unsigned __int64 v21; // d3
  float32x4_t v22; // q4
  float32x4_t v23; // q9
  float32x4_t v24; // q11
  float32x4_t v25; // q12
  float32x4_t v26; // q13
  float32x4_t v27; // q9
  int32x2_t v28; // d0
  float32x4_t v30; // q9
  float32x4_t v31; // q11
  float32x4_t v32; // q13
  float32x4_t v38; // q11
  float32x4_t v39; // q14
  float32x4_t v40; // q5
  float32x4_t v41; // q6
  float32x4_t v42; // q7
  float32x4_t v43; // q10
  float32x4_t v44; // q8
  float32x4_t v45; // q3
  float32x4_t v46; // q2
  unsigned __int64 v47; // d0
  float v48; // s2
  float32x2_t v49; // d2
  unsigned __int64 v50; // d3
  unsigned __int64 v51; // d3
  float v52; // s8
  float v53; // s10
  unsigned __int64 v54; // d0
  float v55; // s8
  int32x4x2_t v56; // 0:kr00_32.32
  int32x4x2_t v57; // 0:q0.16,16:q15.16
  int32x4x2_t v58; // 0:q13.16,16:q4.16

  result = a6;
  v10 = *(unsigned __int8 **)(FIELD_U32(a6, 348) + 468);
  v11 = *((_DWORD *)v10 + 3);
  if ( v11 != -1 && v11 <= FIELD_U32(a9, 4) )
    return result;
  v12 = *((float *)v10 + 1);
  if ( v10[1] )
  {
    if ( *(_BYTE *)(FIELD_U32(a6, 136) + 1875) )
    {
      v16.n128_u32[3] = 0;
      v13 = (unsigned __int32 *)(a7[8] + 16 * a8);
      v14 = (unsigned __int32 *)(a7[9] + 16 * a8);
      v15 = (unsigned int *)(a7[10] + 16 * a8);
      v16.n128_u32[2] = v15[3];
      v19.n128_u32[1] = *v14;
      v18.val[0].n64_u32[1] = v14[1];
      v17.val[0].n64_u32[1] = v14[2];
      v16.n128_u32[1] = v14[3];
      v19.n128_u32[0] = *v13;
      v18.val[0].n64_u32[0] = v13[1];
      v17.val[0].n64_u32[0] = v13[2];
      v16.n128_u32[0] = v13[3];
      v17.val[1].n64_u64[0] = v15[2];
      v18.val[1].n64_u64[0] = v15[1];
      v19.n128_u64[1] = *v15;
    }
    else
    {
      v16 = *(float32x4_t *)(a6 + 592);
      v17 = *(int8x8x2_t *)(a6 + 576);
      v18 = *(int8x8x2_t *)(a6 + 560);
      v19 = *(int32x4_t *)(a6 + 544);
    }
    result = *v10;
    v22 = vaddq_f32(
            v16,
            vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_n_f32(v19, FIELD_F32(a3, 0x0)[0]), (float32x4_t)v18, (float32x2_t)FIELD_U64(a3, 0x0)[0], 1),
              (float32x4_t)v17,
              a3[1],
              0));
    if ( *v10 )
    {
      if ( result == 1 && v22.n128_f32[1] < v12 )
        goto LABEL_14;
      return result;
    }
    if ( v22.n128_f32[1] >= v12 )
      return result;
    *(int8x8_t *)&v23.n128_i8[8] = vtbl2_s8(v18, (int8x8_t)0xF0E0D0C03020100LL);
    v23.n128_u64[0] = vtbl2_s8(v18, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v24.n128_i8[8] = vtbl2_s8(v18, (int8x8_t)0xF0E0D0C07060504LL);
    v24.n128_u64[0] = vtbl2_s8(v18, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v25.n128_i8[8] = vtbl2_s8(v17, (int8x8_t)0xF0E0D0C07060504LL);
    v25.n128_u64[0] = vtbl2_s8(v17, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v26.n128_i8[8] = vtbl2_s8(v17, (int8x8_t)0xF0E0D0C03020100LL);
    v26.n128_u64[0] = vtbl2_s8(v17, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    v27 = vmlsq_f32(vmulq_f32(vmulq_f32(v19, v23), v25), vmulq_f32(v19, v24), v26);
    v28.n64_u64[0] = vpadd_f32((float32x2_t)v27.n128_u64[0], *(float32x2_t *)&v27.n128_i8[8]).n64_u64[0];
    v28.n64_f32[0] = v28.n64_f32[0] + v28.n64_f32[1];
    _Q12 = vdupq_lane_s32(v28, 0);
    v30 = vrecpeq_f32(_Q12);
    v57 = vzipq_s32((int32x4_t)v18, (int32x4_t)0);
    v31 = vmulq_f32(v30, vrecpsq_f32(v30, _Q12));
    v32 = vrecpsq_f32(v31, _Q12);
    __asm { VCEQ.F32        Q12, Q12, #0.0 }
    v38 = vmulq_f32(v31, v32);
    v58 = vzipq_s32(v19, (int32x4_t)v17);
    v56 = vzipq_s32(v58.val[0], v57.val[0]);
    *(int8x8_t *)&v39.n128_i8[8] = vtbl2_s8((int8x8x2_t)v56.val[1], (int8x8_t)0xF0E0D0C07060504LL);
    v39.n128_u64[0] = vtbl2_s8((int8x8x2_t)v56.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    v58.val[1] = vzipq_s32(v58.val[1], v57.val[1]).val[0];
    *(int8x8_t *)&v40.n128_i8[8] = vtbl2_s8((int8x8x2_t)v58.val[1], (int8x8_t)0xF0E0D0C03020100LL);
    v40.n128_u64[0] = vtbl2_s8((int8x8x2_t)v58.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v41.n128_i8[8] = vtbl2_s8((int8x8x2_t)v58.val[1], (int8x8_t)0xF0E0D0C07060504LL);
    v41.n128_u64[0] = vtbl2_s8((int8x8x2_t)v58.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v57.val[1].n128_i8[8] = vtbl2_s8((int8x8x2_t)v56.val[1], (int8x8_t)0xF0E0D0C03020100LL);
    v57.val[1].n128_u64[0] = vtbl2_s8((int8x8x2_t)v56.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v42.n128_i8[8] = vtbl2_s8((int8x8x2_t)v56.val[0], (int8x8_t)0xF0E0D0C07060504LL);
    v42.n128_u64[0] = vtbl2_s8((int8x8x2_t)v56.val[0], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v57.val[0].n128_i8[8] = vtbl2_s8((int8x8x2_t)v56.val[0], (int8x8_t)0xF0E0D0C03020100LL);
    v57.val[0].n128_u64[0] = vtbl2_s8((int8x8x2_t)v56.val[0], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    v43 = vmlsq_f32(vmulq_f32(v40, v42), v41, v57.val[0]);
    v44 = vmulq_f32(v39, v57.val[0]);
    v57.val[0] = *(int32x4_t *)FIELD_U64(a4, 0x0);
    v45 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v19, FIELD_F32(a4, 0x0)[0]), (float32x4_t)v18, (float32x2_t)FIELD_U64(a4, 0x0)[0], 1),
            (float32x4_t)v17,
            a4[1],
            0);
    v45.n128_f32[1] = -(float)(*((float *)v10 + 2) * v45.n128_f32[1]);
    v46 = vaddq_f32(
            vmlaq_lane_f32(
              vmlaq_lane_f32(
                vmulq_n_f32(
                  vbslq_s64(_Q12, (int64x2_t)0, vmulq_f32(v38, vmlsq_f32(vmulq_f32(v57.val[1], v41), v40, v39))),
                  v45.n128_f32[0]),
                vbslq_s64(_Q12, (int64x2_t)0, vmulq_f32(v38, v43)),
                (float32x2_t)v45.n128_u64[0],
                1),
              vbslq_s64(_Q12, (int64x2_t)0, vmulq_f32(v38, vmlsq_f32(v44, v57.val[1], v42))),
              *(float32x2_t *)&v45.n128_i8[8],
              0),
            (float32x4_t)0);
    *(float *)&v47 = *((float *)v10 + 4) * v46.n128_f32[0];
    FIELD_U64(a4, 0x0)[0] = v47;
    FIELD_U64(a4 + (1) * 8, 0x0)[0] = *(unsigned __int64 *)&v57.val[0].n128_i8[8];
    *((float *)&v47 + 1) = *((float *)v10 + 4) * v46.n128_f32[1];
    FIELD_U64(a4, 0x0)[0] = v47;
    FIELD_U64(a4 + (1) * 8, 0x0)[0] = *(unsigned __int64 *)&v57.val[0].n128_i8[8];
    v48 = v46.n128_f32[2] * *((float *)v10 + 4);
LABEL_19:
    FIELD_U64(a4, 0x0)[0] = v47;
    FIELD_U64(a4 + (1) * 8, 0x0)[0] = LODWORD(v48);
    result = FIELD_U32(a9, 4) + 1;
    FIELD_U32(a9, 4) = result;
    return result;
  }
  result = *v10;
  if ( !*v10 )
  {
    v49.n64_u64[0] = FIELD_U64(a3, 0x0)[0];
    v50 = FIELD_U64(a3 + (1) * 8, 0x0)[0];
    if ( FIELD_F32(a3, 0x0)[1] >= v12 )
      return result;
    v49.n64_u32[1] = *((_DWORD *)v10 + 1);
    FIELD_U64(a3, 0x0)[0] = v49.n64_u64[0];
    FIELD_U64(a3 + (1) * 8, 0x0)[0] = v50;
    v51 = FIELD_U64(a4 + (1) * 8, 0x0)[0];
    v52 = *((float *)v10 + 2);
    v53 = -(float)(v52 * FIELD_F32(a4, 0x0)[1]);
    LODWORD(v54) = FIELD_U32(a4, 0x0)[0];
    v55 = v52 * FIELD_F32(a4, 0x0)[1];
    *((float *)&v54 + 1) = v53;
    FIELD_U64(a4, 0x0)[0] = v54;
    FIELD_U64(a4 + (1) * 8, 0x0)[0] = v51;
    *(float *)&v47 = *(float *)&v54 * *((float *)v10 + 4);
    FIELD_U64(a4, 0x0)[0] = v47;
    FIELD_U64(a4 + (1) * 8, 0x0)[0] = v51;
    *((float *)&v47 + 1) = -(float)(v55 * *((float *)v10 + 4));
    FIELD_U64(a4, 0x0)[0] = v47;
    FIELD_U64(a4 + (1) * 8, 0x0)[0] = v51;
    v48 = *(float *)&v51 * *((float *)v10 + 4);
    goto LABEL_19;
  }
  if ( result == 1 )
  {
    v20.n64_u64[0] = FIELD_U64(a3, 0x0)[0];
    v21 = FIELD_U64(a3 + (1) * 8, 0x0)[0];
    if ( FIELD_F32(a3, 0x0)[1] < v12 )
    {
      v20.n64_u32[1] = *((_DWORD *)v10 + 1);
      FIELD_U64(a3, 0x0)[0] = v20.n64_u64[0];
      FIELD_U64(a3 + (1) * 8, 0x0)[0] = v21;
LABEL_14:
      *a5 = a1;
    }
  }
  return result;
}
