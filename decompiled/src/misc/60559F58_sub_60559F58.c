/* sub_60559F58
 * address: 0x60559F58   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60559F58(StateMethodExecuter *result)
{
  int vtable; // r1

  vtable = (int)result[308].vtable;
  result[308].vtable = (void *)(vtable - 1);
  if ( vtable <= 1 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAD9F4);
  return result;
}
