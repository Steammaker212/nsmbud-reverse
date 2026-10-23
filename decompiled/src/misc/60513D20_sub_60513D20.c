/* sub_60513D20
 * address: 0x60513D20   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60513D20(int a1)
{
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA8518);
}
