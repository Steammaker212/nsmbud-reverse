/* sub_6098E754
 * address: 0x6098E754   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6098E754(int a1, int a2, int a3)
{
  _DWORD *result; // r0
  _DWORD *v7; // r7
  _DWORD *v8; // r5

  result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
  v7 = result;
  if ( result )
  {
    v8 = 0;
    do
    {
      result = (_DWORD *)(*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 44))(a1, v8);
      if ( (result[4] & 3) > a3 )
      {
        result = (_DWORD *)(result[5] + 8 * a3);
        result[1] = a2;
      }
      v8 = (_DWORD *)((char *)v8 + 1);
    }
    while ( v7 != v8 );
  }
  return result;
}
