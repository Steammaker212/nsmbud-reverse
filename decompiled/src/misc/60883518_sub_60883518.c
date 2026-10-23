/* sub_60883518
 * address: 0x60883518   size: 920   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60883518(
        double a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        double a8,
        float32x2_t a9,
        int8x8x2_t a10,
        int a11,
        float *a12,
        int a13,
        int a14,
        int a15)
{
  int32x4_t v15; // q5
  int8x8x2_t v16; // q6
  float v19; // s16
  int v20; // r6
  int v21; // r0
  float v22; // s18
  float v23; // s0
  int v24; // r0
  unsigned __int32 *v25; // r0
  unsigned __int32 *v26; // r2
  unsigned __int32 *v27; // r1
  __int64 v28; // d2
  __int64 v29; // d3
  __int64 v30; // d2
  float v31; // s2
  float32x4_t v32; // q8
  float32x4_t v33; // q14
  float32x4_t v34; // q15
  float32x4_t v35; // q2
  float32x4_t v36; // q8
  int32x2_t v37; // d1
  float32x4_t v39; // q2
  float32x4_t v40; // q3
  float32x4_t v41; // q5
  float32x4_t v42; // q6
  float32x4_t v43; // q11
  float32x4_t v44; // q12
  float32x4_t v45; // q9
  float32x4_t v46; // q11
  float32x4_t v47; // q10
  float32x4_t v48; // q13
  float32x4_t v49; // q8
  float32x4_t v50; // q11
  float32x4_t v51; // q12
  float32x4_t v52; // q13
  float32x4_t v53; // q8
  int32x2_t v54; // d1
  float32x4_t v55; // q13
  float32x4_t v56; // q14
  float32x4_t v57; // q15
  float32x4_t v58; // q10
  float32x4_t v59; // q13
  int64x2_t v65; // q9
  __int64 v66; // d2
  float32x4_t v67; // q2
  float result; // s0
  float v69[25]; // [sp+4h] [bp-64h] BYREF
  float32x4_t v70; // 0:q13.16
  int32x4x2_t v71; // 0:kr00_32.32
  int32x4x2_t v72; // 0:kr20_32.32
  int8x8x2_t v73; // 0:d18.8,8:d19.8
  int8x8x2_t v74; // 0:d24.8,8:d25.8
  int32x4x2_t v75; // 0:q3.16,16:q8.16
  int32x4x2_t v76; // 0:q5.16,16:q6.16
  int32x4x2_t v77; // 0:q9.16,16:q8.16
  int32x4x2_t v78; // 0:q13.16,16:q12.16

  v19 = FIELD_F32(a13, 72);
  v20 = *(_DWORD *)(FIELD_U32(a13, 348) + 472);
  v21 = FIELD_U32(a14, 12) + 16 * a15;
  v22 = FIELD_F32(v21, 12);
  if ( FIELD_U32(v20, 20) )
  {
    sub_60882748(a1, v21, v69, a13, v20 + 20, a15);
    v23 = v69[0];
  }
  else
  {
    v23 = FIELD_F32(v20, 16);
    v69[0] = v23;
  }
  if ( *(_BYTE *)v20 )
  {
    if ( *(_BYTE *)(FIELD_U32(a13, 136) + 1875) == 1 )
    {
      v24 = FIELD_U32(a13, 324);
      if ( v24 && FIELD_U32(a13, 40) >= a15 )
      {
        a9.n64_u32[1] = 0;
        v25 = (unsigned __int32 *)(v24 + 16 * a15);
        v15.n128_u32[0] = *v25;
        a10.val[0].n64_u32[0] = v25[1];
        v16.val[0].n64_u32[0] = v25[2];
        v26 = (unsigned __int32 *)(FIELD_U32(a13, 332) + 16 * a15);
        v27 = (unsigned __int32 *)(FIELD_U32(a13, 328) + 16 * a15);
        LODWORD(a8) = v25[3];
        v15.n128_u32[2] = *v26;
        a10.val[1].n64_u32[0] = v26[1];
        v16.val[1].n64_u32[0] = v26[2];
        a9.n64_u32[0] = v26[3];
        v15.n128_u32[1] = *v27;
        a10.val[0].n64_u32[1] = v27[1];
        v16.val[0].n64_u32[1] = v27[2];
        HIDWORD(a8) = v27[3];
        v16.val[1].n64_u32[1] = 0;
        a10.val[1].n64_u32[1] = 0;
        v15.n128_u32[3] = 0;
      }
      *(int8x8_t *)&v49.n128_i8[8] = vtbl2_s8(a10, (int8x8_t)0xF0E0D0C03020100LL);
      v49.n128_u64[0] = vtbl2_s8(a10, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      *(int8x8_t *)&v50.n128_i8[8] = vtbl2_s8(a10, (int8x8_t)0xF0E0D0C07060504LL);
      v50.n128_u64[0] = vtbl2_s8(a10, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v51.n128_i8[8] = vtbl2_s8(v16, (int8x8_t)0xF0E0D0C07060504LL);
      v51.n128_u64[0] = vtbl2_s8(v16, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v52.n128_i8[8] = vtbl2_s8(v16, (int8x8_t)0xF0E0D0C03020100LL);
      v52.n128_u64[0] = vtbl2_s8(v16, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      v53 = vmlsq_f32(vmulq_f32(vmulq_f32(v15, v49), v51), vmulq_f32(v15, v50), v52);
      v54.n64_u64[0] = vpadd_f32((float32x2_t)v53.n128_u64[0], *(float32x2_t *)&v53.n128_i8[8]).n64_u64[0];
      v75 = vzipq_s32((int32x4_t)a10, (int32x4_t)0);
      v76 = vzipq_s32(v15, (int32x4_t)v16);
      v54.n64_f32[0] = v54.n64_f32[0] + v54.n64_f32[1];
      v72 = vzipq_s32(v76.val[0], v75.val[0]);
      v76.val[1] = vzipq_s32(v76.val[1], v75.val[1]).val[0];
      _Q8 = vdupq_lane_s32(v54, 0);
      v55 = vrecpeq_f32(_Q8);
      *(int8x8_t *)&v50.n128_i8[8] = vtbl2_s8((int8x8x2_t)v72.val[0], (int8x8_t)0xF0E0D0C07060504LL);
      v50.n128_u64[0] = vtbl2_s8((int8x8x2_t)v72.val[0], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v51.n128_i8[8] = vtbl2_s8((int8x8x2_t)v76.val[1], (int8x8_t)0xF0E0D0C03020100LL);
      v51.n128_u64[0] = vtbl2_s8((int8x8x2_t)v76.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      *(int8x8_t *)&v56.n128_i8[8] = vtbl2_s8((int8x8x2_t)v76.val[1], (int8x8_t)0xF0E0D0C07060504LL);
      v56.n128_u64[0] = vtbl2_s8((int8x8x2_t)v76.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v57.n128_i8[8] = vtbl2_s8((int8x8x2_t)v72.val[0], (int8x8_t)0xF0E0D0C03020100LL);
      v57.n128_u64[0] = vtbl2_s8((int8x8x2_t)v72.val[0], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      *(int8x8_t *)&v76.val[1].n128_i8[8] = vtbl2_s8((int8x8x2_t)v72.val[1], (int8x8_t)0xF0E0D0C03020100LL);
      v76.val[1].n128_u64[0] = vtbl2_s8((int8x8x2_t)v72.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      v58 = vmulq_f32(v55, vrecpsq_f32(v55, _Q8));
      *(int8x8_t *)&v76.val[0].n128_i8[8] = vtbl2_s8((int8x8x2_t)v72.val[1], (int8x8_t)0xF0E0D0C07060504LL);
      v59 = vmlsq_f32(vmulq_f32(v51, v50), v56, v57);
      v76.val[0].n128_u64[0] = vtbl2_s8((int8x8x2_t)v72.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      v46 = vmulq_f32(v76.val[1], v50);
      v75.val[0] = vmlsq_f32(vmulq_f32(v76.val[1], v56), v51, v76.val[0]);
      v44 = vmulq_f32(v76.val[0], v57);
      v45 = vmulq_f32(v58, vrecpsq_f32(v58, _Q8));
      v47 = vmulq_f32(v45, v59);
      v48 = vmulq_f32(v45, v75.val[0]);
    }
    else
    {
      v73 = *(int8x8x2_t *)(a13 + 560);
      v74 = *(int8x8x2_t *)(a13 + 576);
      *(int8x8_t *)&v32.n128_i8[8] = vtbl2_s8(v73, (int8x8_t)0xF0E0D0C03020100LL);
      v32.n128_u64[0] = vtbl2_s8(v73, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      v70 = *(float32x4_t *)(a13 + 544);
      *(int8x8_t *)&v33.n128_i8[8] = vtbl2_s8(v73, (int8x8_t)0xF0E0D0C07060504LL);
      v33.n128_u64[0] = vtbl2_s8(v73, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v34.n128_i8[8] = vtbl2_s8(v74, (int8x8_t)0xF0E0D0C07060504LL);
      v34.n128_u64[0] = vtbl2_s8(v74, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v35.n128_i8[8] = vtbl2_s8(v74, (int8x8_t)0xF0E0D0C03020100LL);
      v35.n128_u64[0] = vtbl2_s8(v74, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      v36 = vmlsq_f32(vmulq_f32(vmulq_f32(v70, v32), v34), vmulq_f32(v70, v33), v35);
      v37.n64_u64[0] = vpadd_f32((float32x2_t)v36.n128_u64[0], *(float32x2_t *)&v36.n128_i8[8]).n64_u64[0];
      v77 = vzipq_s32((int32x4_t)v73, (int32x4_t)0);
      v78 = vzipq_s32(v70, (int32x4_t)v74);
      v37.n64_f32[0] = v37.n64_f32[0] + v37.n64_f32[1];
      v71 = vzipq_s32(v78.val[0], v77.val[0]);
      v78.val[1] = vzipq_s32(v78.val[1], v77.val[1]).val[0];
      _Q8 = vdupq_lane_s32(v37, 0);
      v39 = vrecpeq_f32(_Q8);
      *(int8x8_t *)&v33.n128_i8[8] = vtbl2_s8((int8x8x2_t)v71.val[0], (int8x8_t)0xF0E0D0C07060504LL);
      v33.n128_u64[0] = vtbl2_s8((int8x8x2_t)v71.val[0], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v34.n128_i8[8] = vtbl2_s8((int8x8x2_t)v78.val[1], (int8x8_t)0xF0E0D0C03020100LL);
      v34.n128_u64[0] = vtbl2_s8((int8x8x2_t)v78.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      *(int8x8_t *)&v40.n128_i8[8] = vtbl2_s8((int8x8x2_t)v78.val[1], (int8x8_t)0xF0E0D0C07060504LL);
      v40.n128_u64[0] = vtbl2_s8((int8x8x2_t)v78.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v78.val[1].n128_i8[8] = vtbl2_s8((int8x8x2_t)v71.val[0], (int8x8_t)0xF0E0D0C03020100LL);
      v78.val[1].n128_u64[0] = vtbl2_s8((int8x8x2_t)v71.val[0], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      *(int8x8_t *)&v41.n128_i8[8] = vtbl2_s8((int8x8x2_t)v71.val[1], (int8x8_t)0xF0E0D0C03020100LL);
      v41.n128_u64[0] = vtbl2_s8((int8x8x2_t)v71.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      *(int8x8_t *)&v42.n128_i8[8] = vtbl2_s8((int8x8x2_t)v71.val[1], (int8x8_t)0xF0E0D0C07060504LL);
      v42.n128_u64[0] = vtbl2_s8((int8x8x2_t)v71.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      v43 = vmulq_f32(v39, vrecpsq_f32(v39, _Q8));
      v78.val[0] = vmlsq_f32(vmulq_f32(v34, v33), v40, v78.val[1]);
      a8 = FIELD_F64(a13, 592);
      a9.n64_u64[0] = *(unsigned __int64 *)(a13 + 600);
      v44 = vmulq_f32(v42, v78.val[1]);
      v45 = vmulq_f32(v43, vrecpsq_f32(v43, _Q8));
      v46 = vmulq_f32(v41, v33);
      v47 = vmulq_f32(v45, v78.val[0]);
      v48 = vmulq_f32(v45, vmlsq_f32(vmulq_f32(v41, v40), v34, v42));
    }
    __asm { VCEQ.F32        Q8, Q8, #0.0 }
    v65 = vmulq_f32(v45, vsubq_f32(v44, v46));
    v66 = *(_QWORD *)a12;
    v29 = *((_QWORD *)a12 + 1);
    v67 = vaddq_f32(
            vbslq_s64(
              _Q8,
              (int64x2_t)0,
              vmlsq_lane_f32(
                vmlsq_lane_f32(vnegq_f32(vmulq_n_f32(v48, *(float *)&a8)), v47, *(float32x2_t *)&a8, 1),
                v65,
                a9,
                0)),
            vmlaq_lane_f32(
              vmlaq_lane_f32(
                vmulq_n_f32(vbslq_s64(_Q8, (int64x2_t)0, v48), FIELD_F32(a13, 656)),
                vbslq_s64(_Q8, (int64x2_t)0, v47),
                *(float32x2_t *)(a13 + 656),
                1),
              vbslq_s64(_Q8, (int64x2_t)0, v65),
              *(float32x2_t *)(a13 + 664),
              0));
    *(float *)&v30 = *a12
                   + (float)(v19
                           * (float)(v22 * (float)(v23 * (float)((float)(FIELD_F32(v20, 4) + v67.n128_f32[0]) - *a12))));
    *(_QWORD *)a12 = v30;
    *((_QWORD *)a12 + 1) = v29;
    *((float *)&v30 + 1) = *((float *)&v66 + 1)
                         + (float)(v19
                                 * (float)(v22
                                         * (float)(v23
                                                 * (float)((float)(v67.n128_f32[1] + FIELD_F32(v20, 8))
                                                         - *((float *)&v66 + 1)))));
    *(_QWORD *)a12 = v30;
    *((_QWORD *)a12 + 1) = v29;
    v31 = v67.n128_f32[2] + FIELD_F32(v20, 12);
  }
  else
  {
    v28 = *(_QWORD *)a12;
    v29 = *((_QWORD *)a12 + 1);
    *(float *)&v30 = *a12 + (float)(v19 * (float)(v22 * (float)(v23 * (float)(FIELD_F32(v20, 4) - *a12))));
    *(_QWORD *)a12 = v30;
    *((_QWORD *)a12 + 1) = v29;
    *((float *)&v30 + 1) = *((float *)&v28 + 1)
                         + (float)(v19
                                 * (float)(v22 * (float)(v23 * (float)(FIELD_F32(v20, 8) - *((float *)&v28 + 1)))));
    *(_QWORD *)a12 = v30;
    *((_QWORD *)a12 + 1) = v29;
    v31 = FIELD_F32(v20, 12);
  }
  result = v22 * (float)(v23 * (float)(v31 - *(float *)&v29));
  *(_QWORD *)a12 = v30;
  *((_QWORD *)a12 + 1) = COERCE_UNSIGNED_INT(*(float *)&v29 + (float)(v19 * result));
  return result;
}
