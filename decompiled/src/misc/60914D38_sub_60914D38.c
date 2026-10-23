/* sub_60914D38
 * address: 0x60914D38   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60914D38(int *a1, int a2)
{
  int v4; // r7
  int v5; // r0
  _DWORD *v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r4
  int v10; // r3
  int v11; // r0
  int result; // r0

  v4 = 0;
  v5 = *a1;
  if ( (*(_BYTE *)(FIELD_U32(v5, 8) + 120) & 1) != 0 )
  {
    v4 = v5 + 32;
    sead__CriticalSection__lock(v5 + 32);
  }
  v6 = a1 + 70;
  v7 = a1[70];
  if ( v7 )
  {
    v8 = 0;
    v9 = a1[70];
    while ( 1 )
    {
      v10 = v9;
      if ( v9 == a2 )
        break;
      v9 = FIELD_U32(v9, 24);
      v8 = v10;
      if ( !v9 )
        goto LABEL_11;
    }
    if ( v8 )
    {
      v7 = a2;
      v6 = (_DWORD *)(v8 + 24);
    }
    *v6 = FIELD_U32(v7, 24);
  }
LABEL_11:
  v11 = sub_60913FB4(a2);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1[1] + 28))(a1[1], v11 + 0x100000);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1[1] + 72))(a1[1]);
  if ( result == 1 )
    result = sub_60914E10(*a1, a1);
  if ( v4 )
    return sead__CriticalSection__unlock(v4);
  return result;
}
