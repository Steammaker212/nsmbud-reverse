/* sub_609981B8
 * address: 0x609981B8   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609981B8(int a1, int a2, int a3, int a4)
{
  _DWORD *v7; // r7
  _DWORD *result; // r0
  _DWORD *v9; // r4
  int v10; // r1

  v7 = 0;
  sub_6098E0F8(a3, a4);
  result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a2 + 40))(a2);
  v9 = result;
  if ( result )
  {
    do
    {
      result = (_DWORD *)(*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)a2 + 44))(a2, v7);
      v10 = FIELD_S8(a1, 422);
      if ( v10 < (result[4] & 3) )
      {
        result = (_DWORD *)(result[5] + 8 * v10);
        result[1] = a3;
      }
      v7 = (_DWORD *)((char *)v7 + 1);
    }
    while ( v9 != v7 );
  }
  return result;
}
