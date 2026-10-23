/* sub_604C9830
 * address: 0x604C9830   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C9830(StateMethodExecuter *result)
{
  if ( result[2332].currentState != 1 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA3318);
  return result;
}
