/* sub_6047F840
 * address: 0x6047F840   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6047F840(StateMethodExecuter *result)
{
  if ( HIBYTE(result[8].vtable) )
    return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60C9EC18);
  return result;
}
