/* sub_60197820
 * address: 0x60197820   size: 1184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60197820(_DWORD *a1)
{
  void *v2; // r4
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r1
  _DWORD *v7; // r4
  int v8; // r0
  int (__fastcall *v9)(int, sead__SafeString *); // r2
  int v10; // r0
  void *v11; // r5
  void *v12; // r6
  ModelWrapper *v13; // r7
  ModelWrapper *v14; // r0
  int v15; // r1
  int v16; // r0
  int (__fastcall *v17)(int, sead__SafeString *); // r2
  int v18; // r0
  int v19; // r1
  int v20; // r0
  int v21; // r0
  void *v22; // r5
  void *v23; // r6
  ModelWrapper *v24; // r7
  ModelWrapper *v25; // r0
  int v26; // r1
  _DWORD *v27; // r0
  int v28; // r0
  int v29; // r1
  int v30; // r0
  int v31; // r0
  int result; // r0
  sead__SafeString identifier; // [sp+20h] [bp-38h] BYREF

  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "koopaJr";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  a1[76] = v2;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "koopaJr";
  Model = (void *)Resource_getModel(v2, &identifier, 6, 2, 1, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model, 2, 1, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  a1[75] = v4;
  v6 = a1[76];
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "jc_wait";
  sub_60421938(v4, v6, (int)&identifier);
  a1[32] = 1075000115;
  v7 = a1 + 32;
  a1[33] = 1075000115;
  a1[34] = 1075000115;
  (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)a1[75] + 68))(*(_DWORD *)a1[75], a1 + 32);
  v8 = *(_DWORD *)a1[75];
  v9 = *(int (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)v8 + 84);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "mask";
  v10 = v9(v8, &identifier);
  (*(void (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)a1[75] + 112))(*(_DWORD *)a1[75], v10, 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "koopaJr_clown";
  v11 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  v7[46] = v11;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "koopaJr_clown";
  v12 = (void *)Resource_getModel(v11, &identifier, 6, 2, 1, 1, 1, 0, 1, 0);
  v13 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v14 = sub_60421830(v13, v12, 2, 1, 1, 1, 0);
  j_ModelWrapper_setupModel((int)v14, (int)v11, 0, 0);
  v7[45] = v13;
  v15 = v7[46];
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "jc_wait";
  sub_60421938(v13, v15, (int)&identifier);
  *v7 = 1075000115;
  v7[1] = 1075000115;
  v7[2] = 1075000115;
  (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)v7[45] + 68))(*(_DWORD *)v7[45], v7);
  v16 = *(_DWORD *)v7[45];
  v17 = *(int (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)v16 + 124);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cover";
  v18 = v17(v16, &identifier);
  (*(void (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)v7[45] + 136))(*(_DWORD *)v7[45], v18, 0);
  v19 = v7[46];
  v20 = **(_DWORD **)(v7[45] + 20);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "koopaJr_clown";
  TexAnim_play(v20, v19, &identifier);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(v7[45] + 20) + 4), 0);
  v21 = **(_DWORD **)(v7[45] + 20);
  FIELD_U32(v21, 20) = 0;
  FIELD_U32(v21, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(v7[45] + 20) + 24) = 0;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "koopaJr_clown";
  v22 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  v7[48] = v22;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "koopaJr_clown_expression";
  v23 = (void *)Resource_getModel(v22, &identifier, 6, 0, 0, 1, 0, 1, 1, 0);
  v24 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v25 = ModelWrapper_ctor(v24, v23, 0, 0, 1, 0, 1);
  ModelWrapper_setup(v25, (int)v22, 0, 0);
  v7[47] = v24;
  *v7 = 1075000115;
  v7[1] = 1075000115;
  v7[2] = 1075000115;
  (*(void (__fastcall **)(void *, _DWORD *))(*(_DWORD *)FIELD_U32(v24, 0x0) + 68))(FIELD_U32(v24, 0x0), v7);
  v26 = v7[48];
  v27 = **(_DWORD ***)(v7[47] + 28);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "koopaJr_clown_expression";
  ShuAnim_play(v27, v26, (int)&identifier);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(v7[47] + 28) + 4), 0);
  v28 = **(_DWORD **)(v7[47] + 28);
  FIELD_U32(v28, 20) = 0;
  FIELD_U32(v28, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(v7[47] + 28) + 24) = 0;
  v29 = v7[48];
  v30 = **(_DWORD **)(v7[47] + 44);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "koopaJr_clown_expression";
  sub_604470DC(v30, v29, (int)&identifier);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(v7[47] + 44) + 4), 0);
  v31 = **(_DWORD **)(v7[47] + 44);
  FIELD_U32(v31, 20) = 0;
  FIELD_U32(v31, 28) |= 2u;
  result = **(_DWORD **)(v7[47] + 44);
  FIELD_U32(result, 24) = 0;
  return result;
}
