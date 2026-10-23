/* sub_6029F5DC
 * address: 0x6029F5DC   size: 852   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6029F5DC(_DWORD *a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int v7; // r0
  _DWORD *v8; // r5
  int v9; // r0
  void *v10; // r5
  void *v11; // r6
  ModelWrapper *v12; // r7
  ModelWrapper *v13; // r0
  int v14; // r5
  int v15; // r0
  void *v16; // r5
  void *v17; // r6
  ModelWrapper *v18; // r7
  ModelWrapper *v19; // r0
  ModelWrapper *result; // r0
  sead__SafeString a2; // [sp+1Ch] [bp-34h] BYREF
  int (**v22)(); // [sp+24h] [bp-2Ch] BYREF
  const char *v23; // [sp+28h] [bp-28h]

  v22 = &sead__SafeStringBase__vtable;
  v23 = "densen";
  a2.vtable = &sead__SafeStringBase__vtable;
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v22);
  a2.cstr = "densen";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  a1[1575] = v4;
  a1 += 1575;
  v6 = (int)*FIELD_U32(v4, 0x8).animations;
  v22 = &sead__SafeStringBase__vtable;
  v23 = "densen";
  v7 = LoadResource(ResourceMgrRelated_instance, &v22);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "densen_wait00";
  SkeletalAnim_play(v6, v7, (int)&a2);
  *(_DWORD *)(**(_DWORD **)(*a1 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*a1 + 12) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*a1 + 12) + 4));
  v8 = **(_DWORD ***)(*a1 + 28);
  a1[1] = v8;
  v22 = &sead__SafeStringBase__vtable;
  v23 = "densen";
  v9 = LoadResource(ResourceMgrRelated_instance, &v22);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "densen_wait00";
  ShuAnim_play(v8, v9, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1] + 4), 1);
  *(_DWORD *)(a1[1] + 24) = 1065353216;
  v22 = &sead__SafeStringBase__vtable;
  v23 = "densen";
  v10 = (void *)LoadResource(ResourceMgrRelated_instance, &v22);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "light";
  v11 = (void *)Resource_getModel2(v10, &a2, 1, 0, 0, 0, 0, 0, 0);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v13 = ModelWrapper_ctor(v12, v11, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v13, (int)v10, 0, 0);
  a1[2] = v12;
  v14 = (int)*FIELD_U32(v12, 0x8).animations;
  v22 = &sead__SafeStringBase__vtable;
  v23 = "densen";
  v15 = LoadResource(ResourceMgrRelated_instance, &v22);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "light_wait00";
  SkeletalAnim_play(v14, v15, (int)&a2);
  *(_DWORD *)(**(_DWORD **)(a1[2] + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[2] + 12) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(a1[2] + 12) + 4));
  v22 = &sead__SafeStringBase__vtable;
  v23 = "densen";
  v16 = (void *)LoadResource(ResourceMgrRelated_instance, &v22);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "densen_line";
  v17 = (void *)Resource_getModel2(v16, &a2, 1, 0, 0, 0, 0, 0, 0);
  v18 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v19 = ModelWrapper_ctor(v18, v17, 1, 0, 0, 0, 0);
  result = ModelWrapper_setup(v19, (int)v16, 0, 0);
  a1[3] = v18;
  return result;
}
