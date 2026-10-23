/* sub_60387944
 * address: 0x60387944   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60387944(int a1)
{
  int v1; // r1
  float result; // s0

  v1 = FIELD_U32(a1, 436);
  result = (float)(FIELD_F32(a1, 76) + 0.0) - FIELD_F32(v1, 112);
  FIELD_F32(a1, 248) = (float)(FIELD_F32(a1, 72) + 0.0) - FIELD_F32(v1, 108);
  FIELD_F32(a1, 252) = result;
  FIELD_U32(a1, 256) = 1090519040;
  FIELD_U32(a1, 260) = 1090519040;
  return result;
}
