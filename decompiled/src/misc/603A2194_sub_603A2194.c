/* sub_603A2194
 * address: 0x603A2194   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A2194(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*((int (**)(void))ShellEnemy_StateID_slide._._.vtable + 2))() )
    JUMPOUT(0x60000CD0);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 740))(a1);
}
