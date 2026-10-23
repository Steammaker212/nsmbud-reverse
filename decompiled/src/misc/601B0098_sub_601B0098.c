/* sub_601B0098
 * address: 0x601B0098   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B0098(_DWORD *a1)
{
  void *v2; // r5
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r1
  void *v7; // r8
  void *v8; // r7
  ModelWrapper *v9; // r6
  ModelWrapper *v10; // r0
  int v11; // r0
  int (__fastcall *v12)(int, sead__SafeString *); // r2
  int result; // r0
  sead__SafeString identifier; // [sp+1Ch] [bp-2Ch] BYREF

  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "penguin2";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  a1[95] = v2;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "penguin";
  Model = (void *)Resource_getModel(v2, &identifier, 6, 2, 1, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model, 2, 1, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  a1[93] = v4;
  v6 = a1[95];
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "attack_fast";
  sub_60421938(v4, v6, (int)&identifier);
  a1[32] = 0x40000000;
  a1[33] = 0x40000000;
  a1[34] = 0x40000000;
  (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)a1[93] + 68))(*(_DWORD *)a1[93], a1 + 32);
  v7 = (void *)a1[95];
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "penguin_glasses";
  v8 = (void *)Resource_getModel(v7, &identifier, 6, 0, 0, 0, 0, 0, 1, 0);
  v9 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v10 = ModelWrapper_ctor(v9, v8, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v10, (int)v7, 0, 0);
  a1[94] = v9;
  v11 = *(_DWORD *)a1[93];
  v12 = *(int (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)v11 + 84);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "glasses_point";
  result = v12(v11, &identifier);
  a1[146] = result;
  return result;
}
