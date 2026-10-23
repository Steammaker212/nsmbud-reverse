/* sub_60958690
 * address: 0x60958690   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60958690(int a1, int a2, int a3, int a4)
{
  int v6; // r0
  int *v7; // r9
  _DWORD *v8; // r1
  int v9; // r7
  int v10; // r4
  _DWORD *v11; // r6

  v7 = (int *)(a1 + 4);
  v6 = FIELD_U32(a1, 4);
  if ( !v6 )
    return 0;
  v8 = *(_DWORD **)(a1 + 12);
  v9 = 0;
  v10 = 0;
  v11 = v8;
  do
  {
    while ( *v11 == a2 )
    {
      sub_608DEB9C(v7, v9, 1, a4);
      v6 = FIELD_U32(a1, 4);
      v8 = *(_DWORD **)(a1 + 12);
      ++v10;
      if ( v11 == &v8[v6] )
        return v10;
    }
    ++v11;
    ++v9;
  }
  while ( v11 != &v8[v6] );
  return v10;
}
