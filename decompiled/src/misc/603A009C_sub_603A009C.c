/* sub_603A009C
 * address: 0x603A009C   size: 684   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A009C(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StateBase *CurrentState; // r0
  int v7; // r4
  char v8; // r12
  int v9; // r0
  bool v10; // zf
  int v11; // r7
  int v12; // r10
  char *v13; // r6
  int v14; // r7
  StageActor *v15; // r4
  int v16; // r0
  int v17; // r4
  int v19; // r0
  bool v20; // zf
  StageActor *owner; // r4

  CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 == (*(int (**)(void))(dword_60C8EA94 + 8))() && !a1[1]._._._._.field_34 )
  {
    v19 = FIELD_U32(a3, 0x74).field_14;
    v20 = v19 == 15;
    if ( v19 != 15 )
      v20 = v19 == 0;
    if ( v20 )
    {
      owner = FIELD_U32(a3, 0x40);
      if ( ((unsigned int)&dword_60C7B37C & ~(1614414508 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      v11 = 0;
      if ( !owner
        || (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C7B378) != 1
        || (owner[1].profileFlags & 0x40) == 0 )
      {
        return v11;
      }
    }
  }
  v9 = FIELD_U32(a3, 0x74).field_14;
  v10 = v9 == 15;
  if ( v9 != 15 )
    v10 = v9 == 0;
  if ( v10 )
  {
    v11 = 0;
    if ( (*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 736))(a1) )
      return v11;
    v9 = FIELD_U32(a3, 0x74).field_14;
  }
  v12 = 0;
  if ( v9 == 2 )
    v12 = (*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 736))(a1);
  v13 = &FIELD_U8(a1, 0x1880);
  v14 = (unsigned __int8)FIELD_U8(a1, 0x1880);
  if ( v14 == 12 )
  {
    v15 = FIELD_U32(a3, 0x40);
    if ( ((unsigned int)&dword_60C7B37C & ~(1614414188 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v15
      && (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v15, 0x0).vtable)(v15, &dword_60C7B378) == 1
      && (v15[10].aCollider.field_110 & 1) == 0
      && (float)(FIELD_U32(v15, 0x6C).y - FIELD_U32(v15, 0x248).y) < 0.0 )
    {
      *v13 = 0;
    }
  }
  v16 = Enemy__processCollision(a1, a2, a3, v12);
  v17 = v16;
  *v13 = v14;
  if ( !v16 )
    return 0;
  if ( v16 == 2 )
    return 1;
  v11 = 1;
  if ( !(*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 736))(a1) )
  {
    if ( sub_603A047C(a1, v17, a3) == 1 )
    {
      FIELD_U8(a2, 0x6E) |= 2u;
      return 1;
    }
    (*(void (__fastcall **)(Enemy *, int, ActiveCollider *, ActiveCollider *))(FIELD_U32(a1, 0x0)._._._.vtable + 704))(
      a1,
      v17,
      a2,
      a3);
  }
  return v11;
}
