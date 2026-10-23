/* sub_6067A248
 * address: 0x6067A248   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067A248(int a1)
{
  FIELD_U32(a1, 164) += FIELD_U32(a1, 6904);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_6067A0EC(a1);
  FIELD_U32(a1, 6348) = FIELD_U32(a1, 164);
  ShapedCollider_execute((ColliderBase *)(a1 + 6104));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 200))(a1);
  return 1;
}
