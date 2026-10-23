/* sub_6090CD04
 * address: 0x6090CD04   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090CD04(float *a1, float *a2)
{
  float result; // s0

  *a2 = (float)((float)(a1[42] + a1[41]) * 0.5) / (float)(a1[42] - a1[41]);
  result = (float)((float)(a1[39] + a1[40]) * 0.5) / (float)(a1[39] - a1[40]);
  a2[1] = result;
  return result;
}
