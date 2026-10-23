/* sub_6049E1A8
 * address: 0x6049E1A8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049E1A8(StateMethodExecuter *result)
{
  if ( !BYTE1(result[1875].vtable) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA0D6C);
  return result;
}
