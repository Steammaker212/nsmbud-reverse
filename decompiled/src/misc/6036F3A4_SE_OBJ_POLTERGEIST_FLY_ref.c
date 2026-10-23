/* SE_OBJ_POLTERGEIST_FLY_ref
 * address: 0x6036F3A4   size: 1024   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_OBJ_POLTERGEIST_FLY_ref(Enemy *a1)
{
  StateMgr *p_manager; // r8
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r6
  StateBase *v13; // r0
  int v14; // r6
  StateBase *v15; // r0
  int v16; // r6
  StateBase *v17; // r0
  int v18; // r6
  float y; // r1
  int id; // r6
  int v21; // r7
  StateBase *v22; // r0
  int v23; // r5
  StateBase *v24; // r0
  int v25; // r5
  StateBase *v26; // r0
  int v27; // r5
  StateBase *v28; // r0
  int v29; // r5
  StateBase *v30; // r0
  int v31; // r5
  StateBase *v32; // r0
  int v33; // r5
  float z; // s0
  float v35; // s2
  LightSource *v36; // r4
  Vec3 position; // [sp+14h] [bp-2Ch] BYREF
  Vec2 out; // [sp+20h] [bp-20h] BYREF

  ActorScaler_execute((ActorScaler *)&a1[1]._._.collisionMgr[32]);
  Animation_update(**(_DWORD **)(a1[1]._._._._.heap + 12));
  Animation_update(**(_DWORD **)(a1[1]._._._._.heap + 28));
  p_manager = &FIELD_U32(a1, 0x0).states.manager;
  StateMgr__execute(&FIELD_U32(a1, 0x0).states.manager);
  CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C95F20 + 8))() )
    goto LABEL_9;
  v5 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
  if ( v6 == (*(int (**)(void))(dword_60C95F00 + 8))() )
    goto LABEL_9;
  v7 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  if ( v8 == (*(int (**)(void))(dword_60C95F20 + 8))() )
    goto LABEL_9;
  v9 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
  if ( v10 == (*(int (**)(void))(dword_60C95F40 + 8))() )
    goto LABEL_9;
  v11 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
  v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
  if ( v12 == (*(int (**)(void))(dword_60C95F60 + 8))()
    || (v13 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager),
        v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13),
        v14 == (*(int (**)(void))(dword_60C95F80 + 8))())
    || (v15 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager),
        v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15),
        v16 == (*(int (**)(void))(dword_60C95FA0 + 8))())
    || (v17 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager),
        v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17),
        v18 == (*(int (**)(void))(dword_60C95FC0 + 8))()) )
  {
LABEL_9:
    y = FIELD_U32(a1, 0x0)._._.position.y;
    id = FIELD_U32(a1, 0x0)._._._.id;
    v21 = Global_BasicSoundActor2;
    position.x = FIELD_U32(a1, 0x0)._._.position.x;
    position.y = y;
    mapPositionToScreen(&out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v21, "SE_OBJ_POLTERGEIST_FLY", id, &out, 0);
  }
  sub_6036F208((ModelWrapper **)a1);
  StageActor__cullCheck(&FIELD_U32(a1, 0x0)._._, 0);
  v22 = StateMgr__getCurrentState(p_manager);
  v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v22, 0x0) + 2))(v22);
  if ( v23 == (*(int (**)(void))(dword_60C95F20 + 8))() )
    goto LABEL_16;
  v24 = StateMgr__getCurrentState(p_manager);
  v25 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v24, 0x0) + 2))(v24);
  if ( v25 == (*(int (**)(void))(dword_60C95F40 + 8))() )
    goto LABEL_16;
  v26 = StateMgr__getCurrentState(p_manager);
  v27 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v26, 0x0) + 2))(v26);
  if ( v27 == (*(int (**)(void))(dword_60C95F60 + 8))()
    || (v28 = StateMgr__getCurrentState(p_manager),
        v29 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v28, 0x0) + 2))(v28),
        v29 == (*(int (**)(void))(dword_60C95F80 + 8))())
    || (v30 = StateMgr__getCurrentState(p_manager),
        v31 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v30, 0x0) + 2))(v30),
        v31 == (*(int (**)(void))(dword_60C95FA0 + 8))())
    || (v32 = StateMgr__getCurrentState(p_manager),
        v33 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v32, 0x0) + 2))(v32),
        v33 == (*(int (**)(void))(dword_60C95FC0 + 8))()) )
  {
LABEL_16:
    position.x = FIELD_U32(a1, 0x0)._._.position.x + FIELD_U32(a1, 0x0)._._.effectOffset.x;
    position.y = FIELD_U32(a1, 0x0)._._.position.y + FIELD_U32(a1, 0x0)._._.effectOffset.y;
    z = FIELD_U32(a1, 0x0)._._.position.z;
    v35 = FIELD_U32(a1, 0x0)._._.effectOffset.z;
    v36 = (LightSource *)&a1[1]._._._.field_5C;
    position.z = z + v35;
    LightSource_update1(v36, 15, &position, 0, 0, 0, 0, 0, 0);
    LightSource_unkUpdate3(v36);
  }
  return 1;
}
