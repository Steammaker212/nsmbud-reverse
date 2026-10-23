/* sub_60193608
 * address: 0x60193608   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60193608(int a1, float a2, float a3, float a4, float a5)
{
  float *result; // r0

  result = (float *)(a1 + 4);
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  result[3] = a5;
  return result;
}
