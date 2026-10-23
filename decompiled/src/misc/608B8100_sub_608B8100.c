/* sub_608B8100
 * address: 0x608B8100   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B8100(int result, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // r6
  int v7; // r7
  int v8; // r4
  bool v9; // zf

  v4 = a2;
  v7 = result;
  if ( a2 )
  {
    v8 = 61;
    do
    {
      v9 = (v4 & 1) == 0;
      if ( (v4 & 1) != 0 )
      {
        result = *(_DWORD *)(v7 + 4 * v8);
        v9 = result == 0;
      }
      if ( !v9 )
        result = sub_608BBA58(result, a3, a4);
      if ( !(v4 >> 1) )
        break;
      result = v8 - 60;
      ++v8;
      v4 >>= 1;
    }
    while ( result < 16 );
  }
  return result;
}
