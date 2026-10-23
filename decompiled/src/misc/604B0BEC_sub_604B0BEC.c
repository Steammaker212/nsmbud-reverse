/* sub_604B0BEC
 * address: 0x604B0BEC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604B0BEC(StateMethodExecuter *result)
{
  if ( FIELD_U32(dword_60CC6E04, 24) != 2 )
    return StateMgr__changeState((StateMgr *)&result[509].owner, (StateBase *)&dword_60CA19F4);
  return result;
}
