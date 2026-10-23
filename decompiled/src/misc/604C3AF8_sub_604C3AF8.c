/* sub_604C3AF8
 * address: 0x604C3AF8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C3AF8(StateMethodExecuter *result)
{
  if ( BYTE2(result[1180].owner) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA2E6C);
  if ( BYTE2(result[1180].currentState) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA2D0C);
  return result;
}
