/* sub_608813D8
 * address: 0x608813D8   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608813D8(int *a1, _DWORD *a2)
{
  _DWORD *v2; // r8
  _DWORD *v4; // r9
  int v5; // r0
  int i; // r5
  _DWORD *v7; // r6
  _DWORD *v8; // r7
  int v9; // r0

  v2 = a2;
  while ( v2 )
  {
    v4 = v2;
    v5 = v2[6];
    v2 = (_DWORD *)v2[30];
    if ( v5 == a1[8] && v4[33] )
    {
      for ( i = 0; i != 16; ++i )
      {
        v7 = (_DWORD *)v4[i + 192];
        while ( v7 )
        {
          v8 = v7;
          v9 = v7[6];
          v7 = (_DWORD *)v7[30];
          if ( v9 == a1[8] && v8[33] )
          {
            sub_6088077C(v8, *a1, 1);
            sub_6088FC88(a1[6], v8);
          }
        }
      }
      sub_6088077C(v4, *a1, 1);
      sub_6088FC88(a1[6], v4);
    }
  }
  return 1;
}
