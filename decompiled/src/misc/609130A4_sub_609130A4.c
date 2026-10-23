/* sub_609130A4
 * address: 0x609130A4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609130A4(int a1)
{
  _DWORD *v1; // r5
  _DWORD *result; // r0
  int v4; // r1
  bool v5; // zf
  int v6; // r6

  result = *(_DWORD **)(a1 + 4);
  v4 = result[11];
  v5 = v4 == 0;
  if ( v4 )
  {
    v1 = (_DWORD *)result[10];
    v5 = v1 == result + 9;
  }
  if ( !v5 )
  {
    v6 = result[12];
    result = (_DWORD *)((char *)v1 - v6);
    do
    {
      (*(void (__fastcall **)(_DWORD *))(*result + 52))(result);
      v1 = (_DWORD *)v1[1];
      result = (_DWORD *)((char *)v1 - v6);
    }
    while ( (_DWORD *)((char *)v1 - v6) != (_DWORD *)(FIELD_U32(a1, 4) + 36 - *(_DWORD *)(FIELD_U32(a1, 4) + 48)) );
  }
  return result;
}
