/* sub_604F535C
 * address: 0x604F535C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604F535C(int a1)
{
  _DWORD *v2; // r5

  v2 = *(_DWORD **)(a1 + 9636);
  sub_6050229C(v2 + 930);
  sub_60473B58(v2, 0xEu, 0);
  FIELD_U8(a1, 8591) = 0;
  return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA6A3C);
}
