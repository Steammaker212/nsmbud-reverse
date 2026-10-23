/* I_yoshi_egg_ref_70F180
 * address: 0x6070F180   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall I_yoshi_egg_ref_70F180(int a1)
{
  _DWORD *v1; // r4
  int v2; // r5
  int Resource; // r0
  ModelAnimation *result; // r0
  const char *v5[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v6[6]; // [sp+8h] [bp-18h] BYREF

  FIELD_F32(a1, 120) = flt_60AF1EA0[FIELD_U32(a1, 6176) & 1];
  FIELD_U32(a1, 124) = 0x40000000;
  FIELD_U32(a1, 128) = 0;
  FIELD_U8(a1, 6188) = 0;
  v1 = (_DWORD *)(a1 + 6104);
  v2 = **(_DWORD **)(FIELD_U32(a1, 6104) + 12);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "I_yoshi_egg";
  Resource = LoadResource(ResourceMgrRelated_instance, v6);
  v5[0] = (const char *)&sead__SafeStringBase__vtable;
  v5[1] = "out2";
  SkeletalAnim_play(v2, Resource, v5);
  *(_DWORD *)(**(_DWORD **)(*v1 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v1 + 12) + 4), 1);
  result = sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v1 + 12) + 4));
  v1[11] = 1;
  return result;
}
