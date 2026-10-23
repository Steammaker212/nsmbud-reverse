/* sub_601392FC
 * address: 0x601392FC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_601392FC(int a1)
{
  StateBase *CurrentState; // r0
  int v2; // r5

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v2 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v2 == (*(int (**)(void))(dword_60C87A34 + 8))() )
    return &dword_60C879A4;
  else
    return sub_60138704();
}
