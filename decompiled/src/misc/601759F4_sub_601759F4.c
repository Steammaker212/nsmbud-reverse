/* sub_601759F4
 * address: 0x601759F4   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601759F4(_DWORD *a1)
{
  void *v2; // r5
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r1
  int v7; // r0
  int v8; // r0
  void *v9; // r5
  void *v10; // r6
  ModelWrapper *v11; // r7
  ModelWrapper *v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r0
  int result; // r0
  sead__SafeString identifier; // [sp+1Ch] [bp-2Ch] BYREF

  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "chorobon";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  a1[93] = v2;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "chorobon";
  Model = (void *)Resource_getModel(v2, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  a1[94] = v4;
  v6 = a1[93];
  v7 = (int)*FIELD_U32(v4, 0x8).animations;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "run";
  SkeletalAnim_play(v7, v6, (int)&identifier);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[94] + 12) + 4), 1);
  v8 = **(_DWORD **)(a1[94] + 12);
  FIELD_U32(v8, 20) = 0;
  FIELD_U32(v8, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(a1[94] + 12) + 24) = 1065353216;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "block_pata";
  v9 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  a1[95] = v9;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "block_pata";
  v10 = (void *)Resource_getModel(v9, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v11 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v12 = ModelWrapper_ctor(v11, v10, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v12, (int)v9, 0, 0);
  a1[96] = v11;
  v13 = a1[95];
  v14 = (int)*FIELD_U32(v11, 0x8).animations;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "fly_normal";
  SkeletalAnim_play(v14, v13, (int)&identifier);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[96] + 12) + 4), 1);
  v15 = **(_DWORD **)(a1[96] + 12);
  FIELD_U32(v15, 20) = 0;
  FIELD_U32(v15, 28) |= 2u;
  result = **(_DWORD **)(a1[96] + 12);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
