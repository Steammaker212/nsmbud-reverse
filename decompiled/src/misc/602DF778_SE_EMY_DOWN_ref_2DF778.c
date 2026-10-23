/* SE_EMY_DOWN_ref_2DF778
 * address: 0x602DF778   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_EMY_DOWN_ref_2DF778(int a1)
{
  StateMgr *v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateMethodExecuter *result; // r0
  int (__fastcall ***v8)(_DWORD, int *); // r7
  char v9; // r12
  int (__fastcall ***v10)(_DWORD, int *); // r6
  int v11; // r2
  float v12; // r1
  int v13; // r6
  float v14; // r1
  float v15; // s0
  float v16; // s2
  int v17; // r0
  char *v18; // r0
  int v19; // s0
  Vec3 v20; // [sp+0h] [bp-30h] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C91EF8 + 8))()
    || (v5 = StateMgr__getCurrentState(v2),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        result = (StateMethodExecuter *)(*(int (**)(void))(dword_60C91ED8 + 8))(),
        (StateMethodExecuter *)v6 == result) )
  {
    result = (StateMethodExecuter *)sub_60003AE0((StageActor *)a1);
    if ( result == (StateMethodExecuter *)1 )
    {
      v8 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                  ActorMgr__instance + 27168,
                                                  FIELD_U32(a1, 6104));
      if ( ((unsigned int)&dword_60C7B364 & ~(1613625400 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v8 )
      {
        v10 = (int (__fastcall ***)(_DWORD, int *))(**v8)(v8, &StageActor_RTTI);
        if ( v10 )
          v10 = v8;
      }
      else
      {
        v10 = 0;
      }
      if ( ((unsigned int)&dword_60C91D50 & ~(1613625528 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C91D50) )
      {
        dword_60C91D4C = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C91D50);
      }
      if ( v10 && (**v10)(v10, &dword_60C91D4C) == 1 )
        sub_602DD938((int)v10, a1, v11);
      v12 = FIELD_F32(a1, 112);
      v13 = Global_BasicSoundActor1;
      v20.x = FIELD_F32(a1, 108);
      v20.y = v12;
      mapPositionToScreen(&out, &v20);
      BasicSoundActor1_playSound(v13, "SE_EMY_DOWN", (int)&out, 0);
      v14 = FIELD_F32(a1, 112);
      v20.x = FIELD_F32(a1, 108);
      v20.y = v14;
      v20.z = 4500.0;
      EffectData_create(21, &v20, 0, 0);
      v15 = FIELD_F32(a1, 584);
      v16 = FIELD_F32(a1, 108);
      v17 = FIELD_U32(a1, 112);
      FIELD_U32(a1, 116) = 1167867904;
      FIELD_F32(a1, 584) = v16;
      FIELD_U32(a1, 588) = v17;
      FIELD_U32(a1, 592) = 1167867904;
      FIELD_F32(a1, 608) = v16;
      FIELD_U32(a1, 612) = v17;
      v18 = byte_60AFE3F4;
      if ( (float)(v16 - v15) < 0.0 )
        v18 = &byte_60AFE3F5;
      v19 = *v18;
      FIELD_U32(a1, 616) = 1167867904;
      FIELD_F32(a1, 120) = (float)v19 * 1.5;
      FIELD_U32(a1, 124) = 1075838976;
      FIELD_U32(a1, 128) = 0;
      return StateMgr__changeState(v2, (StateBase *)&dword_60C91F78);
    }
  }
  return result;
}
