/* sub_608F1120
 * address: 0x608F1120   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F1120(_DWORD *a1)
{
  int v2; // r9
  _DWORD *v3; // r6
  _DWORD *v4; // r0
  _DWORD *v5; // r7
  _DWORD *v6; // r0
  _DWORD *v7; // r7
  _DWORD *v8; // r0
  _DWORD *v9; // r7
  _DWORD *v10; // r0
  _DWORD *v11; // r7
  int v12; // r1
  int v13; // r7
  int v14; // r0
  int v15; // r0
  _DWORD *v16; // r1

  v2 = (int)(a1 + 1);
  sead__CriticalSection__lock((int)(a1 + 1));
  v3 = (_DWORD *)a1[39];
  if ( v3 && sub_60907F94(*(_DWORD *)(a1[10] + 32) + 4) == 1 )
  {
    sub_608F0BE8((int)a1, v3);
    sead__CriticalSection__unlock(*(_DWORD *)(a1[10] + 32) + 4);
  }
  v4 = (_DWORD *)a1[14];
  if ( v4 != a1 + 13 )
  {
    do
    {
      v5 = (_DWORD *)v4[1];
      if ( v4[3] )
      {
        v4[3] = 0;
        sead__ListNode__erase(v4);
        --a1[15];
      }
      v4 = v5;
    }
    while ( v5 != a1 + 13 );
  }
  v6 = (_DWORD *)a1[20];
  if ( v6 != a1 + 19 )
  {
    do
    {
      v7 = (_DWORD *)v6[1];
      if ( v6[3] )
      {
        v6[3] = 0;
        sead__ListNode__erase(v6);
        --a1[21];
      }
      v6 = v7;
    }
    while ( v7 != a1 + 19 );
  }
  v8 = (_DWORD *)a1[26];
  if ( v8 != a1 + 25 )
  {
    do
    {
      v9 = (_DWORD *)v8[1];
      if ( v8[3] )
      {
        v8[3] = 0;
        sead__ListNode__erase(v8);
        --a1[27];
      }
      v8 = v9;
    }
    while ( v9 != a1 + 25 );
  }
  v10 = (_DWORD *)a1[29];
  if ( v10 != a1 + 28 )
  {
    do
    {
      v11 = (_DWORD *)v10[1];
      if ( v10[3] )
      {
        v10[3] = 0;
        sead__ListNode__erase(v10);
        --a1[30];
      }
      v10 = v11;
    }
    while ( v11 != a1 + 28 );
  }
  v12 = dword_60CCEEA4;
  if ( dword_60CCEEA4 >= 1 )
  {
    v13 = 0;
    do
    {
      v14 = a1[v13 + 31];
      if ( v14 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 44))(v14);
        v12 = dword_60CCEEA4;
      }
      ++v13;
    }
    while ( v13 < v12 );
  }
  sub_608EFA68(a1);
  a1[39] = 0;
  a1[70] = 1;
  a1[67] = a1 + 39;
  a1[65] = 0;
  sead__CriticalSection__lock(v2);
  v15 = a1[65];
  v16 = a1 + 40;
  if ( v15 )
    sub_608EC97C(v15, v16);
  else
    sub_608F0894((int)a1, v16, 0);
  sead__CriticalSection__unlock(v2);
  return sead__CriticalSection__unlock(v2);
}
