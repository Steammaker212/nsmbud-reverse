/* sub_60544824
 * address: 0x60544824   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60544824(StateMethodExecuter *result)
{
  if ( *((_BYTE *)result[296].owner + 16) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CABF5C);
  return result;
}
