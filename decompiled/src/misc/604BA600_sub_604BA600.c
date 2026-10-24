/* sub_604BA600
 * address: 0x604BA600   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604BA600(StateMethodExecuter *result)
{
  int owner; // r1

  owner = (int)FIELD_U32(result + (307) * 12, 0x4);
  FIELD_U32(result + (307) * 12, 0x4) = (void *)(owner + 1);
  if ( owner >= 9 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA25E0);
  return result;
}
