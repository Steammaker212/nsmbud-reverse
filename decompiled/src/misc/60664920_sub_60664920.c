/* sub_60664920
 * address: 0x60664920   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60664920(float *a1)
{
  float result; // s0

  result = (float)(a1[1813] + (float)(a1[28] - a1[1789])) / 160.0;
  a1[1798] = result;
  return result;
}
