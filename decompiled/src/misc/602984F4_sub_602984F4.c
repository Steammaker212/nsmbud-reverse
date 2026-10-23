/* sub_602984F4
 * address: 0x602984F4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602984F4(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5

  if ( FIELD_U8(a1, 6672) )
    return 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C8FCC8 + 8))() )
    return 0;
  else
    return sub_6029855C(a1);
}
