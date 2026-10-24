/* sub_60424018
 * address: 0x60424018   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60424018(StateMethodExecuter *result)
{
  if ( !BYTE1(result[1].currentState) )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (4) * 12, 0x8), (StateBase *)&dword_60C9BBB4);
  FIELD_U32(result + (1) * 12, 0x0) = (void *)1065353216;
  return result;
}
