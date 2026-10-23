/* sub_604FC1D4
 * address: 0x604FC1D4   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604FC1D4(StateMethodExecuter *result)
{
  if ( LOBYTE(result[3046].currentState) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA7198);
  return result;
}
