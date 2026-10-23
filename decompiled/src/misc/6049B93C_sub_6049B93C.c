/* sub_6049B93C
 * address: 0x6049B93C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049B93C(StateMethodExecuter *result)
{
  if ( !*(_BYTE *)(result[302].currentState + 2699) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA0968);
  return result;
}
