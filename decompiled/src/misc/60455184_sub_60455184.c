/* sub_60455184
 * address: 0x60455184   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60455184(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)(a1 + 1444);
  if ( BYTE1(result[305].owner) )
    return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&dword_60CA1828);
  return result;
}
