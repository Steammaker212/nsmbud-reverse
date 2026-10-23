/* obj_quicksand_ref
 * address: 0x605AAB4C   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall obj_quicksand_ref(_DWORD **a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int v7; // r0
  void (__fastcall ***v8)(_DWORD, _DWORD, void *, int (***)(), int *); // r0
  void (__fastcall *v9)(_DWORD, _DWORD, void *, int (***)(), int *); // r7
  void (__fastcall ***v10)(_DWORD, int, void *, int (***)(), int *); // r0
  void (__fastcall *v11)(_DWORD, int, void *, int (***)(), int *); // r7
  void *v12; // r5
  void *v13; // r6
  ModelWrapper *v14; // r7
  ModelWrapper *v15; // r0
  void *result; // r0
  sead__SafeString a2; // [sp+1Ch] [bp-34h] BYREF
  int (**v18)(); // [sp+24h] [bp-2Ch] BYREF
  const char *v19; // [sp+28h] [bp-28h]

  v18 = &sead__SafeStringBase__vtable;
  v19 = "obj_quicksand";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v18);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_quicksand_under";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  a1[1526] = &FIELD_U32(v4, 0x0);
  a1 += 1526;
  *((_DWORD *)FIELD_U32(v4, 0x0) + 9) = 10;
  v6 = *(_DWORD *)(*a1)[7];
  a1[1] = (_DWORD *)v6;
  v18 = &sead__SafeStringBase__vtable;
  v19 = "obj_quicksand";
  v7 = LoadResource(ResourceMgrRelated_instance, &v18);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_quicksand_under";
  sub_60446088(v6, v7, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1] + 1), 1);
  a1[1][6] = 1065353216;
  v8 = (void (__fastcall ***)(_DWORD, _DWORD, void *, int (***)(), int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**a1 + 132))(
                                                                            **a1,
                                                                            0);
  v9 = **v8;
  v18 = 0;
  v9(v8, 0, &unk_60B023B4, &v18, &dword_60B3B944);
  v10 = (void (__fastcall ***)(_DWORD, int, void *, int (***)(), int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**a1 + 132))(
                                                                          **a1,
                                                                          0);
  v11 = **v10;
  v18 = 0;
  v11(v10, 1, &unk_60B023B4, &v18, &dword_60B3B944);
  v18 = &sead__SafeStringBase__vtable;
  v19 = "obj_quicksand";
  v12 = (void *)LoadResource(ResourceMgrRelated_instance, &v18);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_quicksand_under_shadow";
  v13 = (void *)Resource_getModel2(v12, &a2, 1, 0, 1, 0, 0, 0, 0);
  v14 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v15 = ModelWrapper_ctor(v14, v13, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v15, v12, 0, 0);
  a1[16555] = &FIELD_U32(v14, 0x0);
  result = FIELD_U32(v14, 0x0);
  *((_DWORD *)FIELD_U32(v14, 0x0) + 9) = 11;
  return result;
}
