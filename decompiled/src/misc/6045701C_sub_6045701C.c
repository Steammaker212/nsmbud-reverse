/* sub_6045701C
 * address: 0x6045701C   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6045701C(_DWORD *a1)
{
  _DWORD *v1; // r7
  int v3; // r0
  bool v4; // zf
  _DWORD *v5; // r5
  _DWORD *v6; // r6
  int v7; // r0
  bool v8; // zf
  _DWORD *v9; // r5
  _DWORD *v10; // r6
  _DWORD *v11; // r7
  _DWORD *v12; // r5
  _DWORD *v13; // r6
  _DWORD *v14; // r7
  _DWORD *v15; // r5
  _DWORD *v16; // r6

  v3 = a1[51];
  v4 = v3 == 0;
  if ( v3 )
  {
    v1 = (_DWORD *)a1[50];
    v4 = v1 == a1 + 49;
  }
  if ( !v4 )
  {
    v5 = v1 - 7;
    v6 = v1;
    do
    {
      v1 = (_DWORD *)v1[1];
      if ( ((float (__fastcall *)(_DWORD *))loc_60456A10)(v5) < 0.0 )
      {
        sead__ListNode__erase(v6);
        --a1[51];
        *v5 = a1[52];
        a1[52] = v5;
      }
      v5 = v1 - 7;
      v6 = v1;
    }
    while ( v1 - 7 != a1 + 42 );
  }
  v7 = a1[201];
  v8 = v7 == 0;
  if ( v7 )
  {
    v1 = (_DWORD *)a1[200];
    v8 = v1 == a1 + 199;
  }
  if ( !v8 )
  {
    v9 = v1 - 7;
    v10 = v1;
    do
    {
      v1 = (_DWORD *)v1[1];
      if ( ((float (__fastcall *)(_DWORD *))loc_60456A10)(v9) < 0.0 )
      {
        sead__ListNode__erase(v10);
        --a1[201];
        *v9 = a1[202];
        a1[202] = v9;
      }
      v9 = v1 - 7;
      v10 = v1;
    }
    while ( v1 - 7 != a1 + 192 );
  }
  if ( a1[351] )
  {
    v11 = (_DWORD *)a1[350];
    if ( v11 != a1 + 349 )
    {
      v12 = v11 - 7;
      v13 = (_DWORD *)a1[350];
      do
      {
        v11 = (_DWORD *)v11[1];
        if ( ((float (__fastcall *)(_DWORD *))loc_60456A10)(v12) < 0.0 )
        {
          sead__ListNode__erase(v13);
          --a1[351];
          *v12 = a1[352];
          a1[352] = v12;
        }
        v12 = v11 - 7;
        v13 = v11;
      }
      while ( v11 - 7 != a1 + 342 );
    }
  }
  if ( a1[501] )
  {
    v14 = (_DWORD *)a1[500];
    if ( v14 != a1 + 499 )
    {
      v15 = v14 - 7;
      v16 = (_DWORD *)a1[500];
      do
      {
        v14 = (_DWORD *)v14[1];
        if ( ((float (__fastcall *)(_DWORD *))loc_60456A10)(v15) < 0.0 )
        {
          sead__ListNode__erase(v16);
          --a1[501];
          *v15 = a1[502];
          a1[502] = v15;
        }
        v15 = v14 - 7;
        v16 = v14;
      }
      while ( v14 - 7 != a1 + 492 );
    }
  }
}
