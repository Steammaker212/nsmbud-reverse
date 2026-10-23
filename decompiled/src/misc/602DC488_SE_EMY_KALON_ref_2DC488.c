/* SE_EMY_KALON_ref_2DC488
 * address: 0x602DC488   size: 904   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KALON_ref_2DC488(int a1, int a2, float *a3, int a4)
{
  unsigned int v4; // r7
  bool v8; // cc
  int v9; // r0
  signed int v10; // r2
  void (__fastcall *v11)(int, Vec3 *); // r2
  float v12; // r1
  float v13; // r1
  int v14; // r5
  float v15; // r1
  float v16; // r1
  int v17; // r5
  StateBase *CurrentState; // r0
  int v19; // r5
  int (__fastcall ***v20)(_DWORD, int *); // r6
  char v21; // r12
  int v22; // r5
  StateBase *v23; // r0
  int v24; // r7
  int *v25; // r1
  Vec3 position; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  FIELD_U32(a1, 6336) = a2;
  if ( a4 )
  {
    v8 = (unsigned int)(a2 - 1) > 1;
    if ( (unsigned int)(a2 - 1) <= 1 )
    {
      v4 = FIELD_S8(a4, 84);
      v8 = v4 > 3;
    }
    if ( !v8 )
    {
      v9 = a2 == 1 ? sub_602A3358(a1, a4) : sub_602855F4(a4);
      v10 = sub_602856EC((int *)(a1 + 6292), v9);
      if ( v10 >= 0 )
        sub_60022760(0.0, 24.0, dword_60C7F52C, a1, v10, v4);
    }
  }
  if ( a2 )
  {
    if ( a2 == 3 )
    {
      v13 = FIELD_F32(a1, 112);
      v14 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v13;
      mapPositionToScreen(&out, &position);
      sub_60813810(v14, (int)"SE_EMY_KALON", (int)&out, 1, 0);
    }
    else
    {
      if ( a2 == 1 )
      {
        v11 = *(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)a1 + 416);
        v12 = a3[1];
        position.x = *a3;
        position.y = v12;
        position.z = 4500.0;
        v11(a1, &position);
      }
      else
      {
        v15 = a3[1];
        position.x = *a3;
        position.y = v15;
        position.z = 0.0;
        sub_602A38A4(a1, &position.x);
      }
      v16 = FIELD_F32(a1, 112);
      v17 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v16;
      mapPositionToScreen(&out, &position);
      BasicSoundActor1_playSound(v17, "SE_EMY_KALON", (int)&out, 0);
    }
  }
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v19 == (*(int (**)(void))(dword_60C91D08 + 8))() && FIELD_U8(a1, 6309) )
  {
    v20 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                 ActorMgr__instance + 27168,
                                                 FIELD_U32(a1, 6312));
    if ( ((unsigned int)&dword_60C7B364 & ~(1613612692 << v21) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v20 )
    {
      v22 = (**v20)(v20, &StageActor_RTTI);
      if ( v22 )
        v22 = (int)v20;
    }
    else
    {
      v22 = 0;
    }
    if ( ((unsigned int)dword_60C91D58 & ~(1613612820 << v21) & 1) == 0 && _cxa_guard_acquire(dword_60C91D58) )
    {
      dword_60C91D54 = (int)&off_60BC00E0;
      _cxa_guard_release(dword_60C91D58);
    }
    if ( v22 && (**(int (__fastcall ***)(int, int *))v22)(v22, &dword_60C91D54) == 1 )
    {
      v23 = StateMgr__getCurrentState((StateMgr *)(v22 + 6084));
      v24 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v23, 0x0) + 2))(v23);
      if ( v24 == (*(int (**)(void))(dword_60C91F38 + 8))() && FIELD_F32(a1, 6332) < 0.0 )
      {
        FIELD_U32(v22, 80) = FIELD_U32(a1, 80);
        v25 = &dword_60C91ED8;
      }
      else
      {
        v25 = &dword_60C91F58;
      }
      StateMgr__changeState((StateMgr *)(v22 + 6084), (StateBase *)v25);
    }
  }
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91CE8);
}
