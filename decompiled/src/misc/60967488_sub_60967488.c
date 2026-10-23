/* sub_60967488
 * address: 0x60967488   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60967488(
        float a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float *a10,
        int a11,
        int a12,
        int a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        float a21,
        float a22,
        float a23,
        float a24,
        float a25,
        float a26,
        float a27,
        float a28,
        float a29)
{
  float result; // s0

  result = (float)((float)-(float)(*(float *)&a13 * a21) - (float)(a24 * a25)) - (float)(a28 * a29);
  *a10 = (float)((float)-(float)(*(float *)&a11 * a21) - (float)(a22 * a25)) - (float)(a26 * a29);
  a10[1] = (float)((float)-(float)(*(float *)&a12 * a21) - (float)(a23 * a25)) - (float)(a27 * a29);
  a10[2] = result;
  return result;
}
