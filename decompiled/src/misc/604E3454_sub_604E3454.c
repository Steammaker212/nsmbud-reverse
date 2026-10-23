/* sub_604E3454
 * address: 0x604E3454   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604E3454(StateMethodExecuter *result)
{
  int v1; // r1

  v1 = result[1709].currentState - 1;
  result[1709].currentState = v1;
  if ( !v1 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA586C);
  return result;
}
