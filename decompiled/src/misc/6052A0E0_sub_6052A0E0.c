/* sub_6052A0E0
 * address: 0x6052A0E0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6052A0E0(StateMethodExecuter *result)
{
  if ( (void *)result[4].currentState != result[4].owner )
    return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&unk_60CAA2A4);
  return result;
}
