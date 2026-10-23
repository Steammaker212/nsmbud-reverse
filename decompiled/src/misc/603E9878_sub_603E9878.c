/* sub_603E9878
 * address: 0x603E9878   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E9878(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_603FBBA4(dword_60C99DD4);
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 108), (StateBase *)&dword_60C99960);
  return result;
}
