/* sub_606F60C0
 * address: 0x606F60C0   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606F60C0(int *a1)
{
  void *v2; // r5
  void *Model2; // r10
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  void *v6; // r10
  void *v7; // r5
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0
  void *v10; // r10
  void *v11; // r5
  ModelWrapper *v12; // r7
  ModelWrapper *v13; // r0
  int v14; // r0
  int v15; // r1
  int v16; // r0
  int v17; // r1
  int v18; // r0
  int v19; // r1
  sead__SafeString a2; // [sp+1Ch] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "waterpillar";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[1538] = (int)v2;
  a1 += 1538;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "waterpillar";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  a1[1] = (int)v4;
  v6 = (void *)*a1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "waterpillar_behind";
  v7 = (void *)Resource_getModel2(v6, &a2, 0, 0, 1, 0, 0, 0, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v9 = ModelWrapper_ctor(v8, v7, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v9, v6, 0, 0);
  a1[3] = (int)v8;
  v10 = (void *)*a1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "waterpillar_top";
  v11 = (void *)Resource_getModel2(v10, &a2, 0, 0, 1, 0, 0, 0, 0);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v13 = ModelWrapper_ctor(v12, v11, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v13, v10, 0, 0);
  a1[2] = (int)v12;
  v14 = **(_DWORD **)(a1[1] + 28);
  a1[4] = v14;
  v15 = *a1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "waterpillar";
  sub_60446088(v14, v15, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[4] + 4), 1);
  v16 = **(_DWORD **)(a1[3] + 28);
  a1[6] = v16;
  v17 = *a1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "waterpillar_behind";
  sub_60446088(v16, v17, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[6] + 4), 1);
  v18 = **(_DWORD **)(a1[2] + 28);
  a1[5] = v18;
  v19 = *a1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "waterpillar_top_end";
  sub_60446088(v18, v19, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[5] + 4), 1);
}
