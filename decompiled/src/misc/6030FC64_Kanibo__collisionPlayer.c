/* Kanibo__collisionPlayer
 * address: 0x6030FC64   size: 148   group: misc
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
int __fastcall Kanibo__collisionPlayer(Enemy *this, ActiveCollider *acSelf, ActiveCollider *acOther)
{
  int result; // r0
  StageActor *owner; // r1
  bool v8; // zf
  float y; // r3
  Vec2 v10; // [sp+0h] [bp-18h] BYREF

  result = Enemy__processCollision(this, acSelf, acOther, 0);
  if ( !result )
    return Enemy__collisionPlayer((int)this, (int)acSelf, (int)acOther);
  v8 = result == 2;
  if ( result != 2 )
  {
    owner = FIELD_U32(acOther, 0x40);
    v8 = owner == 0;
  }
  if ( !v8 )
  {
    if ( result == 3 )
    {
      Enemy_killSpin(this, owner);
    }
    else
    {
      y = FIELD_U32(this, 0x0)._._.speed.y;
      v10.x = FIELD_U32(this, 0x0)._._.speed.x;
      v10.y = y;
      Enemy_killWithState(this, owner, &v10, (int)&stru_60C906EC);
    }
    result = (unsigned __int8)FIELD_U8(acSelf, 0x6E) | 2;
    FIELD_U8(acSelf, 0x6E) = result;
  }
  return result;
}
