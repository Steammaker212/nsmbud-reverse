/* sub_601A983C
 * address: 0x601A983C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A983C(StateMethodExecuter *result)
{
  char *vtable; // r1

  vtable = (char *)result[33].vtable;
  if ( !vtable )
    return StateMgr__changeState((StateMgr *)&result[23].currentState, (StateBase *)&unk_60C8A44C);
  result[33].vtable = vtable - 1;
  return result;
}
