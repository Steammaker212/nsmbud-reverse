/* SE_OBJ_DAIKONBOU_L_SIGN_ref_3
 * address: 0x606DE39C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_OBJ_DAIKONBOU_L_SIGN_ref_3(int a1)
{
  float v2; // r1
  int v3; // r5
  StateBase *CurrentState; // r0
  int v5; // r6
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  sub_605AE9AC(a1);
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&out, &position);
  sub_60813BDC(v3, "SE_OBJ_DAIKONBOU_L_SIGN", &out, 1, 0);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 != (*(int (**)(void))(dword_60CBBC0C + 8))() )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBBC0C);
  FIELD_U32(a1, 88) = 0;
  FIELD_U16(a1, 6790) = 110;
  return (StateMethodExecuter *)6790;
}
