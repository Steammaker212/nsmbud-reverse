/* SledgeBro__collisionPlayer
 * address: 0x602D630C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D54
// 
// Overridden by: None
int __fastcall SledgeBro__collisionPlayer(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int result; // r0
  StageActor *owner; // r1
  Vec2 v8; // [sp+0h] [bp-18h] BYREF

  result = Enemy__processCollision(a1, a2, a3, 0);
  switch ( result )
  {
    case 3:
      return Enemy_killSpin(a1, FIELD_U32(a3, 0x40));
    case 1:
      owner = FIELD_U32(a3, 0x40);
      v8.x = 0.0;
      v8.y = 0.0;
      return Enemy_killWithState(a1, owner, &v8, (int)&stru_60C906EC);
    case 0:
      return Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
  }
  return result;
}
