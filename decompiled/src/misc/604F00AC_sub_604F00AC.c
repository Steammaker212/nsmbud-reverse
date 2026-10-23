/* sub_604F00AC
 * address: 0x604F00AC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604F00AC(StateMethodExecuter *result)
{
  if ( *((_BYTE *)result[3836].vtable + 16) )
    return StateMgr__changeState((StateMgr *)&result[3542], (StateBase *)&dword_60CA6380);
  return result;
}
