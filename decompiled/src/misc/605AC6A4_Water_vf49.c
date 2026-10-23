/* Water_vf49
 * address: 0x605AC6A4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall Water_vf49(int a1)
{
  float result; // s0
  int *v2; // r2

  if ( (FIELD_U8(a1, 21) & 4) != 0 )
  {
    FIELD_U32(a1, 116) = 1163575296;
    return 3500.0;
  }
  else if ( FIELD_U8(a1, 6894) )
  {
    FIELD_U32(a1, 116) = 1169915904;
    return 6000.0;
  }
  else
  {
    v2 = dword_605AC700;
    if ( !FIELD_U32(a1, 6836) )
      v2 = &dword_605AC700[1];
    result = *(float *)v2;
    FIELD_U32(a1, 116) = *v2;
  }
  return result;
}
