/* up_switch_hatena_ref
 * address: 0x606E37D8   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall up_switch_hatena_ref(int a1)
{
  _DWORD *v1; // r4
  int v2; // r5
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int result; // r0
  int (**v7)(); // [sp+0h] [bp-30h] BYREF
  const char *v8; // [sp+4h] [bp-2Ch]
  int (**v9)(); // [sp+8h] [bp-28h] BYREF
  const char *v10; // [sp+Ch] [bp-24h]

  v1 = (_DWORD *)(a1 + 6104);
  v2 = **(_DWORD **)(FIELD_U32(a1, 6104) + 12);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "switch";
  v3 = LoadResource(ResourceMgrRelated_instance, &v9);
  v7 = &sead__SafeStringBase__vtable;
  v8 = "up_switch_hatena";
  SkeletalAnim_play(v2, v3, (const char **)&v7);
  *(_DWORD *)(**(_DWORD **)(*v1 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v1 + 12) + 4), 0);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v1 + 12) + 4));
  v4 = **(_DWORD **)(*v1 + 28);
  v1[1] = v4;
  v9 = &sead__SafeStringBase__vtable;
  v10 = "switch";
  v5 = LoadResource(ResourceMgrRelated_instance, &v9);
  v7 = &sead__SafeStringBase__vtable;
  v8 = "up_switch_hatena";
  sub_60446088(v4, v5, &v7);
  AnimationCtrl_setRepeat((ModelAnimation *)(v1[1] + 4), 0);
  result = v1[1];
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
