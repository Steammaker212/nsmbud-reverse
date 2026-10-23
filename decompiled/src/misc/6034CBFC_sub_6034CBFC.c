/* sub_6034CBFC
 * address: 0x6034CBFC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6034CBFC(Enemy *a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5

  CurrentState = (StateBase *)FIELD_U32(a1, 0x0).field_17D4;
  if ( !CurrentState )
    CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C94C80 + 8))() )
    ((void (__fastcall *)(Enemy *))loc_6034AD68)(a1);
  return Enemy__vf264(a1);
}
