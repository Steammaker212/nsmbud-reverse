/* BrosBase__collisionPlayer
 * address: 0x60264458   size: 332   group: projectile
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
int __fastcall BrosBase__collisionPlayer(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r7
  StageActor *v8; // r6
  bool v9; // r7
  int result; // r0
  StageActor *v11; // r1
  Vec2 v12; // [sp+0h] [bp-20h] BYREF

  owner = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C7B374 & ~(1613120640 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( owner )
  {
    v8 = (StageActor *)(*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C7B370);
    if ( v8 )
      v8 = owner;
  }
  else
  {
    v8 = 0;
  }
  v9 = sub_6000ADDC((int)a1, (int)v8);
  result = Enemy__processCollision(a1, a2, a3, 0);
  switch ( result )
  {
    case 3:
      return Enemy_killSpin(a1, v8);
    case 1:
      v11 = FIELD_U32(a3, 0x40);
      v12.x = *(float *)&dword_60AFE3F8[!v9] * 0.5;
      v12.y = 2.0;
      return Enemy_killWithState(a1, v11, &v12, (int)&stru_60C906EC);
    case 0:
      return Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
  }
  return result;
}
