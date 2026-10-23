/* sub_607F3EA0
 * address: 0x607F3EA0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F3EA0(StateMethodExecuter *result)
{
  if ( !FIELD_U8(dword_60CA83DC, 4746) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CC61A0);
  return result;
}
