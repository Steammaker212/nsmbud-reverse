/* sub_607EAEC0
 * address: 0x607EAEC0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607EAEC0(StateMethodExecuter *result)
{
  void *vtable; // r1

  vtable = result[595].vtable;
  if ( vtable == (void *)2 )
    return StateMgr__changeState((StateMgr *)&result[18], (StateBase *)&dword_60CC5AC8);
  if ( vtable == (void *)1 )
    return StateMgr__changeState((StateMgr *)&result[18], (StateBase *)&dword_60CC5AE8);
  return result;
}
