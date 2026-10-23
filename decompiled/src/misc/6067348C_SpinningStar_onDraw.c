/* SpinningStar_onDraw
 * address: 0x6067348C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SpinningStar_onDraw(int a1)
{
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6124));
  sub_60414344((sead_ListNode *)dword_60C9A698, FIELD_U8(a1, 7620), (float *)(a1 + 6100));
  return 1;
}
