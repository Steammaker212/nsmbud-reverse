/* sub_601F2474
 * address: 0x601F2474   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F2474(StateMgr *a1)
{
  StateMgr *v1; // r4

  v1 = a1 + 18;
  ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[4].methodExecuter.owner)(a1);
  return StateMgr__changeState(v1, (StateBase *)&unk_60C8B654);
}
