/* sub_601ED664
 * address: 0x601ED664   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601ED664(StateMethodExecuter *result)
{
  char *owner; // r1

  owner = (char *)result[31].owner;
  if ( !owner )
    return StateMgr__changeState((StateMgr *)&result[25], (StateBase *)&unk_60C8B2CC);
  result[31].owner = owner - 1;
  return result;
}
