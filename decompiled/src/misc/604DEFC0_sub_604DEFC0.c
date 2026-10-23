/* sub_604DEFC0
 * address: 0x604DEFC0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604DEFC0(StateMethodExecuter *result)
{
  if ( LOBYTE(result[524].currentState) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA50D4);
  return result;
}
