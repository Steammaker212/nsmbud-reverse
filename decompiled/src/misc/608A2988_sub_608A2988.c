/* sub_608A2988
 * address: 0x608A2988   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A2988(_QWORD *a1, float32x4_t *a2, int a3, int a4, int a5, int a6)
{
  unsigned int v6; // r5
  int v7; // r3
  unsigned int v8; // lr
  float v9; // s4
  int v10; // r8
  int v11; // r4
  float v12; // s10
  float v13; // s6
  float v14; // s12
  float v15; // s4
  float v16; // s6
  float32x4_t v23; // q0
  float32x4_t v25; // q9
  float32x4_t v26; // q9
  float32x4_t v27; // q10

  v6 = FIELD_U32(a3, 144);
  v7 = FIELD_U32(a3, 136);
  v8 = 1103515245 * v6 + 12345;
  v9 = FIELD_F32(v7, 2148);
  v10 = 1103515245 * v8 + 12345;
  v11 = 1103515245 * v10 + 12345;
  v12 = FIELD_F32(a6, 152);
  v13 = FIELD_F32(a6, 144);
  v14 = FIELD_F32(v7, 2140);
  FIELD_U32(a3, 144) = 1103515245 * v11 + 12345;
  v15 = v9 * v12;
  v16 = v14 * v13;
  if ( v6 > 0x7FFFFFFE )
  {
    if ( v8 <= 0x7FFFFFFE )
      _Q0.n128_f32[0] = v16;
    else
      _Q0.n128_f32[0] = -v16;
    _Q0.n128_u32[1] = 0;
    _Q0.n128_f32[2] = v15
                    * (float)((float)((float)((float)(unsigned int)v11 * 2.3283e-10)
                                    + (float)((float)(unsigned int)v11 * 2.3283e-10))
                            + -1.0);
  }
  else
  {
    _Q0.n128_u64[1] = a1[1];
    _Q0.n128_f32[0] = v16
                    * (float)((float)((float)((float)(unsigned int)v10 * 2.3283e-10)
                                    + (float)((float)(unsigned int)v10 * 2.3283e-10))
                            + -1.0);
    _Q0.n128_u32[1] = 0;
    *a1 = _Q0.n128_u32[0];
    a1[1] = _Q0.n128_u64[1];
    if ( v8 > 0x7FFFFFFE )
      _Q0.n128_f32[2] = -v15;
    else
      _Q0.n128_f32[2] = v15;
  }
  _Q0.n128_u32[3] = 0;
  __asm { VCEQ.F32        Q8, Q0, #0.0 }
  *a1 = _Q0.n128_u32[0];
  a1[1] = _Q0.n128_u32[2];
  if ( (DWORD2(_Q8) & (unsigned int)_Q8 & ((*((_QWORD *)&_Q8 + 1) & (unsigned __int64)_Q8) >> 32)) != 0 )
  {
    v23 = 0u;
  }
  else
  {
    _Q8 = vmulq_f32(_Q0, _Q0);
    _Q8.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q8.n128_i8[8], (float32x2_t)_Q8.n128_u64[0]).n64_u64[0];
    _Q8.n128_u64[0] = vpadd_f32((float32x2_t)_Q8.n128_u64[0], (float32x2_t)_Q8.n128_u64[0]).n64_u64[0];
    _Q8.n128_u64[1] = _Q8.n128_u64[0];
    v25 = vrsqrteq_f32(_Q8);
    v26 = vmulq_f32(v25, vrsqrtsq_f32(v25, vmulq_f32(v25, _Q8)));
    v27 = vmulq_f32(_Q8, v26);
    __asm { VCEQ.F32        Q8, Q8, #0.0 }
    v23 = vbslq_s64(_Q8, (int64x2_t)0, vmulq_f32(_Q0, vmulq_f32(v26, vrsqrtsq_f32(v26, v27))));
  }
  *a2 = vmulq_f32(v23, (float32x4_t)vld1q_dup_f32((const float *)(a6 + 108)));
  return 1;
}
