/* sub_6067C450
 * address: 0x6067C450   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6067C450(int a1)
{
  sub_6067C4DC();
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_6067C624(a1);
  sub_6067C718(a1);
  ShapedCollider_execute((ColliderBase *)(a1 + 9520));
  return FIELD_U8(a1, 10188) || sub_6067F45C(a1 + 6100, AreaTask_intance + 1812, 0) == 0;
}
