/* sub_605988CC
 * address: 0x605988CC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605988CC(int a1)
{
  float result; // s0
  float v3; // s0
  float v4; // s4
  float v5; // s6

  if ( (FIELD_U8(a1, 6262) & 8) != 0 )
  {
    v3 = sub_6059BB74(a1 + 8036);
    v4 = FIELD_F32(a1, 148);
    FIELD_U32(a1, 572) = 0;
    result = v3 * 20.0;
    v5 = (float)(result * v4) + 8.0;
    FIELD_F32(a1, 576) = v5;
    FIELD_U32(a1, 580) = 0;
    FIELD_U32(a1, 492) = 0;
    FIELD_F32(a1, 496) = v5;
  }
  else
  {
    sub_605D83EC(a1);
  }
  return result;
}
