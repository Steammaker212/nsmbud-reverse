/* SE_BOSS_JR_ref_2
 * address: 0x6063473C   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_BOSS_JR_ref_2(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r6
  int v4; // r4
  int v5; // r5
  StateBase *CurrentState; // r0
  int v7; // r7
  char v8; // r12
  StateBase *v9; // r0
  int v10; // r7
  int v11; // r0
  int *v12; // r9
  float v13; // r1
  int v14; // r7
  ActiveColliderMgr *v15; // r8
  float v16; // r0
  int v17; // r0
  float v18; // r0
  Vec2 out; // [sp+8h] [bp-38h] BYREF
  Vec3 position; // [sp+10h] [bp-30h] BYREF

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  v4 = FIELD_U32(a2, 64);
  if ( ((unsigned int)dword_60C80420 & ~(1617119068 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C80420) )
  {
    dword_60C8041C = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60C80420);
  }
  if ( v3 )
  {
    v5 = (**v3)(v3, &dword_60C8041C);
    if ( v5 )
      v5 = (int)v3;
  }
  else
  {
    v5 = 0;
  }
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 != (*((int (**)(void))stru_60CB4424.vtable + 2))()
    && FIELD_U8(v5, 6796)
    && Actor__getProfileId((Actor *)v4) == 371 )
  {
    if ( ((unsigned int)&dword_60C80058 & ~(1617119300 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C80058) )
    {
      dword_60C80054 = (int)&off_60BC2CD4;
      _cxa_guard_release(&dword_60C80058);
    }
    if ( v4 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C80054) == 1 )
      {
        v9 = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
        if ( v10 == (*(int (**)(void))(dword_60C80248 + 8))() )
        {
          v12 = (int *)(v5 + 6784);
          v11 = FIELD_U32(v5, 6784);
          FIELD_U32(v5, 6784) = v11 + 1;
          if ( v11 < 1 )
          {
            FIELD_U8(v4, 11681) = 1;
            sub_60813430(v4 + 7008, "SE_BOSS_JR_CLOWN_PUNCH", 0);
            StateMgr__changeState((StateMgr *)(v5 + 6084), &stru_60CB4424);
            SE_BOSS_JR_ref_2_helper(v4);
            AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 6, 3, 0, 0);
            v18 = FIELD_F32(v5, 108);
            position.y = FIELD_F32(v5, 112);
            position.x = v18;
            position.z = 4500.0;
            if ( *v12 >= 2 )
            {
              v17 = 1079;
              goto LABEL_24;
            }
          }
          else
          {
            v13 = FIELD_F32(v5, 112);
            v14 = Global_BasicSoundActor2;
            position.x = FIELD_F32(v5, 108);
            position.y = v13;
            mapPositionToScreen(&out, &position);
            BasicSoundActor2_play(v14, "SE_BOSS_JR_BLOCK_BREAK", &out.x, 0);
            ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v5 + 6120));
            v15 = ActiveColliderMgr_instance;
            ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v5 + 188));
            ActiveColldierMgr_removeFromCreateList(v15, (ActiveCollider *)(v5 + 188));
            ActiveColldierMgr_removeFromList3(v15, v5 + 188);
            StateMgr__changeState((StateMgr *)(v5 + 6084), (StateBase *)&dword_60CB43C4);
            SE_BOSS_JR_ref_2_helper(v4);
            AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 6, 3, 0, 0);
            v16 = FIELD_F32(v5, 108);
            position.y = FIELD_F32(v5, 112);
            position.x = v16;
            position.z = 4500.0;
            if ( *v12 >= 2 )
            {
              v17 = 1079;
LABEL_24:
              EffectData_create(v17, &position, 0, 0);
              return;
            }
          }
          v17 = 1078;
          goto LABEL_24;
        }
      }
    }
  }
}
