/* sub_6053C2B8
 * address: 0x6053C2B8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053C2B8(StateMethodExecuter *result)
{
  if ( result[4371].vtable )
    return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB834);
  return result;
}
