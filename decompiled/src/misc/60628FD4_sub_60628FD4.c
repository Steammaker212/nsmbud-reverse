/* sub_60628FD4
 * address: 0x60628FD4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60628FD4(StateMethodExecuter *result)
{
  if ( LOBYTE(result[516].owner) )
  {
    if ( !BYTE1(result[516].owner) )
      return StateMgr__changeState((StateMgr *)&result[518].currentState, &stru_60CB3D34);
  }
  return result;
}
