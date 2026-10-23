/* sub_60249298
 * address: 0x60249298   size: 748   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60249298(StateActor *a1)
{
  _BYTE *v2; // r6
  int v3; // r5
  float v4; // r9
  float v5; // r10
  float v6; // r11
  int next_low; // r5
  _BYTE *v8; // r0
  ActiveCollider *v9; // r0
  float v10; // r9
  float v11; // r11
  float v12; // r10
  int v13; // r0
  _BYTE *v14; // r0
  _BYTE *v15; // r1
  signed int result; // r0
  ActiveColliderMgr *v17; // r6
  ActorBuildInfo v18; // [sp+8h] [bp-50h] BYREF

  a1[1]._._.aCollider.createNode.next = (ActiveColliderNode *)LODWORD(FIELD_U32(a1, 0x0)._.position.x);
  a1[1]._._.aCollider.createNode.prev = (ActiveColliderNode *)LODWORD(FIELD_U32(a1, 0x0)._.position.y);
  a1[1]._._.aCollider.node3.owner = (ActiveCollider *)LODWORD(FIELD_U32(a1, 0x0)._.position.z);
  FIELD_U32(a1, 0x0)._.position.y = (float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108)) + -16.0;
  obj_balloon_ref(a1);
  sub_60249794(a1);
  BYTE1(a1[1]._._.aCollider.node3.prev) = 0;
  v2 = (char *)&a1[1]._._.aCollider.node3.prev + 1;
  v3 = FIELD_U32(a1, 0x0)._._.settings1 & 3;
  if ( v3 == 2 )
  {
    v4 = *(float *)&a1[1]._._.aCollider.createNode.owner;
    v5 = *(float *)&a1[1]._._.aCollider.activeNode.prev;
    v6 = *(float *)&a1[1]._._.aCollider.activeNode.next;
    next_low = LOBYTE(a1[1]._._.aCollider.node3.next);
    memset(&v18.settings2, 0, 36);
    v18.settings1 = next_low;
    v18.profile = Profile__get(0x1A4u);
    v18.parentId = FIELD_U32(a1, 0x0)._._.id;
    v18.position.x = v6;
    v18.position.y = v5;
    v18.position.z = v4;
    v18.field_20 = FIELD_U32(a1, 0x0)._.field_56;
    v18.movementId = 0;
    v18.linkId = FIELD_U32(a1, 0x0)._._.linkId;
    v18.eventId1 = 0;
    v18.eventId2 = 0;
    v18.field_28 = 0;
    v8 = ActorMgr__create((void *)ActorMgr__instance, &v18, 0);
    if ( v8 )
    {
      v9 = *((ActiveCollider **)v8 + 2);
      goto LABEL_9;
    }
  }
  else
  {
    v10 = *(float *)&a1[1]._._.aCollider.activeNode.prev;
    v11 = *(float *)&a1[1]._._.aCollider.node3.owner;
    v12 = *(float *)&a1[1]._._.aCollider.activeNode.next;
    memset(&v18.settings2, 0, 36);
    v13 = 536870919;
    if ( !v3 )
      v13 = 7;
    v18.settings1 = v13;
    v18.profile = Profile__get(0x1D3u);
    v18.parentId = FIELD_U32(a1, 0x0)._._.id;
    v18.position.x = v12;
    v18.position.y = v10;
    v18.position.z = v11;
    v18.field_20 = FIELD_U32(a1, 0x0)._.field_56;
    v18.movementId = 0;
    v18.linkId = FIELD_U32(a1, 0x0)._._.linkId;
    v18.eventId1 = 0;
    v18.eventId2 = 0;
    v18.field_28 = FIELD_U32(a1, 0x0)._.field_278;
    v14 = ActorMgr__create((void *)ActorMgr__instance, &v18, 0);
    if ( v14 )
    {
      v9 = *((ActiveCollider **)v14 + 2);
      goto LABEL_9;
    }
  }
  *v2 = 1;
  v9 = 0;
LABEL_9:
  a1[1]._._.aCollider.node4.owner = v9;
  FIELD_U32(a1, 0x0)._.position.z = 2200.0;
  if ( *v2 )
  {
    v15 = (_BYTE *)FIELD_U32(a1, 0x0)._.field_278;
    result = 2;
    if ( v15 )
      *v15 = 1;
  }
  else
  {
    LOBYTE(v18.settings1) = 3;
    ActiveCollider_init2(&FIELD_U32(a1, 0x0)._.aCollider, a1, (ActiveColliderInfo *)&unk_60BD9ED4, (unsigned __int8 *)&v18, 0);
    FIELD_U32(a1, 0x0)._.aCollider.field_70 = (int)&a1[1]._._.aCollider.node4.next;
    v17 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(a1, 0x0)._.aCollider)
      && !ActiveColliderMgr_isInCreateList(v17, &FIELD_U32(a1, 0x0)._.aCollider) )
    {
      ActiveColliderMgr_addToCreateList(v17, &FIELD_U32(a1, 0x0)._.aCollider);
    }
    FIELD_U32(a1, 0x0)._.field_1EC = 0.0;
    FIELD_U32(a1, 0x0)._.field_1F0 = 0;
    FIELD_U32(a1, 0x0)._.field_1F4 = 64.0;
    FIELD_U32(a1, 0x0)._.field_1F8 = 256.0;
    FIELD_U32(a1, 0x0)._.field_1FC = 64.0;
    FIELD_U32(a1, 0x0)._.field_200 = 1115684864;
    (*(void (__fastcall **)(StateActor *, int *))(FIELD_U32(a1, 0x0)._._.vtable + 192))(a1, &dword_60C8DC8C);
    return 1;
  }
  return result;
}
