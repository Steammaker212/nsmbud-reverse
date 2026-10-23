/* KoopaTroopa_onCreate
 * address: 0x60359D98   size: 892   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall KoopaTroopa_onCreate(Enemy *a1)
{
  char *v2; // r9
  int ProfileId; // r0
  float v4; // s0
  float v5; // s2
  int *v6; // r2
  bool v7; // zf
  int *v8; // r0
  int v9; // r7
  ActiveColliderMgr *v10; // r6
  int v11; // r1
  int v12; // r0
  ActiveColliderNode *v13; // s2
  StateBase *CurrentState; // r0
  int v15; // r6
  float v16; // s0
  StateBase *v17; // r0
  int v18; // r5
  float v19; // s2
  int v20; // r0
  _DWORD *v21; // r0

  KoopaTroopa_onCreate_helper(a1);
  v2 = &a1[1]._._.collisionMgr[528];
  FIELD_F32(a1, 0x90) = 1.0;
  FIELD_F32(a1, 0x94) = 1.0;
  FIELD_F32(a1, 0x98) = 1.0;
  FIELD_F32(a1, 0x23C) = 0.0;
  FIELD_F32(a1, 0x240) = 1.0 * 8.0;
  FIELD_F32(a1, 0x244) = 0.0;
  FIELD_F32(a1, 0x1EC) = 0.0;
  *(float *)&FIELD_U32(a1, 0x1F0) = 1.0 * 16.0;
  ProfileId = Actor__getProfileId(&FIELD_U32(a1, 0x0));
  if ( ProfileId == 513 )
  {
    v4 = 1200.0;
    v5 = 160.0;
  }
  else
  {
    v6 = &dword_6035A124;
    v7 = ProfileId == 512;
    v8 = &dword_6035A12C;
    if ( v7 )
    {
      v6 = &dword_6035A128;
      v8 = &dword_6035A130;
    }
    v4 = *(float *)v8;
    v5 = *(float *)v6;
  }
  FIELD_F32(a1, 0x1F4) = v5;
  FIELD_F32(a1, 0x1F8) = v4;
  sub_600009FC(&FIELD_U32(a1, 0x0));
  FIELD_U32(a1, 0x1804) |= 0x10000u;
  *(float *)&a1[1]._._._.field_220 = sub_60007178(dword_60C7B3F8) + -2200.0;
  EnemyFreezeMgr_setFlags(&FIELD_U32(a1, 0x1808), (EnemyFreezeMgr_Flags *)((char *)&dword_60C95550 + 3 * *(_DWORD *)v2 + 16));
  v9 = (unsigned __int8)FIELD_U8(a1, 0x56);
  ActiveCollider_init3(
    &FIELD_U32(a1, 0xBC),
    (StateActor *)a1,
    (ActiveColliderInfo *)&unk_60BEF2A8,
    &FIELD_U8(a1, 0x57),
    v9,
    (int)&a1[1]._._._.aCollider.createNode);
  ActiveCollider_init3(
    (ActiveCollider *)&a1[1]._._._.profileFlags,
    (StateActor *)a1,
    (ActiveColliderInfo *)&unk_60BEF2D4,
    &FIELD_U8(a1, 0x57),
    v9,
    (int)&a1[1]._._._.aCollider.createNode);
  v10 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(a1, 0xBC))
    && !ActiveColliderMgr_isInCreateList(v10, &FIELD_U32(a1, 0xBC)) )
  {
    ActiveColliderMgr_addToCreateList(v10, &FIELD_U32(a1, 0xBC));
  }
  if ( a1[1]._._._._.field_34
    && !ActiveColliderMgr_isInActiveList(v10, (ActiveCollider *)&a1[1]._._._.profileFlags)
    && !ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)&a1[1]._._._.profileFlags) )
  {
    ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)&a1[1]._._._.profileFlags);
  }
  v11 = 2;
  v12 = 0;
  if ( !a1[1]._._._._.field_34 )
  {
    v11 = 3;
    v12 = 1;
  }
  if ( *(_DWORD *)v2 == 1 )
    v12 = v11;
  CollisionMgr_init(
    (CollisionMgr *)FIELD_U8(a1, 0x288),
    (StateActor *)a1,
    (CollisionMgr_Sensor *)((char *)&unk_60AFFF48 + 4 * (v12 | (8 * v12))),
    (CollisionMgr_Sensor *)((char *)&unk_60AFFF48 + 4 * (v12 | (8 * v12)) + 12),
    (CollisionMgr_Sensor *)((char *)&unk_60AFFF48 + 4 * (v12 | (8 * v12)) + 24));
  *(_DWORD *)&FIELD_U8(a1, 0x288)[2552] |= 0x20000u;
  (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0) + 0x340))(a1);// KoopaTroopa_decideFirstState
  *(double *)&a1[1]._._._.aCollider.node3.owner = ((double (__fastcall *)(ActiveColliderNode **))a1[1]._._._.aCollider.createNode.prev->owner)(&a1[1]._._._.aCollider.createNode.prev);
  a1[1]._._._.aCollider.node3.prev = v13;
  CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
  v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v15 == (*((int (**)(void))KoopaTroopa_StateID_BlockAppear._.vtable + 2))() )
  {
    v16 = -2500.0;
  }
  else
  {
    v17 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
    v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
    if ( v18 == (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
      goto LABEL_25;
    if ( FIELD_U8(a1, 0x56) )
      v19 = -2500.0;
    else
      v19 = 1500.0;
    v16 = *(float *)&a1[1]._._._.field_220 + v19;
  }
  FIELD_F32(a1, 0x74) = v16;
LABEL_25:
  KoopaTroopa_onCreate_helper_35A5CC((int)a1);
  v20 = a1[1]._._._.field_224;
  if ( v20 == 1 )
  {
    v21 = (_DWORD *)(EnemyCounterMaybe_instance + 196);
    goto LABEL_29;
  }
  if ( !v20 )
  {
    v21 = (_DWORD *)(EnemyCounterMaybe_instance + 192);
LABEL_29:
    ++*v21;
  }
  return 1;
}
