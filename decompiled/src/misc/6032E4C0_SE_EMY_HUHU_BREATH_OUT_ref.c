/* SE_EMY_HUHU_BREATH_OUT_ref
 * address: 0x6032E4C0   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_EMY_HUHU_BREATH_OUT_ref(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r9
  float v5; // s0
  int v6; // r6
  signed int v7; // r0
  int v8; // r7
  _DWORD *v9; // r5
  unsigned int v10; // r2
  int v11; // r0
  int v12; // r8
  int ResArchiveById; // r0
  int v14; // r1
  unsigned int v15; // r0
  int v16; // r1
  unsigned int v17; // r0
  int *v18; // r1
  unsigned int v19; // r0
  int v20; // r0
  float v21; // r1
  int v22; // r5
  int v23; // r6
  int v24; // r0
  bool v25; // cc
  signed int result; // r0
  Vec3i out; // [sp+4h] [bp-3Ch] BYREF
  Vec3 position; // [sp+10h] [bp-30h] BYREF

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    FIELD_U8(a1, 6316) = 0;
  v4 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v5 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v5);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v6 = FIELD_U32(a1, 160);
  v7 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v7;
  LODWORD(position.x) = dword_60AF20A0[v7];
  out.x = 0x4000000;
  moveValueTo((int *)(a1 + 160), (int *)&position, &out.x);
  v8 = FIELD_U32(a1, 160);
  if ( v6 <= 0 && v8 >= 0 || v6 >= 0 && v8 <= 0 )
  {
    v9 = *(_DWORD **)v4;
    v10 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    v11 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v10 )
      v11 += 4 * v10;
    v12 = *(_DWORD *)(*(_DWORD *)v11 + 20);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    LODWORD(position.x) = &sead__SafeStringBase__vtable;
    LODWORD(position.y) = off_60BEC288[(unsigned int)v8 >> 31];
    sub_60421938(v9, ResArchiveById, (int)&position);
    v14 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v15 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v15 )
      v14 += 4 * v15;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v14 + 4), 1);
    v16 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v17 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v17 )
      v16 += 4 * v17;
    *(_DWORD *)(*(_DWORD *)v16 + 24) = 1065353216;
    v18 = *(int **)(*(_DWORD *)v4 + 12);
    v19 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v19 )
      v18 += v19;
    v20 = *v18;
    FIELD_U32(v20, 20) = v12;
    FIELD_U32(v20, 28) |= 2u;
  }
  v21 = FIELD_F32(a1, 112);
  v22 = FIELD_U32(a1, 8);
  v23 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v21;
  mapPositionToScreen((Vec2 *)&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v23, "SE_EMY_HUHU_BREATH_OUT", v22, &out, 0);
  v24 = FIELD_U32(a1, 6312);
  v25 = v24 <= 1;
  result = v24 - 1;
  FIELD_U32(a1, 6312) = result;
  if ( v25 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93E20);
  if ( result >= 30 )
  {
    EffectData_setEffectId((EffectData *)(a1 + 6488), 692);
    position = *(Vec3 *)(a1 + 6320);
    out.x = 0;
    out.y = 0x40000000;
    out.z = 0;
    if ( FIELD_U32(a1, 80) == 1 )
      out.y = -1073741824;
    return sub_60237208(a1 + 6472, &position, &out, 0);
  }
  return result;
}
