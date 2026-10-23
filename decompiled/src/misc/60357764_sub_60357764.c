/* sub_60357764
 * address: 0x60357764   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60357764(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r6
  StageActor *v8; // r7
  int v9; // r0
  int result; // r0
  _BYTE *v11; // r0
  Vec2 v12; // [sp+0h] [bp-20h] BYREF

  owner = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C7B37C & ~(1614116748 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
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
    FIELD_U32(a1, 6252) = 0;
    FIELD_U16(a1, 6432) = 512;
    v11 = *(_BYTE **)(a1 + 632);
    if ( v11 )
      *v11 |= 4u;
    v12 = *(Vec2 *)(a1 + 120);
    return Enemy_killWithState((Enemy *)a1, v8, &v12, (int)&stru_60C906EC);
  }
  return result;
}
