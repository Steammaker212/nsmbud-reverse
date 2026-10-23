/* sub_60648508
 * address: 0x60648508   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60648508(int a1)
{
  int *v2; // r0
  char v3; // r12
  int v4; // r5
  int *v5; // r1

  v2 = (int *)sub_60008598(ActorMgr__instance, 359, FIELD_U32(ActorMgr__instance, 27172));
  if ( v2 )
  {
    v4 = *v2;
    if ( ((unsigned int)&dword_60C7B364 & ~(1617200464 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) == 1 )
    {
      FIELD_U32(a1, 7316) = FIELD_U32(v4, 8);
      if ( FIELD_U32(a1, 7396) == 2 )
        v5 = &dword_60CB5FE0;
      else
        v5 = &dword_60CB5FC0;
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)v5);
    }
  }
}
