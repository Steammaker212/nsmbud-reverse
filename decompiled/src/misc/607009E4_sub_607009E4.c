/* sub_607009E4
 * address: 0x607009E4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607009E4(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_60700AA4();
  if ( result == (StateMethodExecuter *)1 )
  {
    FIELD_U16(a1, 6148) = FIELD_U8(a1, 8221) + 31;
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&unk_60CBC3BC);
  }
  return result;
}
