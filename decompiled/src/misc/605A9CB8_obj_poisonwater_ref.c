/* obj_poisonwater_ref
 * address: 0x605A9CB8   size: 824   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall obj_poisonwater_ref(_DWORD **a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  void (__fastcall ***v6)(_DWORD, _DWORD, void *, int (***)(), int *); // r0
  void (__fastcall *v7)(_DWORD, _DWORD, void *, int (***)(), int *); // r7
  int v8; // r6
  int v9; // r0
  void (__fastcall ***v10)(_DWORD, _DWORD, void *, int (***)(), int *); // r0
  void (__fastcall *v11)(_DWORD, _DWORD, void *, int (***)(), int *); // r7
  void *v12; // r6
  void *v13; // r7
  ModelWrapper *v14; // r5
  ModelWrapper *v15; // r0
  void (__fastcall ***v16)(_DWORD, int, void *, int (***)(), int *); // r0
  void (__fastcall *v17)(_DWORD, int, void *, int (***)(), int *); // r7
  int v18; // r5
  int v19; // r0
  _DWORD *result; // r0
  sead__SafeString a2; // [sp+2Ch] [bp-34h] BYREF
  int (**v22)(); // [sp+34h] [bp-2Ch] BYREF
  const char *v23; // [sp+38h] [bp-28h]

  v22 = &sead__SafeStringBase__vtable;
  v23 = "obj_poisonwater";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v22);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_poisonwater_under";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  a1[1526] = &FIELD_U32(v4, 0x0);
  a1 += 1526;
  v6 = (void (__fastcall ***)(_DWORD, _DWORD, void *, int (***)(), int *))(*(int (__fastcall **)(void *, _DWORD))(*(_DWORD *)FIELD_U32(v4, 0x0) + 132))(
                                                                            FIELD_U32(v4, 0x0),
                                                                            0);
  v7 = **v6;
  v22 = 0;
  v7(v6, 0, &unk_60B023B4, &v22, &dword_60B3B944);
  v8 = *(_DWORD *)(*a1)[7];
  a1[1] = (_DWORD *)v8;
  v22 = &sead__SafeStringBase__vtable;
  v23 = "obj_poisonwater";
  v9 = LoadResource(ResourceMgrRelated_instance, &v22);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_poisonwater_under";
  sub_60446088(v8, v9, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1] + 1), 1);
  a1[1][6] = 1065353216;
  v10 = (void (__fastcall ***)(_DWORD, _DWORD, void *, int (***)(), int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**a1 + 132))(
                                                                             **a1,
                                                                             0);
  v11 = **v10;
  v22 = 0;
  v11(v10, 0, &unk_60B023B4, &v22, &dword_60B3B944);
  v22 = &sead__SafeStringBase__vtable;
  v23 = "obj_poisonwater";
  v12 = (void *)LoadResource(ResourceMgrRelated_instance, &v22);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_poisonwater_fog";
  v13 = (void *)Resource_getModel2(v12, &a2, 1, 0, 1, 0, 0, 0, 0);
  v14 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v15 = ModelWrapper_ctor(v14, v13, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v15, v12, 0, 0);
  a1[16555] = &FIELD_U32(v14, 0x0);
  v16 = (void (__fastcall ***)(_DWORD, int, void *, int (***)(), int *))(*(int (__fastcall **)(void *, _DWORD))(*(_DWORD *)FIELD_U32(v14, 0x0) + 132))(
                                                                          FIELD_U32(v14, 0x0),
                                                                          0);
  v17 = **v16;
  v22 = 0;
  v17(v16, 1, &unk_60B023B4, &v22, &dword_60B3B944);
  *(_DWORD *)(*a1[16555] + 36) = 15;
  v18 = *(_DWORD *)a1[16555][7];
  a1[16556] = (_DWORD *)v18;
  v22 = &sead__SafeStringBase__vtable;
  v23 = "obj_poisonwater";
  v19 = LoadResource(ResourceMgrRelated_instance, &v22);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_poisonwater_fog";
  sub_60446088(v18, v19, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[16556] + 1), 1);
  result = a1[16556];
  result[6] = 1065353216;
  return result;
}
