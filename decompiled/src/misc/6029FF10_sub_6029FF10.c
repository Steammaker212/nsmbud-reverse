/* sub_6029FF10
 * address: 0x6029FF10   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6029FF10(int a1, int a2, int a3)
{
  StateBase *CurrentState; // r0
  int v6; // r6
  char v7; // r12
  int v8; // r5

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*(int (**)(void))(dword_60C90238 + 8))() )
  {
    v8 = FIELD_U32(a3, 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613365096 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v8
      && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B378) == 1
      && (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v8 + 1168))(v8, a1, 13) == 1 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C90258);
    }
  }
}
