/* sub_6053A600
 * address: 0x6053A600   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053A600(StateMethodExecuter *result)
{
  if ( HIBYTE(result[6964].owner) )
    return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB554);
  return result;
}
