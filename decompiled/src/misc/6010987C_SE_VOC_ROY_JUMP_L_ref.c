/* SE_VOC_ROY_JUMP_L_ref
 * address: 0x6010987C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_ROY_JUMP_L_ref(CollisionActor *a1)
{
  int *v2; // r0
  int *v3; // r1
  float v4; // s0

  sub_60421AE4(*(_DWORD *)&a1[1].collisionMgr[384], *(_DWORD *)&a1[1].collisionMgr[396] + 8, 0);
  if ( (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0)._.vtable + 716))(a1) == 1
    || (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0)._.vtable + 720))(a1) == 1 )
  {
    v2 = &dword_60C86720;
    v3 = &dword_60C86708;
  }
  else
  {
    v2 = &dword_60C86724;
    v3 = &dword_60C8670C;
  }
  LODWORD(FIELD_U32(a1, 0x0).field_64) = *v3;
  FIELD_U32(a1, 0x0).speed.x = 0.0;
  LODWORD(FIELD_U32(a1, 0x0).speed.y) = *v2;
  if ( FIELD_U32(a1, 0x0).direction == 1 )
    FIELD_U32(a1, 0x0).speed.x = -0.0;
  CollisionActor__handleGravity(a1);
  v4 = CollisionActor__handleSpeed(a1);
  (*(void (__fastcall **)(CollisionActor *, float))(FIELD_U32(a1, 0x0)._.vtable + 1232))(a1, v4);
  (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0)._.vtable + 1284))(a1);
  return sub_608134CC(&a1[1]._.aCollider.field_50, "SE_VOC_ROY_JUMP_L", SLOWORD(a1[1]._.effectOffset.y), 0);
}
