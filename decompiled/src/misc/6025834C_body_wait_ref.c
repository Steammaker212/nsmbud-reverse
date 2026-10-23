/* body_wait_ref
 * address: 0x6025834C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall body_wait_ref(int a1)
{
  _BYTE *v2; // r7
  int v3; // r6
  int v4; // r5
  int ResArchiveById; // r0
  _DWORD v7[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_BYTE *)(a1 + 6924);
  v3 = a1 + 6300;
  if ( !FIELD_U8(a1, 6924) )
  {
    v4 = **(_DWORD **)(*(_DWORD *)v3 + 12);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v7[0] = &sead__SafeStringBase__vtable;
    v7[1] = "body_wait";
    SkeletalAnim_play(v4, ResArchiveById, (int)v7);
  }
  *v2 = 0;
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 4), 1);
  EffectWrapper_update((EffectWrapper *)(a1 + 6316), 34, (Vec3 *)(a1 + 6304), 0, (Vec3 *)(a1 + 144));
  FIELD_U8(a1, 6576) = 1;
  return 6576;
}
