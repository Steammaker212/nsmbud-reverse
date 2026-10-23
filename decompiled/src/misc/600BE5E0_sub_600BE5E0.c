/* sub_600BE5E0
 * address: 0x600BE5E0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600BE5E0(StateMethodExecuter *result)
{
  char *vtable; // r2
  char *v2; // r2

  if ( (int)result[620].vtable >= 1 )
  {
    vtable = (char *)result[618].vtable;
    if ( !vtable )
      return StateMgr__changeState((StateMgr *)&result[507], &stru_60C83864);
    v2 = vtable - 1;
    result[618].vtable = v2;
    if ( !v2 )
      return StateMgr__changeState((StateMgr *)&result[507], &stru_60C83864);
  }
  return result;
}
