/* StateMgr__getCurrentState
 * address: 0x60818198   size: 56   group: state
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateBase *__fastcall StateMgr__getCurrentState(StateMgr *this)
{
  StateMethodExecuter *methodExecuter; // r0
  StateBase *result; // r0

  methodExecuter = FIELD_U32(this, 0x8);
  if ( methodExecuter )
    return (StateBase *)(*((int (__fastcall **)(StateMethodExecuter *))FIELD_U32(methodExecuter, 0x0) + 2))(methodExecuter);
  result = FIELD_U32(this, 0x4);
  if ( !result )
    return &NullState;
  return result;
}
