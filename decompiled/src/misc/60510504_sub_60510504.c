/* sub_60510504
 * address: 0x60510504   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60510504(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_60511FFC();
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CA8280);
  return result;
}
