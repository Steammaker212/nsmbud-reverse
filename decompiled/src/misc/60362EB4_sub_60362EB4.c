/* sub_60362EB4
 * address: 0x60362EB4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60362EB4(CollisionActor *a1)
{
  float v2; // s0
  int direction; // r0
  int result; // r0
  int speed; // [sp+4h] [bp-Ch] BYREF

  CollisionActor__handleGravity(a1);
  v2 = CollisionActor__handleSpeed(a1);
  CollisionMgr_process(FIELD_U8(a1, 0x288), v2);
  direction = FIELD_U32(a1, 0x0).direction;
  speed = 0x8000000;
  result = moveValueTo(&FIELD_U32(a1, 0x0).rotation.y, (int *)&Enemy_CommonRotations[direction], &speed);
  if ( result == 1 )
    return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0)._.vtable + 192))(a1, &dword_60C958F0);
  return result;
}
