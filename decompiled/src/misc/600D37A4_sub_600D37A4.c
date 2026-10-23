/* sub_600D37A4
 * address: 0x600D37A4   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D37A4(int a1, int a2)
{
  int v4; // r4
  int v5; // r5
  unsigned int v6; // r0
  bool v7; // zf
  _DWORD *v8; // r0
  int v9; // r6
  int result; // r0
  sead_ListNode *v11; // r9
  int v12; // r8
  sead_ListNode *v13; // r7
  sead_ListNode **p_next; // r1
  float v15; // s16
  int v16; // r0
  int ActorSlotChecked; // r0
  int v18; // r7
  int v19; // [sp+0h] [bp-48h]
  sead_ListNode **v20; // [sp+4h] [bp-44h]
  _BYTE *v21; // [sp+8h] [bp-40h]
  int *v22; // [sp+Ch] [bp-3Ch]
  sead_ListNode *v23; // [sp+10h] [bp-38h]
  int *v24; // [sp+14h] [bp-34h]

  v4 = 0;
  v5 = 0;
  v6 = FIELD_U16(PlayerMgr_instance, 66);
  v7 = (v6 & 1) == 0;
  if ( (v6 & 1) == 0 )
  {
    v4 = (v6 >> 1) & 1;
    v7 = (unsigned __int8)(v6 & 2) >> 1 == 0;
  }
  if ( v7 )
  {
    if ( (v6 & 4) != 0 )
    {
      v4 = 2;
    }
    else if ( (v6 & 8) != 0 )
    {
      v4 = 3;
    }
  }
  v8 = *(_DWORD **)(a1 + 6260);
  v24 = (int *)(a1 + 6256);
  v23 = (sead_ListNode *)(a1 + 6248);
  if ( v8 )
  {
    v5 = FIELD_U32(a1, 6260);
    FIELD_U32(a1, 6260) = *v8;
  }
  v22 = (int *)(a1 + 6260);
  *(_DWORD *)v5 = 0;
  FIELD_U32(v5, 4) = 0;
  FIELD_U32(v5, 8) = 0;
  sead__ListNode__insertFront(v23, (sead_ListNode *)(v5 + 4));
  v9 = v4 + 1;
  ++*v24;
  result = 6133;
  *(_DWORD *)v5 = v4;
  FIELD_U8(a1, 6133) = 1;
  v21 = (_BYTE *)(a1 + 6133);
  if ( v4 + 1 <= 3 )
  {
    v19 = a2;
    v20 = (sead_ListNode **)(a1 + 6252);
    v11 = (sead_ListNode *)(a1 + 6244);
    do
    {
      result = PlayerMgr_instance;
      if ( (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v9)) != 0 )
      {
        result = Player_getActorSlotChecked(PlayerMgr_instance, v9);
        if ( result )
        {
          ++*v21;
          v13 = *v20;
          p_next = &(*v20)[-1].next;
          if ( p_next != (sead_ListNode **)v11 )
          {
            v15 = FIELD_F32(result, 108);
            if ( !a2 )
            {
              while ( 1 )
              {
                ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, *p_next);
                if ( ActorSlotChecked )
                {
                  if ( v15 > FIELD_F32(ActorSlotChecked, 108) )
                    goto LABEL_8;
                }
                v13 = FIELD_U32(v13, 0x4);
                p_next = &v13[-1].next;
                if ( &v13[-1].next == (sead_ListNode **)v11 )
                  goto LABEL_26;
              }
            }
            if ( a2 == 1 )
            {
              while ( 1 )
              {
                v16 = Player_getActorSlotChecked(PlayerMgr_instance, *p_next);
                if ( v16 )
                {
                  if ( v15 < FIELD_F32(v16, 108) )
                    break;
                }
                v13 = FIELD_U32(v13, 0x4);
                p_next = &v13[-1].next;
                if ( &v13[-1].next == (sead_ListNode **)v11 )
                  goto LABEL_26;
              }
LABEL_8:
              v12 = *v22;
              if ( *v22 )
                *v22 = *(_DWORD *)v12;
              else
                v12 = 0;
              *(_DWORD *)v12 = 0;
              FIELD_U32(v12, 4) = 0;
              FIELD_U32(v12, 8) = 0;
              sead__ListNode__insertFront(v13, (sead_ListNode *)(v12 + 4));
              result = *v24 + 1;
              *v24 = result;
              *(_DWORD *)v12 = v9;
              a2 = v19;
              goto LABEL_30;
            }
            do
            {
              Player_getActorSlotChecked(PlayerMgr_instance, *p_next);
              v13 = FIELD_U32(v13, 0x4);
              p_next = &v13[-1].next;
            }
            while ( &v13[-1].next != (sead_ListNode **)v11 );
          }
LABEL_26:
          v18 = *v22;
          if ( *v22 )
            *v22 = *(_DWORD *)v18;
          else
            v18 = 0;
          *(_DWORD *)v18 = 0;
          FIELD_U32(v18, 4) = 0;
          FIELD_U32(v18, 8) = 0;
          sead__ListNode__insertFront(v23, (sead_ListNode *)(v18 + 4));
          result = *v24 + 1;
          *v24 = result;
          *(_DWORD *)v18 = v9;
        }
      }
LABEL_30:
      ++v9;
    }
    while ( v9 != 4 );
  }
  return result;
}
