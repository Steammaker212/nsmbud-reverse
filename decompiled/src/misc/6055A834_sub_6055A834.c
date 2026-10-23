/* sub_6055A834
 * address: 0x6055A834   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055A834(StateMethodExecuter *result)
{
  if ( HIBYTE(result[336].currentState) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CADACC);
  return result;
}
