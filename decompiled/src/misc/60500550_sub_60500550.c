/* sub_60500550
 * address: 0x60500550   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60500550(StateMethodExecuter *result)
{
  StateMethodExecuter *v1; // r1

  if ( !BYTE2(result[385].currentState) )
  {
    v1 = result + 646;
    if ( result[384].currentState )
    {
      LOBYTE(FIELD_U32(v1, 0x0)) = 0;
      return StateMgr__changeState((StateMgr *)&result[2], &stru_60CA7548);
    }
    else
    {
      LOBYTE(FIELD_U32(v1, 0x0)) = 1;
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA7568);
    }
  }
  return result;
}
