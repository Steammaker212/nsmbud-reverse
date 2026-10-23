/* sub_601A1DCC
 * address: 0x601A1DCC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A1DCC(StateMethodExecuter *result)
{
  if ( FIELD_U32(dword_60C99DD0, 3796) == 3 )
    return StateMgr__changeState((StateMgr *)&result[238].currentState, (StateBase *)&dword_60C89F1C);
  return result;
}
