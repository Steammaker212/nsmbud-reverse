/* sub_604AAAF8
 * address: 0x604AAAF8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604AAAF8(StateMethodExecuter *result)
{
  if ( LOBYTE(result[23311].vtable) )
  {
    LOBYTE(result[4].currentState) = 1;
    return StateMgr__changeState((StateMgr *)&result[3].owner, (StateBase *)&dword_60CA1690);
  }
  return result;
}
