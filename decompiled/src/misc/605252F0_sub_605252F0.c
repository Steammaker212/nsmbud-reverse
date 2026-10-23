/* sub_605252F0
 * address: 0x605252F0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605252F0(StateMethodExecuter *result)
{
  char *owner; // r2
  char *v2; // r2

  owner = (char *)result[388].owner;
  if ( !owner || (v2 = owner - 1, (result[388].owner = v2) == 0) || (result[351].currentState & 0x2000) != 0 )
  {
    result[389].vtable = (void *)1;
    return StateMgr__changeState((StateMgr *)&result[2], &stru_60CA9E04);
  }
  return result;
}
