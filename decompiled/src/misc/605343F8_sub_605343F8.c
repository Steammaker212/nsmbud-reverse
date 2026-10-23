/* sub_605343F8
 * address: 0x605343F8   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605343F8(StateMethodExecuter *result)
{
  if ( !BYTE2(result[1395].vtable) )
    return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)result[4].owner);
  return result;
}
