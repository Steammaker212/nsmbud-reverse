/* sub_601A639C
 * address: 0x601A639C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A639C(StateMethodExecuter *result)
{
  int vtable; // r1

  vtable = (int)result[37].vtable;
  if ( vtable >= 1 )
    result[37].vtable = (void *)--vtable;
  if ( !vtable )
    return StateMgr__changeState((StateMgr *)&result[23].currentState, (StateBase *)&dword_60C8A14C);
  return result;
}
