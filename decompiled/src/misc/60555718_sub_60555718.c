/* sub_60555718
 * address: 0x60555718   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60555718(StateMethodExecuter *result)
{
  if ( !LOBYTE(result[304].vtable) && !BYTE1(result[304].vtable) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAD4A8);
  return result;
}
