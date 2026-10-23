/* sub_600A7890
 * address: 0x600A7890   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A7890(int a1)
{
  char v1; // r12
  int *v2; // r5
  int *v3; // r9
  __guard *v4; // r4
  int v5; // r1
  int v6; // r0
  sead_ListNode *v7; // r6
  int v8; // r5
  int v9; // r11
  int v10; // r0
  bool v11; // zf
  __guard *v12; // r8
  sead_ListNode *v13; // r0
  sead_ListNode *next; // r11
  sead_ListNode *v15; // r1
  int v16; // r7
  int ProfileId; // r0
  bool v18; // zf
  int v19; // r5
  int result; // r0
  int *v21; // [sp+8h] [bp-48h]
  int *v22; // [sp+Ch] [bp-44h]
  int v24; // [sp+28h] [bp-28h]

  v2 = *(int **)(ActorMgr__instance + 27180);
  v3 = *(int **)(ActorMgr__instance + 27172);
  if ( v3 != v2 )
  {
    v21 = *(int **)(ActorMgr__instance + 27180);
    v22 = (int *)(a1 + 8688);
    v24 = a1 + 8680;
    v4 = &dword_60C7B36C;
    while ( 1 )
    {
      v16 = *v3;
      if ( ((unsigned int)&dword_60C7B36C & ~(1611299468 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
      {
        Actor_RTTI = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C7B36C);
      }
      if ( !v16 || (**(int (__fastcall ***)(int, int *))v16)(v16, &Actor_RTTI) != 1 )
        goto LABEL_28;
      ProfileId = Actor__getProfileId((Actor *)v16);
      v18 = ProfileId == 712;
      if ( ProfileId == 712 )
        v18 = FIELD_U8(v16, 19) == 0;
      if ( !v18 )
        goto LABEL_28;
      v5 = FIELD_U8(v16, 23) & 0xF;
      if ( v5 >= *v22 )
        break;
      v6 = sub_608DE61C(v24, v5);
      if ( v6 )
      {
        v7 = (sead_ListNode *)(v6 - 664);
LABEL_12:
        v2 = v21;
        v4 = &dword_60C7B36C;
        if ( v7 )
        {
          if ( (int)v7[1].previous < (int)v7[2].next )
          {
            next = v7[1].next;
            if ( next )
              v7[1].next = FIELD_U32(next, 0x0);
            else
              next = 0;
            next[2].previous = 0;
            FIELD_U32(next, 0x4) = 0;
            next[1].previous = 0;
            FIELD_U32(next, 0x0) = 0;
            next[1].next = 0;
            sead__ListNode__insertFront(v7, (sead_ListNode *)((char *)next + 12));
            ++v7[1].previous;
            if ( next )
            {
              v15 = *(sead_ListNode **)(v16 + 84);
              FIELD_U32(next, 0x0) = *(sead_ListNode **)(v16 + 80);
              FIELD_U32(next, 0x4) = v15;
              next[1].previous = (sead_ListNode *)(5 * (FIELD_U32(v16, 20) & 0xF));
            }
          }
          FIELD_U8(v16, 19) = 1;
          v4 = &dword_60C7B36C;
        }
      }
LABEL_28:
      if ( ++v3 == v2 )
        goto LABEL_29;
    }
    v8 = 0;
    v9 = v5 + 1 - *v22;
    do
    {
      v10 = sub_600A9AF8(v24);
      v7 = (sead_ListNode *)v10;
      v11 = v10 == 0;
      if ( v10 )
      {
        v4 = *(__guard **)(v10 + 4);
        v11 = v4 == (__guard *)v10;
      }
      if ( !v11 )
      {
        do
        {
          v12 = (__guard *)v4[1];
          sead__ListNode__erase(v4);
          --v7[1].previous;
          *(v4 - 3) = (__guard)v7[1].next;
          v13 = (sead_ListNode *)(v4 - 3);
          v4 = v12;
          v7[1].next = v13;
        }
        while ( v12 != (__guard *)v7 );
      }
      ++v8;
    }
    while ( v8 != v9 );
    goto LABEL_12;
  }
LABEL_29:
  v19 = FIELD_U32(a1, 8684);
  result = a1 + 8680;
  if ( v19 != a1 + 8680 )
  {
    result = v19 - 664;
    do
    {
      sub_608DEA40(result, 12, sub_600A9C78);
      v19 = FIELD_U32(v19, 4);
      result = v19 - 664;
    }
    while ( v19 - 664 != a1 + 8016 );
  }
  return result;
}
