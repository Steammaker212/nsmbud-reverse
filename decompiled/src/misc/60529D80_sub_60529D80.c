/* sub_60529D80
 * address: 0x60529D80   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60529D80(StateMethodExecuter *result)
{
  if ( !BYTE1(result[228].currentState) )
  {
    result[253].vtable = (void *)result[252].currentState;
    return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&dword_60CAA15C);
  }
  return result;
}
