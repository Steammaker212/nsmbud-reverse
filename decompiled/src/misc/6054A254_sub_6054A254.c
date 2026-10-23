/* sub_6054A254
 * address: 0x6054A254   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6054A254(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_6054AA9C();
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 28), (StateBase *)&dword_60CAC83C);
  return result;
}
