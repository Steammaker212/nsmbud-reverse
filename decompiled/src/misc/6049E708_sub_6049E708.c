/* sub_6049E708
 * address: 0x6049E708   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049E708(_DWORD *a1)
{
  int result; // r0
  int *v3; // r11
  unsigned int i; // r5
  unsigned int v5; // r1
  unsigned int v6; // r1
  _BYTE *v7; // r6

  a1[3241] = -1;
  a1[3240] = -1;
  a1[3239] = -1;
  a1[3238] = -1;
  a1[3237] = -1;
  a1[3236] = -1;
  a1[3235] = -1;
  a1[3234] = -1;
  v3 = a1 + 5624;
  result = a1[5624];
  if ( result >= 1 )
  {
    for ( i = 0; (int)i < result; ++i )
    {
      v5 = 0;
      if ( i < 4 )
        v5 = i;
      if ( *(_BYTE *)(a1[v5 + 5069] + 2689) )
      {
        v6 = 0;
        if ( i < 7 )
          v6 = i;
        v7 = (char *)a1 + v6 + 22388;
        if ( !*v7 )
        {
          if ( a1[v6 + 5590] == 1 )
            sub_604A1D14(a1, i);
          else
            sub_604A1C24(a1, i);
          *v7 = 1;
          result = *v3;
        }
      }
    }
  }
  return result;
}
