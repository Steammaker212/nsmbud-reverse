/* sub_60803E0C
 * address: 0x60803E0C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60803E0C(int a1, int a2)
{
  char v2; // r12
  StateBase *CurrentState; // r0
  int v6; // r6
  int v7; // r1
  _DWORD v9[6]; // [sp+0h] [bp-18h] BYREF

  if ( ((unsigned int)&dword_60C830F8 & ~(1619017260 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C830F8) )
  {
    dword_60C830F4 = (int)&off_60BC321C;
    _cxa_guard_release(&dword_60C830F8);
  }
  if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C830F4) != 1 )
    return 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a2 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 != (*((int (**)(void))ShellEnemy_StateID_slide._._.vtable + 2))() )
    return 0;
  v7 = FIELD_U32(a2, 112);
  v9[0] = FIELD_U32(a2, 108);
  v9[1] = v7;
  return ((int (__fastcall *)(_DWORD *, _DWORD))loc_6015ABF4)(v9, FIELD_U32(a1, 4)) != 0;
}
