/* sub_605BBA08
 * address: 0x605BBA08   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605BBA08(int a1, int a2, const char **a3)
{
  int v3; // r4

  v3 = **(_DWORD **)(*(_DWORD *)a1 + 12);
  SkeletalAnim_play(v3, a2, a3);
  AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
}
