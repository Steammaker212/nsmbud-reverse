/* sub_605E0870
 * address: 0x605E0870   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E0870(int a1, StateBase *a2, int a3)
{
  FIELD_U32(a1, 8020) = a3;
  return StateMgr__changeState((StateMgr *)(a1 + 6740), a2);
}
