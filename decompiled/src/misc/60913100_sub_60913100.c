/* sub_60913100
 * address: 0x60913100   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60913100(int a1, int a2)
{
  _DWORD *v2; // r6
  _DWORD *result; // r0
  int v6; // r1
  bool v7; // zf
  int v8; // r7

  result = *(_DWORD **)(a1 + 4);
  v6 = result[11];
  v7 = v6 == 0;
  if ( v6 )
  {
    v2 = (_DWORD *)result[10];
    v7 = v2 == result + 9;
  }
  if ( !v7 )
  {
    v8 = result[12];
    result = (_DWORD *)((char *)v2 - v8);
    do
    {
      (*(void (__fastcall **)(_DWORD *, int))(*result + 56))(result, a2);
      v2 = (_DWORD *)v2[1];
      result = (_DWORD *)((char *)v2 - v8);
    }
    while ( (_DWORD *)((char *)v2 - v8) != (_DWORD *)(FIELD_U32(a1, 4) + 36 - *(_DWORD *)(FIELD_U32(a1, 4) + 48)) );
  }
  return result;
}
