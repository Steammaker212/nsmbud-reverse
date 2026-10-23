/* sub_60174F3C
 * address: 0x60174F3C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60174F3C(int a1)
{
  int v2; // r0
  bool v3; // cc
  StateMethodExecuter *result; // r0

  ((void (*)(void))loc_60176120)();
  v2 = FIELD_U32(a1, 620);
  v3 = v2 <= 1;
  result = (StateMethodExecuter *)(v2 - 1);
  FIELD_U32(a1, 620) = result;
  if ( v3 )
    return StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C88C78);
  return result;
}
