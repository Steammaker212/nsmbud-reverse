/* sub_60748F80
 * address: 0x60748F80   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60748F80(int a1, float *a2)
{
  float v2; // s0
  float v3; // s4
  float result; // s0

  v2 = FIELD_F32(a1, 688);
  v3 = v2 + 1.0;
  result = 1.0 - v2;
  *a2 = v3;
  a2[1] = result;
  a2[2] = v3;
  return result;
}
