/* wanwan_ref
 * address: 0x603D8260   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall wanwan_ref(_DWORD *a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v13)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v14; // [sp+20h] [bp-28h]

  v13 = &sead__SafeStringBase__vtable;
  v14 = "wanwan";
  a2.vtable = &sead__SafeStringBase__vtable;
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v13);
  a2.cstr = "wanwan";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 1, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  a1[1575] = v4;
  a1 += 1575;
  v6 = (int)*FIELD_U32(v4, 0x8).animations;
  v13 = &sead__SafeStringBase__vtable;
  v14 = "wanwan";
  v7 = LoadResource(ResourceMgrRelated_instance, &v13);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  SkeletalAnim_play(v6, v7, (int)&a2);
  *(_DWORD *)(**(_DWORD **)(*a1 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*a1 + 12) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*a1 + 12) + 4));
  v8 = **(_DWORD **)(*a1 + 20);
  a1[1] = v8;
  v13 = &sead__SafeStringBase__vtable;
  v14 = "wanwan";
  v9 = LoadResource(ResourceMgrRelated_instance, &v13);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  TexAnim_play(v8, v9, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1] + 4), 1);
  v10 = a1[1];
  FIELD_U32(v10, 20) = 0;
  FIELD_U32(v10, 28) |= 2u;
  result = a1[1];
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
