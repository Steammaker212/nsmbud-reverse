/* sub_602C65E8
 * address: 0x602C65E8   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602C65E8(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StateBase *CurrentState; // r0
  int v7; // r7
  int v8; // r0
  bool v9; // zf
  char v10; // r12
  StageActor *owner; // r6

  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    v8 = (*(int (**)(void))(dword_60C91668 + 8))();
    v9 = &FIELD_U32(a1, 0xBC) == a2;
    if ( &FIELD_U32(a1, 0xBC) == a2 )
      v9 = v7 == v8;
    if ( v9 && !Enemy__processCollision(a1, a2, a3, 0) )
    {
      owner = FIELD_U32(a3, 0x40);
      if ( ((unsigned int)&dword_60C7B37C & ~(1613522560 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( owner )
      {
        if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378) == 1 )
          (*(void (__fastcall **)(StageActor *, ActiveCollider *, ActiveCollider *))(FIELD_U32(owner, 0x0) + 1164))(
            owner,
            a2,
            a3);
      }
    }
  }
  else
  {
    (*(void (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(a1, 0x0) + 200))(a1, a2, a3);
  }
}
