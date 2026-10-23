/* SE_EMY_PENGUIN_DAMAGE_ref_2
 * address: 0x60369858   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_PENGUIN_DAMAGE_ref_2(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int result; // r0
  bool v7; // zf
  StateBase *CurrentState; // r0
  int v9; // r7
  float v10; // r1
  int v11; // r5
  StateBase *v12; // r0
  int v13; // r7
  StateBase *v14; // r0
  int v15; // r7
  StageActor *owner; // r1
  float v17; // r3
  Vec2 v18; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  result = Enemy__processCollision((Enemy *)a1, a2, a3, 0);
  if ( !result )
    return Enemy__collisionPlayer(a1, (int)a2, (int)a3);
  v7 = result == 3;
  if ( result != 3 )
    v7 = result == 1;
  if ( v7 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v9 == (*(int (**)(void))(dword_60C95D38 + 8))() )
    {
      v10 = FIELD_F32(a1, 112);
      v11 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v10;
      mapPositionToScreen(&v18, &position);
      BasicSoundActor1_playSound(v11, "SE_EMY_PENGUIN_DAMAGE", (int)&v18, 0);
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95D78);
    }
    else
    {
      v12 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
      if ( v13 == (*(int (**)(void))(dword_60C95D58 + 8))()
        || (v14 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
            v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14),
            result = (*(int (**)(void))(dword_60C95D78 + 8))(),
            v15 == result) )
      {
        owner = FIELD_U32(a3, 0x40);
        v17 = FIELD_F32(a1, 124);
        position.x = FIELD_F32(a1, 120);
        position.y = v17;
        Enemy_killWithState((Enemy *)a1, owner, (Vec2 *)&position, (int)&stru_60C906EC);
        result = (unsigned __int8)FIELD_U8(a2, 0x6E) | 2;
        FIELD_U8(a2, 0x6E) = result;
      }
    }
  }
  return result;
}
