/* sub_600F07E4
 * address: 0x600F07E4   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600F07E4(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  unsigned int animations; // r2
  int *v7; // r0
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  void *v11; // r6
  ModelWrapper *v12; // r7
  ModelWrapper *v13; // r0
  unsigned int v14; // r2
  int *v15; // r0
  int v16; // r0
  void *v17; // r0
  int v18; // r5
  void *v19; // r6
  ModelWrapper *v20; // r7
  ModelWrapper *v21; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "morton";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 1, 2, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 1, 2, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 7096) = v4;
  animations = (unsigned int)v4[1].texAnims.animations;
  v7 = (int *)FIELD_U32(v4, 0x8).animations;
  if ( FIELD_U32(v4, 0x8).count > animations )
    v7 += animations;
  v8 = *v7;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  SkeletalAnim_play(v8, (int)ResArchiveById, (int)&a2);
  v9 = **(_DWORD ***)(FIELD_U32(a1, 7096) + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "damage_s";
  ShuAnim_play(v9, (int)ResArchiveById, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7096) + 28) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 7096) + 28) + 24) = 0;
  v10 = **(_DWORD **)(FIELD_U32(a1, 7096) + 28);
  FIELD_U32(v10, 20) = 0;
  FIELD_U32(v10, 28) |= 2u;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "morton_shell";
  v11 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 1, 2, 0, 0, 0, 0);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v13 = sub_60421830(v12, v11, 2, 1, 2, 0, 0);
  j_ModelWrapper_setupModel((int)v13, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 7100) = v12;
  v14 = (unsigned int)v12[1].texAnims.animations;
  v15 = (int *)FIELD_U32(v12, 0x8).animations;
  if ( FIELD_U32(v12, 0x8).count > v14 )
    v15 += v14;
  v16 = *v15;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shell_model_in";
  SkeletalAnim_play(v16, (int)ResArchiveById, (int)&a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "EF_MortonHammerBlur";
  v17 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  v18 = (int)v17;
  a2.cstr = "EF_MortonHammerBlur";
  v19 = (void *)Resource_getModel2(v17, &a2, 1, 0, 2, 0, 0, 0, 0);
  v20 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v21 = ModelWrapper_ctor(v20, v19, 1, 0, 2, 0, 0);
  ModelWrapper_setup(v21, v18, 0, 0);
  FIELD_U32(a1, 8652) = v20;
  FIELD_U8(a1, 8656) = 0;
  return 8656;
}
