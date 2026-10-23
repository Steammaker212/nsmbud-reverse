/* sub_60558C50
 * address: 0x60558C50   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60558C50(StateMethodExecuter *result)
{
  int owner; // r1

  owner = (int)result[299].owner;
  result[299].owner = (void *)(owner - 1);
  if ( owner <= 1 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAD830);
  return result;
}
