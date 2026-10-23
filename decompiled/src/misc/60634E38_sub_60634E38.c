/* sub_60634E38
 * address: 0x60634E38   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_60634E38()
{
  int v0; // r4
  char v1; // r12
  StateBase *CurrentState; // r0
  int v3; // r4

  v0 = *(_DWORD *)sub_60008598(ActorMgr__instance, 371, FIELD_U32(ActorMgr__instance, 27172));
  if ( ((unsigned int)&dword_60C80058 & ~(1617120884 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C80058) )
  {
    dword_60C80054 = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C80058);
  }
  if ( !v0 || (**(int (__fastcall ***)(int, int *))v0)(v0, &dword_60C80054) != 1 )
    return 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v0 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  return v3 == (*(int (**)(void))(dword_60C80310 + 8))();
}
