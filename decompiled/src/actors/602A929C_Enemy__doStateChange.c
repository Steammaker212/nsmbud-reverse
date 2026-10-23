/* Enemy__doStateChange
 * address: 0x602A929C   size: 188   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: MultiStateActor : 0x600096EC
// 
// Overridden by: None
StateMethodExecuter *__fastcall Enemy__doStateChange(Enemy *this, StateBase *state)
{
  int *v4; // r7
  StateMethodExecuter **methodExecuter; // r6
  StateMgr *mgr; // r5
  StateExecuter *executer; // t1
  int v8; // r1
  StateMethodExecuter *result; // r0

  v4 = &FIELD_U32(this, 0x17D4);
  if ( !FIELD_U32(this, 0x17D4) )
    return StateMgr__changeState(&FIELD_U32(this, 0x17C4), state);
  methodExecuter = &FIELD_U32(this, 0x17CC);
  FIELD_U32(this, 0x17D0) = (StateBase *)(*((int (__fastcall **)(StateMethodExecuter *))FIELD_U32(this, 0x17CC)
                                                   + 2))(FIELD_U32(this, 0x17CC));
  executer = FIELD_U32(this, 0x17C4);
  mgr = &FIELD_U32(this, 0x17C4);
  (*((void (__fastcall **)(StateExecuter *, StateMethodExecuter **))FIELD_U32(executer, 0x0) + 3))(executer, methodExecuter);
  v8 = *v4;
  *v4 = 0;
  *methodExecuter = (StateMethodExecuter *)(*((int (__fastcall **)(StateExecuter *, int))FIELD_U32(mgr, 0x0) + 4))(
                                             FIELD_U32(mgr, 0x0),
                                             v8);
  (*((void (__fastcall **)(StateExecuter *, StateMethodExecuter **))FIELD_U32(mgr, 0x0) + 3))(
    FIELD_U32(mgr, 0x0),
    methodExecuter);
  result = (StateMethodExecuter *)(*((int (__fastcall **)(StateExecuter *, StateBase *))FIELD_U32(mgr, 0x0) + 2))(
                                    FIELD_U32(mgr, 0x0),
                                    state);
  *methodExecuter = result;
  return result;
}
