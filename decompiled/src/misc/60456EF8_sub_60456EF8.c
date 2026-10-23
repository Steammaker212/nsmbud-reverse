/* sub_60456EF8
 * address: 0x60456EF8   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60456EF8(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6
  _DWORD *v4; // r7
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  _DWORD *v7; // r7
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  _DWORD *v10; // r7
  _DWORD *v11; // r0
  _DWORD *v12; // r5
  int result; // r0
  _DWORD *v14; // r7

  v2 = (_DWORD *)a1[50];
  v3 = a1 + 49;
  if ( v2 != a1 + 49 )
  {
    do
    {
      v4 = (_DWORD *)v2[1];
      sead__ListNode__erase(v2);
      --a1[51];
      *(v2 - 7) = a1[52];
      v5 = v2 - 7;
      v2 = v4;
      a1[52] = v5;
    }
    while ( v4 != v3 );
  }
  v6 = (_DWORD *)a1[200];
  if ( v6 != a1 + 199 )
  {
    do
    {
      v7 = (_DWORD *)v6[1];
      sead__ListNode__erase(v6);
      --a1[201];
      *(v6 - 7) = a1[202];
      v8 = v6 - 7;
      v6 = v7;
      a1[202] = v8;
    }
    while ( v7 != a1 + 199 );
  }
  v9 = (_DWORD *)a1[350];
  if ( v9 != a1 + 349 )
  {
    do
    {
      v10 = (_DWORD *)v9[1];
      sead__ListNode__erase(v9);
      --a1[351];
      *(v9 - 7) = a1[352];
      v11 = v9 - 7;
      v9 = v10;
      a1[352] = v11;
    }
    while ( v10 != a1 + 349 );
  }
  v12 = (_DWORD *)a1[500];
  result = 1996;
  if ( v12 != a1 + 499 )
  {
    do
    {
      v14 = (_DWORD *)v12[1];
      sead__ListNode__erase(v12);
      --a1[501];
      *(v12 - 7) = a1[502];
      result = (int)(v12 - 7);
      v12 = v14;
      a1[502] = result;
    }
    while ( v14 != a1 + 499 );
  }
  return result;
}
