/* sub_604E9850
 * address: 0x604E9850   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604E9850(StateMethodExecuter *result)
{
  char *owner; // r1

  owner = (char *)result[45].owner;
  if ( owner != *(char **)(dword_60C9A1F0 + 6500) && (int)owner < result[379].currentState )
  {
    result[45].owner = owner + 1;
    return StateMgr__changeState((StateMgr *)&result[378], (StateBase *)&dword_60CA5DE4);
  }
  return result;
}
