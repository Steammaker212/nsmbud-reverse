/* sub_609673FC
 * address: 0x609673FC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_609673FC(
        float *result,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        float a26,
        float a27,
        float a28)
{
  float v15; // s0
  float v16; // s0

  *result = -a26;
  result[1] = -a27;
  result[2] = -a28;
  v15 = sqrtf((float)((float)(a27 * a27) + (float)(a26 * a26)) + (float)(a28 * a28));
  if ( v15 > 0.0 )
  {
    v16 = 1.0 / v15;
    *result = v16 * *result;
    result[1] = v16 * result[1];
    result[2] = v16 * result[2];
  }
  return result;
}
