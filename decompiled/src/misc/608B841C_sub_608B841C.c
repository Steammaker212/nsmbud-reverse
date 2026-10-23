/* sub_608B841C
 * address: 0x608B841C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B841C(int result, unsigned int a2)
{
  unsigned int v2; // r4
  int v3; // r5
  int v4; // r6
  bool v5; // zf

  v2 = a2;
  v3 = result;
  if ( a2 )
  {
    v4 = 61;
    do
    {
      v5 = (v2 & 1) == 0;
      if ( (v2 & 1) != 0 )
      {
        result = *(_DWORD *)(v3 + 4 * v4);
        v5 = result == 0;
      }
      if ( !v5 )
        result = sub_608BBB04(result, -1);
      if ( !(v2 >> 1) )
        break;
      result = v4 - 60;
      ++v4;
      v2 >>= 1;
    }
    while ( result < 16 );
  }
  return result;
}
