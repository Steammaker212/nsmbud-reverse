/* sub_60908CA8
 * address: 0x60908CA8   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60908CA8(_DWORD *a1)
{
  int v2; // r5
  int v3; // r8
  int v4; // r9
  _DWORD *v5; // r5
  int v6; // r6
  int v7; // r7
  char *v8; // r0
  int v9; // r0
  int result; // r0
  _DWORD *v11; // r6
  int v12; // r7

  v2 = a1[4];
  v3 = a1[68];
  (*(void (__fastcall **)(_DWORD *))(*a1 + 24))(a1);
  v4 = v2 & 1;
  sub_60909158(a1, v3, v4);
  v5 = (_DWORD *)a1[80];
  if ( v5 != a1 + 79 )
  {
    v6 = a1[82];
    v7 = 1;
    v8 = (char *)v5 - v6;
    do
    {
      v9 = (*(int (__fastcall **)(char *))(*(_DWORD *)v8 + 16))(v8);
      v5 = (_DWORD *)v5[1];
      v7 &= v9 ^ 1;
      v8 = (char *)v5 - v6;
    }
    while ( (char *)v5 - v6 != (char *)a1 - a1[82] + 316 );
    if ( !v7 )
      goto LABEL_7;
  }
  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 28))(a1) == 1 )
    result = a1[67] + 1;
  else
LABEL_7:
    result = 0;
  a1[67] = result;
  v11 = (_DWORD *)a1[84];
  if ( v11 != a1 + 83 )
  {
    v12 = a1[86];
    result = (int)v11 - v12;
    do
    {
      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)result + 16))(result, v3, v4);
      v11 = (_DWORD *)v11[1];
      result = (int)v11 - v12;
    }
    while ( (char *)v11 - v12 != (char *)a1 - a1[86] + 332 );
  }
  return result;
}
