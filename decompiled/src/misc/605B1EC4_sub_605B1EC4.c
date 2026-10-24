/* sub_605B1EC4
 * address: 0x605B1EC4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605B1EC4(StateMethodExecuter *result)
{
  if ( BYTE2(result[563].currentState) == 1 )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CB0440);
  --BYTE2(result[563].currentState);
  *(float *)&FIELD_U32(result + (12) * 12, 0x0) = *(float *)&FIELD_U32(result + (12) * 12, 0x0) + -0.1875;
  return result;
}
