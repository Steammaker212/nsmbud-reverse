/* sub_604AE650
 * address: 0x604AE650   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604AE650(StateMethodExecuter *result)
{
  if ( *(float *)(*(_DWORD *)FIELD_U32(result + (295) * 12, 0x8) + 44) == 0.0 )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&dword_60CA17E8);
  return result;
}
