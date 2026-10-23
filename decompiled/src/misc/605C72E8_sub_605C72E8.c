/* sub_605C72E8
 * address: 0x605C72E8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605C72E8(StateMethodExecuter *result)
{
  if ( --BYTE2(result[245].vtable) == 0 )
    return StateMgr__changeState((StateMgr *)&result[85].owner, &stru_60CB0B64);
  return result;
}
