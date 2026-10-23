/* sub_606D9058
 * address: 0x606D9058   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606D9058(int a1, int a2)
{
  float v2; // s2
  int v3; // r1
  float v4; // s0
  float result; // s0

  FIELD_U8(a1, 6112) = FIELD_U8(a2, 1853);
  v2 = FIELD_F32(a2, 1848);
  v3 = FIELD_U32(a1, 6116);
  v4 = v2 * FIELD_F32(a1, 6104);
  if ( v3 == 2 )
  {
    result = v4 + FIELD_F32(a1, 6108);
    FIELD_F32(a1, 112) = result;
  }
  else if ( v3 == 1 )
  {
    result = FIELD_F32(a1, 6108) - v4;
    FIELD_F32(a1, 108) = result;
  }
  else if ( v3 )
  {
    result = FIELD_F32(a1, 6108) - v4;
    FIELD_F32(a1, 112) = result;
  }
  else
  {
    result = v4 + FIELD_F32(a1, 6108);
    FIELD_F32(a1, 108) = result;
  }
  return result;
}
