/* sub_60494540
 * address: 0x60494540   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60494540(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 36, 1u) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60CA0010);
  return result;
}
