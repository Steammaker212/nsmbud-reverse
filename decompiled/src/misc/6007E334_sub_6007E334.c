/* sub_6007E334
 * address: 0x6007E334   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6007E334(StateMethodExecuter *result)
{
  int vtable; // r2

  vtable = (int)result[529].vtable;
  if ( vtable >= 1 )
  {
    result[529].vtable = (void *)(vtable - 1);
    if ( vtable == 1 )
      return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60C818C8);
  }
  return result;
}
