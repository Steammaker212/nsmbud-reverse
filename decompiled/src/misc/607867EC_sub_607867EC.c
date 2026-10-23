/* sub_607867EC
 * address: 0x607867EC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607867EC(_DWORD *a1, int a2)
{
  int result; // r0
  int v4; // lr
  unsigned int v5; // r3
  _BYTE *v6; // r4
  int v7; // r5
  int v8; // r4

  result = 1;
  v4 = a1[21];
  if ( v4 < a2 )
    a2 = a1[21];
  if ( a2 >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = (_BYTE *)a1[18];
      if ( v4 > v5 )
      {
        v7 = a1[20];
        v8 = a1[19];
        if ( (int)(v5 + v7) >= v8 )
          v7 -= v8;
        v6 = (_BYTE *)(a1[18] + 4 * (v5 + v7));
      }
      if ( (*v6 & 0x10) == 0 )
        break;
      if ( (int)++v5 >= a2 )
        return result;
    }
    return 0;
  }
  return result;
}
