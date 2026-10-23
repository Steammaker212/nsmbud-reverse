/* sub_604DFF8C
 * address: 0x604DFF8C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604DFF8C(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_6050A95C(*(_DWORD *)(a1 + 4 * FIELD_U8(a1, 4075) + 4060));
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA52F0);
  return result;
}
