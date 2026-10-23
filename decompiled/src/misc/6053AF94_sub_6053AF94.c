/* sub_6053AF94
 * address: 0x6053AF94   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053AF94(StateMethodExecuter *result)
{
  void *vtable; // r1

  vtable = result[4371].vtable;
  if ( vtable )
  {
    if ( vtable == (void *)2 )
      return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB6D4);
    else
      return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB6B4);
  }
  return result;
}
