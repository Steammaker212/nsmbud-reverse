/* GoombaBase__collisionEnemy
 * address: 0x6033C7BC   size: 132   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D50
// 
// Overridden by:
//   - 0x6033AC8C : Goomba
Enemy *__fastcall GoombaBase__collisionEnemy(Enemy *this, ActiveCollider *acSelf, ActiveCollider *acOther)
{
  Enemy *other; // r4
  Enemy *this_; // r5
  int otherType; // r0
  int v7; // r0

  other = (Enemy *)FIELD_U32(acOther, 0x40);
  this_ = this;
  if ( other )
  {
    this = (Enemy *)Actor__getProfileId(&FIELD_U32(acOther, 0x40));
    if ( this != (Enemy *)0xDE )
    {
      otherType = (unsigned __int8)FIELD_U8(other, 0x215);
      if ( otherType == 3 )
      {
        v7 = 3;
      }
      else
      {
        if ( otherType != 4 )
          return (*(Enemy *(__fastcall **)(Enemy *, StageActor *, Enemy *))(FIELD_U32(this_, 0x0) + 636))(
                   this_,
                   FIELD_U32(acSelf, 0x40),
                   other);
        v7 = 9;
      }
      this_[1]._._._.aCollider.field_E0 = *(&FIELD_U32(acSelf, 0xB0) + v7);
      return (*(Enemy *(__fastcall **)(Enemy *, StageActor *, Enemy *))(FIELD_U32(this_, 0x0) + 636))(
               this_,
               FIELD_U32(acSelf, 0x40),
               other);
    }
  }
  return this;
}
