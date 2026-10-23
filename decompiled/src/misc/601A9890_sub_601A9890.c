/* sub_601A9890
 * address: 0x601A9890   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A9890(StateMethodExecuter *result)
{
  int vtable; // r1

  *(float *)&result[7].vtable = *(float *)&result[7].vtable + -1.0;
  vtable = (int)result[33].vtable;
  if ( !vtable )
    return StateMgr__changeState((StateMgr *)&result[23].currentState, (StateBase *)&dword_60C8A3EC);
  result[33].vtable = (void *)(vtable - 1);
  if ( vtable <= 67 )
    result[15].vtable = (char *)result[15].vtable - 130150524;
  return result;
}
