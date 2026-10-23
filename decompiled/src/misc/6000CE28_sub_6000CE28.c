/* sub_6000CE28
 * address: 0x6000CE28   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6000CE28(int a1)
{
  float v1; // s2
  float v2; // s0
  float v3; // s0
  float result; // s0

  v1 = FIELD_F32(a1, 104);
  v2 = FIELD_F32(a1, 120);
  if ( v1 >= v2 )
  {
    v1 = v2 + -0.1;
    FIELD_F32(a1, 104) = v2 + -0.1;
  }
  v3 = v2 + -16.0;
  if ( v1 < v3 )
    FIELD_F32(a1, 104) = v3;
  result = FIELD_F32(a1, 116) + 16.0;
  FIELD_F32(a1, 100) = result;
  FIELD_U32(a1, 132) = 0;
  return result;
}
