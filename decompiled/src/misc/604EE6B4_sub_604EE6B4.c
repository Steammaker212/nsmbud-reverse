/* sub_604EE6B4
 * address: 0x604EE6B4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604EE6B4(StateMethodExecuter *result)
{
  if ( FIELD_U8(dword_60C89E18, 17049) )
    return StateMgr__changeState((StateMgr *)&result[3542], &stru_60CA63A0);
  return result;
}
