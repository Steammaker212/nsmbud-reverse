/* StateMgr_ctor
 * address: 0x60818168   size: 44   group: state
 * sym: # StateMgr_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMgr *__fastcall StateMgr_ctor(StateMgr *this, StateExecuter *executer, StateBase *firstState)
{
  FIELD_U32(this, 0x0) = executer;
  FIELD_U32(this, 0x4) = 0;
  FIELD_U32(this, 0x8) = 0;
  FIELD_U32(this, 0xC) = &NullState;
  if ( FIELD_U32(firstState, 0x4) != -1 )
    FIELD_U32(this, 0x4) = firstState;
  return this;
}
