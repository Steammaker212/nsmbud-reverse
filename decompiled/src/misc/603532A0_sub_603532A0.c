/* sub_603532A0
 * address: 0x603532A0   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603532A0(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r7
  StageActor *v8; // r6
  int v9; // r0
  int result; // r0
  Vec2 v11; // [sp+0h] [bp-20h] BYREF

  owner = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C7B37C & ~(1614099144 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( owner )
  {
    v8 = (StageActor *)(*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C7B378);
    if ( v8 )
      v8 = owner;
  }
  else
  {
    v8 = 0;
  }
  v9 = Enemy__processCollision((Enemy *)a1, a2, a3, 0);
  if ( !v9 )
    return Enemy__collisionPlayer(a1, (int)a2, (int)a3);
  result = v9 | 2;
  if ( result == 3 )
  {
    v11 = *(Vec2 *)(a1 + 120);
    return Enemy_killWithState((Enemy *)a1, v8, &v11, (int)&stru_60C906EC);
  }
  return result;
}
