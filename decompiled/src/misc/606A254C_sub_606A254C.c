/* sub_606A254C
 * address: 0x606A254C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606A254C(int a1)
{
  float v1; // s0
  float v2; // s2
  float result; // s0
  float v4; // s2

  v1 = FIELD_F32(a1, 7964);
  if ( FIELD_U8(a1, 7989) )
  {
    v2 = v1 + FIELD_F32(a1, 7996);
    result = -96.0 - v1;
    FIELD_F32(a1, 112) = v2;
    FIELD_F32(a1, 496) = result;
  }
  else
  {
    v4 = v1 + FIELD_F32(a1, 7992);
    result = 96.0 - v1;
    FIELD_F32(a1, 108) = v4;
    FIELD_F32(a1, 492) = result;
  }
  return result;
}
