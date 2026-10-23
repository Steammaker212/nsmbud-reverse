/* sub_603B0CC0
 * address: 0x603B0CC0   size: 840   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603B0CC0(int *a1)
{
  unsigned int v2; // r6
  void *v3; // r5
  unsigned int v4; // r11
  void *Model2; // r6
  int v6; // r7
  ModelWrapper *v7; // r0
  void *v8; // r5
  void *v9; // r6
  ModelWrapper *v10; // r7
  ModelWrapper *v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r1
  int v15; // r0
  void *v16; // r5
  void *v17; // r6
  ModelWrapper *v18; // r7
  ModelWrapper *v19; // r0
  int v20; // r1
  int v21; // r0
  int v22; // r1
  int v23; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  v2 = a1[1614];
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "teresa";
  v3 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[1575] = (int)v3;
  v4 = v2 % 9;
  Model2 = (void *)Resource_getModel2(v3, (sead__SafeString *)&dword_60C97C70[2 * (v2 % 9) + 12], 1, 1, 0, 0, 0, 0, 0);
  v6 = operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor((ModelWrapper *)v6, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v7, (int)v3, 0, 0);
  a1[1576] = v6;
  SkeletalAnim_play(**(_DWORD **)(v6 + 12), a1[1575], (int)&dword_60C97CF0[2 * v4]);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1576] + 12) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(a1[1576] + 12) + 24) = 1065353216;
  v8 = (void *)a1[1575];
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "fog";
  v9 = (void *)Resource_getModel2(v8, &a2, 1, 0, 1, 0, 0, 0, 0);
  v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v11 = ModelWrapper_ctor(v10, v9, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v11, (int)v8, 0, 0);
  a1[1577] = (int)v10;
  v12 = a1[1575];
  v13 = (int)*FIELD_U32(v10, 0xC);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "fog";
  SkeletalAnim_play(v13, v12, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1577] + 12) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(a1[1577] + 12) + 24) = 1065353216;
  v14 = a1[1575];
  v15 = **(_DWORD **)(a1[1577] + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "fog";
  sub_60446088(v15, v14, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1577] + 28) + 4), 1);
  v16 = (void *)a1[1575];
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "teresaB";
  v17 = (void *)Resource_getModel2(v16, &a2, 1, 1, 0, 0, 0, 0, 0);
  v18 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v19 = ModelWrapper_ctor(v18, v17, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v19, (int)v16, 0, 0);
  a1[1578] = (int)v18;
  v20 = a1[1575];
  v21 = (int)*FIELD_U32(v18, 0xC);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shay_teresaB_wait";
  SkeletalAnim_play(v21, v20, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1578] + 12) + 4), 0);
  v22 = a1[1575];
  v23 = **(_DWORD **)(a1[1578] + 20);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shay_teresaB_wait";
  TexAnim_play(v23, v22, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1578] + 20) + 4), 0);
}
