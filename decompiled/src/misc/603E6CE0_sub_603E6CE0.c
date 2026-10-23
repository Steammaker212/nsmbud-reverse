/* sub_603E6CE0
 * address: 0x603E6CE0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E6CE0(StateMethodExecuter *result)
{
  char *vtable; // r1
  char *v2; // r1

  vtable = (char *)result[4].vtable;
  if ( !vtable )
    return StateMgr__changeState((StateMgr *)&result[14].owner, (StateBase *)&dword_60C99774);
  v2 = vtable - 1;
  result[4].vtable = v2;
  if ( !v2 )
    return StateMgr__changeState((StateMgr *)&result[14].owner, (StateBase *)&dword_60C99774);
  return result;
}
