/* sub_6000E3E0
 * address: 0x6000E3E0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6000E3E0(int a1)
{
  float v1; // s2
  float v2; // s0
  float result; // s0

  v1 = FIELD_F32(a1, 104);
  v2 = FIELD_F32(a1, 120);
  if ( v1 >= v2 )
  {
    v1 = v2 + -0.1;
    FIELD_F32(a1, 104) = v2 + -0.1;
  }
  if ( v1 < (float)(v2 + -16.0) )
  {
    FIELD_F32(a1, 104) = v2 + -16.0;
    v1 = v2 + -16.0;
  }
  result = v2 - v1;
  FIELD_F32(a1, 100) = (float)(FIELD_F32(a1, 116) + 8.0) + (float)(result * 0.5);
  FIELD_U32(a1, 132) = -1825361100;
  return result;
}
