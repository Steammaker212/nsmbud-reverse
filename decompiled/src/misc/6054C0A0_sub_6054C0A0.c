/* sub_6054C0A0
 * address: 0x6054C0A0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6054C0A0(StateMethodExecuter *result)
{
  int v1; // r1

  v1 = result[341].currentState - 1;
  result[341].currentState = v1;
  if ( !v1 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CACAA4);
  return result;
}
