/* SE_PLY_CANNON_READY_ref
 * address: 0x605C7350   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_PLY_CANNON_READY_ref(int a1)
{
  _BOOL4 v2; // r5
  unsigned int result; // r0
  float v4; // r1
  int v5; // r6
  int v6; // r7
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  position.x = 2.351e-38;
  v2 = moveValueTo((int *)(a1 + 996), (int *)(a1 + 992), (int *)&position);
  sub_60694FD4(a1);
  result = FIELD_U8(a1, 2940);
  if ( result <= 3 )
  {
    v4 = FIELD_F32(a1, 112);
    v5 = FIELD_U32(a1, 8);
    v6 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v4;
    mapPositionToScreen(&out, &position);
    result = SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v6, "SE_PLY_CANNON_READY", v5, &out, 0);
  }
  if ( v2 )
    return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 1024), &stru_60CB0B84);
  return result;
}
