/* sub_608F764C
 * address: 0x608F764C   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F764C(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r8
  int v8; // r0
  unsigned int v9; // r6
  unsigned int v10; // r0
  unsigned int v11; // r1
  unsigned int v12; // r4
  int v13; // r2
  int v14; // r7
  unsigned int v15; // r4
  unsigned __int16 v16; // r0
  sead_ListNode *v17; // r1
  sead_ListNode *v18; // r0

  v6 = 0;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1) == 1 )
  {
    v6 = 0;
    v7 = 0;
    if ( (FIELD_U8(a1, 120) & 1) != 0 )
    {
      v7 = a1 + 84;
      sead__CriticalSection__lock(a1 + 84);
    }
    v8 = *(_DWORD *)(a2 - 4);
    v9 = v8 - 1;
    if ( (v8 & 1) == 0 )
      v9 = a2 - 16;
    v10 = (a3 + 3) & 0xFFFFFFFC;
    v11 = FIELD_U32(v9, 12);
    if ( v11 >= v10 )
    {
      if ( v11 == v10 )
      {
        v12 = v9;
      }
      else
      {
        v13 = FIELD_U16(v9, 10);
        v14 = 16 - v10 + v11 + v13;
        v15 = v11 - v10 + v13;
        if ( v15 > 0xF )
        {
          *(_DWORD *)(v15 + v9) = 0;
          v12 = v15 + v9;
          FIELD_U32(v12, 4) = 0;
          FIELD_U32(v12, 8) = 0;
          FIELD_U32(v12, 12) = 0;
          FIELD_U16(v12, 8) = FIELD_U16(a1, 122);
          FIELD_U32(v12, 12) = v10;
          v17 = (sead_ListNode *)(FIELD_U32(a1, 156) + v12);
          v18 = (sead_ListNode *)(a1 + 144);
          if ( FIELD_U32(a1, 80) == 1 )
            sead__ListNode__insertFront(v18, v17);
          else
            sub_608DE510((int)v18, v17);
          ++FIELD_U32(a1, 152);
          sead__ListNode__erase((_DWORD *)(FIELD_U32(a1, 156) + v9));
          --FIELD_U32(a1, 152);
          FIELD_U32(v9, 12) = v14 - 32;
          FIELD_U16(v9, 10) = 0;
          sub_608F7394(a1, v9);
        }
        else
        {
          v12 = v9;
          v16 = v11 - v10 + v13;
          FIELD_U16(v9, 10) = v16;
          if ( v16 )
            *(_DWORD *)(v9 + v16 + 12) = v9 + 1;
        }
      }
      v6 = v12 + FIELD_U16(v12, 10) + 16;
    }
    if ( v7 )
      sead__CriticalSection__unlock(v7);
  }
  return v6;
}
