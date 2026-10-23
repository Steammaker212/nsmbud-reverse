/* sub_605253C0
 * address: 0x605253C0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605253C0(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_607F6ABC(dword_60CC62E4);
  if ( !result )
    return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA9E44);
  return result;
}
