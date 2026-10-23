/* sub_603781B4
 * address: 0x603781B4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603781B4(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_60731324(dword_60CBDBF8);
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C9651C);
  return result;
}
