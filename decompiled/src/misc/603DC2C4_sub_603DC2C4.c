/* sub_603DC2C4
 * address: 0x603DC2C4   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603DC2C4(int a1, int a2)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  int v3; // r4
  char v4; // r12
  char v5; // r12
  int v6; // r6
  StateBase *CurrentState; // r0
  int v8; // r4
  int v9; // r1
  int *v10; // r0

  v2 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 144);
  v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  if ( (unsigned __int8)(FIELD_U8(v3, 533) - 1) <= 1u )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1614660368 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B378) == 1 && (FIELD_U8(v3, 1210) & 1) != 0 )
    {
      if ( ((unsigned int)dword_60C992C0 & ~(1614660496 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C992C0) )
      {
        dword_60C992BC = (int)&off_60BC00C8;
        _cxa_guard_release(dword_60C992C0);
      }
      if ( v2 )
      {
        v6 = (**v2)(v2, &dword_60C992BC);
        if ( v6 )
          v6 = (int)v2;
      }
      else
      {
        v6 = 0;
      }
      if ( FIELD_U8(v3, 533) != 1 || !sub_6075F914(v3) )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v8 == (*(int (**)(void))(dword_60C9925C + 8))() )
        {
          v9 = 0;
          v10 = (int *)(v6 + 6816);
          if ( (FIELD_U8(v6, 20) & 1) == 0 )
            v9 = *v10 - 1;
          *v10 = v9;
          (*(void (__fastcall **)(int, void *))(*(_DWORD *)v6 + 192))(v6, &unk_60C9927C);
        }
      }
    }
  }
}
