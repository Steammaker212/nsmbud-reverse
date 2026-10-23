/* sub_6024FF20
 * address: 0x6024FF20   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024FF20(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StageActor *owner; // r5
  int result; // r0

  owner = FIELD_U32(a3, 0x40);
  result = Enemy__processCollision(a1, a2, a3, 0);
  switch ( result )
  {
    case 0:
      return Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
    case 3:
      return Enemy_killSpin(a1, owner);
    case 1:
      return (*(int (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0)._._._.vtable + 624))(a1, owner);
  }
  return result;
}
