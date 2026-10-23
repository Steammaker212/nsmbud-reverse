/* sub_605362E4
 * address: 0x605362E4   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605362E4(StateMethodExecuter *result)
{
  if ( !LOBYTE(result[1395].vtable) )
    return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB204);
  return result;
}
