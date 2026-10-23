/* sub_6020CF24
 * address: 0x6020CF24   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6020CF24(int a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0

  ((void (*)(void))loc_60168DF8)();
  v2 = FIELD_U32(a1, 440);
  if ( !v2 )
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C8CC8C);
  result = (StateMethodExecuter *)(v2 - 1);
  FIELD_U32(a1, 440) = result;
  return result;
}
