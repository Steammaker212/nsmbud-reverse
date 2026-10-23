/* sub_606DC1F0
 * address: 0x606DC1F0   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606DC1F0(int a1)
{
  int *i; // r7
  char v3; // r12
  int v4; // r4
  StateMgr *v5; // r4
  StateBase *CurrentState; // r0
  int v7; // r5

  for ( i = (int *)sub_60008598(ActorMgr__instance, 808, FIELD_U32(ActorMgr__instance, 27172));
        ;
        i = (int *)sub_60008598(ActorMgr__instance, 808, (int)(i + 1)) )
  {
    v4 = *i;
    if ( ((unsigned int)&dword_60C906C8 & ~(1617805972 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C906C8) )
    {
      dword_60C906C4 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C906C8);
    }
    if ( !v4 || (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C906C4) != 1 )
      break;
    if ( FIELD_U32(v4, 8) != FIELD_U32(a1, 8) )
    {
      FIELD_U32(v4, 6572) = (float)(FIELD_F32(a1, 108) - FIELD_F32(v4, 108)) > 0.0;
      v5 = (StateMgr *)(v4 + 6084);
      CurrentState = StateMgr__getCurrentState(v5);
      v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v7 != (*(int (**)(void))(dword_60CBB91C + 8))() )
        StateMgr__changeState(v5, (StateBase *)&dword_60CBB91C);
      return;
    }
  }
}
