/* sub_60897698
 * address: 0x60897698   size: 1060   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x4_t *__fastcall sub_60897698(
        float32x4_t *a1,
        float32x4_t *a2,
        int32x4_t *a3,
        int a4,
        float a5,
        float a6,
        int32x2_t a7,
        double a8,
        int a9)
{
  int32x2_t v9; // d8
  int v12; // r7
  float32x4_t v13; // q5
  float32x4_t v14; // q8
  float32x4_t v15; // q1
  float32x4_t v16; // q9
  unsigned __int32 *v17; // r3
  unsigned __int32 *v18; // r0
  unsigned int *v19; // r4
  float32x4_t v20; // q2
  float32x4_t v21; // q3
  float32x4_t v22; // q7
  float32x4_t v23; // q6
  float32x4_t v24; // q0
  int v25; // r2
  int v26; // s4
  int v27; // r2
  int v28; // r3
  int v29; // r2
  signed __int32 v30; // r3
  int v31; // r1
  float v32; // s6
  unsigned __int32 *v33; // r1
  unsigned __int32 *v34; // r0
  unsigned int *v35; // r2
  int8x8x2_t v36; // q2
  int8x8x2_t v37; // q1
  int32x4_t v38; // q0
  float32x4_t *result; // r0
  float32x4_t v40; // q9
  float32x4_t v41; // q11
  float32x4_t v42; // q12
  float32x4_t v43; // q13
  float32x4_t v44; // q9
  int32x2_t v45; // d6
  float32x4_t v47; // q13
  float32x4_t v48; // q14
  float32x4_t v49; // q13
  float32x4_t v55; // q15
  float32x4_t v56; // q3
  float32x4_t v57; // q10
  int64x2_t v58; // q8
  int64x2_t v59; // q10
  float32x4_t v60; // q8
  float32x4_t v61[6]; // [sp+0h] [bp-68h] BYREF
  int32x4x2_t v62; // 0:kr00_32.32
  int32x4x2_t v63; // 0:q0.16,16:q2.16
  int32x4x2_t v64; // 0:q1.16,16:q12.16

  v9.n64_u32[0] = a3[4].n128_u32[2];
  v12 = *(_DWORD *)(a3[21].n128_u32[3] + 480);
  LODWORD(a8) = FIELD_U32(v12, 32);
  v13.n128_u64[0] = FIELD_U64(v12, 16);
  if ( (FIELD_U8(v12, 1) & 1) != 0 )
    *(float *)&a8 = *(float *)&a8 * *(float *)(FIELD_U32(a4, 16) + 16 * a9);
  v16 = vdupq_lane_s32(*(int32x2_t *)&a8, 0);
  v15 = *a1;
  v16.n128_u32[3] = 0;
  if ( FIELD_U8(v12, 2) )
  {
    v17 = (unsigned __int32 *)(a3[20].n128_u32[2] + 16 * a9);
    v18 = (unsigned __int32 *)(a3[20].n128_u32[1] + 16 * a9);
    v19 = (unsigned int *)(a3[20].n128_u32[3] + 16 * a9);
    if ( *(_BYTE *)(a3[8].n128_u32[2] + 1875) == 2 )
    {
      v20 = a3[37];
      v23.n128_u32[1] = *v17;
      v22.n128_u32[1] = v17[1];
      v21.n128_u32[1] = v17[2];
      v20.n128_u32[3] = 0;
      v23.n128_u32[0] = *v18;
      v22.n128_u32[0] = v18[1];
      v21.n128_u32[0] = v18[2];
      v23.n128_u64[1] = *v19;
      v21.n128_u64[1] = v19[2];
      v22.n128_u64[1] = v19[1];
    }
    else if ( *(_BYTE *)(a3[8].n128_u32[2] + 1875) )
    {
      v23.n128_u64[1] = *v19;
      v22.n128_u32[1] = v17[1];
      v21.n128_u32[1] = v17[2];
      v20.n128_u32[1] = v17[3];
      v23.n128_u32[1] = *v17;
      v22.n128_u32[0] = v18[1];
      v21.n128_u32[0] = v18[2];
      v20.n128_u32[0] = v18[3];
      v23.n128_u32[0] = *v18;
      v20.n128_u64[1] = v19[3];
      v21.n128_u64[1] = v19[2];
      v22.n128_u64[1] = v19[1];
    }
    else
    {
      v20 = a3[37];
      v21 = a3[36];
      v22 = a3[35];
      v23 = a3[34];
    }
    v15 = vaddq_f32(
            v20,
            vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_lane_f32(v22, (float32x2_t)v15.n128_u64[0], 1), v23, (float32x2_t)v15.n128_u64[0], 0),
              v21,
              *(float32x2_t *)&v15.n128_i8[8],
              0));
  }
  a7.n64_u32[0] = FIELD_U32(v12, 28);
  v14.n128_u64[1] = FIELD_U32(v12, 12);
  v14.n128_u64[0] = FIELD_U64(v12, 4);
  v13.n128_u64[1] = FIELD_U32(v12, 24);
  v24 = vaddq_f32(v16, vmlaq_f32(vmulq_n_f32(v14, a3[4].n128_f32[1]), vdupq_lane_s32(a7, 0), v15));
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    sub_60897AF0(&dword_60CC802C, v61, v24.n128_f32[0], v24.n128_f32[1], v24.n128_f32[2], v24.n128_f32[3]);
  }
  else
  {
    v25 = (int)v24.n128_f32[1];
    v26 = (int)v24.n128_f32[0];
    v24.n128_u32[0] = (int)v24.n128_f32[2];
    if ( (int)v24.n128_f32[1] < 0 )
      v25 = -v25;
    v27 = v25 % dword_60CC802C;
    v28 = v26;
    if ( v26 < 0 )
      v28 = -v26;
    v29 = v27 + v28 % dword_60CC802C * dword_60CC802C;
    v30 = (int)v24.n128_f32[2];
    if ( v24.n128_i32[0] < 0 )
      v30 = -v24.n128_u32[0];
    v31 = 3 * (v30 % dword_60CC802C + v29 * dword_60CC802C);
    v24.n128_f32[0] = (float)*(char *)(dword_60CC8030 + v31) / 127.0;
    v61[0] = v24;
    v24.n128_f32[1] = (float)*(char *)(dword_60CC8030 + v31 + 1) / 127.0;
    v61[0] = v24;
    v32 = (float)*(char *)(dword_60CC8030 + v31 + 2);
    v61[0].n128_u64[0] = v24.n128_u64[0];
    v61[0].n128_u64[1] = COERCE_UNSIGNED_INT(v32 / 127.0);
  }
  if ( FIELD_U8(v12, 2) )
  {
    v33 = (unsigned __int32 *)(a3[20].n128_u32[2] + 16 * a9);
    v34 = (unsigned __int32 *)(a3[20].n128_u32[1] + 16 * a9);
    v35 = (unsigned int *)(a3[20].n128_u32[3] + 16 * a9);
    if ( *(_BYTE *)(a3[8].n128_u32[2] + 1875) == 2 || *(_BYTE *)(a3[8].n128_u32[2] + 1875) )
    {
      v38.n128_u64[1] = *v35;
      v37.val[0].n64_u32[1] = v33[1];
      v36.val[0].n64_u32[1] = v33[2];
      v38.n128_u32[1] = *v33;
      v37.val[0].n64_u32[0] = v34[1];
      v36.val[0].n64_u32[0] = v34[2];
      v38.n128_u32[0] = *v34;
      v36.val[1].n64_u64[0] = v35[2];
      v37.val[1].n64_u64[0] = v35[1];
    }
    else
    {
      v36 = (int8x8x2_t)a3[36];
      v37 = (int8x8x2_t)a3[35];
      v38 = a3[34];
    }
    result = v61;
    *(int8x8_t *)&v40.n128_i8[8] = vtbl2_s8(v37, (int8x8_t)0xF0E0D0C03020100LL);
    v40.n128_u64[0] = vtbl2_s8(v37, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v41.n128_i8[8] = vtbl2_s8(v37, (int8x8_t)0xF0E0D0C07060504LL);
    v41.n128_u64[0] = vtbl2_s8(v37, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v42.n128_i8[8] = vtbl2_s8(v36, (int8x8_t)0xF0E0D0C07060504LL);
    v42.n128_u64[0] = vtbl2_s8(v36, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v43.n128_i8[8] = vtbl2_s8(v36, (int8x8_t)0xF0E0D0C03020100LL);
    v43.n128_u64[0] = vtbl2_s8(v36, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    v44 = vmlsq_f32(vmulq_f32(vmulq_f32(v38, v40), v42), vmulq_f32(v38, v41), v43);
    v64 = vzipq_s32((int32x4_t)v37, (int32x4_t)0);
    v63 = vzipq_s32(v38, (int32x4_t)v36);
    v62 = vzipq_s32(v63.val[0], v64.val[0]);
    v63.val[1] = vzipq_s32(v63.val[1], v64.val[1]).val[0];
    v45.n64_u64[0] = vpadd_f32((float32x2_t)v44.n128_u64[0], *(float32x2_t *)&v44.n128_i8[8]).n64_u64[0];
    v45.n64_f32[0] = v45.n64_f32[0] + v45.n64_f32[1];
    _Q11 = vdupq_lane_s32(v45, 0);
    v47 = vrecpeq_f32(_Q11);
    v64.val[1] = vmulq_f32(v47, vrecpsq_f32(v47, _Q11));
    *(int8x8_t *)&v48.n128_i8[8] = vtbl2_s8((int8x8x2_t)v62.val[1], (int8x8_t)0xF0E0D0C07060504LL);
    v48.n128_u64[0] = vtbl2_s8((int8x8x2_t)v62.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    v49 = vrecpsq_f32(v64.val[1], _Q11);
    __asm { VCEQ.F32        Q11, Q11, #0.0 }
    v64.val[1] = vmulq_f32(v64.val[1], v49);
    *(int8x8_t *)&v49.n128_i8[8] = vtbl2_s8((int8x8x2_t)v63.val[1], (int8x8_t)0xF0E0D0C03020100LL);
    v49.n128_u64[0] = vtbl2_s8((int8x8x2_t)v63.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v55.n128_i8[8] = vtbl2_s8((int8x8x2_t)v63.val[1], (int8x8_t)0xF0E0D0C07060504LL);
    v55.n128_u64[0] = vtbl2_s8((int8x8x2_t)v63.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v63.val[1].n128_i8[8] = vtbl2_s8((int8x8x2_t)v62.val[1], (int8x8_t)0xF0E0D0C03020100LL);
    v63.val[1].n128_u64[0] = vtbl2_s8((int8x8x2_t)v62.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v56.n128_i8[8] = vtbl2_s8((int8x8x2_t)v62.val[0], (int8x8_t)0xF0E0D0C03020100LL);
    v56.n128_u64[0] = vtbl2_s8((int8x8x2_t)v62.val[0], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    v64.val[0] = vmlsq_f32(vmulq_f32(v63.val[1], v55), v49, v48);
    v57 = vmulq_f32(v48, v56);
    *(int8x8_t *)&v48.n128_i8[8] = vtbl2_s8((int8x8x2_t)v62.val[0], (int8x8_t)0xF0E0D0C07060504LL);
    v64.val[0] = vmulq_f32(v64.val[1], v64.val[0]);
    v48.n128_u64[0] = vtbl2_s8((int8x8x2_t)v62.val[0], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    v58 = vmulq_f32(v64.val[1], vmlsq_f32(vmulq_f32(v49, v48), v55, v56));
    v59 = vmulq_f32(v64.val[1], vmlsq_f32(v57, v63.val[1], v48));
    v60 = vaddq_f32(
            vbslq_s64(
              _Q11,
              (int64x2_t)0,
              vmlsq_f32(
                vmlsq_f32(vnegq_f32(vmulq_f32(v64.val[0], (float32x4_t)0)), v58, (float32x4_t)0),
                v59,
                (float32x4_t)0)),
            vmlaq_lane_f32(
              vmlaq_lane_f32(
                vmulq_n_f32(vbslq_s64(_Q11, (int64x2_t)0, v64.val[0]), v61[0].n128_f32[0]),
                vbslq_s64(_Q11, (int64x2_t)0, v58),
                (float32x2_t)v61[0].n128_u64[0],
                1),
              vbslq_s64(_Q11, (int64x2_t)0, v59),
              *(float32x2_t *)&v61[0].n128_i8[8],
              0));
    v61[0] = v60;
  }
  else
  {
    result = v61;
    v60 = v61[0];
  }
  *a2 = vmlaq_f32(*a2, vdupq_lane_s32(v9, 0), vmulq_f32(v13, v60));
  return result;
}
