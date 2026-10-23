/* sub_60690D34
 * address: 0x60690D34   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60690D34(int a1)
{
  int v2; // r5

  v2 = **(_DWORD **)(FIELD_U32(a1, 12) + 20);
  TexAnim_play(v2, *(_DWORD *)a1, (_DWORD *)(a1 + 4));
  AnimationCtrl_setRepeat((ModelAnimation *)(v2 + 4), 0);
  FIELD_U8(a1, 28) = 1;
  return 1;
}
