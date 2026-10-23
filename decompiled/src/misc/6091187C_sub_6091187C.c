/* sub_6091187C
 * address: 0x6091187C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091187C(int a1, int a2, int a3)
{
  _DWORD *v4; // r2
  unsigned int v5; // r3
  unsigned int v6; // r4
  int result; // r0
  int v8; // r5

  v4 = *(_DWORD **)(FIELD_U32(a1, 12) + 16 * FIELD_U32(a1, 16));
  v5 = *(_DWORD *)(FIELD_U32(a1, 12) + 16 * FIELD_U32(a1, 16) + 8);
  v6 = (8 * *v4) | 4;
  result = 0;
  if ( v6 < v5 )
  {
    while ( 1 )
    {
      v8 = *((unsigned __int8 *)v4 + v6);
      if ( *(_DWORD *)((char *)v4 + v8 + v6 + 1) == a2 )
        break;
      v6 += v8 + 5;
      if ( v6 >= v5 )
        return result;
    }
    sub_60913488(a3, (char *)v4 + v6 + 1, *((unsigned __int8 *)v4 + v6));
    *(_BYTE *)(a3 + v8) = 0;
    return 1;
  }
  return result;
}
