/* sub_6021454C
 * address: 0x6021454C   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021454C(_DWORD *a1, int a2)
{
  sead__SafeString *v4; // r7
  void *Resource; // r6
  void *Model; // r7
  ModelWrapper *v7; // r5
  ModelWrapper *v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r0
  void *v15; // r5
  void *v16; // r6
  ModelWrapper *v17; // r7
  ModelWrapper *v18; // r0
  int v19; // r1
  int v20; // r0
  int v21; // r0
  int result; // r0
  sead__SafeString identifier; // [sp+1Ch] [bp-2Ch] BYREF

  v4 = (sead__SafeString *)sub_60220C68(a2);
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v4);
  a1[93] = Resource;
  Model = (void *)Resource_getModel(Resource, v4, 6, 1, 1, 0, 0, 0, 1, 0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v8 = ModelWrapper_ctor(v7, Model, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v8, (int)Resource, 0, 0);
  a1[94] = v7;
  v9 = a1[93];
  v10 = (int)*FIELD_U32(v7, 0x8).animations;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "wait2";
  SkeletalAnim_play(v10, v9, (int)&identifier);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[94] + 12) + 4), 1);
  v11 = **(_DWORD **)(a1[94] + 12);
  FIELD_U32(v11, 20) = 0;
  FIELD_U32(v11, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(a1[94] + 12) + 24) = 1065353216;
  if ( a2 == 1 )
  {
    v12 = a1[93];
    v13 = **(_DWORD **)(a1[94] + 20);
    identifier.vtable = &sead__SafeStringBase__vtable;
    identifier.cstr = "I_kinoko_switch";
    TexAnim_play(v13, v12, &identifier);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[94] + 20) + 4), 0);
    v14 = **(_DWORD **)(a1[94] + 20);
    FIELD_U32(v14, 20) = 0x40000000;
    FIELD_U32(v14, 28) |= 2u;
    *(_DWORD *)(**(_DWORD **)(a1[94] + 20) + 24) = 0;
  }
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "block_pata";
  v15 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  a1[95] = v15;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "block_pata";
  v16 = (void *)Resource_getModel(v15, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v17 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v18 = ModelWrapper_ctor(v17, v16, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v18, (int)v15, 0, 0);
  a1[96] = v17;
  v19 = a1[95];
  v20 = (int)*FIELD_U32(v17, 0x8).animations;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "fly_normal";
  SkeletalAnim_play(v20, v19, (int)&identifier);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[96] + 12) + 4), 1);
  v21 = **(_DWORD **)(a1[96] + 12);
  FIELD_U32(v21, 20) = 0;
  FIELD_U32(v21, 28) |= 2u;
  result = **(_DWORD **)(a1[96] + 12);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
