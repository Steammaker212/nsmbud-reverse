/* MultiStateActor__doStateChange
 * address: 0x600096EC   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602A929C : Enemy
StateMethodExecuter *__fastcall MultiStateActor__doStateChange(int a1, StateBase *a2)
{
  return StateMgr__changeState((StateMgr *)(a1 + 6084), a2);
}
