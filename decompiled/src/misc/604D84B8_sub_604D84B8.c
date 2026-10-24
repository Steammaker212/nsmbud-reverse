/* sub_604D84B8
 * address: 0x604D84B8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604D84B8(StateMethodExecuter *result)
{
  if ( !BYTE2(result[394].owner) )
  {
    FIELD_U32(result + (3) * 12, 0x4) = (void *)1;
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&unk_60CA4178);
  }
  return result;
}
