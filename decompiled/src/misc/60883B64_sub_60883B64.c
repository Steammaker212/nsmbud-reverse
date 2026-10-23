/* sub_60883B64
 * address: 0x60883B64   size: 1372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60883B64(
        __n128 a1,
        double a2,
        double a3,
        __n128 a4,
        int8x8x2_t a5,
        int a6,
        float32x2_t *a7,
        float32x2_t *a8,
        int a9,
        float *a10,
        int a11,
        int a12,
        unsigned __int64 *a13,
        int a14)
{
  float v14; // s16
  float v17; // s18
  float32x4_t v18; // q8
  int v19; // r8
  float32x4_t v20; // q9
  float32x4_t v21; // q8
  unsigned __int32 v22; // r1
  unsigned __int32 v23; // r2
  unsigned __int32 v24; // r3
  int v25; // r0
  int v26; // r1
  int8x8_t *v27; // r0
  unsigned int *v28; // r2
  float32x4_t v29; // q1
  float32x4_t v32; // q14
  float32x4_t v33; // q10
  float32x4_t v34; // q11
  float32x4_t v41; // q10
  float32x4_t v42; // q11
  float32x2_t v43; // d24
  float32x4_t v46; // q13
  int64x2_t v47; // q9
  int64x2_t v48; // q10
  int32x4_t v49; // q8
  float v50; // s24
  float v51; // s28
  float32x4_t v52; // q13
  float v53; // s20
  float32x4_t v54; // q9
  int32x4_t v55; // q11
  int32x4_t v56; // q10
  int result; // r0
  _DWORD *v58; // r1
  int v59; // r0
  unsigned int v60; // r0
  unsigned int v61; // r2
  _DWORD *v62; // r6
  int v63; // r0
  int v64; // r1
  int v65; // r2
  __int16 v66; // r1
  int v67; // r0
  float32x2_t v68; // d0
  unsigned __int64 v69; // d1
  int v70; // r0
  int (__fastcall *v71)(float32x2_t *, float32x2_t *, float *, int, int, int, int, int); // r6
  unsigned __int64 *v72; // [sp+0h] [bp-A8h]
  unsigned __int64 v74; // [sp+20h] [bp-88h] BYREF
  __int64 v75; // [sp+28h] [bp-80h]
  unsigned __int64 v76; // [sp+38h] [bp-70h] BYREF
  unsigned int v77; // [sp+40h] [bp-68h]
  int32x4x2_t v78; // 0:kr00_32.32
  int32x4x2_t v79; // 0:q8.16,16:q10.16
  int32x4x2_t v80; // 0:q9.16,16:q11.16

  v14 = a1.n128_f32[0];
  v17 = FIELD_F32(a11, 72);
  v18.n128_u64[0] = *(_QWORD *)a14;
  v18.n128_u64[1] = FIELD_U64(a14, 8);
  v19 = FIELD_U32(a11, 148);
  v20.n128_u64[0] = *a13;
  v20.n128_u64[1] = a13[1];
  a1.n128_f32[0] = v17 * *(float *)(FIELD_U32(a11, 304) + 16 * a12 + 12);
  *(float32x4_t *)FIELD_U64(a7, 0x0) = vmlaq_f32(v20, v18, vdupq_lane_s32((int32x2_t)a1.n128_u64[0], 0));
  a1.n128_u32[0] = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a11, 348) + 16) + 112);
  if ( a1.n128_f32[0] == 1.0 )
  {
    v22 = FIELD_U32(a14, 4);
    v23 = FIELD_U32(a14, 8);
    v24 = FIELD_U32(a14, 12);
    FIELD_U32(a8, 0x0)[0] = *(_DWORD *)a14;
    FIELD_U32(a8, 0x0)[1] = v22;
    a8[1].n64_u32[0] = v23;
    a8[1].n64_u32[1] = v24;
  }
  else
  {
    a1.n128_f32[0] = powf(a1.n128_f32[0], v17);
    v21.n128_u64[0] = *(_QWORD *)a14;
    v21.n128_u64[1] = FIELD_U64(a14, 8);
    *(float32x4_t *)FIELD_U64(a8, 0x0) = vmulq_n_f32(v21, a1.n128_f32[0]);
  }
  LODWORD(a2) = FIELD_U32(a11, 1220);
  if ( *(float *)&a2 > 0.0 )
  {
    v25 = FIELD_U32(a11, 136);
    a1.n128_f32[2] = *(float *)&a2 * FIELD_F32(v25, 2080);
    a1.n128_f32[1] = *(float *)&a2 * FIELD_F32(v25, 2076);
    a1.n128_f32[0] = *(float *)&a2 * FIELD_F32(v25, 2072);
    if ( FIELD_U8(v25, 2033) )
    {
      a1.n128_u32[3] = 0;
      if ( FIELD_U8(v25, 1875) == 1 )
      {
        v26 = FIELD_U32(a11, 328) + 16 * a12;
        v27 = (int8x8_t *)(FIELD_U32(a11, 324) + 16 * a12);
        v28 = (unsigned int *)(FIELD_U32(a11, 332) + 16 * a12);
        v29.n128_u32[1] = FIELD_U32(v26, 8);
        a4.n128_u32[1] = FIELD_U32(v26, 4);
        a5.val[0] = (int8x8_t)FIELD_U64(v27, 0x0)[0];
        v29.n128_u32[0] = v27[1].n64_u32[0];
        a4.n128_u32[0] = FIELD_U32(v27, 0x0)[1];
        v29.n128_u64[1] = v28[2];
        a4.n128_u64[1] = v28[1];
        a5.val[1].n64_u64[0] = *v28;
        _Q8 = vmulq_f32(v29, v29);
        _Q9 = vmulq_f32(a4, a4);
        v32 = vmulq_f32((float32x4_t)a5, (float32x4_t)a5);
        _Q8.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q8.n128_i8[8], (float32x2_t)_Q8.n128_u64[0]).n64_u64[0];
        *(float32x2_t *)&_Q8.n128_i8[8] = vadd_f32(*(float32x2_t *)&_Q9.n128_i8[8], (float32x2_t)_Q9.n128_u64[0]);
        _Q9.n128_u64[0] = vpadd_f32((float32x2_t)_Q8.n128_u64[0], (float32x2_t)_Q8.n128_u64[0]).n64_u64[0];
        _Q8.n128_u64[0] = vpadd_f32(*(float32x2_t *)&_Q8.n128_i8[8], *(float32x2_t *)&_Q8.n128_i8[8]).n64_u64[0];
        _Q9.n128_u64[1] = _Q9.n128_u64[0];
        _Q8.n128_u64[1] = _Q8.n128_u64[0];
        v33 = vrsqrteq_f32(_Q9);
        v34 = vrsqrteq_f32(_Q8);
        __asm
        {
          VCEQ.F32        Q6, Q9, #0.0
          VCEQ.F32        Q7, Q8, #0.0
        }
        v41 = vmulq_f32(v33, vrsqrtsq_f32(v33, vmulq_f32(v33, _Q9)));
        v42 = vmulq_f32(v34, vrsqrtsq_f32(v34, vmulq_f32(v34, _Q8)));
        v43.n64_u64[0] = vadd_f32(*(float32x2_t *)&v32.n128_i8[8], (float32x2_t)v32.n128_u64[0]).n64_u64[0];
        _Q12.n128_u64[0] = vpadd_f32(v43, v43).n64_u64[0];
        _Q12.n128_u64[1] = _Q12.n128_u64[0];
        __asm { VCEQ.F32        Q5, Q12, #0.0 }
        v46 = vrsqrteq_f32(_Q12);
        v47 = vmulq_f32(_Q9, vmulq_f32(v41, vrsqrtsq_f32(v41, vmulq_f32(_Q9, v41))));
        v48 = vmulq_f32(_Q8, vmulq_f32(v42, vrsqrtsq_f32(v42, vmulq_f32(_Q8, v42))));
        v49 = 0u;
        LODWORD(v50) = vbslq_s64(_Q6, (int64x2_t)0, v47).n128_u32[0];
        LODWORD(v51) = vbslq_s64(_Q7, (int64x2_t)0, v48).n128_u32[0];
        v52 = vmulq_f32(v46, vrsqrtsq_f32(v46, vmulq_f32(v46, _Q12)));
        v53 = vbslq_s64(_Q5, (int64x2_t)0, vmulq_f32(_Q12, vmulq_f32(v52, vrsqrtsq_f32(v52, vmulq_f32(_Q12, v52))))).n128_f32[0];
        if ( v53 > 0.0 )
          v49 = vmulq_n_f32((float32x4_t)a5, 1.0 / v53);
        if ( v51 <= 0.0 )
        {
          v54.n128_u64[0] = 0;
          v54.n128_u64[1] = 0;
        }
        else
        {
          a5.val[0].n64_f32[0] = 1.0 / v51;
          v54 = vmulq_n_f32(a4, 1.0 / v51);
        }
        v55 = 0u;
        v56 = 0u;
        if ( v50 > 0.0 )
          v56 = vmulq_n_f32(v29, 1.0 / v50);
      }
      else
      {
        v55 = 0u;
        v54 = *(float32x4_t *)(a11 + 624);
        v56 = *(int32x4_t *)(a11 + 640);
        v49 = *(int32x4_t *)(a11 + 608);
      }
      v80 = vzipq_s32(v54, v55);
      v79 = vzipq_s32(v49, v56);
      v78 = vzipq_s32(v79.val[0], v80.val[0]);
      a1 = vmulq_n_f32(
             vmlaq_lane_f32(
               vmlaq_lane_f32(vmulq_n_f32(v78.val[0], a1.n128_f32[0]), v78.val[1], (float32x2_t)a1.n128_u64[0], 1),
               (float32x4_t)vzipq_s32(v79.val[1], v80.val[1]).val,
               *(float32x2_t *)&a1.n128_i8[8],
               0),
             v17);
      *(float *)&a2 = FIELD_F32(a8, 0x0)[0] + a1.n128_f32[0];
      *((float *)&a2 + 1) = FIELD_F32(a8, 0x0)[1] + a1.n128_f32[1];
      a4.n128_f32[0] = a8[1].n64_f32[0] + a1.n128_f32[2];
    }
    else
    {
      *(float *)&a2 = FIELD_F32(a8, 0x0)[0] + (float)(v17 * a1.n128_f32[0]);
      *((float *)&a2 + 1) = FIELD_F32(a8, 0x0)[1] + (float)(v17 * a1.n128_f32[1]);
      a4.n128_f32[0] = a8[1].n64_f32[0] + (float)(v17 * a1.n128_f32[2]);
    }
    *(_QWORD *)&a3 = a4.n128_u32[0];
    FIELD_F64(a8, 0x0)[0] = a2;
    a8[1].n64_u64[0] = a4.n128_u32[0];
  }
  result = FIELD_U32(a11, 348);
  if ( FIELD_U8(result, 3) )
  {
    if ( FIELD_U32(result, 468) )
    {
      sub_608831F0(v14, v19 + 24 * a12, a7, a8, a10, a11, (_DWORD *)(a11 + 292), a12, v19 + 24 * a12);
      result = FIELD_U32(a11, 348);
    }
    v58 = *(_DWORD **)(result + 452);
    if ( v58 )
    {
      v59 = v58[15];
      if ( v59 )
      {
        a1.n128_f32[0] = v14;
        sub_60882748(a1.n128_f64[0], v59, &v76, a11, (int)(v58 + 15), a12);
      }
      else
      {
        v60 = v58[1];
        v61 = v58[2];
        v77 = v58[3];
        v76 = __PAIR64__(v61, v60);
      }
      v72 = &v74;
      v74 = v76;
      v75 = v77;
      sub_608A2EB0(a7, a11, a11 + 292, a12, v14);
      result = FIELD_U32(a11, 348);
    }
    v62 = *(_DWORD **)(result + 456);
    if ( v62 )
    {
      v63 = v62[4];
      if ( v63 )
      {
        a1.n128_f32[0] = v14;
        sub_60882748(a1.n128_f64[0], v63, &v74, a11, (int)(v62 + 4), a12);
      }
      else
      {
        v64 = v62[1];
        v65 = v62[2];
        LODWORD(v74) = *v62;
        HIDWORD(v74) = v64;
        LODWORD(v75) = v65;
      }
      a1.n128_u32[0] = (unsigned int)v14;
      if ( !((unsigned int)v14 % v62[3]) )
      {
        v66 = FIELD_U16(a11, 140);
        v67 = dword_60CC8010;
        FIELD_U16(a11, 140) = v66 + 1;
        v68.n64_u64[0] = FIELD_U64(a8, 0x0)[0];
        v69 = a8[1].n64_u64[0];
        v70 = v67 + 16 * (v66 & 0x1FF);
        a1.n128_f32[0] = FIELD_F32(a8, 0x0)[0] + (float)(*(float *)v70 * *(float *)&v74);
        FIELD_U64(a8, 0x0)[0] = a1.n128_u64[0];
        a8[1].n64_u64[0] = v69;
        a1.n128_f32[1] = v68.n64_f32[1] + (float)(FIELD_F32(v70, 4) * *((float *)&v74 + 1));
        FIELD_U64(a8, 0x0)[0] = a1.n128_u64[0];
        a8[1].n64_u64[0] = v69;
        LODWORD(a2) = FIELD_U32(v70, 8);
        LODWORD(a3) = v75;
        a1.n128_f32[2] = *(float *)&v69 + (float)(*(float *)&a2 * *(float *)&v75);
        a1.n128_u32[3] = 0;
        FIELD_U64(a8, 0x0)[0] = a1.n128_u64[0];
        a8[1].n64_u64[0] = a1.n128_u32[2];
      }
      result = FIELD_U32(a11, 348);
    }
    if ( FIELD_U32(result, 460) )
    {
      a1.n128_f32[0] = v14;
      sub_60882A10(
        a1.n128_f64[0],
        a1.n128_f32[2],
        a1.n128_f32[3],
        *(float *)&a2,
        *((float *)&a2 + 1),
        *(float *)&a3,
        *((float *)&a3 + 1),
        a4,
        a5,
        result,
        (float *)a7,
        (float *)a8,
        a11,
        (int)v72,
        a12);
      result = FIELD_U32(a11, 348);
    }
    if ( FIELD_U32(result, 464) )
    {
      ((void (__fastcall *)(int, float32x2_t *, int, int, float, int))loc_60882E1C)(
        result,
        a7,
        a11,
        a11 + 292,
        v14,
        a12);
      result = FIELD_U32(a11, 348);
    }
    if ( FIELD_U32(result, 472) )
    {
      a1.n128_f32[0] = v14;
      a1.n128_f32[0] = sub_60883518(
                         a1.n128_f64[0],
                         a1.n128_f32[2],
                         a1.n128_f32[3],
                         *(float *)&a2,
                         *((float *)&a2 + 1),
                         *(float *)&a3,
                         *((float *)&a3 + 1),
                         a4.n128_f64[0],
                         *(float32x2_t *)&a4.n128_i8[8],
                         a5,
                         result,
                         (float *)a7,
                         a11,
                         a11 + 292,
                         a12);
      result = FIELD_U32(a11, 348);
    }
    if ( FIELD_U32(result, 480) )
    {
      sub_60897698(a7, a8, a11, a11 + 292, a1.n128_f32[0], a12);
      result = FIELD_U32(a11, 348);
    }
    if ( FIELD_U32(result, 476) )
    {
      a1.n128_f32[0] = v14;
      sub_608838D4(a1.n128_f64[0], result, (float *)a7, a11, (_DWORD *)(a11 + 292), a12);
      result = FIELD_U32(a11, 348);
    }
    result = FIELD_U32(result, 484);
    if ( result )
    {
      v71 = *(int (__fastcall **)(float32x2_t *, float32x2_t *, float *, int, int, int, int, int))(*(_DWORD *)(FIELD_U32(a11, 116) + 24)
                                                                                                 + 2356);
      if ( v71 )
        return v71(a7, a8, a10, a9, a11, a11 + 292, result, a12);
    }
  }
  return result;
}
