/* sub_601F23BC
 * address: 0x601F23BC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F23BC(StateMgr *a1)
{
  ((void (__fastcall *)(StateMgr *, int))FIELD_U32(a1, 0x0)[20].vtable)(a1, 1);
  ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[4].methodExecuter.owner)(a1);
  return StateMgr__changeState(a1 + 18, (StateBase *)&unk_60C8B654);
}
