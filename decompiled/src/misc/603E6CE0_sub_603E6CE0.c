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

  vtable = (char *)FIELD_U32(result + (4) * 12, 0x0);
  if ( !vtable )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (14) * 12, 0x4), (StateBase *)&dword_60C99774);
  v2 = vtable - 1;
  FIELD_U32(result + (4) * 12, 0x0) = v2;
  if ( !v2 )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (14) * 12, 0x4), (StateBase *)&dword_60C99774);
  return result;
}
