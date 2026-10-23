/* sub_6020D15C
 * address: 0x6020D15C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6020D15C(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_60190968(dword_60C8996C);
  if ( !result )
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C8CC8C);
  return result;
}
