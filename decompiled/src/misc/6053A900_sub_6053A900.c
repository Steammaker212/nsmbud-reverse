/* sub_6053A900
 * address: 0x6053A900   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053A900(StateMethodExecuter *result)
{
  if ( !BYTE2(result[1393].owner) )
    return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)FIELD_U32(result + (4) * 12, 0x4));
  return result;
}
