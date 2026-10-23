/* sub_605C06AC
 * address: 0x605C06AC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C06AC(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  ShapedCollider_execute((ColliderBase *)(a1 + 6112));
  sub_605C0470((float *)a1);
  ++FIELD_U32(a1, 6788);
  return 1;
}
