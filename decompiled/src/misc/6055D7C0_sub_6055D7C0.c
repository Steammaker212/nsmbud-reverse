/* sub_6055D7C0
 * address: 0x6055D7C0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055D7C0(int a1)
{
  unsigned int v2; // r0
  StateMethodExecuter *result; // r0

  v2 = FIELD_U8(a1, 13752) ^ 1;
  if ( v2 >= 2 )
    v2 = 0;
  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 3540 * v2 + 13756, 0) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CADE50);
  return result;
}
