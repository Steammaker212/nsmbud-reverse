/* sub_604EF074
 * address: 0x604EF074   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604EF074(StateMethodExecuter *result)
{
  if ( LOBYTE(result[3928].owner) )
    return StateMgr__changeState((StateMgr *)&result[3542], (StateBase *)&dword_60CA6560);
  return result;
}
