/* sub_605D796C
 * address: 0x605D796C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605D796C(int a1, float result)
{
  float v2; // s0
  int *v3; // r2

  if ( FIELD_S32(a1, 6264) >= 0 )
  {
    if ( (FIELD_U8(a1, 87) & 1) != 0 )
    {
      v3 = dword_605D79C8;
      if ( !FIELD_U8(a1, 86) )
        v3 = &dword_605D79C8[1];
      v2 = *(float *)v3;
    }
    else
    {
      v2 = -2850.0;
    }
    result = v2 + (float)((float)FIELD_U32(a1, 6800) * 16.0);
    FIELD_F32(a1, 116) = result;
  }
  return result;
}
