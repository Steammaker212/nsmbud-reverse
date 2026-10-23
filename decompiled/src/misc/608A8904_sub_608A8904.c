/* sub_608A8904
 * address: 0x608A8904   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608A8904(float *a1, int a2, float32x4_t *a3, float32x4_t *a4, float a5, unsigned __int64 *a6)
{
  float v6; // s2
  float result; // s0
  float32x4_t v8; // q9
  float32x4_t v9; // q8
  float32x4_t v10; // q10
  float32x4_t v11; // q10
  float32x4_t v12; // q9
  float32x4_t v13; // q8
  unsigned __int32 v14; // s4
  float v15; // s8
  float32x4_t v18; // q10
  float32x4_t v19; // q11
  float32x4_t v26; // q10
  float32x4_t v27; // q11
  float v28; // s12
  float v29; // s4

  v6 = FIELD_F32(a2, 40);
  if ( v6 == 0.0 )
  {
    *a1 = 1.0;
    return 1.0;
  }
  else
  {
    v8 = a3[5];
    v9 = a4[1];
    if ( a5 <= 0.0 )
    {
      _Q9 = vmulq_f32(v8, v8);
      _Q8 = vmulq_f32(v9, v9);
      _Q9.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q9.n128_i8[8], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
      _Q8.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q8.n128_i8[8], (float32x2_t)_Q8.n128_u64[0]).n64_u64[0];
      _Q9.n128_u64[0] = vpadd_f32((float32x2_t)_Q9.n128_u64[0], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
      _Q8.n128_u64[0] = vpadd_f32((float32x2_t)_Q8.n128_u64[0], (float32x2_t)_Q8.n128_u64[0]).n64_u64[0];
      _Q9.n128_u64[1] = _Q9.n128_u64[0];
      _Q8.n128_u64[1] = _Q8.n128_u64[0];
      v18 = vrsqrteq_f32(_Q9);
      v19 = vrsqrteq_f32(_Q8);
      __asm
      {
        VCEQ.F32        Q2, Q9, #0.0
        VCEQ.F32        Q1, Q8, #0.0
      }
      v26 = vmulq_f32(v18, vrsqrtsq_f32(v18, vmulq_f32(v18, _Q9)));
      v27 = vmulq_f32(v19, vrsqrtsq_f32(v19, vmulq_f32(v19, _Q8)));
      LODWORD(v15) = vbslq_s64(
                       _Q2,
                       (int64x2_t)0,
                       vmulq_f32(_Q9, vmulq_f32(v26, vrsqrtsq_f32(v26, vmulq_f32(_Q9, v26))))).n128_u32[0];
      v14 = vbslq_s64(_Q1, (int64x2_t)0, vmulq_f32(_Q8, vmulq_f32(v27, vrsqrtsq_f32(v27, vmulq_f32(_Q8, v27))))).n128_u32[0];
    }
    else
    {
      v10.n128_u64[0] = *a6;
      v10.n128_u64[1] = a6[1];
      v11 = vmulq_n_f32(v10, 1.0 / a5);
      v12 = vmulq_f32(v11, v8);
      v13 = vmulq_f32(v11, v9);
      v12.n128_u64[0] = vadd_f32(*(float32x2_t *)&v12.n128_i8[8], (float32x2_t)v12.n128_u64[0]).n64_u64[0];
      v13.n128_u64[0] = vadd_f32(*(float32x2_t *)&v13.n128_i8[8], (float32x2_t)v13.n128_u64[0]).n64_u64[0];
      v14 = vpadd_f32((float32x2_t)v13.n128_u64[0], (float32x2_t)v13.n128_u64[0]).n64_u32[0];
      v15 = -vpadd_f32((float32x2_t)v12.n128_u64[0], (float32x2_t)v12.n128_u64[0]).n64_f32[0];
    }
    v28 = (float)a4[3].n128_u8[1] * 0.03125;
    if ( (float)(v15 * v28) <= v6 )
    {
      v29 = *(float *)&v14 * v28;
      if ( v6 <= (float)-v29 )
      {
        *a1 = 65535.0;
        return 65535.0;
      }
      else
      {
        result = (float)(v6 - (float)(v15 * v28)) / (float)(v6 + v29);
        *a1 = result;
      }
    }
    else
    {
      *a1 = 0.0;
      return 0.0;
    }
  }
  return result;
}
