/* sub_607F784C
 * address: 0x607F784C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F784C(StateMethodExecuter *result)
{
  if ( !BYTE2(result[318].currentState) )
    return StateMgr__changeState((StateMgr *)&result[18], (StateBase *)&dword_60CC63B4);
  return result;
}
