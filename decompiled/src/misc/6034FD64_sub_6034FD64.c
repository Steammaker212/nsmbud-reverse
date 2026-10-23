/* sub_6034FD64
 * address: 0x6034FD64   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034FD64(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int result; // r0
  bool v7; // zf
  _BYTE *v8; // r1

  v2 = *(_DWORD **)(a1 + 6304);
  v3 = (_DWORD *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  result = sub_60418548(*v3 + 4);
  v7 = result == 0;
  v8 = (_BYTE *)(a1 + 6398);
  if ( !result )
  {
    result = (unsigned __int8)*v8;
    v7 = result == 0;
  }
  if ( !v7 )
  {
    *v8 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 648))(a1);
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
