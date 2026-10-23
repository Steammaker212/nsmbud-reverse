/* sub_604F992C
 * address: 0x604F992C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604F992C(StateMethodExecuter *result)
{
  char *owner; // r2
  int v2; // r1

  owner = (char *)result[343].owner;
  if ( owner )
    result[343].owner = owner - 1;
  v2 = (int)result[342].owner;
  result[342].owner = (void *)(v2 - 1);
  if ( v2 <= 1 )
  {
    if ( (result[342].currentState | 2) == 2 )
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA6F34);
    else
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA6F54);
  }
  return result;
}
