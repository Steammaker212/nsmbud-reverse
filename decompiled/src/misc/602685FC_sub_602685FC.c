/* sub_602685FC
 * address: 0x602685FC   size: 1092   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602685FC(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int v7; // r6
  int v8; // r0
  void *v9; // r6
  void *v10; // r7
  ModelWrapper *v11; // r4
  ModelWrapper *v12; // r0
  int v13; // r4
  int v14; // r0
  int v15; // r0
  void (__fastcall ***v16)(_DWORD, int); // r0
  void (__fastcall *v17)(_DWORD, int); // r7
  void *v18; // r7
  void *v19; // r4
  ModelWrapper *v20; // r6
  ModelWrapper *v21; // r0
  int v22; // r4
  int v23; // r0
  int v24; // r0
  int (__fastcall ***v25)(_DWORD, int, void *, sead__SafeString *, int *); // r0
  int (__fastcall *v26)(_DWORD, int, void *, sead__SafeString *, int *); // r7
  sead__SafeString a2; // [sp+20h] [bp-40h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "bubble";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  FIELD_U32(a1, 144) = 1065353216;
  v6 = a1 + 144;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v4, 0x0) + 68))(FIELD_U32(v4, 0x0), a1 + 144);
  v7 = **(_DWORD **)(FIELD_U32(a1, 6300) + 28);
  v8 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "bubble";
  sub_60446088(v7, v8, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 24) = 1065353216;
  v9 = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "bubble_fog";
  v10 = (void *)Resource_getModel2(v9, &a2, 1, 0, 1, 0, 0, 0, 0);
  v11 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v12 = ModelWrapper_ctor(v11, v10, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v12, (int)v9, 0, 0);
  FIELD_U32(a1, 6304) = v11;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v11, 0x0) + 68))(FIELD_U32(v11, 0x0), a1 + 144);
  v13 = **(_DWORD **)(FIELD_U32(a1, 6304) + 28);
  v14 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "bubble_fog";
  sub_60446088(v13, v14, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 28) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(v6, 6160) + 28) + 24) = 1065353216;
  v15 = FIELD_U32(a1, 6304);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "bubble_fog";
  sub_6040F4B8(v15, &a2, 1);
  v16 = (void (__fastcall ***)(_DWORD, int))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6304) + 132))(
                                              **(_DWORD **)(a1 + 6304),
                                              0);
  v17 = **v16;
  a2.vtable = 0;
  v17(v16, 1);
  v18 = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "bubble_fog2";
  v19 = (void *)Resource_getModel2(v18, &a2, 1, 0, 1, 0, 0, 0, 0);
  v20 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v21 = ModelWrapper_ctor(v20, v19, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v21, (int)v18, 0, 0);
  FIELD_U32(a1, 6308) = v20;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v20, 0x0) + 68))(FIELD_U32(v20, 0x0), a1 + 144);
  v22 = **(_DWORD **)(FIELD_U32(a1, 6308) + 28);
  v23 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "bubble_fog2";
  sub_60446088(v22, v23, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6308) + 28) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(v6, 6164) + 28) + 24) = 1065353216;
  v24 = FIELD_U32(a1, 6308);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "bubble_fog2";
  sub_6040F4B8(v24, &a2, 1);
  v25 = (int (__fastcall ***)(_DWORD, int, void *, sead__SafeString *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6308) + 132))(
                                                                                **(_DWORD **)(a1 + 6308),
                                                                                0);
  v26 = **v25;
  a2.vtable = 0;
  return v26(v25, 1, &unk_60B023B4, &a2, &dword_60B3B944);
}
