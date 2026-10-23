/* SE_BOSS_KOOPA_L_FIRE_DISAPP_ref_7F57C
 * address: 0x6007F57C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_BOSS_KOOPA_L_FIRE_DISAPP_ref_7F57C(int a1)
{
  StateMgr *v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6
  StateMethodExecuter *result; // r0
  float v6; // r1
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (StateMethodExecuter *)(*(int (**)(void))(dword_60C818E8 + 8))();
  if ( (StateMethodExecuter *)v4 != result )
  {
    v6 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&v7, &position);
    sub_60813570(a1 + 6668, "SE_BOSS_KOOPA_L_FIRE_DISAPP", &v7, 0);
    return StateMgr__changeState(v2, (StateBase *)&dword_60C818E8);
  }
  return result;
}
