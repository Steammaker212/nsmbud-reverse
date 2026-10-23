/* sub_604BEC04
 * address: 0x604BEC04   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604BEC04(StateMethodExecuter *result)
{
  if ( !BYTE2(result[133].currentState) )
    return StateMgr__changeState((StateMgr *)&result[43].owner, (StateBase *)&dword_60CA28D8);
  return result;
}
