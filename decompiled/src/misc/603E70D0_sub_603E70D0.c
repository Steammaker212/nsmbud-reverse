/* sub_603E70D0
 * address: 0x603E70D0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E70D0(StateMethodExecuter *result)
{
  char *vtable; // r1
  char *v2; // r1

  vtable = (char *)result[4].vtable;
  if ( !vtable )
    return StateMgr__changeState((StateMgr *)&result[14].owner, (StateBase *)&dword_60C997B4);
  v2 = vtable - 1;
  result[4].vtable = v2;
  if ( !v2 )
    return StateMgr__changeState((StateMgr *)&result[14].owner, (StateBase *)&dword_60C997B4);
  return result;
}
