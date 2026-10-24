/* sub_604AEFA0
 * address: 0x604AEFA0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604AEFA0(StateMethodExecuter *result)
{
  if ( !LOBYTE(FIELD_U32(result + (305) * 12, 0x4)) )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&dword_60CA17C8);
  return result;
}
