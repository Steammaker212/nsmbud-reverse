/* sub_60547678
 * address: 0x60547678   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60547678(StateMethodExecuter *result)
{
  int owner; // r1

  owner = (int)result[1369].owner;
  result[1369].owner = (void *)(owner + 1);
  if ( owner >= 10 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAC5E0);
  return result;
}
