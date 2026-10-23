/* sub_606DE0AC
 * address: 0x606DE0AC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606DE0AC(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)((int (__fastcall *)(float))loc_605AE9BC)(2.0);
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBBC4C);
  return result;
}
