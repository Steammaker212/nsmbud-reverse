/* sub_605E1C04
 * address: 0x605E1C04   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E1C04(StateMethodExecuter *result)
{
  unsigned int vtable; // r1

  vtable = (unsigned int)result[522].vtable;
  if ( (vtable & 0x20000) == 0 && !(result[521].currentState & 2 | vtable & 0x10000) )
  {
    result[668].owner = 0;
    return StateMgr__changeState((StateMgr *)&result[561].currentState, (StateBase *)&dword_60CB1A00);
  }
  return result;
}
