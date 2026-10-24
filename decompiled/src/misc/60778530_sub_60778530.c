/* sub_60778530
 * address: 0x60778530   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60778530(sead_ListNode *a1, sead_ListNode *a2)
{
  int result; // r0
  sead_ListNode *next; // r6
  sead_ListNode **p_next; // r7
  float v7; // s16
  sead_ListNode **v8; // r1
  int ActorSlotChecked; // r0
  int v10; // r0
  sead_ListNode *v11; // r1
  sead_ListNode *v12; // r5
  sead_ListNode *v13; // r1
  sead_ListNode *v14; // r0
  sead_ListNode *v15; // r1
  sead_ListNode *v16; // r4
  int v17; // r5
  int v18; // r0

  result = Player_getActorSlotChecked(PlayerMgr_instance, a2);
  if ( !result )
    return result;
  next = FIELD_U32(a1 + (17) * 8, 0x4);
  p_next = &FIELD_U32(a1 + (16) * 8, 0x4);
  if ( next != &a1[17] )
  {
    v7 = FIELD_F32(result, 9768);
    v8 = &next[-1].next;
    if ( FIELD_U8(result, 9816) )
    {
      while ( 1 )
      {
        ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, *v8);
        if ( ActorSlotChecked )
        {
          if ( v7 > FIELD_F32(ActorSlotChecked, 9768) || !FIELD_U8(ActorSlotChecked, 9816) )
            break;
        }
        next = FIELD_U32(next, 0x4);
        v8 = &next[-1].next;
        if ( &next[-1].next == p_next )
          goto LABEL_13;
      }
    }
    else
    {
      while ( 1 )
      {
        v10 = Player_getActorSlotChecked(PlayerMgr_instance, *v8);
        if ( v10 )
        {
          if ( v7 > FIELD_F32(v10, 9768) && !FIELD_U8(v10, 9816) )
            break;
        }
        next = FIELD_U32(next, 0x4);
        v8 = &next[-1].next;
        if ( &next[-1].next == p_next )
          goto LABEL_13;
      }
    }
    if ( (int)FIELD_U32(a1 + (18) * 8, 0x0) >= (int)FIELD_U32(a1 + (19) * 8, 0x4) )
      goto LABEL_23;
    v15 = FIELD_U32(a1 + (18) * 8, 0x4);
    v12 = 0;
    if ( v15 )
    {
      v12 = FIELD_U32(a1 + (18) * 8, 0x4);
      FIELD_U32(a1 + (18) * 8, 0x4) = FIELD_U32(v15, 0x0);
    }
    FIELD_U32(v12, 0x0) = 0;
    FIELD_U32(v12, 0x4) = 0;
    v13 = (sead_ListNode *)&FIELD_U32(v12, 0x4);
    FIELD_U32(v12 + (1) * 8, 0x0) = 0;
    v14 = next;
    goto LABEL_21;
  }
LABEL_13:
  if ( (int)FIELD_U32(a1 + (18) * 8, 0x0) < (int)FIELD_U32(a1 + (19) * 8, 0x4) )
  {
    v11 = FIELD_U32(a1 + (18) * 8, 0x4);
    v12 = 0;
    if ( v11 )
    {
      v12 = FIELD_U32(a1 + (18) * 8, 0x4);
      FIELD_U32(a1 + (18) * 8, 0x4) = FIELD_U32(v11, 0x0);
    }
    FIELD_U32(v12, 0x0) = 0;
    FIELD_U32(v12, 0x4) = 0;
    v13 = (sead_ListNode *)&FIELD_U32(v12, 0x4);
    FIELD_U32(v12 + (1) * 8, 0x0) = 0;
    v14 = a1 + 17;
LABEL_21:
    sead__ListNode__insertFront(v14, v13);
    ++FIELD_U32(a1 + (18) * 8, 0x0);
    if ( v12 )
      FIELD_U32(v12, 0x0) = a2;
  }
LABEL_23:
  v16 = FIELD_U32(a1 + (17) * 8, 0x4);
  result = (int)&v16[-1].next;
  if ( &v16[-1].next != p_next )
  {
    v17 = 0;
    do
    {
      v18 = Player_getActorSlotChecked(PlayerMgr_instance, *(_DWORD *)result);
      if ( v18 )
        FIELD_U32(v18, 9780) = v17++;
      v16 = FIELD_U32(v16, 0x4);
      result = (int)&v16[-1].next;
    }
    while ( &v16[-1].next != p_next );
  }
  return result;
}
