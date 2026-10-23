/* sub_6021388C
 * address: 0x6021388C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6021388C(int a1)
{
  int v2; // r0
  bool v3; // cc
  StateMethodExecuter *result; // r0

  ((void (*)(void))loc_6021508C)();
  v2 = FIELD_U32(a1, 464);
  v3 = v2 <= 1;
  result = (StateMethodExecuter *)(v2 - 1);
  FIELD_U32(a1, 464) = result;
  if ( v3 )
    return StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8D064);
  return result;
}
