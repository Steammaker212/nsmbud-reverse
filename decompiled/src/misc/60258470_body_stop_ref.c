/* body_stop_ref
 * address: 0x60258470   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall body_stop_ref(int a1)
{
  int v1; // r4
  int v2; // r5
  int ResArchiveById; // r0
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  v1 = a1 + 6300;
  v2 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "body_stop";
  SkeletalAnim_play(v2, ResArchiveById, (int)v5);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v1 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v1 + 12) + 4), 0);
  FIELD_U32(v1, 120) = 120;
  FIELD_U8(v1, 276) = 0;
  return 120;
}
