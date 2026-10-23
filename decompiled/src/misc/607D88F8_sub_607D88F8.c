/* sub_607D88F8
 * address: 0x607D88F8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607D88F8(float *a1, double a2, float a3, float a4, float32x2_t a5)
{
  float v5; // s0

  a5.n64_u32[0] = -2.0;
  *(float *)&a2 = a1[17] + -0.15;
  v5 = vmax_f32(*(float32x2_t *)&a2, a5).n64_f32[0];
  a1[17] = v5;
  a1[14] = a1[14] + a1[16];
  *(float *)&a2 = a1[15] + v5;
  a1[15] = *(float *)&a2;
  return *(float *)&a2;
}
