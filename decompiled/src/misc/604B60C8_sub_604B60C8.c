/* sub_604B60C8
 * address: 0x604B60C8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604B60C8(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_604B7FC8(a1);
  if ( result == (StateMethodExecuter *)1 )
  {
    result = *(StateMethodExecuter **)(a1 + 3724);
    if ( result != (StateMethodExecuter *)4 )
      return StateMgr__changeState((StateMgr *)(a1 + 3748), (StateBase *)&dword_60CA1D38);
  }
  return result;
}
