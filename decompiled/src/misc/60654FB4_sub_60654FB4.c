/* sub_60654FB4
 * address: 0x60654FB4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60654FB4(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_605BF51C(a1 + 7448);
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB63C4);
  return result;
}
