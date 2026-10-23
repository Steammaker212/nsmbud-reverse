/* sub_6053F8C8
 * address: 0x6053F8C8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053F8C8(StateMethodExecuter *result)
{
  if ( HIBYTE(result[2894].vtable) )
    return StateMgr__changeState((StateMgr *)&result[2342].owner, (StateBase *)&dword_60CABADC);
  return result;
}
