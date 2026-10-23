/* sub_6067E6A0
 * address: 0x6067E6A0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6067E6A0(int *a1)
{
  int v2; // r5

  SkeletalAnim_play(**(_DWORD **)(a1[82] + 12), a1[81], (const char **)&dword_60CB7FEC);
  a1[112] = (int)&dword_60CB7FC4;
  v2 = **(_DWORD **)(a1[82] + 28);
  ShuAnim_play((_DWORD *)v2, a1[81], &dword_60CB7FC4);
  FIELD_U32(v2, 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(v2 + 4), 0);
  a1[113] = 0;
}
