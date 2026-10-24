/* sub_601ADED4
 * address: 0x601ADED4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601ADED4(StateMethodExecuter *result)
{
  int currentState; // r1

  currentState = FIELD_U32(result + (47) * 12, 0x8);
  if ( !currentState )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (23) * 12, 0x8), (StateBase *)&unk_60C8A6EC);
  FIELD_U32(result + (47) * 12, 0x8) = currentState - 1;
  return result;
}
