/* sub_606338D0
 * address: 0x606338D0   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606338D0(int a1)
{
  _DWORD *v1; // r4
  int v2; // r5
  int v3; // r6
  int v4; // r0
  const char *v6[8]; // [sp+0h] [bp-20h] BYREF

  v1 = (_DWORD *)(a1 + 6112);
  v2 = FIELD_U32(a1, 6100);
  v3 = **(_DWORD **)(FIELD_U32(a1, 6112) + 12);
  (*(void (__fastcall **)(int *))(dword_60CB4484 + 12))(&dword_60CB4484);
  v6[0] = (const char *)&sead__SafeStringBase__vtable;
  v6[1] = (const char *)dword_60CB4488;
  SkeletalAnim_play(v3, v2, v6);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v1 + 12) + 4), 0);
  v4 = **(_DWORD **)(*v1 + 12);
  FIELD_U32(v4, 20) = 0;
  FIELD_U32(v4, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(*v1 + 12) + 24) = 1065353216;
  v1[169] = 1;
  v1[167] = 240;
  v1[170] = 3;
  return 3;
}
