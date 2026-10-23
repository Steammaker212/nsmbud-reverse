/* sub_609127FC
 * address: 0x609127FC   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_609127FC(int a1, void (__fastcall ***a2)(_DWORD, _DWORD, int), _DWORD *a3, unsigned int a4)
{
  unsigned int v7; // r4
  void (__fastcall *v8)(_DWORD, _DWORD, int); // r9
  int v9; // r7
  unsigned int v10; // r0
  bool v11; // cc
  unsigned int v12; // r6
  _BYTE *result; // r0
  _BYTE *v14; // r1
  int v15; // r0
  int (__fastcall *v16)(_DWORD, _DWORD, unsigned int); // r4

  v7 = a3[2];
  v8 = **a2;
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v9 = a4;
  if ( v7 < a4 )
    v9 = v7;
  v8(a2, a3[1], v9);
  v10 = a3[2];
  v11 = a4 > v7;
  v12 = a4 - v7;
  if ( !v11 )
    v12 = 0;
  if ( v9 + 1 < v10 )
  {
    if ( (int)v10 <= v9 )
    {
      result = (_BYTE *)(*(int (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      if ( !v12 )
        return result;
    }
    else
    {
      result = (_BYTE *)a3[1];
      if ( v9 > 0 )
        result += v9;
      *result = 0;
      if ( !v12 )
        return result;
    }
LABEL_16:
    v16 = (int (__fastcall *)(_DWORD, _DWORD, unsigned int))**a2;
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    return (_BYTE *)v16(a2, a3[1], v12);
  }
  v14 = (_BYTE *)a3[1];
  v15 = v10 - 1;
  if ( v15 > 0 )
    v14 += v15;
  result = 0;
  *v14 = 0;
  if ( v12 )
    goto LABEL_16;
  return result;
}
