/* sub_604C3990
 * address: 0x604C3990   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C3990(StateMethodExecuter *result)
{
  if ( !LOBYTE(result[1157].currentState)
    && !BYTE1(result[1157].currentState)
    && !BYTE2(result[1157].currentState)
    && !HIBYTE(result[1157].currentState)
    && !LOBYTE(result[1158].vtable)
    && !BYTE1(result[1158].vtable)
    && !BYTE2(result[1158].vtable)
    && !HIBYTE(result[1158].vtable)
    && !LOBYTE(result[1158].owner)
    && !BYTE1(result[1158].owner)
    && !BYTE2(result[1158].owner)
    && !HIBYTE(result[1158].owner)
    && !BYTE1(result[1159].vtable)
    && !BYTE2(result[1159].vtable)
    && !HIBYTE(result[1159].vtable)
    && !LOBYTE(result[1159].owner) )
  {
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA2C4C);
  }
  return result;
}
