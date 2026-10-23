/* sub_60642220
 * address: 0x60642220   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60642220(int a1)
{
  int *v2; // r5
  char v3; // r12
  _DWORD *v4; // r7
  int v5; // r4
  StateMgr *v6; // r4
  StateBase *CurrentState; // r0
  int v8; // r10

  v2 = (int *)sub_60008598(ActorMgr__instance, 217, FIELD_U32(ActorMgr__instance, 27172));
  v4 = (_DWORD *)(a1 + 7024);
  while ( 1 )
  {
    v5 = *v2;
    if ( ((unsigned int)&dword_60CB5A14 & ~(1617175276 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5A14) )
    {
      dword_60CB5A10 = (int)&off_60BCFCD8;
      _cxa_guard_release(&dword_60CB5A14);
    }
    if ( !v5 || (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60CB5A10) != 1 )
      break;
    if ( *v4 == FIELD_U32(v5, 7024) )
    {
      v6 = (StateMgr *)(v5 + 6084);
      CurrentState = StateMgr__getCurrentState(v6);
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v8 == (*(int (__fastcall **)(int *))(dword_60CB59D0 + 8))(&dword_60CB59D0) )
        StateMgr__changeState(v6, (StateBase *)&dword_60CB59F0);
    }
    v2 = (int *)sub_60008598(ActorMgr__instance, 217, (int)(v2 + 1));
  }
}
