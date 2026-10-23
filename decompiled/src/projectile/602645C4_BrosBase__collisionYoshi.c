/* BrosBase__collisionYoshi
 * address: 0x602645C4   size: 232   group: projectile
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
int __fastcall BrosBase__collisionYoshi(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r7
  int v8; // r6
  int result; // r0

  owner = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C7B408 & ~(1613121000 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( owner )
  {
    v8 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B404);
    if ( v8 )
      v8 = (int)owner;
  }
  else
  {
    v8 = 0;
  }
  result = Enemy__processCollision(a1, a2, a3, 0);
  if ( !result )
    return Enemy__collisionYoshi(a1, a2, a3);
  if ( v8 )
  {
    if ( result == 1 )
      return Enemy_killYoshi(a1, v8);
  }
  return result;
}
