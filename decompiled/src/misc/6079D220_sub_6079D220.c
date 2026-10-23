/* sub_6079D220
 * address: 0x6079D220   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6079D220(float *a1)
{
  float v1; // r1
  float result; // s0

  v1 = a1[22];
  a1[30] = v1;
  a1[27] = a1[27] + v1;
  a1[28] = a1[28] + a1[31];
  result = a1[29] + a1[32];
  a1[29] = result;
  return result;
}
