/* sub_60488E40
 * address: 0x60488E40   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60488E40(StateMethodExecuter *result)
{
  int currentState_low; // r1
  StateMgr *p_currentState; // r0
  StateBase *v3; // r1

  if ( !*(_BYTE *)(result[3979].currentState + 3637) )
  {
    currentState_low = LOBYTE(result[3982].currentState);
    p_currentState = (StateMgr *)&FIELD_U32(result + (1) * 12, 0x8);
    if ( currentState_low )
      v3 = (StateBase *)&unk_60C9F720;
    else
      v3 = (StateBase *)&unk_60C9F700;
    return StateMgr__changeState(p_currentState, v3);
  }
  return result;
}
