/* Lava_onCreate_helper
 * address: 0x605A8104   size: 1240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Lava_onCreate_helper(_DWORD *a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  _DWORD **v6; // r10
  void (__fastcall ***v7)(_DWORD, _DWORD); // r0
  void (__fastcall *v8)(_DWORD, _DWORD); // r7
  void (__fastcall ***v9)(_DWORD, int, void *, int (***)(), int *); // r0
  void (__fastcall *v10)(_DWORD, int, void *, int (***)(), int *); // r7
  void (__fastcall ***v11)(_DWORD, int, void *, int (***)(), int *); // r0
  void (__fastcall *v12)(_DWORD, int, void *, int (***)(), int *); // r7
  int v13; // r6
  int v14; // r0
  void *v15; // r6
  void *v16; // r7
  ModelWrapper *v17; // r4
  ModelWrapper *v18; // r0
  void (__fastcall ***v19)(_DWORD, int, void *, int (***)(), int *); // r0
  void (__fastcall *v20)(_DWORD, int, void *, int (***)(), int *); // r7
  int v21; // r4
  int v22; // r0
  int result; // r0
  void *v24; // r0
  void *v25; // r8
  void *v26; // r4
  ModelWrapper *v27; // r6
  ModelWrapper *v28; // r0
  int v29; // r6
  int v30; // r0
  _DWORD *v31; // [sp+20h] [bp-40h]
  sead__SafeString a2; // [sp+2Ch] [bp-34h] BYREF
  int (**v33)(); // [sp+34h] [bp-2Ch] BYREF
  const char *v34; // [sp+38h] [bp-28h]

  v33 = &sead__SafeStringBase__vtable;
  v34 = "obj_magma";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v33);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_magma_under";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  v31 = a1;
  a1[1526] = v4;
  v6 = (_DWORD **)(a1 + 1526);
  *((_DWORD *)FIELD_U32(v4, 0x0) + 9) = (a1[5] >> 8) & 4 ^ 0xF;
  v7 = (void (__fastcall ***)(_DWORD, _DWORD))(*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)a1[1526] + 132))(
                                                *(_DWORD *)a1[1526],
                                                0);
  v8 = **v7;
  v33 = 0;
  v8(v7, 0);
  v9 = (void (__fastcall ***)(_DWORD, int, void *, int (***)(), int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v6 + 132))(
                                                                         **v6,
                                                                         0);
  v10 = **v9;
  v33 = 0;
  v10(v9, 1, &unk_60B023B4, &v33, &dword_60B3B944);
  v11 = (void (__fastcall ***)(_DWORD, int, void *, int (***)(), int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v6 + 132))(
                                                                          **v6,
                                                                          0);
  v12 = **v11;
  v33 = 0;
  v12(v11, 2, &unk_60B023B4, &v33, &dword_60B3B944);
  v13 = **(_DWORD **)(a1[1526] + 28);
  a1[1527] = v13;
  v33 = &sead__SafeStringBase__vtable;
  v34 = "obj_magma";
  v14 = LoadResource(ResourceMgrRelated_instance, &v33);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_magma_under";
  sub_60446088(v13, v14, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1527] + 4), 1);
  v6[1][6] = 1065353216;
  v33 = &sead__SafeStringBase__vtable;
  v34 = "obj_magma";
  v15 = (void *)LoadResource(ResourceMgrRelated_instance, &v33);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_magmaheat";
  v16 = (void *)Resource_getModel2(v15, &a2, 1, 0, 1, 0, 0, 0, 0);
  v17 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v18 = ModelWrapper_ctor(v17, v16, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v18, v15, 0, 0);
  v6[16555] = &FIELD_U32(v17, 0x0);
  v19 = (void (__fastcall ***)(_DWORD, int, void *, int (***)(), int *))(*(int (__fastcall **)(void *, _DWORD))(*(_DWORD *)FIELD_U32(v17, 0x0) + 132))(
                                                                          FIELD_U32(v17, 0x0),
                                                                          0);
  v20 = **v19;
  v33 = 0;
  v20(v19, 1, &unk_60B023B4, &v33, &dword_60B3B944);
  v21 = *(_DWORD *)v6[16555][7];
  v6[16556] = (_DWORD *)v21;
  v33 = &sead__SafeStringBase__vtable;
  v34 = "obj_magma";
  v22 = LoadResource(ResourceMgrRelated_instance, &v33);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_magmaheat";
  sub_60446088(v21, v22, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(v6[16556] + 1), 1);
  v6[16556][6] = 1065353216;
  if ( (*((_BYTE *)v6 - 6083) & 1) != 0 )
  {
    v33 = &sead__SafeStringBase__vtable;
    v34 = "yogan_line";
    v24 = (void *)LoadResource(ResourceMgrRelated_instance, &v33);
    a2.vtable = &sead__SafeStringBase__vtable;
    v25 = v24;
    a2.cstr = "yogan_line";
    v26 = (void *)Resource_getModel2(v24, &a2, 0, 0, 1, 0, 0, 0, 0);
    v27 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v28 = ModelWrapper_ctor(v27, v26, 0, 0, 1, 0, 0);
    ModelWrapper_setup(v28, v25, 0, 0);
    v31[18083] = v27;
    *((_DWORD *)FIELD_U32(v27, 0x0) + 8) = 0;
    v29 = **(_DWORD **)(v31[18083] + 28);
    v33 = &sead__SafeStringBase__vtable;
    v34 = "yogan_line";
    v30 = LoadResource(ResourceMgrRelated_instance, &v33);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "yogan_line";
    sub_60446088(v29, v30, &a2);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(v31[18083] + 28) + 4), 1);
    *(_DWORD *)(**(_DWORD **)(v31[18083] + 28) + 24) = 1065353216;
    result = *(_DWORD *)v31[18083];
    FIELD_U32(result, 312) = 8;
  }
  else
  {
    v31[18083] = 0;
    return 72332;
  }
  return result;
}
