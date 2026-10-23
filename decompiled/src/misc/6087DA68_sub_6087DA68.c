/* sub_6087DA68
 * address: 0x6087DA68   size: 1004   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int64x2_t __fastcall sub_6087DA68(_DWORD *a1, float32x4_t *a2, int a3, int a4)
{
  int32x4_t *v5; // r9
  int32x4_t *v6; // r10
  float32x2_t *v7; // r4
  int v8; // r12
  unsigned __int64 v9; // d6
  float32x2_t v10; // d7
  float32x2_t v11; // d4
  float32x2_t v12; // d5
  float32x2_t v13; // d2
  float32x2_t v14; // d3
  float32x2_t v15; // d0
  float32x2_t v16; // d1
  float32x4_t v17; // q11
  float32x4_t v18; // q8
  int8x8x2_t v19; // q12
  unsigned __int64 *n128_u64; // r2
  float32x4_t v21; // q15
  float32x4_t v22; // q0
  float32x4_t v23; // q9
  float32x4_t v25; // q0
  float32x4_t v26; // q1
  float32x4_t v27; // q2
  float32x4_t v28; // q3
  float32x4_t v29; // q4
  int64x2_t v34; // q2
  int64x2_t v35; // q0
  int64x2_t v36; // q3
  float32x4_t v37; // q14
  float32x4_t v38; // q2
  int64x2_t result; // q0
  int64x2_t v40; // q2
  int8x8x2_t v41; // q3
  unsigned __int64 *v42; // r0
  float32x4_t v43; // q11
  float32x4_t v44; // q15
  float32x4_t v45; // q0
  float32x4_t v46; // q1
  float32x4_t v47; // q2
  float32x4_t v48; // q15
  float32x4_t v50; // q1
  float32x4_t v51; // q1
  float32x4_t v52; // q1
  float32x4_t v53; // q3
  float32x4_t v54; // q4
  float32x4_t v55; // q10
  int64x2_t v56; // q8
  float32x4_t v57; // q10
  int64x2_t v58; // q3
  int64x2_t v59; // q10
  int64x2_t v60; // q8
  int64x2_t v61; // q2
  float32x4_t v62; // q10
  int64x2_t v63; // q1
  float32x4_t v64; // q9
  float32x2_t *v65; // [sp+10h] [bp-98h]
  float32x2_t *v67; // [sp+1Ch] [bp-8Ch]
  float32x4_t v68; // [sp+20h] [bp-88h] BYREF
  float32x4_t v69; // [sp+30h] [bp-78h]
  int8x8x2_t v70; // [sp+40h] [bp-68h]
  float32x4_t v71; // [sp+50h] [bp-58h]
  float32x4_t v72; // 0:q9.16
  int32x4_t v73; // 0:q12.16
  float32x4_t v74; // 0:q13.16
  int32x4_t v75; // 0:q13.16
  float32x4_t v76; // 0:q14.16
  int32x4x2_t v77; // 0:kr00_32.32
  int32x4x2_t v78; // 0:kr20_32.32
  int8x8x2_t v79; // 0:d26.8,8:d27.8
  int8x8x2_t v80; // 0:d28.8,8:d29.8
  int32x4x2_t v81; // 0:q11.16,16:q13.16
  int32x4x2_t v82; // 0:q12.16,16:q14.16
  int32x4x2_t v83; // 0:q12.16,16:q15.16
  int32x4x2_t v84; // 0:q13.16,16:q0.16

  v5 = (int32x4_t *)(a3 + 32);
  v6 = (int32x4_t *)(a3 + 16);
  v7 = (float32x2_t *)(a1[4] + (a4 << 6));
  v8 = *(_DWORD *)(a1[2] + 96 * a4 + 52);
  v9 = FIELD_U64(v7, 0x0)[0];
  v10.n64_u64[0] = v7[1].n64_u64[0];
  v11.n64_u64[0] = v7[2].n64_u64[0];
  v12.n64_u64[0] = v7[3].n64_u64[0];
  v65 = v7 + 6;
  v13.n64_u64[0] = v7[6].n64_u64[0];
  v14.n64_u64[0] = v7[7].n64_u64[0];
  v72 = *(float32x4_t *)(a3 + 16);
  v15.n64_u64[0] = v7[4].n64_u64[0];
  v16.n64_u64[0] = v7[5].n64_u64[0];
  v74 = *(float32x4_t *)(a3 + 32);
  v67 = (float32x2_t *)(a3 + 48);
  v76 = *(float32x4_t *)(a3 + 48);
  v17 = vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, v13.n64_f32[0]), v72, v13, 1);
  v18 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, v11.n64_f32[0]), v72, v11, 1), v74, v12, 0);
  v19 = (int8x8x2_t)vmlaq_lane_f32(
                      vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, v15.n64_f32[0]), v72, v15, 1),
                      v74,
                      v16,
                      0);
  v68 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, FIELD_F32(v7, 0x0)[0]), v72, (float32x2_t)FIELD_U64(v7, 0x0)[0], 1),
          v74,
          v10,
          0);
  v69 = v18;
  v70 = v19;
  v71 = vaddq_f32(v76, vmlaq_lane_f32(v17, v74, v14, 0));
  sub_6087E6E4(
    v8 & 0x70000,
    &v68,
    a3,
    v7,
    v15.n64_f32[0],
    v15.n64_f32[1],
    v16.n64_f32[0],
    v16.n64_f32[1],
    v13.n64_f32[0],
    v13.n64_f32[1],
    v14.n64_f32[0],
    v14.n64_f32[1],
    v11.n64_f32[0],
    v11.n64_f32[1],
    v12.n64_f32[0],
    v12.n64_f32[1],
    *(float *)&v9,
    *((float *)&v9 + 1),
    v10.n64_f32[0],
    v10.n64_f32[1],
    a1[3] + 96 * a4 + 32);
  v73 = *v6;
  v75 = *v5;
  n128_u64 = a2[2].n128_u64;
  *(int8x8_t *)&v72.n128_i8[8] = vtbl2_s8((int8x8x2_t)v73, (int8x8_t)0xF0E0D0C03020100LL);
  v72.n128_u64[0] = vtbl2_s8((int8x8x2_t)v73, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
  *(int8x8_t *)&v76.n128_i8[8] = vtbl2_s8((int8x8x2_t)v73, (int8x8_t)0xF0E0D0C07060504LL);
  v76.n128_u64[0] = vtbl2_s8((int8x8x2_t)v73, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
  *(int8x8_t *)&v21.n128_i8[8] = vtbl2_s8((int8x8x2_t)v75, (int8x8_t)0xF0E0D0C07060504LL);
  v21.n128_u64[0] = vtbl2_s8((int8x8x2_t)v75, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
  *(int8x8_t *)&v22.n128_i8[8] = vtbl2_s8((int8x8x2_t)v75, (int8x8_t)0xF0E0D0C03020100LL);
  v22.n128_u64[0] = vtbl2_s8((int8x8x2_t)v75, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
  v23 = vmlsq_f32(vmulq_f32(vmulq_f32(*(float32x4_t *)a3, v72), v21), vmulq_f32(*(float32x4_t *)a3, v76), v22);
  v83 = vzipq_s32(*v6, (int32x4_t)0);
  v81 = vzipq_s32(*(int32x4_t *)a3, *v5);
  v77 = vzipq_s32(v81.val[0], v83.val[0]);
  v81.val[1] = vzipq_s32(v81.val[1], v83.val[1]).val[0];
  v22.n128_u64[0] = vpadd_f32((float32x2_t)v23.n128_u64[0], *(float32x2_t *)&v23.n128_i8[8]).n64_u64[0];
  v22.n128_f32[0] = v22.n128_f32[0] + v22.n128_f32[1];
  _Q14 = vdupq_lane_s32((int32x2_t)v22.n128_u64[0], 0);
  v25 = vrecpeq_f32(_Q14);
  v83.val[1] = vmulq_f32(v25, vrecpsq_f32(v25, _Q14));
  *(int8x8_t *)&v25.n128_i8[8] = vtbl2_s8((int8x8x2_t)v77.val[1], (int8x8_t)0xF0E0D0C07060504LL);
  v25.n128_u64[0] = vtbl2_s8((int8x8x2_t)v77.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
  v83.val[1] = vmulq_f32(v83.val[1], vrecpsq_f32(v83.val[1], _Q14));
  *(int8x8_t *)&v26.n128_i8[8] = vtbl2_s8((int8x8x2_t)v81.val[1], (int8x8_t)0xF0E0D0C03020100LL);
  v26.n128_u64[0] = vtbl2_s8((int8x8x2_t)v81.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
  *(int8x8_t *)&v27.n128_i8[8] = vtbl2_s8((int8x8x2_t)v81.val[1], (int8x8_t)0xF0E0D0C07060504LL);
  v27.n128_u64[0] = vtbl2_s8((int8x8x2_t)v81.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
  *(int8x8_t *)&v28.n128_i8[8] = vtbl2_s8((int8x8x2_t)v77.val[1], (int8x8_t)0xF0E0D0C03020100LL);
  v28.n128_u64[0] = vtbl2_s8((int8x8x2_t)v77.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
  *(int8x8_t *)&v29.n128_i8[8] = vtbl2_s8((int8x8x2_t)v77.val[0], (int8x8_t)0xF0E0D0C07060504LL);
  v29.n128_u64[0] = vtbl2_s8((int8x8x2_t)v77.val[0], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
  v83.val[0] = vmlsq_f32(vmulq_f32(v28, v27), v26, v25);
  v81.val[1] = vmulq_f32(v26, v29);
  *(int8x8_t *)&v26.n128_i8[8] = vtbl2_s8((int8x8x2_t)v77.val[0], (int8x8_t)0xF0E0D0C03020100LL);
  v26.n128_u64[0] = vtbl2_s8((int8x8x2_t)v77.val[0], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
  __asm { VCEQ.F32        Q11, Q14, #0.0 }
  v81.val[1] = vmlsq_f32(v81.val[1], v27, v26);
  v34 = vmulq_f32(v83.val[1], v83.val[0]);
  v83.val[0] = vmlsq_f32(vmulq_f32(v25, v26), v28, v29);
  v35 = vmulq_f32(v83.val[1], v81.val[1]);
  v36 = vmulq_f32(v83.val[1], v83.val[0]);
  v81.val[1] = vbslq_s64(v81.val[0], (int64x2_t)0, v34);
  v37 = vbslq_s64(v81.val[0], (int64x2_t)0, v35);
  v83.val[0] = vbslq_s64(v81.val[0], (int64x2_t)0, v36);
  v83.val[1] = vmlaq_lane_f32(
                 vmlaq_lane_f32(vmulq_n_f32(v81.val[1], v69.n128_f32[0]), v37, (float32x2_t)v69.n128_u64[0], 1),
                 v83.val[0],
                 *(float32x2_t *)&v69.n128_i8[8],
                 0);
  v38 = vmlsq_lane_f32(vnegq_f32(vmulq_n_f32(v34, FIELD_F32(v67, 0x0)[0])), v35, (float32x2_t)FIELD_U64(v67, 0x0)[0], 1);
  result = v71;
  v40 = vmlsq_lane_f32(v38, v36, v67[1], 0);
  v41 = v70;
  *a2 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(v81.val[1], v68.n128_f32[0]), v37, (float32x2_t)v68.n128_u64[0], 1),
          v83.val[0],
          *(float32x2_t *)&v68.n128_i8[8],
          0);
  v42 = a2[1].n128_u64;
  a2[1] = v83.val[1];
  v43 = vaddq_f32(
          vbslq_s64(v81.val[0], (int64x2_t)0, v40),
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v81.val[1], result.n128_f32[0]), v37, (float32x2_t)result.n128_u64[0], 1),
            v83.val[0],
            *(float32x2_t *)&result.n128_i8[8],
            0));
  a2[2] = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v81.val[1], v41.val[0].n64_f32[0]), v37, v41.val[0], 1),
            v83.val[0],
            v41.val[1],
            0);
  a2[3] = v43;
  if ( _ZF )
  {
    v79 = *(int8x8x2_t *)v7[2].n64_u64;
    v80 = *(int8x8x2_t *)v7[4].n64_u64;
    *(int8x8_t *)&v44.n128_i8[8] = vtbl2_s8(v79, (int8x8_t)0xF0E0D0C03020100LL);
    v44.n128_u64[0] = vtbl2_s8(v79, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v45.n128_i8[8] = vtbl2_s8(v79, (int8x8_t)0xF0E0D0C07060504LL);
    v45.n128_u64[0] = vtbl2_s8(v79, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v46.n128_i8[8] = vtbl2_s8(v80, (int8x8_t)0xF0E0D0C07060504LL);
    v46.n128_u64[0] = vtbl2_s8(v80, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v47.n128_i8[8] = vtbl2_s8(v80, (int8x8_t)0xF0E0D0C03020100LL);
    v47.n128_u64[0] = vtbl2_s8(v80, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    v48 = vmlsq_f32(
            vmulq_f32(vmulq_f32(*(float32x4_t *)FIELD_U64(v7, 0x0), v44), v46),
            vmulq_f32(*(float32x4_t *)FIELD_U64(v7, 0x0), v45),
            v47);
    v45.n128_u64[0] = vpadd_f32((float32x2_t)v48.n128_u64[0], *(float32x2_t *)&v48.n128_i8[8]).n64_u64[0];
    v45.n128_f32[0] = v45.n128_f32[0] + v45.n128_f32[1];
    _Q15 = vdupq_lane_s32((int32x2_t)v45.n128_u64[0], 0);
    v50 = vrecpeq_f32(_Q15);
    v84 = vzipq_s32((int32x4_t)v79, (int32x4_t)0);
    v82 = vzipq_s32(*(int32x4_t *)FIELD_U64(v7, 0x0), (int32x4_t)v80);
    v78 = vzipq_s32(v82.val[0], v84.val[0]);
    v82.val[1] = vzipq_s32(v82.val[1], v84.val[1]).val[0];
    *(int8x8_t *)&v84.val[1].n128_i8[8] = vtbl2_s8((int8x8x2_t)v78.val[1], (int8x8_t)0xF0E0D0C07060504LL);
    v51 = vmulq_f32(v50, vrecpsq_f32(v50, _Q15));
    v84.val[1].n128_u64[0] = vtbl2_s8((int8x8x2_t)v78.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    v52 = vmulq_f32(v51, vrecpsq_f32(v51, _Q15));
    *(int8x8_t *)&v47.n128_i8[8] = vtbl2_s8((int8x8x2_t)v82.val[1], (int8x8_t)0xF0E0D0C03020100LL);
    v47.n128_u64[0] = vtbl2_s8((int8x8x2_t)v82.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v53.n128_i8[8] = vtbl2_s8((int8x8x2_t)v82.val[1], (int8x8_t)0xF0E0D0C07060504LL);
    v53.n128_u64[0] = vtbl2_s8((int8x8x2_t)v82.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v82.val[1].n128_i8[8] = vtbl2_s8((int8x8x2_t)v78.val[1], (int8x8_t)0xF0E0D0C03020100LL);
    v82.val[1].n128_u64[0] = vtbl2_s8((int8x8x2_t)v78.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v54.n128_i8[8] = vtbl2_s8((int8x8x2_t)v78.val[0], (int8x8_t)0xF0E0D0C07060504LL);
    v54.n128_u64[0] = vtbl2_s8((int8x8x2_t)v78.val[0], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    v84.val[0] = vmlsq_f32(vmulq_f32(v82.val[1], v53), v47, v84.val[1]);
    v55 = vmulq_f32(v47, v54);
    *(int8x8_t *)&v47.n128_i8[8] = vtbl2_s8((int8x8x2_t)v78.val[0], (int8x8_t)0xF0E0D0C03020100LL);
    v47.n128_u64[0] = vtbl2_s8((int8x8x2_t)v78.val[0], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    v56 = vmulq_f32(v52, v84.val[0]);
    v57 = vmlsq_f32(v55, v53, v47);
    v82.val[0] = vmlsq_f32(vmulq_f32(v84.val[1], v47), v82.val[1], v54);
    __asm { VCEQ.F32        Q0, Q15, #0.0 }
    v84.val[0] = vmulq_n_f32(v56, FIELD_F32(v65, 0x0)[0]);
    v58 = vbslq_s64(v84.val[1], (int64x2_t)0LL, v56);
    v59 = vmulq_f32(v52, v57);
    v60 = vmulq_f32(v52, v82.val[0]);
    v82.val[0].n128_u64[0] = *v42;
    v82.val[0].n128_u64[1] = a2[1].n128_u64[1];
    v84.val[0] = vmlsq_lane_f32(vnegq_f32(v84.val[0]), v59, (float32x2_t)FIELD_U64(v65, 0x0)[0], 1);
    v61 = vbslq_s64(v84.val[1], (int64x2_t)0LL, v59);
    v62 = *a2;
    v63 = vbslq_s64(v84.val[1], (int64x2_t)0LL, v60);
    result = vbslq_s64(v84.val[1], (int64x2_t)0LL, vmlsq_lane_f32(v84.val[0], v60, v7[7], 0));
    v64.n128_u64[0] = *n128_u64;
    v64.n128_u64[1] = a2[2].n128_u64[1];
    v82.val[1] = vmlaq_lane_f32(
                   vmlaq_lane_f32(vmulq_n_f32(*a2, v61.n128_f32[0]), v82.val[0], (float32x2_t)v61.n128_u64[0], 1),
                   v64,
                   *(float32x2_t *)&v61.n128_i8[8],
                   0);
    v84.val[0] = vmlaq_lane_f32(
                   vmlaq_lane_f32(vmulq_n_f32(*a2, v63.n128_f32[0]), v82.val[0], (float32x2_t)v63.n128_u64[0], 1),
                   v64,
                   *(float32x2_t *)&v63.n128_i8[8],
                   0);
    *a2 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*a2, v58.n128_f32[0]), v82.val[0], (float32x2_t)v58.n128_u64[0], 1),
            v64,
            *(float32x2_t *)&v58.n128_i8[8],
            0);
    *v42 = v82.val[1].n128_u64[0];
    a2[1].n128_u64[1] = v82.val[1].n128_u64[1];
    *n128_u64 = v84.val[0].n128_u64[0];
    a2[2].n128_u64[1] = v84.val[0].n128_u64[1];
    a2[3] = vaddq_f32(
              v43,
              vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(v62, result.n128_f32[0]), v82.val[0], (float32x2_t)result.n128_u64[0], 1),
                v64,
                *(float32x2_t *)&result.n128_i8[8],
                0));
  }
  return result;
}
