/* sub_60142290
 * address: 0x60142290   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60142290(int a1)
{
  int (__fastcall ***v1)(_DWORD, int *); // r5
  char v2; // r12
  int v3; // r4
  int v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r7

  v1 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( ((unsigned int)&dword_60C823D4 & ~(1611932360 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C823D4) )
  {
    dword_60C823D0 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C823D4);
  }
  v3 = 0;
  v4 = 0;
  if ( v1 )
  {
    v4 = (**v1)(v1, &dword_60C823D0);
    if ( v4 )
      v4 = (int)v1;
  }
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 != (*(int (**)(void))(dword_60C87DEC + 8))() )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 72))(v4);
    StateMgr__changeState((StateMgr *)(v4 + 6084), (StateBase *)&unk_60C87E10);
    return 1;
  }
  return v3;
}
