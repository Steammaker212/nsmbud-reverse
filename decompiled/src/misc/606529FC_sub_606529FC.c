/* sub_606529FC
 * address: 0x606529FC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606529FC(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_606531AC();
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB62DC);
  return result;
}
