/* sub_60535DE0
 * address: 0x60535DE0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60535DE0(StateMethodExecuter *result)
{
  if ( result[4372].currentState )
    return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB1C4);
  return result;
}
