/* sub_601EE9C8
 * address: 0x601EE9C8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601EE9C8(StateMethodExecuter *result)
{
  int v1; // r1

  v1 = (int)result[31].owner - 1;
  result[31].owner = (void *)v1;
  if ( !v1 )
    return StateMgr__changeState((StateMgr *)&result[25], (StateBase *)&unk_60C8B3A4);
  return result;
}
