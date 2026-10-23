/* sub_607A1DF4
 * address: 0x607A1DF4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607A1DF4(int a1, int a2)
{
  float v2; // s0
  float v3; // s2
  float v4; // s4
  float v5; // s8
  float v6; // s6
  float result; // s0

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 11396);
  v5 = FIELD_F32(a1, 12000);
  v6 = FIELD_F32(a1, 11392);
  FIELD_U32(a2, 8) = FIELD_U32(a1, 116);
  *(float *)a2 = v3 + v6;
  result = (float)((float)(v2 + v4) + v5) + -4.0;
  FIELD_F32(a2, 4) = result;
  return result;
}
