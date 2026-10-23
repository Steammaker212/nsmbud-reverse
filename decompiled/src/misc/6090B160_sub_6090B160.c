/* sub_6090B160
 * address: 0x6090B160   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090B160(float *a1, float *a2)
{
  float result; // s0

  *a1 = *a2 + *a1;
  a1[1] = a2[1] + a1[1];
  a1[2] = a2[2] + a1[2];
  result = a2[3] + a1[3];
  a1[3] = result;
  return result;
}
