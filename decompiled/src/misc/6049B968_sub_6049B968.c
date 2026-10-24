/* sub_6049B968
 * address: 0x6049B968   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049B968(StateMethodExecuter *result)
{
  _BYTE *currentState; // r1

  currentState = (_BYTE *)FIELD_U32(result + (302) * 12, 0x8);
  if ( !currentState[2691] && !currentState[2702] && !currentState[2690] )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)FIELD_U32(result + (3) * 12, 0x4));
  return result;
}
