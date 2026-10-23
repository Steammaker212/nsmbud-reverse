/* sub_608CADA8
 * address: 0x608CADA8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CADA8(int result, char a2)
{
  int v2; // lr
  _BYTE *v3; // r4
  int v4; // r3

  v2 = FIELD_U32(result, 400);
  if ( v2 >= 1 )
  {
    if ( (v2 & 3) != 0 )
    {
      v3 = (_BYTE *)(result + 126);
      v4 = 0;
      do
      {
        ++v4;
        *v3 = a2;
        v3 += 200;
      }
      while ( (v2 & 3) != v4 );
    }
    else
    {
      v4 = 0;
    }
    if ( (unsigned int)(v2 - 1) >= 3 )
    {
      result += 200 * v4 + 526;
      do
      {
        v4 += 4;
        *(_BYTE *)(result - 400) = a2;
        *(_BYTE *)(result - 200) = a2;
        *(_BYTE *)result = a2;
        FIELD_U8(result, 200) = a2;
        result += 800;
      }
      while ( v4 < v2 );
    }
  }
  return result;
}
