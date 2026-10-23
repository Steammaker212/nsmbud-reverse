/* StateMgrExt_changeState
 * address: 0x60818290   size: 140   group: state
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall StateMgrExt_changeState(StateMgr *this, StateBase *state)
{
  StateMethodExecuter *methodExecuterPtr; // r0
  StateMethodExecuter **methodExecuterPtrPtr; // r6
  StateBase *nextState; // r0
  StateMethodExecuter *v7; // r1
  StateMethodExecuter *result; // r0

  methodExecuterPtrPtr = &FIELD_U32(this, 0x8);
  methodExecuterPtr = FIELD_U32(this, 0x8);
  if ( methodExecuterPtr )
  {
    nextState = (StateBase *)(*((int (__fastcall **)(StateMethodExecuter *))FIELD_U32(methodExecuterPtr, 0x0) + 2))(methodExecuterPtr);
    v7 = *methodExecuterPtrPtr;
  }
  else
  {
    nextState = FIELD_U32(this, 0x4);
    if ( !nextState )
      nextState = &NullState;
    v7 = 0;
  }
  *((_DWORD *)this + 4) = nextState;
  FIELD_U32(this, 0xC) = (StateBase *)(*((int (__fastcall **)(StateMethodExecuter *))FIELD_U32(v7, 0x0) + 2))(v7);
  (*((void (__fastcall **)(StateExecuter *, StateMethodExecuter **))FIELD_U32(this, 0x0) + 5))(
    FIELD_U32(this, 0x0),
    methodExecuterPtrPtr);
  result = (StateMethodExecuter *)(*((int (__fastcall **)(StateExecuter *, StateBase *))FIELD_U32(this, 0x0) + 2))(
                                    FIELD_U32(this, 0x0),
                                    state);
  FIELD_U32(this, 0x8) = result;
  return result;
}
