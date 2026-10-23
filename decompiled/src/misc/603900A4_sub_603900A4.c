/* sub_603900A4
 * address: 0x603900A4   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603900A4(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StageActor *owner; // r5
  int result; // r0
  Vec2 v8; // [sp+0h] [bp-20h] BYREF

  owner = FIELD_U32(a3, 0x40);
  sub_6000ADDC((int)owner, (int)owner);
  result = Enemy__processCollision(a1, a2, a3, 0);
  switch ( result )
  {
    case 3:
      return Enemy_killSpin(a1, owner);
    case 1:
      v8.x = *(float *)&dword_60AFE3F8[FIELD_U32(a1, 0x0)._._.direction] * 0.5;
      v8.y = 2.0;
      return Enemy_killWithState(a1, owner, &v8, (int)&stru_60C906EC);
    case 0:
      return Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
  }
  return result;
}
