/* sub_6055A930
 * address: 0x6055A930   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055A930(StateMethodExecuter *result)
{
  if ( BYTE2(result[336].currentState) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CADB4C);
  if ( LOBYTE(result[337].vtable) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CADB0C);
  return result;
}
