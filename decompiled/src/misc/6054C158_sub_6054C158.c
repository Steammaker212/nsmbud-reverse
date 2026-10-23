/* sub_6054C158
 * address: 0x6054C158   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6054C158(StateMethodExecuter *result)
{
  if ( ((int)result[308].vtable & 0x20F0) != 0 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CACAE4);
  return result;
}
