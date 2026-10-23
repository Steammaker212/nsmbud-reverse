/* SE_EMY_CHOROPU_SIGN_ref
 * address: 0x602797B4   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_CHOROPU_SIGN_ref(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  int result; // r0
  float v5; // r1
  int v6; // r5
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = (ActiveCollider *)(a1 + 8980);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8980))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  FIELD_U32(a1, 8548) = 60;
  FIELD_U32(a1, 8552) = 1;
  result = FIELD_U8(a1, 20);
  if ( (result & 1) == 0 )
  {
    v5 = FIELD_F32(a1, 112);
    v6 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&v7, &position);
    return BasicSoundActor1_playSound(v6, "SE_EMY_CHOROPU_SIGN", (int)&v7, 0);
  }
  return result;
}
