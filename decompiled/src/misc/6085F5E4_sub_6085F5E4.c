/* sub_6085F5E4
 * address: 0x6085F5E4   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085F5E4(int *a1, int a2)
{
  int v2; // r12
  int *v3; // r2
  int i; // r3
  int *v5; // lr
  int v6; // r0
  int v7; // t1
  int result; // r0
  int v9; // r4
  int j; // r5
  int v11; // r6
  int v12; // r7

  v2 = *a1;
  if ( *a1 >= 1 )
  {
    v3 = a1 + 1;
    for ( i = 0; i < v2; ++i )
    {
      v5 = v3;
      v7 = *v3++;
      v6 = v7;
      if ( v7 )
      {
        v3 = v5 + 2;
        if ( v6 == 24 )
        {
          result = v5[1];
          LOBYTE(v9) = 1;
          for ( j = 0; j < 24; ++j )
          {
            v11 = v3[j];
            v12 = *(_DWORD *)(a2 + 4 * j);
            v9 = (unsigned __int8)v9 & (v12 == v11);
            if ( v12 != v11 )
              break;
          }
          if ( v9 )
            return result;
          v3 = v5 + 26;
        }
      }
    }
  }
  return -1;
}
