/* sub_6027C050
 * address: 0x6027C050   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027C050(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StageActor *owner; // r7
  int result; // r0
  StageActor *v8; // r1
  Vec2 v9; // [sp+0h] [bp-20h] BYREF

  owner = FIELD_U32(a3, 0x40);
  result = Enemy__processCollision(a1, a2, a3, 0);
  switch ( result )
  {
    case 3:
      return Enemy_killSpin(a1, owner);
    case 1:
      v8 = FIELD_U32(a3, 0x40);
      v9.x = 0.0;
      v9.y = 0.0;
      return Enemy_killWithState(a1, v8, &v9, (int)&stru_60C906EC);
    case 0:
      return Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
  }
  return result;
}
