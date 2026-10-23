/* sub_6059D394
 * address: 0x6059D394   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6059D394(StateMethodExecuter *result)
{
  char *vtable; // r2
  char *v2; // r2

  vtable = (char *)result[595].vtable;
  if ( !vtable )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CAFBB8);
  v2 = vtable - 1;
  result[595].vtable = v2;
  if ( !v2 )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CAFBB8);
  return result;
}
