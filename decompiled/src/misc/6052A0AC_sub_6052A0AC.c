/* sub_6052A0AC
 * address: 0x6052A0AC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6052A0AC(StateMethodExecuter *result)
{
  int v1; // r1

  v1 = result[254].currentState - 1;
  result[254].currentState = v1;
  if ( !v1 )
  {
    HIBYTE(result[254].owner) = 0;
    return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&unk_60CAA21C);
  }
  return result;
}
