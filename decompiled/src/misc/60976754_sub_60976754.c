/* sub_60976754
 * address: 0x60976754   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60976754(int a1, _DWORD *a2)
{
  int v4; // r0
  int *v5; // r7
  int v6; // r5
  int v7; // r4
  int v8; // r6
  int v9; // t1
  int v10; // r6
  _DWORD *v11; // r0

  v4 = FIELD_U32(a1, 2356);
  if ( v4 )
  {
    v5 = *(int **)(a1 + 2364);
    v6 = 4 * v4;
    v7 = 0x7FFFFFFF;
    do
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)*v5 + 76))(*v5);
      v8 = *(_DWORD *)(*v5 + 96);
      sub_609729B4(*(_DWORD **)(*v5 + 132), a1, v8, a2);
      v9 = *v5++;
      sub_609729B4(*(_DWORD **)(v9 + 136), a1, v8 - 1, a2);
      if ( v8 < v7 )
        v7 = v8;
      v6 -= 4;
    }
    while ( v6 );
    v10 = v7 - 1;
  }
  else
  {
    v10 = 2147483646;
  }
  sub_609729B4(*(_DWORD **)(a1 + 2372), a1, 0x7FFFFFFF, a2);
  v11 = *(_DWORD **)(a1 + 2372);
  if ( FIELD_U32(a1, 2368) > 1u )
    v11 += 7;
  return sub_609729B4(v11, a1, v10, a2);
}
