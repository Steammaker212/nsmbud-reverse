/* sub_6054C104
 * address: 0x6054C104   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6054C104(int a1)
{
  int v2; // r0
  int v3; // r1
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 3684);
  v3 = v2;
  if ( v2 != 1 )
    v3 = 2;
  if ( !v2 )
    v3 = 0;
  result = (StateMethodExecuter *)sub_6050A95C(*(_DWORD *)(a1 + 4 * v3 + 3672));
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CACAC4);
  return result;
}
