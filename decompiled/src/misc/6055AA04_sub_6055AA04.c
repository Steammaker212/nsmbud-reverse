/* sub_6055AA04
 * address: 0x6055AA04   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055AA04(StateMethodExecuter *result)
{
  if ( *((_BYTE *)FIELD_U32(result + (296) * 12, 0x0) + 16) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CADB6C);
  return result;
}
