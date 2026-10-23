/* sub_609094C4
 * address: 0x609094C4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609094C4(int result, int a2, char a3, char a4)
{
  int v4; // r12
  int i; // lr
  int v6; // r4

  v4 = FIELD_U32(result, 252);
  if ( v4 >= 1 )
  {
    for ( i = 0; i < v4; ++i )
    {
      if ( (a2 & (1 << i)) != 0 )
      {
        v6 = result + i;
        FIELD_U8(v6, 172) = a3;
        FIELD_U8(v6, 204) = a4;
        v4 = FIELD_U32(result, 252);
      }
    }
  }
  return result;
}
