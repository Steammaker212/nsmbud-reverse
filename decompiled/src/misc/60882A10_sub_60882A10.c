/* sub_60882A10
 * address: 0x60882A10   size: 1000   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60882A10(
        double a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        __n128 a8,
        int8x8x2_t a9,
        int a10,
        float *a11,
        float *a12,
        int a13,
        int a14,
        int a15)
{
  int32x4_t v15; // q4
  int8x8x2_t v16; // q5
  int v20; // r7
  int v21; // r0
  float v22; // s0
  int v23; // r0
  unsigned __int32 *v24; // r0
  unsigned __int32 *v25; // r2
  unsigned __int32 *v26; // r1
  __int64 v27; // d4
  __int64 v28; // d5
  __int64 v29; // d4
  __int64 v30; // d5
  float *result; // r0
  __int64 v32; // d4
  __int64 v33; // d5
  float v34; // s2
  float32x4_t v35; // q8
  float32x4_t v36; // q14
  float32x4_t v37; // q15
  float32x4_t v38; // q2
  float32x4_t v39; // q8
  int32x2_t v40; // d1
  float32x4_t v42; // q2
  float32x4_t v43; // q3
  float32x4_t v44; // q4
  float32x4_t v45; // q11
  float32x4_t v46; // q5
  float32x4_t v47; // q12
  float32x4_t v48; // q9
  float32x4_t v49; // q11
  float32x4_t v50; // q10
  float32x4_t v51; // q13
  float32x4_t v52; // q8
  float32x4_t v53; // q11
  float32x4_t v54; // q12
  float32x4_t v55; // q13
  float32x4_t v56; // q8
  int32x2_t v57; // d1
  float32x4_t v58; // q13
  float32x4_t v59; // q14
  float32x4_t v60; // q15
  float32x4_t v61; // q10
  float32x4_t v62; // q13
  int64x2_t v68; // q9
  float32x4_t v69; // q1
  __int64 v70; // d4
  __int64 v71; // d5
  __int64 v72; // d4
  __int64 v73; // d5
  float v74[17]; // [sp+4h] [bp-44h] BYREF
  float32x4_t v75; // 0:q13.16
  int32x4x2_t v76; // 0:kr00_32.32
  int32x4x2_t v77; // 0:kr20_32.32
  int8x8x2_t v78; // 0:d18.8,8:d19.8
  int8x8x2_t v79; // 0:d24.8,8:d25.8
  int32x4x2_t v80; // 0:q3.16,16:q8.16
  int32x4x2_t v81; // 0:q4.16,16:q5.16
  int32x4x2_t v82; // 0:q9.16,16:q8.16
  int32x4x2_t v83; // 0:q13.16,16:q12.16

  v20 = *(_DWORD *)(FIELD_U32(a13, 348) + 460);
  v21 = FIELD_U32(v20, 20);
  if ( v21 )
  {
    sub_60882748(a1, v21, v74, a13, v20 + 20, a15);
    v22 = v74[0];
  }
  else
  {
    v22 = FIELD_F32(v20, 4);
    v74[0] = v22;
  }
  if ( *(_BYTE *)v20 )
  {
    if ( *(_BYTE *)(FIELD_U32(a13, 136) + 1875) == 1 )
    {
      v23 = FIELD_U32(a13, 324);
      if ( v23 && FIELD_U32(a13, 40) >= a15 )
      {
        a8.n128_u32[3] = 0;
        v24 = (unsigned __int32 *)(v23 + 16 * a15);
        v15.n128_u32[0] = *v24;
        a9.val[0].n64_u32[0] = v24[1];
        v16.val[0].n64_u32[0] = v24[2];
        v25 = (unsigned __int32 *)(FIELD_U32(a13, 332) + 16 * a15);
        v26 = (unsigned __int32 *)(FIELD_U32(a13, 328) + 16 * a15);
        a8.n128_u32[0] = v24[3];
        v15.n128_u32[2] = *v25;
        a9.val[1].n64_u32[0] = v25[1];
        v16.val[1].n64_u32[0] = v25[2];
        a8.n128_u32[2] = v25[3];
        v15.n128_u32[1] = *v26;
        a9.val[0].n64_u32[1] = v26[1];
        v16.val[0].n64_u32[1] = v26[2];
        a8.n128_u32[1] = v26[3];
        v16.val[1].n64_u32[1] = 0;
        a9.val[1].n64_u32[1] = 0;
        v15.n128_u32[3] = 0;
      }
      *(int8x8_t *)&v52.n128_i8[8] = vtbl2_s8(a9, (int8x8_t)0xF0E0D0C03020100LL);
      v52.n128_u64[0] = vtbl2_s8(a9, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      *(int8x8_t *)&v53.n128_i8[8] = vtbl2_s8(a9, (int8x8_t)0xF0E0D0C07060504LL);
      v53.n128_u64[0] = vtbl2_s8(a9, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v54.n128_i8[8] = vtbl2_s8(v16, (int8x8_t)0xF0E0D0C07060504LL);
      v54.n128_u64[0] = vtbl2_s8(v16, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v55.n128_i8[8] = vtbl2_s8(v16, (int8x8_t)0xF0E0D0C03020100LL);
      v55.n128_u64[0] = vtbl2_s8(v16, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      v56 = vmlsq_f32(vmulq_f32(vmulq_f32(v15, v52), v54), vmulq_f32(v15, v53), v55);
      v57.n64_u64[0] = vpadd_f32((float32x2_t)v56.n128_u64[0], *(float32x2_t *)&v56.n128_i8[8]).n64_u64[0];
      v80 = vzipq_s32((int32x4_t)a9, (int32x4_t)0);
      v81 = vzipq_s32(v15, (int32x4_t)v16);
      v57.n64_f32[0] = v57.n64_f32[0] + v57.n64_f32[1];
      v77 = vzipq_s32(v81.val[0], v80.val[0]);
      v81.val[1] = vzipq_s32(v81.val[1], v80.val[1]).val[0];
      _Q8 = vdupq_lane_s32(v57, 0);
      v58 = vrecpeq_f32(_Q8);
      *(int8x8_t *)&v53.n128_i8[8] = vtbl2_s8((int8x8x2_t)v77.val[0], (int8x8_t)0xF0E0D0C07060504LL);
      v53.n128_u64[0] = vtbl2_s8((int8x8x2_t)v77.val[0], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v54.n128_i8[8] = vtbl2_s8((int8x8x2_t)v81.val[1], (int8x8_t)0xF0E0D0C03020100LL);
      v54.n128_u64[0] = vtbl2_s8((int8x8x2_t)v81.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      *(int8x8_t *)&v59.n128_i8[8] = vtbl2_s8((int8x8x2_t)v81.val[1], (int8x8_t)0xF0E0D0C07060504LL);
      v59.n128_u64[0] = vtbl2_s8((int8x8x2_t)v81.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v60.n128_i8[8] = vtbl2_s8((int8x8x2_t)v77.val[0], (int8x8_t)0xF0E0D0C03020100LL);
      v60.n128_u64[0] = vtbl2_s8((int8x8x2_t)v77.val[0], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      *(int8x8_t *)&v81.val[1].n128_i8[8] = vtbl2_s8((int8x8x2_t)v77.val[1], (int8x8_t)0xF0E0D0C03020100LL);
      v81.val[1].n128_u64[0] = vtbl2_s8((int8x8x2_t)v77.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      v61 = vmulq_f32(v58, vrecpsq_f32(v58, _Q8));
      *(int8x8_t *)&v81.val[0].n128_i8[8] = vtbl2_s8((int8x8x2_t)v77.val[1], (int8x8_t)0xF0E0D0C07060504LL);
      v62 = vmlsq_f32(vmulq_f32(v54, v53), v59, v60);
      v81.val[0].n128_u64[0] = vtbl2_s8((int8x8x2_t)v77.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      v49 = vmulq_f32(v81.val[1], v53);
      v80.val[0] = vmlsq_f32(vmulq_f32(v81.val[1], v59), v54, v81.val[0]);
      v47 = vmulq_f32(v81.val[0], v60);
      v48 = vmulq_f32(v61, vrecpsq_f32(v61, _Q8));
      v50 = vmulq_f32(v48, v62);
      v51 = vmulq_f32(v48, v80.val[0]);
    }
    else
    {
      v78 = *(int8x8x2_t *)(a13 + 560);
      v79 = *(int8x8x2_t *)(a13 + 576);
      *(int8x8_t *)&v35.n128_i8[8] = vtbl2_s8(v78, (int8x8_t)0xF0E0D0C03020100LL);
      v35.n128_u64[0] = vtbl2_s8(v78, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      v75 = *(float32x4_t *)(a13 + 544);
      *(int8x8_t *)&v36.n128_i8[8] = vtbl2_s8(v78, (int8x8_t)0xF0E0D0C07060504LL);
      v36.n128_u64[0] = vtbl2_s8(v78, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v37.n128_i8[8] = vtbl2_s8(v79, (int8x8_t)0xF0E0D0C07060504LL);
      v37.n128_u64[0] = vtbl2_s8(v79, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v38.n128_i8[8] = vtbl2_s8(v79, (int8x8_t)0xF0E0D0C03020100LL);
      v38.n128_u64[0] = vtbl2_s8(v79, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      v39 = vmlsq_f32(vmulq_f32(vmulq_f32(v75, v35), v37), vmulq_f32(v75, v36), v38);
      v40.n64_u64[0] = vpadd_f32((float32x2_t)v39.n128_u64[0], *(float32x2_t *)&v39.n128_i8[8]).n64_u64[0];
      v82 = vzipq_s32((int32x4_t)v78, (int32x4_t)0);
      v83 = vzipq_s32(v75, (int32x4_t)v79);
      v40.n64_f32[0] = v40.n64_f32[0] + v40.n64_f32[1];
      v76 = vzipq_s32(v83.val[0], v82.val[0]);
      v83.val[1] = vzipq_s32(v83.val[1], v82.val[1]).val[0];
      _Q8 = vdupq_lane_s32(v40, 0);
      v42 = vrecpeq_f32(_Q8);
      *(int8x8_t *)&v36.n128_i8[8] = vtbl2_s8((int8x8x2_t)v76.val[0], (int8x8_t)0xF0E0D0C07060504LL);
      v36.n128_u64[0] = vtbl2_s8((int8x8x2_t)v76.val[0], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v37.n128_i8[8] = vtbl2_s8((int8x8x2_t)v83.val[1], (int8x8_t)0xF0E0D0C03020100LL);
      v37.n128_u64[0] = vtbl2_s8((int8x8x2_t)v83.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      *(int8x8_t *)&v43.n128_i8[8] = vtbl2_s8((int8x8x2_t)v83.val[1], (int8x8_t)0xF0E0D0C07060504LL);
      v43.n128_u64[0] = vtbl2_s8((int8x8x2_t)v83.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v83.val[1].n128_i8[8] = vtbl2_s8((int8x8x2_t)v76.val[0], (int8x8_t)0xF0E0D0C03020100LL);
      v83.val[1].n128_u64[0] = vtbl2_s8((int8x8x2_t)v76.val[0], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      *(int8x8_t *)&v44.n128_i8[8] = vtbl2_s8((int8x8x2_t)v76.val[1], (int8x8_t)0xF0E0D0C03020100LL);
      v44.n128_u64[0] = vtbl2_s8((int8x8x2_t)v76.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      v45 = vmulq_f32(v42, vrecpsq_f32(v42, _Q8));
      *(int8x8_t *)&v42.n128_i8[8] = vtbl2_s8((int8x8x2_t)v76.val[1], (int8x8_t)0xF0E0D0C07060504LL);
      v83.val[0] = vmlsq_f32(vmulq_f32(v37, v36), v43, v83.val[1]);
      v42.n128_u64[0] = vtbl2_s8((int8x8x2_t)v76.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      v46 = vmlsq_f32(vmulq_f32(v44, v43), v37, v42);
      v47 = vmulq_f32(v42, v83.val[1]);
      a8 = *(__n128 *)(a13 + 592);
      v48 = vmulq_f32(v45, vrecpsq_f32(v45, _Q8));
      v49 = vmulq_f32(v44, v36);
      v50 = vmulq_f32(v48, v83.val[0]);
      v51 = vmulq_f32(v48, v46);
    }
    __asm { VCEQ.F32        Q8, Q8, #0.0 }
    v68 = vmulq_f32(v48, vsubq_f32(v47, v49));
    v69 = vaddq_f32(
            vbslq_s64(
              _Q8,
              (int64x2_t)0,
              vmlsq_lane_f32(
                vmlsq_lane_f32(vnegq_f32(vmulq_n_f32(v51, a8.n128_f32[0])), v50, (float32x2_t)a8.n128_u64[0], 1),
                v68,
                *(float32x2_t *)&a8.n128_i8[8],
                0)),
            vmlaq_lane_f32(
              vmlaq_lane_f32(
                vmulq_n_f32(vbslq_s64(_Q8, (int64x2_t)0, v51), FIELD_F32(a13, 592)),
                vbslq_s64(_Q8, (int64x2_t)0, v50),
                *(float32x2_t *)(a13 + 592),
                1),
              vbslq_s64(_Q8, (int64x2_t)0, v68),
              *(float32x2_t *)(a13 + 600),
              0));
    if ( FIELD_U8(v20, 1) )
    {
      v70 = *(_QWORD *)a12;
      v71 = *((_QWORD *)a12 + 1);
      *(float *)&v70 = *a12
                     + (float)(v22 * (float)((float)((float)(v69.n128_f32[0] + FIELD_F32(v20, 8)) - *a11) - *a12));
      *(_QWORD *)a12 = v70;
      *((_QWORD *)a12 + 1) = v71;
    }
    if ( FIELD_U8(v20, 2) )
    {
      v72 = *(_QWORD *)a12;
      v73 = *((_QWORD *)a12 + 1);
      *((float *)&v72 + 1) = a12[1]
                           + (float)(v22
                                   * (float)((float)((float)(v69.n128_f32[1] + FIELD_F32(v20, 12)) - a11[1]) - a12[1]));
      *(_QWORD *)a12 = v72;
      *((_QWORD *)a12 + 1) = v73;
    }
    result = (float *)FIELD_U8(v20, 3);
    if ( FIELD_U8(v20, 3) )
    {
      v32 = *(_QWORD *)a12;
      v33 = *((_QWORD *)a12 + 1);
      v34 = (float)(v69.n128_f32[2] + FIELD_F32(v20, 16)) - a11[2];
      goto LABEL_23;
    }
  }
  else
  {
    if ( FIELD_U8(v20, 1) )
    {
      v27 = *(_QWORD *)a12;
      v28 = *((_QWORD *)a12 + 1);
      *(float *)&v27 = *a12 + (float)(v22 * (float)((float)(FIELD_F32(v20, 8) - *a11) - *a12));
      *(_QWORD *)a12 = v27;
      *((_QWORD *)a12 + 1) = v28;
    }
    if ( FIELD_U8(v20, 2) )
    {
      v29 = *(_QWORD *)a12;
      v30 = *((_QWORD *)a12 + 1);
      *((float *)&v29 + 1) = a12[1] + (float)(v22 * (float)((float)(FIELD_F32(v20, 12) - a11[1]) - a12[1]));
      *(_QWORD *)a12 = v29;
      *((_QWORD *)a12 + 1) = v30;
    }
    result = (float *)FIELD_U8(v20, 3);
    if ( FIELD_U8(v20, 3) )
    {
      v32 = *(_QWORD *)a12;
      v33 = *((_QWORD *)a12 + 1);
      v34 = FIELD_F32(v20, 16) - a11[2];
LABEL_23:
      *(_QWORD *)a12 = v32;
      *((_QWORD *)a12 + 1) = COERCE_UNSIGNED_INT(*(float *)&v33 + (float)(v22 * (float)(v34 - *(float *)&v33)));
      return &flt_60882E18;
    }
  }
  return result;
}
