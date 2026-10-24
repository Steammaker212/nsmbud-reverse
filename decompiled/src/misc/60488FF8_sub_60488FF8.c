/* sub_60488FF8
 * address: 0x60488FF8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60488FF8(StateMethodExecuter *result)
{
  if ( !*(_BYTE *)(result[3979].currentState + 3637) )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), &stru_60C9F740);
  return result;
}
