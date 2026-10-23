/* sub_6054A418
 * address: 0x6054A418   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6054A418(int a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0

  v2 = sub_6054AC20();
  result = (StateMethodExecuter *)sub_6054AE8C(v2);
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 28), (StateBase *)&dword_60CAC87C);
  return result;
}
