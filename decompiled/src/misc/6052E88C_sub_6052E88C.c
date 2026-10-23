/* sub_6052E88C
 * address: 0x6052E88C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6052E88C(StateMethodExecuter *result)
{
  int vtable; // r1

  vtable = (int)result[949].vtable;
  result[949].vtable = (void *)(vtable - 1);
  if ( vtable <= 1 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAA860);
  return result;
}
