/* sub_605C7220
 * address: 0x605C7220   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605C7220(StateMethodExecuter *result)
{
  if ( LOBYTE(result[245].vtable) != 255 )
    return StateMgr__changeState((StateMgr *)&result[85].owner, &stru_60CB0B24);
  return result;
}
