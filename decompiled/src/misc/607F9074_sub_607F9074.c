/* sub_607F9074
 * address: 0x607F9074   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F9074(StateMethodExecuter *result)
{
  if ( !*((_BYTE *)result[7088].vtable + 10832) )
    return StateMgr__changeState((StateMgr *)&result[62], (StateBase *)&dword_60CC6400);
  return result;
}
