/* SE_EMY_DOWN_ref_149B2C
 * address: 0x60149B2C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_149B2C(int a1)
{
  StateMgr *v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6
  float v5; // r1
  int v6; // r6
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C881B0 + 8))() )
  {
    v5 = FIELD_F32(a1, 112);
    v6 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&out, &position);
    sub_60813810(v6, (int)"SE_EMY_DOWN", (int)&out, 1, 0);
    StateMgr__changeState(v2, (StateBase *)&dword_60C881D0);
  }
  return 1;
}
