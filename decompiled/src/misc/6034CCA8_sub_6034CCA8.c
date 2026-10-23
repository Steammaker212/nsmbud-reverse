/* sub_6034CCA8
 * address: 0x6034CCA8   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034CCA8(Enemy *a1, int a2, int a3)
{
  char v5; // r12
  int v6; // r5
  int (__fastcall ***v7)(_DWORD, int *); // r6
  int v8; // r0
  int *v9; // r2
  StateBase *CurrentState; // r0
  int v11; // r7
  StateBase *v12; // r0
  int v13; // r6

  v6 = 0;
  if ( Enemy__vfC8(a1, a2, a3) == 1 && a1[1]._._._._.field_34 == 1 )
  {
    v7 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1614073064 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    v6 = 1;
    if ( v7 )
    {
      if ( (**v7)(v7, &dword_60C7B378) == 1 )
      {
        v8 = sub_6000AED0((int)a1, (int)v7);
        if ( v8 != FIELD_U32(a1, 0x0)._._.direction )
        {
          v9 = (int *)&Enemy_CommonRotations[v8];
          if ( a1[1]._._._.field_56 )
            v9 = &dword_60C94CE0[v8 + 20];
          FIELD_U32(a1, 0x0)._._.rotation.y = *v9;
          FIELD_U32(a1, 0x0)._._.direction = v8;
          FIELD_U32(a1, 0x0)._._.speed.x = -FIELD_U32(a1, 0x0)._._.speed.x;
          FIELD_U32(a1, 0x0)._._.maxSpeed.x = -FIELD_U32(a1, 0x0)._._.maxSpeed.x;
          CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
          v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v11 == (*(int (**)(void))(dword_60C94B70 + 8))() )
          {
            (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &dword_60C94B50);
          }
          else
          {
            v12 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
            v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
            if ( v13 == (*(int (**)(void))(dword_60C94BB0 + 8))() )
              (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &dword_60C94B90);
          }
          sub_6034CE90(a1);
        }
      }
    }
  }
  return v6;
}
