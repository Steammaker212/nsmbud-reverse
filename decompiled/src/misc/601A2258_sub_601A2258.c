/* sub_601A2258
 * address: 0x601A2258   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A2258(StateMethodExecuter *result)
{
  if ( dword_60C99DD0 || !IMAGE32(0xED1) )
    return StateMgr__changeState((StateMgr *)&result[238].currentState, (StateBase *)&dword_60C89E1C);
  return result;
}
