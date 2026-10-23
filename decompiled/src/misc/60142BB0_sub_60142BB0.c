/* sub_60142BB0
 * address: 0x60142BB0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60142BB0(StateMethodExecuter *result)
{
  if ( result[511].owner == (void *)2 )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60C87E34);
  return result;
}
