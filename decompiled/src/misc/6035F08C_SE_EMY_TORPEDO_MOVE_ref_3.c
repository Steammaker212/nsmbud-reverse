/* SE_EMY_TORPEDO_MOVE_ref_3
 * address: 0x6035F08C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_TORPEDO_MOVE_ref_3(StageActor *a1)
{
  float *p_vtable; // r0
  bool v3; // zf
  float v4; // r1
  __int16 v5; // r0
  int result; // r0
  float y; // r1
  int id; // r6
  int v9; // r5
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  p_vtable = (float *)BYTE1(a1[10].aCollider.owner);
  v3 = p_vtable == 0;
  if ( p_vtable )
  {
    p_vtable = (float *)&a1[10].aCollider.node3.owner->_.vtable;
    v3 = p_vtable == 0;
  }
  if ( !v3 )
  {
    FIELD_F32(a1, 0x6C) = p_vtable[1579];
    v4 = p_vtable[1580];
    FIELD_F32(a1, 0x70) = v4;
    FIELD_F32(a1, 0x74) = p_vtable[1581];
    FIELD_F32(a1, 0x70) = v4 - *(float *)&a1[10].aCollider.node4.next;
  }
  v5 = HIWORD(a1[10].aCollider.field_124) - 1;
  HIWORD(a1[10].aCollider.field_124) = v5;
  if ( v5 <= 0 )
    (*(void (__fastcall **)(StageActor *, int))(FIELD_U32(a1, 0x0) + 192))(a1, a1[10].aCollider.field_12C);
  result = StageActor__isOffScreen(a1);
  if ( !result )
  {
    (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 644))(a1);
    a1[10].aCollider.field_128 = 1048576000;
    y = FIELD_F32(a1, 0x70);
    id = FIELD_U32(a1, 0x8);
    v9 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 0x6C);
    position.y = y;
    mapPositionToScreen(&out, &position);
    return SE_EMY_LIFT_LINE_MOVE_ref_2(v9, "SE_EMY_TORPEDO_MOVE", id, &out, 12, 0);
  }
  return result;
}
