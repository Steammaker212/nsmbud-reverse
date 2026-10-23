/* SE_OBJ_TARU_BREAK_ref
 * address: 0x605CA4FC   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_OBJ_TARU_BREAK_ref(int a1, int a2)
{
  ColliderBase *v4; // r6
  ActiveColliderMgr *v5; // r6
  int v6; // r6
  float v7; // r1
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v4 = (ColliderBase *)(a1 + 6160);
  if ( sub_601536B0((int)ColliderMgr_instance, a1 + 6160) )
    ColliderMgr_removeRelated1(ColliderMgr_instance, v4);
  v5 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromList3(v5, a1 + 188);
  FIELD_U8(a1, 6380) = 1;
  FIELD_U8(a1, 298) |= 2u;
  v6 = Global_BasicSoundActor2;
  v7 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v7;
  mapPositionToScreen(&out, &position);
  if ( a2 == 1 )
    sub_60813BDC(v6, "SE_OBJ_TARU_BREAK", &out, 1, 0);
  else
    BasicSoundActor2_play(v6, "SE_OBJ_TARU_BREAK", &out.x, 0);
  return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB0CEC);
}
