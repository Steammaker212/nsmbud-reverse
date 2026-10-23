/* para_receive_ref
 * address: 0x6026167C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall para_receive_ref(int a1)
{
  int v2; // r5
  int ResArchiveById; // r0
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "para_receive";
  v2 = **(_DWORD **)(FIELD_U32(a1, 7068) + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  SkeletalAnim_play(v2, ResArchiveById, (int)v5);
  FIELD_U32(v2, 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(v2 + 4), 0);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 7104) = 0;
  FIELD_U32(a1, 7100) = 0;
  FIELD_U8(a1, 7108) = 1;
  return 7108;
}
