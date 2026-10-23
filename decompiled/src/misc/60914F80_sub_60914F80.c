/* sub_60914F80
 * address: 0x60914F80   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60914F80(_DWORD *a1)
{
  int v2; // r9
  _DWORD *v3; // r11
  int v4; // r4
  _DWORD *i; // r6
  int v6; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r8
  int v10; // r9
  int v11; // r12
  int v12; // r3
  int v13; // r2
  signed int v14; // r7
  unsigned int v15; // r1
  int v16; // r0
  __int64 v17; // r4
  bool v18; // cc
  _DWORD *v20; // [sp+0h] [bp-28h]

  v2 = 0;
  *a1 = off_60C5D4F4;
  a1[1] = off_60C5D508;
  v3 = a1 + 1;
  v4 = (int)(a1 + 8);
  if ( (*(_BYTE *)(a1[2] + 120) & 1) != 0 )
  {
    sead__CriticalSection__lock(v4);
    v2 = v4;
  }
  v20 = (_DWORD *)v4;
  for ( i = (_DWORD *)a1[6]; i; i = (_DWORD *)i[71] )
  {
    v6 = i[70];
    if ( v6 )
    {
      do
      {
        v7 = FIELD_U32(v6, 24);
        sub_60913BEC(v6);
        v6 = v7;
      }
      while ( v7 );
    }
    i[70] = 0;
    if ( (int)i[68] < 0 )
    {
      dword_60CC73E4(i + 4);
      i[68] &= ~0x80000000;
    }
    v8 = i[1];
    if ( v8 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 16))(v8);
      i[1] = 0;
    }
    if ( i[2] )
    {
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(*i + 8) + 28))(*(_DWORD *)(*i + 8));
      i[2] = 0;
    }
  }
  if ( v2 )
    sead__CriticalSection__unlock(v2);
  v9 = dword_60CCFC84;
  v10 = dword_60CCFC84 + 20;
  sead__CriticalSection__lock(dword_60CCFC84 + 20);
  v11 = FIELD_U32(v9, 56);
  if ( v11 >= 1 )
  {
    v12 = FIELD_U32(v9, 64);
    v13 = v11 - 1;
    v14 = 0;
    while ( 1 )
    {
      v15 = (v14 + v13) / 2;
      v16 = *(_DWORD *)(v12 + 4 * v15);
      LODWORD(v17) = (FIELD_U32(v16, 8) - (unsigned __int64)(unsigned int)a1[2]) >> 32;
      HIDWORD(v17) = FIELD_U32(v16, 8) - a1[2];
      if ( !v17 )
        break;
      if ( (int)v17 < 0 )
        v14 = v15 + 1;
      else
        v13 = v15 - 1;
      if ( v14 > v13 )
        goto LABEL_28;
    }
    v18 = v16 != 0;
    if ( v16 )
      v18 = v11 > v15;
    if ( v18 )
      sub_608DEB9C((int *)(v9 + 56), v15, 1, v12);
  }
LABEL_28:
  sead__CriticalSection__unlock(v10);
  sead__CriticalSection__dtor(v20);
  sead__IDisposer__dtor(v3);
  return a1;
}
