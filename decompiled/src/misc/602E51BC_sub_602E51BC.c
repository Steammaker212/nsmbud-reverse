/* sub_602E51BC
 * address: 0x602E51BC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E51BC(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int result; // r0
  StageActor *owner; // r1
  float y; // r3
  Vec2 v9; // [sp+0h] [bp-18h] BYREF

  if ( &FIELD_U32(a1, 0xBC) != a2 )
    return Enemy__collisionYoshi((int)a1, (int)a2, (int)a3);
  result = Enemy__processCollision(a1, a2, a3, 0);
  if ( result == 1 )
  {
    owner = FIELD_U32(a3, 0x40);
    y = FIELD_F32(a1, 0x7C);
    v9.x = FIELD_F32(a1, 0x78);
    v9.y = y;
    return Enemy_killWithState(a1, owner, &v9, (int)&stru_60C906EC);
  }
  else if ( !result )
  {
    return Enemy__collisionYoshi((int)a1, (int)a2, (int)a3);
  }
  return result;
}
