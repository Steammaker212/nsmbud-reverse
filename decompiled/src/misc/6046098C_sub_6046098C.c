/* sub_6046098C
 * address: 0x6046098C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6046098C(int a1)
{
  float result; // s0
  int *v2; // r2

  if ( FIELD_U8(a1, 86) == 1 )
  {
    FIELD_U32(a1, 116) = -987594752;
    return -2600.0;
  }
  else
  {
    v2 = dword_604609C8;
    if ( FIELD_U32(a1, 6168) == 5 )
      v2 = &dword_604609C8[1];
    result = *(float *)v2;
    FIELD_U32(a1, 116) = *v2;
  }
  return result;
}
