/* sub_6038B7D0
 * address: 0x6038B7D0   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038B7D0(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r6
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r0
  _DWORD *v14; // r0
  int v15; // r1
  int v16; // r0
  float v17; // r1
  int v18; // r6
  int v19; // r7
  int result; // r0
  int v21; // r6
  StateBase *v22; // r0
  int v23; // r4
  bool v24; // zf
  Vec2 out; // [sp+4h] [bp-34h] BYREF
  Vec3 position; // [sp+Ch] [bp-2Ch] BYREF

  FIELD_U32(a1, 144) = 1069547520;
  FIELD_U32(a1, 148) = 1069547520;
  FIELD_U32(a1, 152) = 1069547520;
  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  skl_root_ref_38B2A8(a1);
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    goto LABEL_11;
  v5 = StateMgr__getCurrentState(v2);
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
  if ( v6 == (*(int (**)(void))(dword_60C984E0 + 8))() )
    goto LABEL_11;
  v7 = StateMgr__getCurrentState(v2);
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  if ( v8 == (*(int (**)(void))(dword_60C98504 + 8))() )
    goto LABEL_11;
  v9 = FIELD_U32(a1, 8224);
  v10 = v9 - 1;
  FIELD_U32(a1, 8224) = v9 - 1;
  if ( v9 == 1 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98504);
  }
  else
  {
    if ( v9 != 181 )
      goto LABEL_9;
    v11 = FIELD_U32(a1, 6300);
    v12 = FIELD_U32(a1, 6308);
    LODWORD(position.x) = &sead__SafeStringBase__vtable;
    LODWORD(position.y) = "switching";
    TexAnim_play(v12, v11, &position);
    AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6308) + 4), 0);
    *(_DWORD *)(FIELD_U32(a1, 6308) + 24) = 1065353216;
    v13 = FIELD_U32(a1, 6308);
    FIELD_U32(v13, 20) = 0;
    FIELD_U32(v13, 28) |= 2u;
    FIELD_U8(a1, 8286) = 1;
    v14 = *(_DWORD **)(a1 + 6312);
    v15 = FIELD_U32(a1, 6300);
    LODWORD(position.x) = &sead__SafeStringBase__vtable;
    LODWORD(position.y) = "switching";
    ShuAnim_play(v14, v15, (int)&position);
    *(_DWORD *)(FIELD_U32(a1, 6312) + 24) = 1065353216;
    v16 = FIELD_U32(a1, 6312);
    FIELD_U32(v16, 20) = 0;
    FIELD_U32(v16, 28) |= 2u;
  }
  v10 = FIELD_U32(a1, 8224);
LABEL_9:
  if ( v10 <= 0xB4 )
  {
    v17 = FIELD_F32(a1, 112);
    v18 = FIELD_U32(a1, 8);
    v19 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v17;
    mapPositionToScreen(&out, &position);
    j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v19, "SE_EMY_SR_TORPEDO_COUNT_DOWN", v18, &out, 0);
  }
LABEL_11:
  if ( FIELD_U8(a1, 8285) )
    return sub_6038BA98(a1);
  result = FIELD_U8(a1, 6693);
  if ( FIELD_U8(a1, 6693) )
  {
    v21 = FIELD_U32(a1, 8272);
    v22 = StateMgr__getCurrentState(v2);
    v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v22, 0x0) + 2))(v22);
    v24 = v23 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
    FIELD_U8(v21, 9328) = v24;
    return 9328;
  }
  return result;
}
