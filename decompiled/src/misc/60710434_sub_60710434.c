/* sub_60710434
 * address: 0x60710434   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60710434(StateMethodExecuter *result)
{
  if ( --LOBYTE(FIELD_U32(result + (570) * 12, 0x8)) == 0 )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CBD1C8);
  return result;
}
