/* SumoBroLightning_executeState_Down
 * address: 0x60334CAC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SumoBroLightning_executeState_Down(MultiStateActor *this)
{
  float y; // r1
  float v3; // s0
  float v4; // s0
  int result; // r0
  State *v6; // r1
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  y = FIELD_U32(this, 0x0)._.position.y;
  position.x = FIELD_U32(this, 0x0)._.position.x;
  position.y = y;
  mapPositionToScreen(&v7, &position);
  sub_60813574((char *)this + 6108, "SE_OBJ_KK_THUNDER_L", &v7, 0);
  CollisionActor__handleGravity(&FIELD_U32(this, 0x0));
  v3 = CollisionActor__handleSpeed(&FIELD_U32(this, 0x0));
  v4 = CollisionMgr_process(FIELD_U32(this, 0x0).collisionMgr, v3);
  result = (unsigned __int8)FIELD_U32(this, 0x0).collisionMgr[2224];
  if ( (result & 1) != 0 )
  {
    FIELD_U32(this, 0x0)._.speed.y = 0.0;
    if ( *((_BYTE *)this + 6605) )
      v6 = &stru_60C940F8;
    else
      v6 = (State *)&unk_60C940D8;
    return (*(int (__fastcall **)(MultiStateActor *, State *, float))(FIELD_U32(this, 0x0)._._.vtable + 192))(this, v6, v4);
  }
  return result;
}
/* Orphan comments:
Reached Ground?
*/
