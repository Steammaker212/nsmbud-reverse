/* go_out_ed_ref
 * address: 0x60279F28   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall go_out_ed_ref(int a1)
{
  int v2; // r6
  int v3; // r5
  int ResArchiveById; // r0
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  v2 = a1 + 6300;
  v3 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "go_out_ed";
  SkeletalAnim_play(v3, ResArchiveById, (int)v6);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 4), 0);
  SE_EMY_CHOROPU_LAND_ref(a1, 1.7, FIELD_F32(a1, 108), FIELD_F32(a1, 112), 4500.0);
  FIELD_U32(a1, 8548) = 10;
  FIELD_U32(a1, 8552) = 1;
  return 8552;
}
