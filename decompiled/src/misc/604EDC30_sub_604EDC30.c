/* sub_604EDC30
 * address: 0x604EDC30   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604EDC30(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_6050A8AC(a1 + 3616);
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA6280);
  return result;
}
