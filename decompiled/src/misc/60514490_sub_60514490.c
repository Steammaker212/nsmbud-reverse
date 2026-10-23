/* sub_60514490
 * address: 0x60514490   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60514490(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_60515390();
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 24), *(StateBase **)(a1 + 40));
  return result;
}
