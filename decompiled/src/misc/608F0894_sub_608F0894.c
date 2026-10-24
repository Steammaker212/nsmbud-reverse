/* sub_608F0894
 * address: 0x608F0894   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F0894(int a1, _DWORD *a2, int a3)
{
  int v6; // r9
  sead_ListNode *v7; // r4
  int v8; // r5
  sead_ListNode *next; // r0
  sead_ListNode *v10; // r6
  sead_ListNode *v11; // r8
  int v12; // r7
  int v13; // r4
  int v14; // r5
  int v15; // r4
  int v16; // r5

  v6 = a1 + 4;
  sead__CriticalSection__lock(a1 + 4);
  v7 = *(sead_ListNode **)(a1 + 148);
  v8 = 0;
  if ( (int)FIELD_U32(v7 + (1) * 8, 0x0) < (int)FIELD_U32(v7 + (2) * 8, 0x4) )
  {
    next = FIELD_U32(v7 + (1) * 8, 0x4);
    v10 = 0;
    v8 = 0;
    if ( next )
    {
      v10 = FIELD_U32(v7 + (1) * 8, 0x4);
      FIELD_U32(v7 + (1) * 8, 0x4) = FIELD_U32(next, 0x0);
    }
    FIELD_U32(v10, 0x0) = 0;
    sub_608EEFA8((int)&FIELD_U32(v10, 0x4));
    v11 = v10 + 17;
    FIELD_U32(v10 + (16) * 8, 0x4) = (sead_ListNode *)&off_60C5C6EC;
    FIELD_U32(v10 + (18) * 8, 0x0) = 0;
    FIELD_U32(v10 + (17) * 8, 0x4) = v10 + 17;
    FIELD_U32(v10 + (17) * 8, 0x0) = v10 + 17;
    FIELD_U32(v10 + (18) * 8, 0x4) = 0;
    FIELD_U32(v10 + (19) * 8, 0x0) = 0;
    sead__ListNode__insertFront(v7, (sead_ListNode *)((char *)v10 + 148));
    ++FIELD_U32(v7 + (1) * 8, 0x0);
    if ( v10 )
    {
      qmemcpy(&FIELD_U32(v10, 0x4), a2, 0x80u);
      v12 = a2[28];
      if ( a3 )
      {
        if ( FIELD_U8(a3, 56) )
        {
          v13 = FIELD_U32(a3, 28);
          if ( v13 )
          {
            FIELD_U32(a3, 28) = 0;
            sead__ListNode__erase((_DWORD *)(a3 + 16));
            --FIELD_U32(v13, 8);
          }
          FIELD_U8(a3, 56) = 0;
        }
        v14 = FIELD_U32(a3, 28);
        if ( v14 )
        {
          FIELD_U32(a3, 28) = 0;
          sead__ListNode__erase((_DWORD *)(a3 + 16));
          --FIELD_U32(v14, 8);
        }
        FIELD_U32(a3, 28) = v11;
        sead__ListNode__insertFront(v10 + 17, (sead_ListNode *)(a3 + 16));
        ++FIELD_U32(v10 + (18) * 8, 0x0);
        FIELD_U8(a3, 56) = 1;
      }
      if ( v12 )
      {
        if ( FIELD_U8(v12, 56) )
        {
          v15 = FIELD_U32(v12, 28);
          if ( v15 )
          {
            FIELD_U32(v12, 28) = 0;
            sead__ListNode__erase((_DWORD *)(v12 + 16));
            --FIELD_U32(v15, 8);
          }
          FIELD_U8(v12, 56) = 0;
        }
        v16 = FIELD_U32(v12, 28);
        if ( v16 )
        {
          FIELD_U32(v12, 28) = 0;
          sead__ListNode__erase((_DWORD *)(v12 + 16));
          --FIELD_U32(v16, 8);
        }
        FIELD_U32(v12, 28) = v11;
        sead__ListNode__insertFront(v10 + 17, (sead_ListNode *)(v12 + 16));
        v8 = 1;
        ++FIELD_U32(v10 + (18) * 8, 0x0);
        FIELD_U8(v12, 56) = 1;
      }
      else
      {
        v8 = 1;
      }
    }
  }
  sead__CriticalSection__unlock(v6);
  return v8;
}
