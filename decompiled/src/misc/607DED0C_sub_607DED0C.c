/* sub_607DED0C
 * address: 0x607DED0C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607DED0C(StateMethodExecuter *result)
{
  if ( !BYTE1(result[328].currentState) )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (17) * 12, 0x8), (StateBase *)&dword_60CC57B4);
  return result;
}
