/* sub_6055A7A4
 * address: 0x6055A7A4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055A7A4(StateMethodExecuter *result)
{
  if ( HIBYTE(result[336].owner) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CADA8C);
  return result;
}
