/* Amp__onExecute
 * address: 0x60258D50   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F3C
// 
// Overridden by: None
signed int __fastcall Amp__onExecute(Amp *this)
{
  StateMgr *p_manager; // r8
  float x; // r1
  float z; // r0
  int y; // r3
  int v6; // r7
  float v7; // s0
  int *v8; // r4
  StateBase *CurrentState; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r6
  int v13; // r0
  int id; // r10
  int v16; // r6
  float v17; // r1
  Mtx34 out; // [sp+18h] [bp-90h] BYREF
  int v19; // [sp+48h] [bp-60h] BYREF
  int v20; // [sp+4Ch] [bp-5Ch] BYREF
  int v21; // [sp+50h] [bp-58h] BYREF
  Vec3 position; // [sp+54h] [bp-54h] BYREF
  float v23; // [sp+60h] [bp-48h]
  float v24; // [sp+70h] [bp-38h]
  float v25; // [sp+80h] [bp-28h]

  p_manager = &FIELD_U32(this, 0x0)._.states.manager;
  StateMgr__execute(&FIELD_U32(this, 0x0)._.states.manager);
  ActorScaler_execute((ActorScaler *)&FIELD_U32(this, 0x1AE8));
  x = FIELD_U32(this, 0x0)._._._.position.x;
  z = FIELD_U32(this, 0x0)._._._.position.z;
  y = FIELD_U32(this, 0x0)._._._.rotation.y;
  v6 = FIELD_U32(this, 0x0)._._._.rotation.z;
  v7 = FIELD_U32(this, 0x0)._._._.position.y + *(float *)&FIELD_U32(this, 0x191C);
  v19 = FIELD_U32(this, 0x0)._._._.rotation.x;
  v20 = y;
  v21 = v6;
  out.cells[0] = 1.0;
  out.cells[1] = 0.0;
  out.cells[2] = 0.0;
  out.cells[4] = 0.0;
  out.cells[5] = 1.0;
  out.cells[6] = 0.0;
  out.cells[8] = 0.0;
  out.cells[9] = 0.0;
  out.cells[10] = 1.0;
  out.cells[3] = x;
  out.cells[7] = v7;
  out.cells[11] = z;
  Mtx34_rotateY((float32x2_t *)&out, (unsigned int *)&v20);
  Mtx34_rotateX((float32x2_t *)&out, (unsigned int *)&v19);
  Mtx34_rotateZ((float32x2_t *)&out, (unsigned int *)&v21);
  v8 = &FIELD_U32(this, 0x189C);
  (*(void (__fastcall **)(_DWORD, Mtx34 *))(**(_DWORD **)FIELD_U32(this, 0x189C) + 60))(*(_DWORD *)FIELD_U32(this, 0x189C), &out);
  (*(void (__fastcall **)(_DWORD, int *))(**(_DWORD **)*v8 + 68))(*(_DWORD *)*v8, &FIELD_U32(this, 0x1AEC));
  (*(void (__fastcall **)(_DWORD, _DWORD, Vec3 *))(**(_DWORD **)*v8 + 108))(*(_DWORD *)*v8, 0, &position);
  FIELD_U32(this, 0x18A0).x = v23;
  FIELD_U32(this, 0x18A0).y = v24;
  FIELD_U32(this, 0x18A0).z = v25;
  ModelWrapper_updateModel((ModelWrapper *)FIELD_U32(this, 0x189C));
  if ( FIELD_U32(this, 0x0)._._._.field_218
    || (CurrentState = StateMgr__getCurrentState(p_manager),
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
        v10 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))())
    || (v11 = StateMgr__getCurrentState(p_manager),
        v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11),
        v12 == (*(int (**)(void))(dword_60C8E0C0 + 8))()) )
  {
    v13 = **(_DWORD **)(*v8 + 28);
    FIELD_U32(v13, 20) = 0;
    FIELD_U32(v13, 28) |= 2u;
  }
  else
  {
    id = FIELD_U32(this, 0x0)._._._._.id;
    v16 = Global_BasicSoundActor1;
    v17 = FIELD_U32(this, 0x0)._._._.position.y;
    position.x = FIELD_U32(this, 0x0)._._._.position.x;
    position.y = v17;
    mapPositionToScreen((Vec2 *)&out, &position);
    j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v16, "SE_EMY_BIRIKYU_SPARK", id, &out, 0);
    Animation_update(**(_DWORD **)(*v8 + 28));
    EffectWrapper_update(&FIELD_U32(this, 0x18AC), 34, &FIELD_U32(this, 0x18A0), 0, &FIELD_U32(this, 0x0)._._._.scale);
    LightSource_update1(&FIELD_U32(this, 0x1968), 12, 0, 0, 0, 0, 0, 0, 0);
    LightSource_update2(&FIELD_U32(this, 0x1968), &FIELD_U32(this, 0x0)._._._.position, 0, &FIELD_U32(this, 0x0)._._._.scale.x, 0, 0, 0, 0);
  }
  StageActor__cullCheck(&FIELD_U32(this, 0x0)._._._, 0);
  return 1;
}
