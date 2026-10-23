/* sub_607DB840
 * address: 0x607DB840   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DB840(unsigned int a1)
{
  int v2; // r7
  _DWORD *v3; // r4
  int v4; // r6
  int v5; // r0
  _BOOL4 v6; // r0
  int v7; // r10
  int v8; // r4
  _DWORD *v9; // r9
  int v10; // r6
  int v11; // r11
  int v12; // r7
  _DWORD *v13; // r8
  _DWORD *v14; // r0
  _BOOL4 v16; // [sp+4h] [bp-34h]

  sub_6045962C();
  sead__CriticalSection__lock(a1 + 14048);
  v2 = FIELD_U32(a1, 204);
  if ( v2 != a1 + 200 )
  {
    v3 = (_DWORD *)(v2 - 100);
    v4 = FIELD_U32(a1, 204);
    do
    {
      v5 = v3[22];
      v2 = FIELD_U32(v2, 4);
      v3[22] = v5 - 1;
      if ( v5 <= 0 )
      {
        sub_607DAD48(v3 + 19);
        sead__ListNode__erase(v4);
        --FIELD_U32(a1, 208);
        *v3 = FIELD_U32(a1, 212);
        FIELD_U32(a1, 212) = v3;
      }
      v3 = (_DWORD *)(v2 - 100);
      v4 = v2;
    }
    while ( v2 - 100 != a1 + 100 );
  }
  sead__CriticalSection__unlock(a1 + 14048);
  if ( dword_60C9CF18 )
    v6 = FIELD_U8(dword_60C9CF18, 2597) != 0;
  else
    v6 = 0;
  v16 = v6;
  v7 = a1 + 16692;
  sead__CriticalSection__lock(a1 + 16692);
  v9 = (_DWORD *)(a1 + 16568);
  v8 = FIELD_U32(a1, 16568);
  v10 = FIELD_U32(a1, 16560);
  if ( v10 != a1 + 16556 )
  {
    v11 = a1 + 16556 - v8;
    v12 = v10 - v8;
    v13 = (_DWORD *)(a1 + 16564);
    do
    {
      v10 = FIELD_U32(v10, 4);
      if ( !FIELD_U8(v12, 460) )
      {
        a1 = a1 & 0xFFFFFF00 | 4;
        sub_607DD620(v12, a1, v16);
      }
      if ( FIELD_U32(v12, 16) == 6 )
      {
        sub_607DD4B4(v12);
        sead__CriticalSection__lock(v7);
        FIELD_U32(v12, 12) = 0;
        v14 = (_DWORD *)(*v9 + v12);
        if ( v14[1] || *v14 )
        {
          sead__ListNode__erase(v14);
          --*v13;
        }
        sead__CriticalSection__unlock(v7);
      }
      else
      {
        sub_607DCFD8(v12);
      }
      v12 = v10 - v8;
    }
    while ( v10 - v8 != v11 );
  }
  return sead__CriticalSection__unlock(v7);
}
