/* sub_607E26D0
 * address: 0x607E26D0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607E26D0(StateMethodExecuter *result)
{
  if ( FIELD_U32(dword_60C99DB8, 13844) )
    return StateMgr__changeState((StateMgr *)&result[17].currentState, (StateBase *)&dword_60CC5A5C);
  return result;
}
