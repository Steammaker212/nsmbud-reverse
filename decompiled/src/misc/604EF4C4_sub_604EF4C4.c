/* sub_604EF4C4
 * address: 0x604EF4C4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604EF4C4(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_604F39D8(a1);
  if ( !result )
    return StateMgr__changeState((StateMgr *)(a1 + 42504), &stru_60CA6540);
  return result;
}
