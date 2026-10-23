/* sub_607D885C
 * address: 0x607D885C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607D885C(StateMethodExecuter *result)
{
  __int16 v1; // r1

  v1 = LOWORD(result[7].currentState) - 1;
  LOWORD(result[7].currentState) = v1;
  if ( !v1 )
    return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&dword_60CC56D4);
  return result;
}
