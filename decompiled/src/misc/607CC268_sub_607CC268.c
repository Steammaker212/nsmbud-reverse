/* sub_607CC268
 * address: 0x607CC268   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607CC268(int a1)
{
  int v2; // r0
  float result; // s0
  float v4; // s0
  int *v5; // r1

  v2 = sub_607D6C28(a1);
  if ( v2 )
  {
    result = FIELD_F32(v2, 116);
    FIELD_F32(a1, 116) = result;
  }
  else
  {
    if ( (FIELD_U8(a1, 87) & 1) != 0 )
    {
      v5 = dword_607CC2D0;
      if ( !FIELD_U8(a1, 86) )
        v5 = &dword_607CC2D0[1];
      v4 = *(float *)v5;
    }
    else
    {
      v4 = -2900.0;
    }
    result = v4 - (float)(32 * FIELD_U8(a1, 1312));
    FIELD_F32(a1, 116) = result;
  }
  return result;
}
