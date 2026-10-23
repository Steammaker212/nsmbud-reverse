/* sub_604DFFE4
 * address: 0x604DFFE4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604DFFE4(StateMethodExecuter *result)
{
  if ( (BYTE1(result[301].vtable) & 0x20) != 0 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA5310);
  return result;
}
