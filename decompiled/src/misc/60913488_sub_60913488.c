/* sub_60913488
 * address: 0x60913488   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913488(int result, int a2, int a3)
{
  int i; // r3
  int v4; // lr
  int v5; // r12
  int v6; // r3
  _BYTE *v7; // r2
  _BYTE *v8; // r4

  if ( a3 >= 1 )
  {
    for ( i = 0; (a3 & 3) != i; ++i )
      *(_BYTE *)(result + i) = *(_BYTE *)(a2 + i);
    if ( (unsigned int)(a3 - 1) >= 3 )
    {
      v4 = a2 + i;
      result += i;
      v5 = i - a3;
      v6 = 0;
      do
      {
        v7 = (_BYTE *)(v4 + v6);
        *(_BYTE *)(result + v6) = *(_BYTE *)(v4 + v6);
        v8 = (_BYTE *)(result + v6);
        v6 += 4;
        v8[1] = v7[1];
        v8[2] = v7[2];
        v8[3] = v7[3];
      }
      while ( v5 + v6 );
    }
  }
  return result;
}
