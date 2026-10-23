/* sub_60612DB4
 * address: 0x60612DB4   size: 1792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60612DB4(_DWORD *a1)
{
  int *v1; // r4
  void *Resource; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r0
  float v9; // s16
  void *v10; // r5
  void *v11; // r6
  ModelWrapper *v12; // r7
  ModelWrapper *v13; // r0
  int v14; // r5
  int v15; // r0
  int v16; // r5
  int v17; // r0
  int v18; // r0
  int v19; // r5
  int v20; // r0
  void *v21; // r5
  void *v22; // r6
  ModelWrapper *v23; // r7
  ModelWrapper *v24; // r0
  int v25; // r5
  int v26; // r0
  int v27; // r5
  int v28; // r0
  int v29; // r0
  int v30; // r5
  int v31; // r0
  void *v32; // r5
  void *v33; // r6
  ModelWrapper *v34; // r7
  ModelWrapper *v35; // r0
  int v36; // r5
  int v37; // r0
  int v38; // r0
  int result; // r0
  int v40; // r5
  int v41; // r0
  int v42; // r0
  int v44; // [sp+24h] [bp-44h]
  unsigned int v45; // [sp+28h] [bp-40h]
  sead__SafeString a2; // [sp+30h] [bp-38h] BYREF

  v1 = a1 + 1906;
  v45 = a1[5];
  v44 = a1[1884];
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60CB31FC[2 * a1[1906]]);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "baseA";
  Model2 = (void *)Resource_getModel2(Resource, &a2, 1, 1, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v5, Resource, 0, 0);
  *(v1 - 216) = (int)v4;
  v6 = (int)*FIELD_U32(v4, 0x14);
  *(v1 - 212) = v6;
  v7 = LoadResource(ResourceMgrRelated_instance, &dword_60CB31FC[2 * *v1]);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "baseA";
  TexAnim_play(v6, v7, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(*(v1 - 212) + 4), 0);
  v8 = *(v1 - 212);
  v9 = (float)(2 * v44 + (v45 >> 28));
  FIELD_F32(v8, 20) = v9;
  FIELD_U32(v8, 28) |= 2u;
  *(_DWORD *)(*(v1 - 212) + 24) = 0;
  v10 = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60CB31FC[2 * *v1]);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "goal_flag";
  v11 = (void *)Resource_getModel2(v10, &a2, 1, 1, 1, 0, 0, 0, 0);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v13 = ModelWrapper_ctor(v12, v11, 1, 1, 1, 0, 0);
  ModelWrapper_setup(v13, v10, 0, 0);
  *(v1 - 215) = (int)v12;
  v14 = (int)*FIELD_U32(v12, 0xC);
  v15 = LoadResource(ResourceMgrRelated_instance, &dword_60CB31FC[2 * *v1]);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  SkeletalAnim_play(v14, v15, (const char **)&a2);
  *(_DWORD *)(**(_DWORD **)(*(v1 - 215) + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(v1 - 215) + 12) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(v1 - 215) + 12) + 4));
  v16 = **(_DWORD **)(*(v1 - 215) + 20);
  *(v1 - 211) = v16;
  v17 = LoadResource(ResourceMgrRelated_instance, &dword_60CB31FC[2 * *v1]);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "goal_flag";
  TexAnim_play(v16, v17, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(*(v1 - 211) + 4), 0);
  v18 = *(v1 - 211);
  FIELD_F32(v18, 20) = v9;
  FIELD_U32(v18, 28) |= 2u;
  *(_DWORD *)(*(v1 - 211) + 24) = 0;
  v19 = **(_DWORD **)(*(v1 - 215) + 28);
  *(v1 - 208) = v19;
  v20 = LoadResource(ResourceMgrRelated_instance, &dword_60CB31FC[2 * *v1]);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  sub_60446088(v19, v20, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(*(v1 - 208) + 4), 1);
  *(_DWORD *)(*(v1 - 208) + 24) = 1065353216;
  v21 = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60CB31FC[2 * *v1]);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "goal_flag_player";
  v22 = (void *)Resource_getModel2(v21, &a2, 1, 1, 1, 0, 0, 0, 0);
  v23 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v24 = ModelWrapper_ctor(v23, v22, 1, 1, 1, 0, 0);
  ModelWrapper_setup(v24, v21, 0, 0);
  *(v1 - 213) = (int)v23;
  v25 = (int)*FIELD_U32(v23, 0xC);
  v26 = LoadResource(ResourceMgrRelated_instance, &dword_60CB31FC[2 * *v1]);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "goal_flag_player_wait";
  SkeletalAnim_play(v25, v26, (const char **)&a2);
  *(_DWORD *)(**(_DWORD **)(*(v1 - 213) + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(v1 - 213) + 12) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(v1 - 213) + 12) + 4));
  v27 = **(_DWORD **)(*(v1 - 213) + 20);
  *(v1 - 209) = v27;
  v28 = LoadResource(ResourceMgrRelated_instance, &dword_60CB31FC[2 * *v1]);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "goal_flag_player";
  TexAnim_play(v27, v28, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(*(v1 - 209) + 4), 0);
  v29 = *(v1 - 209);
  FIELD_F32(v29, 20) = v9;
  FIELD_U32(v29, 28) |= 2u;
  *(_DWORD *)(*(v1 - 209) + 24) = 0;
  v30 = **(_DWORD **)(*(v1 - 213) + 28);
  *(v1 - 207) = v30;
  v31 = LoadResource(ResourceMgrRelated_instance, &dword_60CB31FC[2 * *v1]);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "goal_flag_player_wait";
  sub_60446088(v30, v31, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(*(v1 - 207) + 4), 1);
  *(_DWORD *)(*(v1 - 207) + 24) = 1065353216;
  v32 = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60CB31FC[2 * *v1]);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "toride_std";
  v33 = (void *)Resource_getModel2(v32, &a2, 1, 1, 0, 1, 0, 0, 0);
  v34 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v35 = ModelWrapper_ctor(v34, v33, 1, 1, 0, 1, 0);
  ModelWrapper_setup(v35, v32, 0, 0);
  *(v1 - 214) = (int)v34;
  v36 = (int)*FIELD_U32(v34, 0x14);
  *(v1 - 210) = v36;
  v37 = LoadResource(ResourceMgrRelated_instance, &dword_60CB31FC[2 * *v1]);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "toride_std";
  TexAnim_play(v36, v37, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(*(v1 - 210) + 4), 0);
  v38 = *(v1 - 210);
  FIELD_F32(v38, 20) = v9;
  FIELD_U32(v38, 28) |= 2u;
  *(_DWORD *)(*(v1 - 210) + 24) = 0;
  result = *v1;
  if ( !*v1 )
  {
    v40 = **(_DWORD **)(*(v1 - 214) + 36);
    a1[1700] = v40;
    v41 = LoadResource(ResourceMgrRelated_instance, dword_60CB31FC);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "toride_std";
    sub_6045195C(v40, v41, (const char **)&a2);
    AnimationCtrl_setRepeat((ModelAnimation *)(a1[1700] + 4), 0);
    v42 = a1[1700];
    FIELD_F32(v42, 20) = v9;
    FIELD_U32(v42, 28) |= 2u;
    result = a1[1700];
    FIELD_U32(result, 24) = 0;
  }
  return result;
}
