/* StateMgr__changeState
 * address: 0x60818224   size: 108   group: state
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall StateMgr__changeState(StateMgr *this, StateBase *state)
{
  StateMethodExecuter *currentMethodExecuter; // r0
  StateMethodExecuter **p_currentMethodExecuter; // r5
  StateMethodExecuter *result; // r0

  FIELD_U32(this, 0x4) = state;
  p_currentMethodExecuter = &FIELD_U32(this, 0x8);
  currentMethodExecuter = FIELD_U32(this, 0x8);
  if ( !currentMethodExecuter
    || (FIELD_U32(this, 0xC) = (StateBase *)(*((int (__fastcall **)(StateMethodExecuter *))FIELD_U32(currentMethodExecuter, 0x0) + 2))(currentMethodExecuter),
        result = (StateMethodExecuter *)(*((int (__fastcall **)(StateExecuter *, StateMethodExecuter **))FIELD_U32(this, 0x0)
                                         + 3))(
                                          FIELD_U32(this, 0x0),
                                          p_currentMethodExecuter),
        FIELD_U32(this, 0x4)) )
  {
    result = (StateMethodExecuter *)(*((int (__fastcall **)(StateExecuter *))FIELD_U32(this, 0x0) + 2))(FIELD_U32(this, 0x0));
    FIELD_U32(this, 0x4) = 0;
    FIELD_U32(this, 0x8) = result;
  }
  return result;
}
