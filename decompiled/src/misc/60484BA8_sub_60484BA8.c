/* sub_60484BA8
 * address: 0x60484BA8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60484BA8(StateMethodExecuter *result)
{
  int vtable; // r1

  vtable = (int)result[299].vtable;
  result[299].vtable = (void *)(vtable - 1);
  if ( vtable <= 1 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60C9F290);
  return result;
}
