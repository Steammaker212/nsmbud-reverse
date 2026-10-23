/* sub_6059DB90
 * address: 0x6059DB90   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6059DB90(StateMethodExecuter *result)
{
  char *owner; // r2
  char *v2; // r2

  owner = (char *)result[646].owner;
  if ( !owner || (v2 = owner - 1, (result[646].owner = v2) == 0) )
  {
    result[6].currentState ^= 1u;
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CAFC1C);
  }
  return result;
}
