/* sub_608B822C
 * address: 0x608B822C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B822C(int result, unsigned int a2, int a3, float a4)
{
  unsigned int v5; // r5
  int v7; // r6
  int v8; // r7
  bool v9; // zf

  v5 = a2;
  v7 = result;
  if ( a2 )
  {
    v8 = 61;
    do
    {
      v9 = (v5 & 1) == 0;
      if ( (v5 & 1) != 0 )
      {
        result = *(_DWORD *)(v7 + 4 * v8);
        v9 = result == 0;
      }
      if ( !v9 )
        result = sub_608BBAE0(result, a3, a4);
      if ( !(v5 >> 1) )
        break;
      result = v8 - 60;
      ++v8;
      v5 >>= 1;
    }
    while ( result < 16 );
  }
  return result;
}
