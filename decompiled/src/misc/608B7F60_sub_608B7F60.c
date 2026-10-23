/* sub_608B7F60
 * address: 0x608B7F60   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608B7F60(int a1, int a2, int a3)
{
  float result; // s0

  if ( FIELD_U8(a1, 36) )
  {
    if ( a2 == 1 )
    {
      result = (float)a3 + FIELD_F32(a1, 208);
      FIELD_F32(a1, 208) = result;
    }
    else if ( !a2 )
    {
      FIELD_U32(a1, 204) += a3;
    }
  }
  return result;
}
