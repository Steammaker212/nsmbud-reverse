/* sub_60493BD4
 * address: 0x60493BD4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60493BD4(int a1)
{
  int v2; // r5
  int v3; // r0
  StateMethodExecuter *result; // r0

  v2 = a1 + 36;
  v3 = sub_60473B4C(a1 + 36);
  sub_6098F1D4(v3);
  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(v2, 1u) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60CA0010);
  return result;
}
