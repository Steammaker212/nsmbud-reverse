/* sub_604943F0
 * address: 0x604943F0   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604943F0(int a1)
{
  return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60CA0130);
}
