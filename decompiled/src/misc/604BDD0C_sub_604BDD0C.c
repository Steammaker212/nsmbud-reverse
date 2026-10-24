/* sub_604BDD0C
 * address: 0x604BDD0C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604BDD0C(StateMethodExecuter *result)
{
  if ( !BYTE2(result[133].currentState) )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (43) * 12, 0x4), (StateBase *)&dword_60CA2818);
  return result;
}
