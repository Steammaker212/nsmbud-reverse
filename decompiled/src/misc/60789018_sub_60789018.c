/* sub_60789018
 * address: 0x60789018   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60789018(_DWORD *a1, int a2)
{
  int result; // r0
  int v4; // r12
  int v5; // r5
  int v6; // r3
  int v7; // r4
  int v8; // r6
  int v9; // r6
  bool v10; // vf
  int v11; // r3

  result = 0;
  v4 = a1[20];
  if ( v4 <= 3 )
  {
    if ( v4 )
    {
      v5 = a1[20];
      v6 = a1[18];
      v7 = a1[19];
      while ( 1 )
      {
        v8 = a1[18];
        if ( v7 < v6 )
          v8 = 0;
        if ( *(_DWORD *)(a1[17] - 4 * v8 + 4 * v7) == a2 )
          break;
        ++v7;
        if ( !--v5 )
          goto LABEL_11;
      }
    }
    else
    {
      v6 = a1[18];
LABEL_11:
      result = 1;
      if ( v4 < v6 )
      {
        a1[20] = v4 + 1;
        v9 = a1[19] + v4;
        v10 = __OFSUB__(v9, v6);
        v11 = v9 - v6;
        if ( v11 < 0 != v10 )
          v11 = a1[19] + v4;
        *(_DWORD *)(a1[17] + 4 * v11) = a2;
      }
    }
  }
  return result;
}
