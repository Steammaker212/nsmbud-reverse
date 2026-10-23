/* BossBase__collisionYoshi
 * address: 0x600250CC   size: 168   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D78
// 
// Overridden by:
//   - 0x60030A48 : SumoBrosBoss
int __fastcall BossBase__collisionYoshi(BossBase *this, ActiveCollider *a2, ActiveCollider *a3)
{
  int result; // r0

  if ( (*(int (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0) + 0x374))(this) == 1 )
    return Enemy__collisionYoshi(this, a2, a3);
  result = Enemy__processCollision(&FIELD_U32(this, 0x0), a2, a3, 2);
  if ( !result )
    return Enemy__collisionPlayer((int)this, (int)a2, (int)a3);
  if ( result == 1 )
  {
    result = (*(int (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0) + 0x378))(this);
    if ( !result )
      return (*(int (__fastcall **)(BossBase *, StageActor *))(FIELD_U32(this, 0x0) + 0x324))(this, FIELD_U32(a3, 0x40));
  }
  return result;
}
