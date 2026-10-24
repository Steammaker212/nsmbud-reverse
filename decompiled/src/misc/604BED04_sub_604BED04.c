/* sub_604BED04
 * address: 0x604BED04   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604BED04(StateMethodExecuter *result)
{
  if ( !BYTE2(result[133].currentState) )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (43) * 12, 0x4), (StateBase *)&dword_60CA2918);
  return result;
}
