/* sub_608B83C4
 * address: 0x608B83C4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B83C4(int result, unsigned int a2, int a3)
{
  unsigned int v3; // r5
  int v5; // r6
  int v6; // r7
  bool v7; // zf

  v3 = a2;
  v5 = result;
  if ( a2 )
  {
    v6 = 61;
    do
    {
      v7 = (v3 & 1) == 0;
      if ( (v3 & 1) != 0 )
      {
        result = *(_DWORD *)(v5 + 4 * v6);
        v7 = result == 0;
      }
      if ( !v7 )
        result = sub_608BBB04(result, a3);
      if ( !(v3 >> 1) )
        break;
      result = v6 - 60;
      ++v6;
      v3 >>= 1;
    }
    while ( result < 16 );
  }
  return result;
}
