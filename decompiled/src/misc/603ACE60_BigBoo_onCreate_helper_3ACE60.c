/* BigBoo_onCreate_helper_3ACE60
 * address: 0x603ACE60   size: 960   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall BigBoo_onCreate_helper_3ACE60(int a1)
{
  void *ResArchiveById; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r7
  int v8; // r0
  int v9; // r0
  void *v10; // r5
  ModelWrapper *v11; // r6
  ModelWrapper *v12; // r0
  int v13; // r0
  int v14; // r0
  void *v15; // r6
  ModelWrapper *v16; // r5
  ModelWrapper *v17; // r0
  ModelWrapper **v18; // r4
  int v19; // r0
  int v20; // r0
  _DWORD *result; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "teresaA";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 1, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6304) = v4;
  v6 = (int)*FIELD_U32(v4, 0xC);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  SkeletalAnim_play(v6, (int)ResArchiveById, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 24) = 0;
  FIELD_U32(a1, 6648) = 1;
  v7 = a1 + 6648;
  FIELD_U32(a1, 6644) = 1;
  v8 = **(_DWORD **)(FIELD_U32(a1, 6304) + 20);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shay_teresaA";
  TexAnim_play(v8, ResArchiveById, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 20) + 4), 0);
  v9 = **(_DWORD **)(FIELD_U32(a1, 6304) + 20);
  FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 20) + 24) = 0;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "teresaB";
  v10 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 1, 0, 0, 0, 0, 0);
  v11 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v12 = ModelWrapper_ctor(v11, v10, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v12, (int)ResArchiveById, 0, 0);
  *(_DWORD *)(v7 - 348) = v11;
  v13 = (int)*FIELD_U32(v11, 0xC);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shay_teresaB_wait";
  SkeletalAnim_play(v13, (int)ResArchiveById, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)(v7 - 348) + 12) + 4), 0);
  *(_DWORD *)v7 = 1;
  v14 = **(_DWORD **)(*(_DWORD *)(v7 - 348) + 20);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shay_teresaB_wait";
  TexAnim_play(v14, ResArchiveById, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)(v7 - 348) + 20) + 4), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "fog";
  v15 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 1, 0, 0, 0, 0);
  v16 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v17 = ModelWrapper_ctor(v16, v15, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v17, (int)ResArchiveById, 0, 0);
  *(_DWORD *)(v7 - 340) = v16;
  v18 = (ModelWrapper **)(v7 - 340);
  if ( FIELD_U8(v7, 432) )
  {
    *((_DWORD *)FIELD_U32(v16, 0x0) + 9) = 15;
    v16 = *v18;
  }
  v19 = (int)*FIELD_U32(v16, 0xC);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "fog";
  SkeletalAnim_play(v19, (int)ResArchiveById, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)((char *)*(*v18)->sklAnims.animations + 4), 1);
  *((_DWORD *)*(*v18)->sklAnims.animations + 6) = 1065353216;
  v20 = (int)*(*v18)->shuAnims.animations;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "fog";
  sub_60446088(v20, (int)ResArchiveById, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)((char *)*(*v18)->shuAnims.animations + 4), 1);
  result = *(*v18)->shuAnims.animations;
  result[6] = 1065353216;
  return result;
}
