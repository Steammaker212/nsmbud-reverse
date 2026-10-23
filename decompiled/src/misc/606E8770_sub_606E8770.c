/* sub_606E8770
 * address: 0x606E8770   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606E8770(int a1)
{
  int v2; // r1

  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 0x284));
  LightMask__draw((RevealMaskRelated *)(a1 + 648));
  if ( (FIELD_U8(a1, 20) & 1) != 0 )
    v2 = 5;
  else
    v2 = 4;
  sub_60414344((sead_ListNode *)dword_60C9A698, v2, (float *)(a1 + 108));
  return 1;
}
