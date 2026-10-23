/* sub_60208460
 * address: 0x60208460   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60208460(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 112))(a1);
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8C854);
  return result;
}
