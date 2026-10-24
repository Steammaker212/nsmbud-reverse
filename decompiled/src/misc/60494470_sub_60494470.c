/* sub_60494470
 * address: 0x60494470   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60494470(StateMethodExecuter *result)
{
  if ( dword_60C99DD0 )
  {
    if ( !FIELD_U8(dword_60C99DD0, 3793) )
      return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&unk_60CA0170);
  }
  return result;
}
