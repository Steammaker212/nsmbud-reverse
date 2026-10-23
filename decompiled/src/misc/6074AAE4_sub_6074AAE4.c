/* sub_6074AAE4
 * address: 0x6074AAE4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6074AAE4(int a1)
{
  StateMethodExecuter *result; // r0

  ((void (*)(void))loc_6074BF00)();
  result = *(StateMethodExecuter **)(a1 + 644);
  if ( !result )
    return StateMgr__changeState((StateMgr *)(a1 + 1240), &stru_60CBE90C);
  return result;
}
