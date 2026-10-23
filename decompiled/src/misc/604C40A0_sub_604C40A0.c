/* sub_604C40A0
 * address: 0x604C40A0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C40A0(int a1)
{
  StateMethodExecuter *result; // r0

  sub_604C8318(a1);
  result = (StateMethodExecuter *)FIELD_U8(a1, 5096);
  if ( !FIELD_U8(a1, 5096) )
    return StateMgr__changeState((StateMgr *)(a1 + 24), *(StateBase **)(a1 + 40));
  return result;
}
