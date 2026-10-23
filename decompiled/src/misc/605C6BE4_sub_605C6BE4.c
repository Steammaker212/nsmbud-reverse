/* sub_605C6BE4
 * address: 0x605C6BE4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605C6BE4(int a1, float *a2)
{
  float result; // s0

  result = FIELD_F32(a1, 6112) + 1.0;
  *a2 = result;
  a2[1] = result;
  a2[2] = result;
  return result;
}
