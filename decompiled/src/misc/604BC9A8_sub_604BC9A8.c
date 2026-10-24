/* sub_604BC9A8
 * address: 0x604BC9A8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604BC9A8(StateMethodExecuter *result)
{
  if ( !LOBYTE(result[2963].owner) )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (43) * 12, 0x4), (StateBase *)&dword_60CA27D8);
  return result;
}
