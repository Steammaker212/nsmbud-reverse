/* sub_601E1D9C
 * address: 0x601E1D9C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601E1D9C(int a1)
{
  int v2; // r1

  FIELD_F32(a1, 388) = sub_6019EEE0();
  sub_6018E528(a1, v2);
  return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C89528);
}
