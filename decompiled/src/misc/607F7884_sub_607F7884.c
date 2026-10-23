/* sub_607F7884
 * address: 0x607F7884   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F7884(StateMethodExecuter *result)
{
  if ( !BYTE1(result[633].currentState) )
    return StateMgr__changeState((StateMgr *)&result[18], (StateBase *)&dword_60CC63B4);
  return result;
}
