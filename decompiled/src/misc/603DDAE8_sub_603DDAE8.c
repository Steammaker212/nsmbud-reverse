/* sub_603DDAE8
 * address: 0x603DDAE8   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603DDAE8(unsigned int *a1)
{
  unsigned int *v2; // r6
  int v3; // r5
  char v4; // r12
  int v5; // r1
  int v6; // r1
  int v7; // r5
  char v8; // r12
  StateBase *CurrentState; // r0
  int v10; // r6

  v2 = a1 + 1585;
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1585]);
  if ( ((unsigned int)&dword_60C90E54 & ~(1614666536 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C90E54) )
  {
    dword_60C90E50 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C90E54);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C90E50) == 1 )
    FIELD_U8(v3, 6300) = 1;
  v5 = a1[1582];
  if ( v5 >= 1 )
  {
    v6 = v5 - 1;
    a1[1582] = v6;
    if ( !v6 )
      sub_603DF65C(a1, 2);
  }
  v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v2);
  if ( ((unsigned int)&dword_60C90E54 & ~(1614666736 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C90E54) )
  {
    dword_60C90E50 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C90E54);
  }
  if ( !v7 || !(**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C90E50) )
    return (*(int (__fastcall **)(unsigned int *, int *))(*a1 + 192))(a1, &dword_60C993DC);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v10 == (*(int (**)(void))(dword_60C90DD0 + 8))() )
    (*(void (__fastcall **)(unsigned int *, int *))(*a1 + 192))(a1, &dword_60C9935C);
  return sub_603DF4C4(a1, v7);
}
