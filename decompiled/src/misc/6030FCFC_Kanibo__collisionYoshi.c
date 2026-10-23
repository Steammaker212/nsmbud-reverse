/* Kanibo__collisionYoshi
 * address: 0x6030FCFC   size: 88   group: misc
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
int __fastcall Kanibo__collisionYoshi(Enemy *a1, ActiveCollider *a2, int a3)
{
  int result; // r0

  if ( Enemy__processCollision(a1, a2, (ActiveCollider *)a3, 0) != 1 )
    return (*(int (__fastcall **)(Enemy *, ActiveCollider *, int))(FIELD_U32(a1, 0x0)._._._.vtable + 200))(a1, a2, a3);
  Enemy_killYoshi((int)a1, FIELD_U32(a3, 64));
  result = (unsigned __int8)FIELD_U8(a2, 0x6E) | 2;
  FIELD_U8(a2, 0x6E) = result;
  return result;
}
