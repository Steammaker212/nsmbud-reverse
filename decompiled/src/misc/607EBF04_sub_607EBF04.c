/* sub_607EBF04
 * address: 0x607EBF04   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607EBF04(StateMethodExecuter *result)
{
  if ( !LOBYTE(result[1734].currentState) )
    return StateMgr__changeState((StateMgr *)&result[17].currentState, (StateBase *)&dword_60CC5B7C);
  return result;
}
