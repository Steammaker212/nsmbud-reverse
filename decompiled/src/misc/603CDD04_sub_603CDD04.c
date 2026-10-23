/* sub_603CDD04
 * address: 0x603CDD04   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603CDD04(StateMethodExecuter *result)
{
  if ( result[508].currentState )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60C98BB8);
  return result;
}
