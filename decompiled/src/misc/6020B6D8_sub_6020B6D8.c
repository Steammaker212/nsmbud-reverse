/* sub_6020B6D8
 * address: 0x6020B6D8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6020B6D8(StateMethodExecuter *result)
{
  int owner; // r1

  owner = (int)result[44].owner;
  if ( owner >= 1 )
    result[44].owner = (void *)--owner;
  if ( !owner )
    return StateMgr__changeState((StateMgr *)&result[23].currentState, (StateBase *)&dword_60C8CAB4);
  return result;
}
