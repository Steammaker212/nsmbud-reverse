/* sub_6053F51C
 * address: 0x6053F51C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053F51C(StateMethodExecuter *result)
{
  int currentState; // r1

  currentState = result[2890].currentState;
  if ( currentState == 2 )
    return StateMgr__changeState((StateMgr *)&result[2342].owner, (StateBase *)&dword_60CABB9C);
  if ( currentState == 1 )
    return StateMgr__changeState((StateMgr *)&result[2342].owner, (StateBase *)&dword_60CABABC);
  return result;
}
