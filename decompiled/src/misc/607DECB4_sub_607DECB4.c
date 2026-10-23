/* sub_607DECB4
 * address: 0x607DECB4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607DECB4(StateMethodExecuter *result)
{
  if ( !LOBYTE(result[328].currentState) )
    ++result[329].vtable;
  if ( LOBYTE(result[329].owner) )
  {
    if ( result[329].vtable >= (void *)0xB4 )
      return StateMgr__changeState((StateMgr *)&result[17].currentState, (StateBase *)&dword_60CC5794);
  }
  return result;
}
