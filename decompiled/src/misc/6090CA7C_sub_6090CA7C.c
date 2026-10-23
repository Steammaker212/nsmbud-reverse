/* sub_6090CA7C
 * address: 0x6090CA7C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090CA7C(float *a1, float *a2, float *a3)
{
  float result; // s0

  *a2 = (float)((float)(*a3 * (float)(a1[42] - a1[41])) * 0.5) + (float)((float)(a1[42] + a1[41]) * 0.5);
  a2[1] = (float)((float)(a3[1] * (float)(a1[39] - a1[40])) * 0.5) + (float)((float)(a1[39] + a1[40]) * 0.5);
  result = -a1[37];
  a2[2] = result;
  return result;
}
