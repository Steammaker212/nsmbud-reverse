/* sub_6049440C
 * address: 0x6049440C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049440C(StateMethodExecuter *result)
{
  if ( dword_60C99DD0 )
  {
    if ( FIELD_U32(dword_60C99DD0, 3796) == 3 )
      return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&unk_60CA0150);
  }
  return result;
}
