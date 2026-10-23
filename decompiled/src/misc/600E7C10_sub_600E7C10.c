/* sub_600E7C10
 * address: 0x600E7C10   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E7C10(int a1)
{
  void *v2; // r0
  void *v3; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  _DWORD *v7; // r4
  unsigned int animations; // r2
  int *v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r0
  _DWORD **v14; // r0
  _DWORD *v15; // r0
  int v16; // r0
  int v17; // r0
  void *v18; // r6
  ModelWrapper *v19; // r7
  ModelWrapper *v20; // r0
  unsigned int v21; // r2
  int *v22; // r0
  int v23; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ludwig";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  v3 = v2;
  a2.cstr = "ludwig";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 1, 2, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 1, 2, 0, 0);
  j_ModelWrapper_setupModel((int)v6, (int)v3, 0, 0);
  FIELD_U32(a1, 7096) = v5;
  v7 = (_DWORD *)(a1 + 7096);
  animations = (unsigned int)v5[1].texAnims.animations;
  v9 = (int *)FIELD_U32(v5, 0xC);
  if ( FIELD_U32(v5, 0x8) > animations )
    v9 += animations;
  v10 = *v9;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  SkeletalAnim_play(v10, (int)v3, (int)&a2);
  v11 = **(_DWORD **)(*v7 + 20);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ludwig";
  TexAnim_play(v11, v3, &a2);
  *(_DWORD *)(**(_DWORD **)(*v7 + 20) + 24) = 0;
  v12 = **(_DWORD **)(*v7 + 20);
  FIELD_U32(v12, 20) = 1065353216;
  FIELD_U32(v12, 28) |= 2u;
  v13 = **(_DWORD ***)(*v7 + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "damage_s";
  ShuAnim_play(v13, (int)v3, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v7 + 28) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(*v7 + 28) + 24) = 0;
  v14 = *(_DWORD ***)(*v7 + 28);
  if ( *(_DWORD *)(*v7 + 24) > 1u )
    ++v14;
  v15 = *v14;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wand";
  ShuAnim_play(v15, (int)v3, (int)&a2);
  v16 = *(_DWORD *)(*v7 + 28);
  if ( *(_DWORD *)(*v7 + 24) > 1u )
    v16 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v16 + 4), 1);
  v17 = *(_DWORD *)(*v7 + 28);
  if ( *(_DWORD *)(*v7 + 24) > 1u )
    v17 += 4;
  *(_DWORD *)(*(_DWORD *)v17 + 24) = 0;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ludwig_shell";
  v18 = (void *)Resource_getModel2(v3, &a2, 2, 1, 2, 0, 0, 0, 0);
  v19 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v20 = sub_60421830(v19, v18, 2, 1, 2, 0, 0);
  j_ModelWrapper_setupModel((int)v20, (int)v3, 0, 0);
  v7[1] = v19;
  v21 = (unsigned int)v19[1].texAnims.animations;
  v22 = (int *)FIELD_U32(v19, 0xC);
  if ( FIELD_U32(v19, 0x8) > v21 )
    v22 += v21;
  v23 = *v22;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shell_model_in";
  return SkeletalAnim_play(v23, (int)v3, (int)&a2);
}
