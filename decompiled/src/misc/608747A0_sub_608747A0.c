/* sub_608747A0
 * address: 0x608747A0   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_608747A0(
        float32x4_t *a1,
        float32x4_t *a2,
        float32x4_t *a3,
        double a4,
        float a5,
        float a6,
        float32x2_t a7,
        double a8)
{
  float32x4_t *v8; // r5
  float *result; // r0
  float v11; // s2
  float32x4_t v12; // q5
  float32x4_t v13; // q8
  float v14; // s16
  unsigned __int32 v15; // r0
  unsigned __int32 v16; // r1
  unsigned __int32 v17; // r2
  unsigned __int32 v18; // r3
  float **v19; // r5
  float32x4_t *v20; // r4
  unsigned __int32 v21; // r1
  unsigned __int32 v22; // r2
  unsigned __int32 v23; // r3
  float v24; // s2

  v8 = a3;
  a7.n64_u32[0] = 953267991;
  result = (float *)&a2[1];
  v11 = FIELD_F32(a3 + (1) * 16, 0x0)[0];
  v12 = vsubq_f32(*a3, *a2);
  v13 = vmulq_f32(v12, v12);
  *(float *)&a8 = (float)(v11 - *result) * (float)(v11 - *result);
  v13.n128_u64[0] = vadd_f32(*(float32x2_t *)&v13.n128_i8[8], (float32x2_t)v13.n128_u64[0]).n64_u64[0];
  v14 = vpadd_f32((float32x2_t)v13.n128_u64[0], (float32x2_t)v13.n128_u64[0]).n64_f32[0];
  if ( v14 >= vmax_f32(*(float32x2_t *)&a8, a7).n64_f32[0] )
  {
    *(float *)&a4 = v14 * (float)(1.0 / sqrtf(v14));
    v24 = (float)(*(float *)&a4 + (float)(FIELD_F32(a2 + (1) * 16, 0x0)[0] + FIELD_F32(a3 + (1) * 16, 0x0)[0])) * 0.5;
    *(float *)&a4 = (float)(v24 - FIELD_F32(a2 + (1) * 16, 0x0)[0]) / *(float *)&a4;
    *a1 = vmlaq_f32(*a2, v12, vdupq_lane_s32(*(int32x2_t *)&a4, 0));
    FIELD_F32(a1 + (1) * 16, 0x0)[0] = v24;
  }
  else
  {
    if ( *result > v11 )
      v8 = a2;
    v15 = FIELD_U32(v8, 0x0)[0];
    v16 = FIELD_U32(v8, 0x0)[1];
    v17 = FIELD_U32(v8, 0x0)[2];
    v18 = FIELD_U32(v8, 0x0)[3];
    v19 = (float **)&v8[1];
    FIELD_U32(a1, 0x0)[0] = v15;
    FIELD_U32(a1, 0x0)[1] = v16;
    FIELD_U32(a1, 0x0)[2] = v17;
    FIELD_U32(a1, 0x0)[3] = v18;
    v20 = a1 + 1;
    result = *v19;
    v21 = (unsigned __int32)v19[1];
    v22 = (unsigned __int32)v19[2];
    v23 = (unsigned __int32)v19[3];
    FIELD_U32(v20, 0x0)[0] = (unsigned __int32)*v19;
    FIELD_U32(v20, 0x0)[1] = v21;
    FIELD_U32(v20, 0x0)[2] = v22;
    FIELD_U32(v20, 0x0)[3] = v23;
  }
  return result;
}
