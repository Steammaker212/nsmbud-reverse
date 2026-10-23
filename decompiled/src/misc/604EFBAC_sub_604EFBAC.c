/* sub_604EFBAC
 * address: 0x604EFBAC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604EFBAC(StateMethodExecuter *result)
{
  if ( (result[4015].currentState & 0x7FFFF) != 0 )
    return StateMgr__changeState((StateMgr *)&result[3542], &stru_60CA6500);
  return result;
}
