/* sub_6055DB0C
 * address: 0x6055DB0C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055DB0C(StateMethodExecuter *result)
{
  if ( !BYTE1(result[1145].currentState) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CADEF0);
  return result;
}
