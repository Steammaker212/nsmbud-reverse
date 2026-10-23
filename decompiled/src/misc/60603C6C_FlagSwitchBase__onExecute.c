/* FlagSwitchBase__onExecute
 * address: 0x60603C6C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F3C
// 
// Overridden by: None
int __fastcall FlagSwitchBase__onExecute(StateActor *a1)
{
  StateMgr__execute(&FIELD_U32(a1, 0x17B0).manager);
  sub_60603C90(a1);
  return 1;
}
