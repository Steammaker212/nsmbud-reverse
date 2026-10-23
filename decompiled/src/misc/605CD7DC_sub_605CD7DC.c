/* sub_605CD7DC
 * address: 0x605CD7DC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605CD7DC(StateMethodExecuter *result)
{
  if ( !LOBYTE(result[7].currentState) )
  {
    *(_DWORD *)result[3].vtable += result[5].owner;
    if ( --LOBYTE(result[9].vtable) == 0 )
      return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&dword_60CB1004);
  }
  return result;
}
