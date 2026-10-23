/* sub_604D74A4
 * address: 0x604D74A4   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604D74A4(StateMethodExecuter *result)
{
  if ( !BYTE2(result[390].vtable) )
    return StateMgr__changeState((StateMgr *)&result[1].currentState, &stru_60CA3F98);
  return result;
}
