/* sub_601A9770
 * address: 0x601A9770   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A9770(StateMethodExecuter *result)
{
  char *vtable; // r1

  vtable = (char *)FIELD_U32(result + (33) * 12, 0x0);
  if ( !vtable )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (23) * 12, 0x8), (StateBase *)&unk_60C8A40C);
  FIELD_U32(result + (33) * 12, 0x0) = vtable - 1;
  return result;
}
