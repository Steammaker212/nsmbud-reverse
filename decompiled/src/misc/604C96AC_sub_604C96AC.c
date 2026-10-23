/* sub_604C96AC
 * address: 0x604C96AC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C96AC(StateMethodExecuter *result)
{
  if ( FIELD_U32(dword_60CC6E04, 24) != 2 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA32B8);
  return result;
}
