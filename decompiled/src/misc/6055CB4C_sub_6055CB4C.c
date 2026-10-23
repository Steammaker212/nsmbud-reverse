/* sub_6055CB4C
 * address: 0x6055CB4C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055CB4C(StateMethodExecuter *result)
{
  if ( !BYTE1(result[1145].currentState) || FIELD_U8(dword_60C89E18, 17049) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CADDB0);
  return result;
}
