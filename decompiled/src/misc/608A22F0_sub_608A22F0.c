/* sub_608A22F0
 * address: 0x608A22F0   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A22F0(float32x4_t *a1, float32x4_t *a2, int a3, int a4, int a5, int a6)
{
  unsigned int v6; // lr
  unsigned int v7; // r12
  int v8; // r7
  float *v9; // r2
  float v10; // s12
  float v11; // s14
  float v12; // s10
  float v13; // s4
  float v14; // s8
  float32x4_t v21; // q0
  float32x4_t v23; // q9
  float32x4_t v24; // q9
  float32x4_t v25; // q10

  v6 = FIELD_U32(a3, 144);
  v7 = 1103515245 * v6 + 12345;
  v8 = 1103515245 * (1103515245 * (1103515245 * v7 + 12345) + 12345) + 12345;
  FIELD_U32(a3, 144) = 1103515245 * v8 + 12345;
  v9 = *(float **)(a3 + 136);
  v10 = v9[535] * FIELD_F32(a6, 144);
  v11 = (float)((float)((float)(1103515245 * v7 + 12345) * 2.3283e-10)
              + (float)((float)(1103515245 * v7 + 12345) * 2.3283e-10))
      + -1.0;
  v12 = (float)((float)((float)(1103515245 * (1103515245 * v7 + 12345) + 12345) * 2.3283e-10)
              + (float)((float)(1103515245 * (1103515245 * v7 + 12345) + 12345) * 2.3283e-10))
      + -1.0;
  v13 = v9[537] * FIELD_F32(a6, 152);
  v14 = v9[536] * FIELD_F32(a6, 148);
  if ( v6 > 0x55555554 )
  {
    if ( v6 > 0xAAAAAAA9 )
    {
      if ( v7 > 0x7FFFFFFE )
      {
        _Q0.n128_f32[0] = -v10;
        _Q0.n128_f32[1] = v14 * v12;
      }
      else
      {
        _Q0.n128_f32[1] = v14 * v12;
        _Q0.n128_f32[0] = v9[535] * FIELD_F32(a6, 144);
      }
    }
    else
    {
      _Q0 = *a1;
      _Q0.n128_f32[0] = v10 * v11;
      *a1 = _Q0;
      if ( v7 > 0x7FFFFFFE )
        _Q0.n128_f32[1] = -v14;
      else
        _Q0.n128_f32[1] = v14;
    }
    _Q0.n128_f32[2] = v13
                    * (float)((float)((float)((float)(unsigned int)v8 * 2.3283e-10)
                                    + (float)((float)(unsigned int)v8 * 2.3283e-10))
                            + -1.0);
  }
  else
  {
    _Q0.n128_u64[1] = FIELD_U64(a1, 0x0)[1];
    _Q0.n128_f32[0] = v10 * v11;
    _Q0.n128_f32[1] = v14 * v12;
    *a1 = _Q0;
    if ( v7 > 0x7FFFFFFE )
      _Q0.n128_f32[2] = -v13;
    else
      _Q0.n128_f32[2] = v13;
  }
  _Q0.n128_u32[3] = 0;
  __asm { VCEQ.F32        Q8, Q0, #0.0 }
  FIELD_U64(a1, 0x0)[0] = _Q0.n128_u64[0];
  FIELD_U64(a1, 0x0)[1] = _Q0.n128_u32[2];
  if ( (DWORD2(_Q8) & (unsigned int)_Q8 & ((*((_QWORD *)&_Q8 + 1) & (unsigned __int64)_Q8) >> 32)) != 0 )
  {
    v21 = 0u;
  }
  else
  {
    _Q8 = vmulq_f32(_Q0, _Q0);
    _Q8.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q8.n128_i8[8], (float32x2_t)_Q8.n128_u64[0]).n64_u64[0];
    _Q8.n128_u64[0] = vpadd_f32((float32x2_t)_Q8.n128_u64[0], (float32x2_t)_Q8.n128_u64[0]).n64_u64[0];
    _Q8.n128_u64[1] = _Q8.n128_u64[0];
    v23 = vrsqrteq_f32(_Q8);
    v24 = vmulq_f32(v23, vrsqrtsq_f32(v23, vmulq_f32(v23, _Q8)));
    v25 = vmulq_f32(_Q8, v24);
    __asm { VCEQ.F32        Q8, Q8, #0.0 }
    v21 = vbslq_s64(_Q8, (int64x2_t)0, vmulq_f32(_Q0, vmulq_f32(v24, vrsqrtsq_f32(v24, v25))));
  }
  *a2 = vmulq_f32(v21, (float32x4_t)vld1q_dup_f32((const float *)(a6 + 108)));
  return 1;
}
