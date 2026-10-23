/* sub_6012D98C
 * address: 0x6012D98C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6012D98C(StateMethodExecuter *result)
{
  if ( LOBYTE(result[508].currentState) )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60C87458);
  return result;
}
