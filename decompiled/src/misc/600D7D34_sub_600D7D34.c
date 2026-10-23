/* sub_600D7D34
 * address: 0x600D7D34   size: 684   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D7D34(int a1)
{
  void *ResArchiveById; // r4
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  unsigned int animations; // r2
  int *v7; // r0
  int v8; // r0
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r0
  unsigned int v12; // r1
  _DWORD **v13; // r0
  _DWORD *v14; // r0
  int v15; // r0
  unsigned int v16; // r1
  int v17; // r0
  int v18; // r0
  unsigned int v19; // r1
  int v20; // r0
  void *v21; // r6
  ModelWrapper *v22; // r7
  ModelWrapper *v23; // r0
  unsigned int v24; // r2
  int *v25; // r0
  int v26; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "larry";
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
  v9 = **(_DWORD **)(FIELD_U32(a1, 7096) + 20);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "demo_battleA_wait";
  TexAnim_play(v9, ResArchiveById, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7096) + 20) + 4), 1);
  v10 = **(_DWORD ***)(FIELD_U32(a1, 7096) + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "damage_s";
  ShuAnim_play(v10, (int)ResArchiveById, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7096) + 28) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 7096) + 28) + 24) = 0;
  v11 = FIELD_U32(a1, 7096);
  v12 = FIELD_U32(v11, 24);
  v13 = *(_DWORD ***)(v11 + 28);
  if ( v12 > 1 )
    ++v13;
  v14 = *v13;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wand";
  ShuAnim_play(v14, (int)ResArchiveById, (int)&a2);
  v15 = FIELD_U32(a1, 7096);
  v16 = FIELD_U32(v15, 24);
  v17 = FIELD_U32(v15, 28);
  if ( v16 > 1 )
    v17 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v17 + 4), 1);
  v18 = FIELD_U32(a1, 7096);
  v19 = FIELD_U32(v18, 24);
  v20 = FIELD_U32(v18, 28);
  if ( v19 > 1 )
    v20 += 4;
  *(_DWORD *)(*(_DWORD *)v20 + 24) = 0;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "larry_shell";
  v21 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 1, 2, 0, 0, 0, 0);
  v22 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v23 = sub_60421830(v22, v21, 2, 1, 2, 0, 0);
  j_ModelWrapper_setupModel((int)v23, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 7100) = v22;
  v24 = (unsigned int)v22[1].texAnims.animations;
  v25 = (int *)FIELD_U32(v22, 0x8).animations;
  if ( FIELD_U32(v22, 0x8).count > v24 )
    v25 += v24;
  v26 = *v25;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shell_model_in";
  return SkeletalAnim_play(v26, (int)ResArchiveById, (int)&a2);
}
