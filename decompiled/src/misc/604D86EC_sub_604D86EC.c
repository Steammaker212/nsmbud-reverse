/* sub_604D86EC
 * address: 0x604D86EC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604D86EC(StateMethodExecuter *result)
{
  if ( !BYTE2(result[394].owner) )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&unk_60CA41F8);
  return result;
}
