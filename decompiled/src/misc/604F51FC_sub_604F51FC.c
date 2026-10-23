/* sub_604F51FC
 * address: 0x604F51FC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604F51FC(int a1)
{
  _DWORD *v2; // r5
  StateMethodExecuter *result; // r0

  v2 = *(_DWORD **)(a1 + 9636);
  sub_6050229C(v2 + 930);
  sub_60473B58(v2, 0xEu, 0);
  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 40, 0) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    FIELD_U8(a1, 8591) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA681C);
  }
  return result;
}
