/* sub_603EB05C
 * address: 0x603EB05C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603EB05C(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_6077A158(dword_60CBFA90);
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 56), (StateBase *)&dword_60C99A88);
  return result;
}
