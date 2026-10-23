/* sub_602F6948
 * address: 0x602F6948   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F6948(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int result; // r0
  StageActor *owner; // r5
  Vec2 v8; // [sp+0h] [bp-20h] BYREF

  if ( FIELD_U8(a1, 6320) )
    return Enemy__collisionPlayer(a1, (int)a2, (int)a3);
  owner = FIELD_U32(a3, 0x40);
  result = Enemy__processCollision((Enemy *)a1, a2, a3, 0);
  switch ( result )
  {
    case 1:
      sub_603FFD60(dword_60C99DD4 + 852);
      v8 = *(Vec2 *)(a1 + 120);
      result = Enemy_killWithState((Enemy *)a1, owner, &v8, (int)&dword_60C928F0);
      break;
    case 2:
      return result;
    case 3:
      sub_603FFD60(dword_60C99DD4 + 852);
      result = Enemy_killSpin((Enemy *)a1, owner);
      break;
    default:
      return Enemy__collisionPlayer(a1, (int)a2, (int)a3);
  }
  return result;
}
