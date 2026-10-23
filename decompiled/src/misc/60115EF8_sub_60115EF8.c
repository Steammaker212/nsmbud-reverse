/* sub_60115EF8
 * address: 0x60115EF8   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60115EF8(int a1)
{
  int *i; // r7
  char v2; // r12
  int v3; // r8
  StateBase *CurrentState; // r0
  int v5; // r10

  for ( i = (int *)sub_60008598(ActorMgr__instance, 815, FIELD_U32(ActorMgr__instance, 27172));
        ;
        i = (int *)sub_60008598(ActorMgr__instance, 815, (int)(i + 1)) )
  {
    v3 = *i;
    if ( ((unsigned int)&dword_60C86B50 & ~(1611751348 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B50) )
    {
      dword_60C86B4C = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C86B50);
    }
    if ( !v3 || (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C86B4C) != 1 )
      break;
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 != (*(int (__fastcall **)(int *))(dword_60C98624 + 8))(&dword_60C98624) )
    {
      FIELD_U32(v3, 6100) = a1;
      StateMgr__changeState((StateMgr *)(v3 + 6084), (StateBase *)&dword_60C98624);
    }
  }
}
