/* sub_60536620
 * address: 0x60536620   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60536620(StateMethodExecuter *result)
{
  if ( *((_BYTE *)result[1300].owner + 16) )
    return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAAE04);
  return result;
}
