/* sub_605EF6A0
 * address: 0x605EF6A0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605EF6A0(int a1)
{
  float v1; // s2
  float result; // s0

  v1 = FIELD_F32(a1, 108) + -1.0;
  FIELD_F32(a1, 108) = v1;
  result = FIELD_F32(a1, 6844);
  if ( fabsf(result - v1) >= 80.0 )
  {
    result = result + -80.0;
    FIELD_F32(a1, 108) = result;
    FIELD_U8(a1, 6896) = 1;
  }
  return result;
}
