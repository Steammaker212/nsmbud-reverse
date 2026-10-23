/* sub_608F69BC
 * address: 0x608F69BC   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F69BC(int a1, unsigned int a2)
{
  int result; // r0
  int v5; // r1
  int v6; // r11
  int v7; // r2
  int v8; // r5
  int v9; // r3
  int v10; // r7
  int v11; // r8
  unsigned int v12; // r4
  unsigned int v13; // r4
  int v14; // r5
  bool v15; // cf
  int v16; // r6
  int v17; // r5
  int v18; // r4
  int v19; // r7
  bool v20; // zf
  unsigned int v21; // r11
  sead_ListNode *v22; // r1
  sead_ListNode *v23; // r0
  int v24; // r1
  _DWORD *v25; // r1
  int v26; // r2
  sead_ListNode *v27; // r0
  sead_ListNode *v28; // r1
  int v29; // [sp+0h] [bp-28h]

  result = 0;
  v5 = FIELD_U32(a1, 132);
  v6 = a1 + 128;
  if ( v5 != a1 + 128 )
  {
    v7 = FIELD_U32(a1, 140);
    v8 = FIELD_U8(a1, 124);
    v9 = v6 - v7;
    v10 = v5 - v7;
    if ( FIELD_U8(a1, 124) )
    {
      v11 = 0;
      if ( v8 == 1 )
      {
        do
        {
          v13 = FIELD_U32(v10, 12);
          if ( v13 >= a2 )
          {
            if ( v11 )
            {
              if ( FIELD_U32(v11, 12) > v13 )
                v11 = v10;
            }
            else
            {
              v11 = v10;
            }
          }
          v5 = FIELD_U32(v5, 4);
          v10 = v5 - v7;
        }
        while ( v5 - v7 != v9 );
      }
      else if ( v8 == 2 )
      {
        do
        {
          v12 = FIELD_U32(v10, 12);
          if ( v12 >= a2 )
          {
            if ( v11 )
            {
              if ( FIELD_U32(v11, 12) < v12 )
                v11 = v10;
            }
            else
            {
              v11 = v10;
            }
          }
          v5 = FIELD_U32(v5, 4);
          v10 = v5 - v7;
        }
        while ( v5 - v7 != v9 );
      }
      else
      {
        do
        {
          v14 = v11;
          v5 = FIELD_U32(v5, 4);
          if ( !v11 )
            v14 = v10;
          v15 = FIELD_U32(v10, 12) >= a2;
          v10 = v5 - v7;
          if ( v15 )
            v11 = v14;
        }
        while ( v10 != v9 );
      }
    }
    else
    {
      v11 = v5 - v7;
      while ( FIELD_U32(v11, 12) < a2 )
      {
        v5 = FIELD_U32(v5, 4);
        v11 = v5 - v7;
        if ( v5 - v7 == v9 )
          return result;
      }
    }
    if ( v11 )
    {
      v29 = FIELD_U16(v11, 10);
      v16 = FIELD_U32(v11, 12);
      FIELD_U32(v11, 12) = a2;
      v17 = FIELD_U32(a1, 140);
      v18 = *(_DWORD *)(v17 + v11 + 4);
      sead__ListNode__erase((_DWORD *)(v17 + v11));
      v19 = v18 - v17;
      v20 = v18 == v6;
      v21 = v16 - a2;
      if ( v20 )
        v19 = 0;
      --FIELD_U32(a1, 136);
      v22 = (sead_ListNode *)(FIELD_U32(a1, 156) + v11);
      v23 = (sead_ListNode *)(a1 + 144);
      if ( FIELD_U32(a1, 80) == 1 )
        sead__ListNode__insertFront(v23, v22);
      else
        sub_608DE510((int)v23, v22);
      ++FIELD_U32(a1, 152);
      if ( v21 < 0x11 )
      {
        if ( v21 )
          FIELD_U32(v11, 12) = v16;
      }
      else
      {
        v24 = a2 + v11 + v29;
        FIELD_U32(v24, 16) = 0;
        v25 = (_DWORD *)(v24 + 16);
        v25[1] = 0;
        v25[2] = 0;
        v25[3] = 0;
        v25[3] = v21 - 16;
        *((_WORD *)v25 + 4) = -1;
        v26 = FIELD_U32(a1, 140);
        if ( v19 )
        {
          v27 = (sead_ListNode *)(v26 + v19);
          v28 = (sead_ListNode *)((char *)v25 + v26);
        }
        else
        {
          v28 = (sead_ListNode *)((char *)v25 + v26);
          v27 = (sead_ListNode *)(a1 + 128);
        }
        sead__ListNode__insertFront(v27, v28);
        ++FIELD_U32(a1, 136);
      }
      return v11;
    }
  }
  return result;
}
