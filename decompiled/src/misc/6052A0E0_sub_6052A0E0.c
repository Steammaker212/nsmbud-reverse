/* sub_6052A0E0
 * address: 0x6052A0E0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6052A0E0(StateMethodExecuter *result)
{
  if ( (void *)FIELD_U32(result + (4) * 12, 0x8) != FIELD_U32(result + (4) * 12, 0x4) )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&unk_60CAA2A4);
  return result;
}
