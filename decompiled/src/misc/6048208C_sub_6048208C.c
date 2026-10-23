/* sub_6048208C
 * address: 0x6048208C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6048208C(StateMethodExecuter *result)
{
  if ( BYTE1(result[299].vtable) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60C9EF3C);
  return result;
}
