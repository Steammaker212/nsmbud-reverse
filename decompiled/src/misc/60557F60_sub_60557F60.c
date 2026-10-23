/* sub_60557F60
 * address: 0x60557F60   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60557F60(StateMethodExecuter *result)
{
  if ( BYTE2(result[307].vtable) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAD6D8);
  return result;
}
