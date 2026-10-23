/* sub_602E5110
 * address: 0x602E5110   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E5110(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int result; // r0
  StageActor *player; // r1
  float y; // r3
  Vec2 v9; // [sp+0h] [bp-18h] BYREF

  if ( &FIELD_U32(a1, 0x0)._._.aCollider != a2 )
    return Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
  result = Enemy__processCollision(a1, a2, a3, 0);
  switch ( result )
  {
    case 3:
      return Enemy_killSpin(a1, FIELD_U32(a3, 0x40));
    case 1:
      player = FIELD_U32(a3, 0x40);
      y = FIELD_U32(a1, 0x0)._._.speed.y;
      v9.x = FIELD_U32(a1, 0x0)._._.speed.x;
      v9.y = y;
      return Enemy_killWithState(a1, player, &v9, (int)&stru_60C906EC);
    case 0:
      return Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
  }
  return result;
}
