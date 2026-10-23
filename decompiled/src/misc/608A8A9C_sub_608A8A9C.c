/* sub_608A8A9C
 * address: 0x608A8A9C   size: 844   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608A8A9C(
        float32x4_t *a1,
        float *a2,
        float *a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9)
{
  float32x4_t v13; // q1
  float32x4_t v16; // q2
  float32x4_t v17; // q1
  float32x4_t v19; // q10
  float32x4_t v25; // q10
  float v26; // s12
  float32x4_t v28; // q10
  float32x4_t v30; // q10
  float v32; // s30
  float32x4_t v33; // q10
  float32x4_t v35; // q10
  float v36; // s24
  float v37; // s0
  float v38; // s4
  float v39; // s26
  float v40; // s28
  float v41; // s2
  float v42; // s4
  float v43; // s4
  float v44; // s30
  float v45; // s2
  float v46; // s6
  float v47; // s2
  float v48; // s22
  float v49; // s22
  float v50; // s0
  float result; // s0

  v13 = 0u;
  if ( a5 != 0.0 )
  {
    v16 = *a1;
    v17 = *a1;
    v17.n128_u32[1] = 0;
    _Q9 = vmulq_f32(v17, v17);
    _Q9.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q9.n128_i8[8], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
    _Q9.n128_u64[0] = vpadd_f32((float32x2_t)_Q9.n128_u64[0], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
    _Q9.n128_u64[1] = _Q9.n128_u64[0];
    v19 = vrsqrteq_f32(_Q9);
    __asm { VCEQ.F32        Q3, Q9, #0.0 }
    v25 = vmulq_f32(v19, vrsqrtsq_f32(v19, vmulq_f32(v19, _Q9)));
    v26 = vbslq_s64(_Q3, (int64x2_t)0LL, vmulq_f32(_Q9, vmulq_f32(v25, vrsqrtsq_f32(v25, vmulq_f32(_Q9, v25))))).n128_f32[0];
    if ( v26 > a4 )
    {
      v17.n128_f32[0] = v16.n128_f32[0] * (float)(a4 / v26);
      v17.n128_f32[2] = v16.n128_f32[2] * (float)(a4 / v26);
      v17.n128_u32[3] = 0;
    }
    _Q9 = vmulq_f32(v17, v17);
    v13.n128_u32[1] = 0;
    _Q9.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q9.n128_i8[8], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
    _Q9.n128_u64[0] = vpadd_f32((float32x2_t)_Q9.n128_u64[0], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
    _Q9.n128_u64[1] = _Q9.n128_u64[0];
    v28 = vrsqrteq_f32(_Q9);
    __asm { VCEQ.F32        Q3, Q9, #0.0 }
    v30 = vmulq_f32(v28, vrsqrtsq_f32(v28, vmulq_f32(v28, _Q9)));
    _Q3.n128_f32[0] = vbslq_s64(
                        _Q3,
                        (int64x2_t)0,
                        vmulq_f32(_Q9, vmulq_f32(v30, vrsqrtsq_f32(v30, vmulq_f32(_Q9, v30))))).n128_f32[0];
    v13.n128_f32[2] = (float)(v16.n128_f32[2] * _Q3.n128_f32[0]) / a5;
    v13.n128_f32[0] = (float)(v16.n128_f32[0] * _Q3.n128_f32[0]) / a5;
    v13.n128_u32[3] = 0;
  }
  _Q9 = vmulq_f32(v13, v13);
  _Q9.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q9.n128_i8[8], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
  _Q9.n128_u64[0] = vpadd_f32((float32x2_t)_Q9.n128_u64[0], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
  v32 = nn__util__FloatPi;
  _Q9.n128_u64[1] = _Q9.n128_u64[0];
  v33 = vrsqrteq_f32(_Q9);
  __asm { VCEQ.F32        Q2, Q9, #0.0 }
  v35 = vmulq_f32(v33, vrsqrtsq_f32(v33, vmulq_f32(v33, _Q9)));
  v36 = vbslq_s64(_Q2, (int64x2_t)0LL, vmulq_f32(_Q9, vmulq_f32(v35, vrsqrtsq_f32(v35, vmulq_f32(_Q9, v35))))).n128_f32[0]
      / a4;
  v37 = atan2f(v13.n128_f32[0], -v13.n128_f32[2]);
  v38 = -a8;
  if ( v37 < (float)-a8 )
  {
    v39 = 1.0;
    if ( v32 == a8 )
    {
      v40 = -0.5;
      goto LABEL_31;
    }
    v43 = a8 - v32;
    v44 = v32 + (float)(a8 * 0.0);
LABEL_15:
    v40 = (float)(v37 / v43) + (float)(v44 / v43);
    goto LABEL_31;
  }
  v39 = -0.5;
  v41 = v32 * -0.5;
  if ( v37 >= (float)(v32 * -0.5) )
  {
    v42 = -a7;
    if ( v37 >= (float)-a7 )
    {
      if ( v37 >= a7 )
      {
        v40 = 0.5;
        v45 = v32 * 0.5;
        if ( v37 >= (float)(v32 * 0.5) )
        {
          if ( v37 >= a8 )
          {
            v39 = 1.0;
            if ( v32 == a8 )
              goto LABEL_31;
            v43 = a8 - v32;
            v44 = (float)(a8 * 0.0) - v32;
            goto LABEL_15;
          }
          v40 = 1.0;
          if ( v45 == a8 )
          {
            v39 = 0.5;
            goto LABEL_31;
          }
          v46 = v45 - a8;
          v47 = v45 + (float)(a8 * -0.0);
        }
        else
        {
          v40 = 1.0;
          if ( v45 == a7 )
            goto LABEL_31;
          v46 = a7 - v45;
          v47 = v45 + (float)(a7 * 0.0);
        }
        v39 = (float)(v47 / v46) - (float)(v37 / v46);
        goto LABEL_31;
      }
      v39 = -1.0;
      if ( v42 == a7 )
        v40 = 0.0;
      else
        v40 = (float)((float)(a7 - a7) / (float)(v42 - a7)) + (float)((float)(v37 * -2.0) / (float)(v42 - a7));
    }
    else
    {
      v40 = -1.0;
      if ( v41 != v42 )
        v39 = (float)(v37 / (float)(v41 + a7)) + (float)((float)((float)(a7 * 0.0) - v41) / (float)(v41 + a7));
    }
  }
  else
  {
    v40 = -1.0;
    if ( v41 == v38 )
      v39 = 0.5;
    else
      v39 = (float)(v37 / (float)(v38 - v41)) + (float)((float)((float)(a8 * -0.0) - v41) / (float)(v38 - v41));
  }
LABEL_31:
  v48 = cosf(a7);
  v49 = (float)(v48 + cosf(a8)) * 0.5;
  v50 = cosf(a8);
  *a2 = (float)(v36 * (float)(v40 * a6)) + (float)((float)(1.0 - v36) * 0.0);
  result = (float)((float)((float)((float)(1.0 - v36) * (float)(v49 / (float)(v49 - v50)))
                         + (float)(v36 * (float)(v39 * a6)))
                 + 1.0)
         + a9;
  *a3 = result;
  return result;
}
