/* sub_60524078
 * address: 0x60524078   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60524078(StateMethodExecuter *result)
{
  if ( !FIELD_U8(dword_60CAA450, 56) )
    return StateMgr__changeState((StateMgr *)&result[2], &stru_60CA9B64);
  return result;
}
