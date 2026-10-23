/* sub_609598CC
 * address: 0x609598CC   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609598CC(_DWORD *a1, _DWORD *a2)
{
  int result; // r0
  int v4; // r3
  int v5; // r4
  _DWORD *v6; // r5
  int v7; // r7
  _DWORD *v8; // r6
  int v9; // r2
  bool v10; // zf

  result = 0;
  v4 = a1[65];
  if ( v4 == a2[65] )
  {
    result = 1;
    if ( v4 >= 1 )
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = &a2[4 * v5];
        v7 = *(_DWORD *)(*a2 + 64) + 120 * *((unsigned __int8 *)v6 + 16);
        v8 = &a1[4 * v5];
        v9 = *(_DWORD *)(*a1 + 64) + 120 * *((unsigned __int8 *)v8 + 16);
        v10 = v9 == v7;
        if ( v9 == v7 )
          v10 = v8[1] == v6[1];
        if ( !v10 )
          break;
        if ( ++v5 >= v4 )
          return result;
      }
      return 0;
    }
  }
  return result;
}
