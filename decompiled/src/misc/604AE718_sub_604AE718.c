/* sub_604AE718
 * address: 0x604AE718   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604AE718(StateMethodExecuter *result)
{
  if ( *(_BYTE *)(result[295].currentState + 16) )
    return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&dword_60CA17A8);
  return result;
}
