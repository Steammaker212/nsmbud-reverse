/* sub_604BA460
 * address: 0x604BA460   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604BA460(StateMethodExecuter *result)
{
  int owner; // r1

  owner = (int)result[307].owner;
  result[307].owner = (void *)(owner + 1);
  if ( owner >= 9 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA25A0);
  return result;
}
