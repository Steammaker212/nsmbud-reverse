/* LargeGoomba_vf67
 * address: 0x60340A9C   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf67(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r5
  StageActor *v8; // r7
  int v9; // r5
  int result; // r0

  owner = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C7B364 & ~(1614023360 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( owner )
  {
    v8 = (StageActor *)(*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &StageActor_RTTI);
    if ( v8 )
      v8 = owner;
  }
  else
  {
    v8 = 0;
  }
  if ( ((unsigned int)&dword_60C7B37C & ~(1614023488 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v8 )
  {
    v9 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v8, 0x0).vtable)(v8, &dword_60C7B378);
    if ( v9 )
      v9 = (int)v8;
  }
  else
  {
    v9 = 0;
  }
  result = Enemy__processCollision(a1, a2, a3, 2);
  if ( !result )
    return Enemy__collisionYoshi((int)a1, (int)a2, (int)a3);
  if ( result == 1 )
  {
    (*(void (__fastcall **)(Enemy *, _DWORD))(FIELD_U32(a1, 0x0)._._._.vtable + 660))(a1, FIELD_S8(v9, 84));
    (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 672))(a1);
    FIELD_U8(a2, 0x6E) |= 2u;
    return (*(int (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &dword_60C945FC);
  }
  return result;
}
