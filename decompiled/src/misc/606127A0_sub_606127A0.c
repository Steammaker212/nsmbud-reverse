/* sub_606127A0
 * address: 0x606127A0   size: 1508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606127A0(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r5
  unsigned int v5; // r1
  void *Resource; // r11
  void *Model2; // r6
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0
  int v10; // r0
  int v11; // r0
  float v12; // s16
  void *v13; // r6
  ModelWrapper *v14; // r7
  ModelWrapper *v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  void *v20; // r6
  ModelWrapper *v21; // r7
  ModelWrapper *v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  void *v27; // r6
  ModelWrapper *v28; // r7
  ModelWrapper *v29; // r0
  int v30; // r0
  int v31; // r0
  int result; // r0
  int v33; // r0
  int *v34; // r4
  int v35; // r0
  unsigned int v36; // [sp+18h] [bp-40h]
  int *v37; // [sp+1Ch] [bp-3Ch]
  sead__SafeString a2; // [sp+20h] [bp-38h] BYREF

  v2 = (_DWORD *)(a1 + 7624);
  v37 = (int *)(a1 + 7624);
  if ( Actor__getProfileId((Actor *)a1) == 278 )
  {
    v3 = 1;
    *v2 = 1;
    v4 = 0;
    v5 = FIELD_U32(a1, 20);
  }
  else
  {
    v3 = 0;
    *v2 = 0;
    v5 = FIELD_U32(a1, 20);
    v4 = v5 & 0xF;
  }
  v36 = v5;
  FIELD_U32(a1, 7536) = v4;
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60CB31F0[2 * v3 + 3]);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "baseA";
  Model2 = (void *)Resource_getModel2(Resource, &a2, 1, 1, 0, 0, 0, 0, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v9 = ModelWrapper_ctor(v8, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v9, Resource, 0, 0);
  FIELD_U32(a1, 6760) = v8;
  v10 = (int)*FIELD_U32(v8, 0x14);
  FIELD_U32(a1, 6776) = v10;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "baseA";
  TexAnim_play(v10, (int)Resource, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6776) + 4), 0);
  v11 = FIELD_U32(a1, 6776);
  v12 = (float)((v36 >> 28) + 2 * v4);
  FIELD_F32(v11, 20) = v12;
  FIELD_U32(v11, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6776) + 24) = 0;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "goal_flag";
  v13 = (void *)Resource_getModel2(Resource, &a2, 1, 1, 1, 0, 0, 0, 0);
  v14 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v15 = ModelWrapper_ctor(v14, v13, 1, 1, 1, 0, 0);
  ModelWrapper_setup(v15, Resource, 0, 0);
  FIELD_U32(a1, 6764) = v14;
  v16 = (int)*FIELD_U32(v14, 0xC);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  SkeletalAnim_play(v16, (int)Resource, (const char **)&a2);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6764) + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6764) + 12) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6764) + 12) + 4));
  v17 = **(_DWORD **)(FIELD_U32(a1, 6764) + 20);
  FIELD_U32(a1, 6780) = v17;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "goal_flag";
  TexAnim_play(v17, (int)Resource, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6780) + 4), 0);
  v18 = FIELD_U32(a1, 6780);
  FIELD_F32(v18, 20) = v12;
  FIELD_U32(v18, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6780) + 24) = 0;
  v19 = **(_DWORD **)(FIELD_U32(a1, 6764) + 28);
  FIELD_U32(a1, 6792) = v19;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  sub_60446088(v19, (int)Resource, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6792) + 4), 1);
  *(_DWORD *)(FIELD_U32(a1, 6792) + 24) = 1065353216;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "goal_flag_player";
  v20 = (void *)Resource_getModel2(Resource, &a2, 1, 1, 1, 0, 0, 0, 0);
  v21 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v22 = ModelWrapper_ctor(v21, v20, 1, 1, 1, 0, 0);
  ModelWrapper_setup(v22, Resource, 0, 0);
  FIELD_U32(a1, 6772) = v21;
  v23 = (int)*FIELD_U32(v21, 0xC);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "goal_flag_player_wait";
  SkeletalAnim_play(v23, (int)Resource, (const char **)&a2);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6772) + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6772) + 12) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6772) + 12) + 4));
  v24 = **(_DWORD **)(FIELD_U32(a1, 6772) + 20);
  FIELD_U32(a1, 6788) = v24;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "goal_flag_player";
  TexAnim_play(v24, (int)Resource, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6788) + 4), 0);
  v25 = FIELD_U32(a1, 6788);
  FIELD_F32(v25, 20) = v12;
  FIELD_U32(v25, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6788) + 24) = 0;
  v26 = **(_DWORD **)(FIELD_U32(a1, 6772) + 28);
  FIELD_U32(a1, 6796) = v26;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "goal_flag_player_wait";
  sub_60446088(v26, (int)Resource, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6796) + 4), 1);
  *(_DWORD *)(FIELD_U32(a1, 6796) + 24) = 1065353216;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "toride_std";
  v27 = (void *)Resource_getModel2(Resource, &a2, 1, 1, 0, 1, 0, 0, 0);
  v28 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v29 = ModelWrapper_ctor(v28, v27, 1, 1, 0, 1, 0);
  ModelWrapper_setup(v29, Resource, 0, 0);
  FIELD_U32(a1, 6768) = v28;
  v30 = (int)*FIELD_U32(v28, 0x14);
  FIELD_U32(a1, 6784) = v30;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "toride_std";
  TexAnim_play(v30, (int)Resource, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6784) + 4), 0);
  v31 = FIELD_U32(a1, 6784);
  FIELD_F32(v31, 20) = v12;
  FIELD_U32(v31, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6784) + 24) = 0;
  result = *v37;
  if ( !*v37 )
  {
    v33 = **(_DWORD **)(FIELD_U32(a1, 6768) + 36);
    FIELD_U32(a1, 6800) = v33;
    v34 = (int *)(a1 + 6800);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "toride_std";
    sub_6045195C(v33, (int)Resource, (const char **)&a2);
    AnimationCtrl_setRepeat((ModelAnimation *)(*v34 + 4), 0);
    v35 = *v34;
    FIELD_F32(v35, 20) = v12;
    FIELD_U32(v35, 28) |= 2u;
    result = *v34;
    *(_DWORD *)(*v34 + 24) = 0;
  }
  return result;
}
