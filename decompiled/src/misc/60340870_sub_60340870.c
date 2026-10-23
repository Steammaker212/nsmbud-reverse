/* sub_60340870
 * address: 0x60340870   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60340870(int a1, int a2, int a3)
{
  int *v4; // r5
  int v5; // r0
  int result; // r0

  v4 = (int *)(a1 + 6308);
  TexAnim_play(FIELD_U32(a1, 6308), FIELD_U32(a1, 6300), a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(*v4 + 4), a3);
  v5 = *v4;
  FIELD_U32(v5, 20) = 0;
  FIELD_U32(v5, 28) |= 2u;
  result = *v4;
  *(_DWORD *)(*v4 + 24) = 1065353216;
  return result;
}
