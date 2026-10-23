/* obj_envfog_ref
 * address: 0x605A955C   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall obj_envfog_ref(int **a1)
{
  void *v2; // r9
  void *Model2; // r5
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int v7; // r0
  void (__fastcall ***v8)(_DWORD, _DWORD, void *, int (***)(), int *); // r0
  void (__fastcall *v9)(_DWORD, _DWORD, void *, int (***)(), int *); // r7
  void (__fastcall ***v10)(_DWORD, int, void *, int (***)(), int *); // r0
  void (__fastcall *v11)(_DWORD, int, void *, int (***)(), int *); // r7
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v14)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v15; // [sp+20h] [bp-28h]

  v14 = &sead__SafeStringBase__vtable;
  v15 = "obj_envfog";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v14);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_envfog";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  a1[1526] = (int *)v4;
  a1 += 1526;
  v6 = (int)*FIELD_U32(v4, 0x1C);
  a1[1] = (int *)v6;
  v14 = &sead__SafeStringBase__vtable;
  v15 = "obj_envfog";
  v7 = LoadResource(ResourceMgrRelated_instance, &v14);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_envfog";
  sub_60446088(v6, v7, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1] + 1), 1);
  a1[1][6] = 1065353216;
  v8 = (void (__fastcall ***)(_DWORD, _DWORD, void *, int (***)(), int *))(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)**a1 + 132))(
                                                                            **a1,
                                                                            0);
  v9 = **v8;
  v14 = 0;
  v9(v8, 0, &unk_60B023B4, &v14, &dword_60B3B944);
  v10 = (void (__fastcall ***)(_DWORD, int, void *, int (***)(), int *))(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)**a1 + 132))(
                                                                          **a1,
                                                                          0);
  v11 = **v10;
  v14 = 0;
  v11(v10, 1, &unk_60B023B4, &v14, &dword_60B3B944);
  result = **a1;
  FIELD_U32(result, 36) = 15;
  return result;
}
