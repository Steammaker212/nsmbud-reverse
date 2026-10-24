/* sub_607E07BC
 * address: 0x607E07BC   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607E07BC(StateMethodExecuter *result)
{
  int vtable; // r1

  vtable = (int)FIELD_U32(result + (4) * 12, 0x0);
  FIELD_U32(result + (4) * 12, 0x0) = (void *)(vtable - 1);
  if ( vtable <= 0 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CC5898);
  return result;
}
