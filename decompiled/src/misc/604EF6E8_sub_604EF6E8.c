/* sub_604EF6E8
 * address: 0x604EF6E8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604EF6E8(StateMethodExecuter *result)
{
  if ( LOBYTE(result[3928].owner) )
    return StateMgr__changeState((StateMgr *)&result[3542], &stru_60CA64C0);
  return result;
}
