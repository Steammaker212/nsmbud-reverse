/* FinalBowser__collisionFireball
 * address: 0x60072178   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60025454
// 
// Overridden by: None
signed int __fastcall FinalBowser__collisionFireball(BossBase *a1, ActiveCollider *a2, int a3)
{
  char v3; // r12
  StageActor *owner; // r7

  owner = FIELD_U32(a2, 0x40);
  if ( ((unsigned int)&dword_60C81738 & ~(1611080092 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( !owner || (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C81734) != 1 )
    return 0;
  if ( !(*(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 896))(a1) )
    koopa_damage_ice_ref((int)owner, (float *)(a3 + 84), 0);
  return BossBase__collisionFireball(a1, a2, (ActiveCollider *)a3);
}
