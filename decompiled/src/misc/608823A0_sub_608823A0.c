/* sub_608823A0
 * address: 0x608823A0   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_608823A0(
        _QWORD *a1,
        float32x2_t *a2,
        float32x2_t *a3,
        float32x2_t *a4,
        __n64 result,
        float32x2_t *a6)
{
  float32x4_t v6; // q8
  float32x4_t v7; // q11
  float32x4_t v8; // q10
  float32x4_t v9; // q12
  float32x4_t v10; // q8
  float v11; // s5
  __int64 v12; // d8

  v6.n128_u64[0] = 0xC040000040000000LL;
  v6.n128_u64[1] = 0x3F80000000000000LL;
  v7.n128_u64[0] = 0xC00000003F800000LL;
  v7.n128_u64[1] = 1065353216;
  v8 = vmlaq_lane_f32(
         vmlaq_lane_f32(
           vmlaq_lane_f32(
             vmulq_n_f32(v6, FIELD_F32(a2, 0x0)[0]),
             (float32x4_t)0x40400000C0000000uLL,
             (float32x2_t)FIELD_U64(a4, 0x0)[0],
             0),
           v7,
           (float32x2_t)FIELD_U64(a3, 0x0)[0],
           0),
         (float32x4_t)0xBF8000003F800000LL,
         (float32x2_t)FIELD_U64(a6, 0x0)[0],
         0);
  v9 = vmlaq_lane_f32(
         vmlaq_lane_f32(
           vmlaq_lane_f32(
             vmulq_lane_f32(v6, (float32x2_t)FIELD_U64(a2, 0x0)[0], 1),
             (float32x4_t)0x40400000C0000000uLL,
             (float32x2_t)FIELD_U64(a4, 0x0)[0],
             1),
           v7,
           (float32x2_t)FIELD_U64(a3, 0x0)[0],
           1),
         (float32x4_t)0xBF8000003F800000LL,
         (float32x2_t)FIELD_U64(a6, 0x0)[0],
         1);
  v10 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v6, a2[1].n64_f32[0]), (float32x4_t)0x40400000C0000000uLL, a4[1], 0),
            v7,
            a3[1],
            0),
          (float32x4_t)0xBF8000003F800000LL,
          a6[1],
          0);
  v11 = (float)(result.n64_f32[0] * result.n64_f32[0]) * result.n64_f32[0];
  result.n64_u32[1] = v10.n128_u32[3];
  *((float *)&v12 + 1) = v9.n128_f32[3]
                       + (float)((float)((float)((float)(result.n64_f32[0] * result.n64_f32[0]) * v9.n128_f32[1])
                                       + (float)(v11 * v9.n128_f32[0]))
                               + (float)(v9.n128_f32[2] * result.n64_f32[0]));
  *(float *)&v12 = v8.n128_f32[3]
                 + (float)((float)((float)((float)(result.n64_f32[0] * result.n64_f32[0]) * v8.n128_f32[1])
                                 + (float)(v11 * v8.n128_f32[0]))
                         + (float)(v8.n128_f32[2] * result.n64_f32[0]));
  *a1 = v12;
  a1[1] = COERCE_UNSIGNED_INT(
            v10.n128_f32[3]
          + (float)((float)((float)((float)(result.n64_f32[0] * result.n64_f32[0]) * v10.n128_f32[1])
                          + (float)(v11 * v10.n128_f32[0]))
                  + (float)(v10.n128_f32[2] * result.n64_f32[0])));
  return result;
}
