/* BowserJrBase__collisionPlayer
 * address: 0x600CEFE8   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60024E78
// 
// Overridden by: None
int __fastcall BowserJrBase__collisionPlayer(BossBase *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r7
  int result; // r0
  bool v9; // zf

  owner = FIELD_U32(a2, 0x40);
  if ( ((unsigned int)&dword_60C80048 & ~(1611460620 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C80048) )
  {
    dword_60C80044 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C80048);
  }
  if ( owner )
    (*(void (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C80044);
  result = FIELD_U32(a1, 0x18A4);
  if ( result <= 0 )
  {
    result = Enemy__processCollision(&FIELD_U32(a1, 0x0), a2, a3, 0);
    if ( result )
    {
      v9 = result == 3;
      if ( result != 3 )
        v9 = result == 1;
      if ( v9 )
        return (*(int (__fastcall **)(BossBase *, StageActor *))(FIELD_U32(a1, 0x0)._._._._.vtable + 804))(a1, FIELD_U32(a3, 0x40));
    }
    else
    {
      return BossBase__collisionPlayer(a1, a2, a3);
    }
  }
  return result;
}
