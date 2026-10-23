/* sub_60558B8C
 * address: 0x60558B8C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60558B8C(StateMethodExecuter *result)
{
  int vtable; // r1

  vtable = (int)result[299].vtable;
  result[299].vtable = (void *)(vtable - 1);
  if ( vtable <= 1 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAD7F0);
  return result;
}
