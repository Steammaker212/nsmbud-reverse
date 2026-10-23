/* sub_607EF24C
 * address: 0x607EF24C   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607EF24C(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)(a1 + 2648);
  if ( !LOBYTE(result[1979].vtable) )
    return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&dword_60CA6040);
  return result;
}
