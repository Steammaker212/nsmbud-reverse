/* sub_607FA960
 * address: 0x607FA960   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FA960(int result, float *a2, int a3, int a4)
{
  float v4; // s0
  float v5; // s2

  if ( !a4 )
    a3 = result + 16;
  *a2 = 0.0;
  a2[1] = 0.0;
  if ( a4 )
  {
    v4 = (float)(FIELD_F32(a3, 52) + FIELD_F32(a3, 56)) * 0.5;
    v5 = (float)(FIELD_F32(a3, 44) + FIELD_F32(a3, 48)) * 0.5;
    if ( FIELD_U8(result, 16) )
    {
      *a2 = v5 - FIELD_F32(result, 20);
      a2[1] = v4 - FIELD_F32(result, 24);
    }
    FIELD_F32(result, 20) = v5;
    FIELD_F32(result, 24) = v4;
    FIELD_U8(result, 16) = a4;
  }
  else
  {
    *(_BYTE *)a3 = 0;
  }
  return result;
}
