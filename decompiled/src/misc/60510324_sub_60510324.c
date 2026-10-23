/* sub_60510324
 * address: 0x60510324   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60510324(int a1, int a2)
{
  StateMethodExecuter *result; // r0

  if ( !dword_60CABDE4 )
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CA8260);
  result = (StateMethodExecuter *)sub_60542604(dword_60CABDE4, a2);
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CA8260);
  return result;
}
