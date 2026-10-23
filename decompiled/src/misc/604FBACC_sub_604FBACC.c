/* sub_604FBACC
 * address: 0x604FBACC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604FBACC(StateMethodExecuter *result)
{
  if ( !BYTE2(result[3045].currentState) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA7158);
  return result;
}
