/* sub_604E4C7C
 * address: 0x604E4C7C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604E4C7C(int a1)
{
  StateMethodExecuter *result; // r0

  sub_60481E54(a1 + 840);
  result = (StateMethodExecuter *)FIELD_U8(a1, 4510);
  if ( !FIELD_U8(a1, 4510) )
  {
    FIELD_U32(a1, 4552) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 4536), &stru_60CA59EC);
  }
  return result;
}
