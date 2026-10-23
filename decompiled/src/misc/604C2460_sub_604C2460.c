/* sub_604C2460
 * address: 0x604C2460   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C2460(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)FIELD_U8(a1, 14162);
  if ( result )
  {
    result = (StateMethodExecuter *)sub_60190968(dword_60C8996C);
    if ( !result )
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA2C2C);
  }
  return result;
}
