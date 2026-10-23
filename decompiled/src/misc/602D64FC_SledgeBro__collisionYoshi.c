/* SledgeBro__collisionYoshi
 * address: 0x602D64FC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D78
// 
// Overridden by: None
int __fastcall SledgeBro__collisionYoshi(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int result; // r0

  result = Enemy__processCollision(a1, a2, a3, 0);
  if ( result == 1 )
    return Enemy_killYoshi((int)a1, (int)FIELD_U32(a3, 0x40));
  if ( !result )
    return Enemy__collisionYoshi((int)a1, (int)a2, (int)a3);
  return result;
}
