/* sub_601E80C8
 * address: 0x601E80C8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601E80C8(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_601906A4((_DWORD *)dword_60C8996C);
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 40), &stru_60C8B16C);
  return result;
}
