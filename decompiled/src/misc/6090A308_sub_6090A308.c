/* sub_6090A308
 * address: 0x6090A308   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090A308(float *a1, float *a2, float *a3)
{
  float v3; // s10
  float v4; // s8
  float v5; // s12
  float result; // s0

  v3 = a3[1];
  v4 = *a3;
  v5 = a3[2];
  *a2 = a1[4] + (float)((float)((float)(v3 * a1[2]) + (float)(*a3 * a1[1])) + (float)(v5 * a1[3]));
  a2[1] = a1[8] + (float)((float)((float)(v3 * a1[6]) + (float)(v4 * a1[5])) + (float)(v5 * a1[7]));
  result = a1[12] + (float)((float)((float)(v3 * a1[10]) + (float)(v4 * a1[9])) + (float)(v5 * a1[11]));
  a2[2] = result;
  return result;
}
