/* sub_60534670
 * address: 0x60534670   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60534670(int a1)
{
  int v2; // r1
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 16732);
  FIELD_U32(a1, 16728) = v2;
  sub_605391B0(a1, v2);
  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 12092, 0) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CAAFE4);
  return result;
}
