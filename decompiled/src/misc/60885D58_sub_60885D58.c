/* sub_60885D58
 * address: 0x60885D58   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60885D58()
{
  char *v0; // r9
  int v1; // r8
  float32x4_t v2; // q1
  unsigned int v3; // r2
  unsigned int v4; // lr
  unsigned int v5; // r5
  unsigned int v6; // r6
  int result; // r0
  unsigned int v8; // r6
  unsigned int v9; // r7
  unsigned int v10; // r5
  unsigned int v11; // r4
  unsigned int v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r1
  _QWORD *v15; // r1
  __int64 v16; // d6
  float32x4_t v18; // q10
  float32x4_t *v19; // r1
  float32x4_t v20; // q10
  float32x4_t v21; // q11

  dword_60CC8010 = sub_6088203C(0x2000, 128);
  v0 = (char *)sub_6088203C(0x2000, 128);
  v1 = dword_60CC8010;
  dword_60CC8014 = (int)v0;
  memset((void *)dword_60CC8010, 0, 0x2000u);
  memset(v0, 0, 0x2000u);
  v2.n128_u32[3] = 0;
  v3 = 1913259373;
  v4 = 1173409204;
  v5 = -484961186;
  v6 = 395225900;
  result = 0;
  do
  {
    v8 = v6 ^ (v6 << 11) ^ v3 ^ ((v6 ^ (v6 << 11)) >> 8);
    v9 = v8 ^ (v3 >> 19);
    v10 = v5 ^ (v5 << 11) ^ ((v5 ^ (v5 << 11)) >> 8) ^ v9;
    v11 = v10 ^ (v8 >> 19);
    v12 = v4 ^ (v4 << 11) ^ ((v4 ^ (v4 << 11)) >> 8) ^ v11;
    v6 = v12 ^ (v10 >> 19);
    v13 = v3 ^ (v3 << 11) ^ ((v3 ^ (v3 << 11)) >> 8) ^ v6;
    v5 = v13 ^ (v12 >> 19);
    v14 = v9 ^ (v9 << 11) ^ ((v9 ^ (v9 << 11)) >> 8) ^ v5;
    v4 = v14 ^ (v13 >> 19);
    v3 = v11 ^ (v11 << 11) ^ ((v11 ^ (v11 << 11)) >> 8) ^ v4 ^ (v14 >> 19);
    v2.n128_f32[0] = (float)((float)(COERCE_FLOAT((v5 >> 9) | 0x3F800000) + -1.0)
                           + (float)(COERCE_FLOAT((v5 >> 9) | 0x3F800000) + -1.0))
                   + -1.0;
    v2.n128_f32[1] = (float)((float)(COERCE_FLOAT((v4 >> 9) | 0x3F800000) + -1.0)
                           + (float)(COERCE_FLOAT((v4 >> 9) | 0x3F800000) + -1.0))
                   + -1.0;
    v2.n128_f32[2] = (float)((float)(COERCE_FLOAT((v3 >> 9) | 0x3F800000) + -1.0)
                           + (float)(COERCE_FLOAT((v3 >> 9) | 0x3F800000) + -1.0))
                   + -1.0;
    v15 = (_QWORD *)(v1 + result);
    *(float *)&v16 = (float)((float)(COERCE_FLOAT((v9 >> 9) | 0x3F800000) + -1.0)
                           + (float)(COERCE_FLOAT((v9 >> 9) | 0x3F800000) + -1.0))
                   + -1.0;
    _Q9 = vmulq_f32(v2, v2);
    *((float *)&v16 + 1) = (float)((float)(COERCE_FLOAT((v11 >> 9) | 0x3F800000) + -1.0)
                                 + (float)(COERCE_FLOAT((v11 >> 9) | 0x3F800000) + -1.0))
                         + -1.0;
    _Q9.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q9.n128_i8[8], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
    _Q9.n128_u64[0] = vpadd_f32((float32x2_t)_Q9.n128_u64[0], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
    _Q9.n128_u64[1] = _Q9.n128_u64[0];
    v18 = vrsqrteq_f32(_Q9);
    *v15 = v16;
    v15[1] = COERCE_UNSIGNED_INT(
               (float)((float)(COERCE_FLOAT((v6 >> 9) | 0x3F800000) + -1.0)
                     + (float)(COERCE_FLOAT((v6 >> 9) | 0x3F800000) + -1.0))
             + -1.0);
    v19 = (float32x4_t *)&v0[result];
    result += 16;
    *v19 = v2;
    v20 = vmulq_f32(v18, vrsqrtsq_f32(v18, vmulq_f32(v18, _Q9)));
    v21 = vmulq_f32(_Q9, v20);
    __asm { VCEQ.F32        Q9, Q9, #0.0 }
    *v19 = vbslq_s64(_Q9, (int64x2_t)0LL, vmulq_f32(v2, vmulq_f32(v20, vrsqrtsq_f32(v20, v21))));
  }
  while ( !_ZF );
  return result;
}
