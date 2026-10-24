/* sub_60209EA8
 * address: 0x60209EA8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60209EA8(StateMethodExecuter *result)
{
  int vtable; // r1

  vtable = (int)FIELD_U32(result + (44) * 12, 0x0);
  if ( vtable >= 1 )
    FIELD_U32(result + (44) * 12, 0x0) = (void *)--vtable;
  if ( !vtable )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (23) * 12, 0x8), (StateBase *)&dword_60C8C8E4);
  return result;
}
