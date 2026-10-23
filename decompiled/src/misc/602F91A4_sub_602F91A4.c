/* sub_602F91A4
 * address: 0x602F91A4   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602F91A4(int a1)
{
  int v1; // r4
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r1
  int v7; // r5
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r2
  int *v11; // r0
  int v12; // r5
  void *v13; // r5
  void *v14; // r6
  ModelWrapper *v15; // r7
  ModelWrapper *v16; // r0
  int v17; // r1
  char *v18; // r5
  void *v19; // r5
  void *v20; // r6
  ModelWrapper *v21; // r7
  ModelWrapper *v22; // r0
  int v23; // r1
  int v24; // r5
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  v1 = a1 + 6300;
  v2 = *(void **)(a1 + 6300);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "kurage";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 1, 2, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 1, 2, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  FIELD_U32(v1, 4) = v4;
  sub_60421AD4((int)v4);
  FIELD_U32(v1, 16) = 0;
  v6 = *(_DWORD *)v1;
  v7 = **(_DWORD **)(FIELD_U32(v1, 4) + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "kurage";
  sub_60446088(v7, v6, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(v7 + 4), 1);
  FIELD_U32(v7, 24) = 1065353216;
  v8 = FIELD_U32(v1, 4);
  v9 = *(_DWORD *)v1;
  v10 = FIELD_U32(v8, 24);
  v11 = *(int **)(v8 + 28);
  if ( v10 > 1 )
    ++v11;
  v12 = *v11;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "BGM_anim";
  ShuAnim_play((_DWORD *)v12, v9, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(v12 + 4), 0);
  FIELD_U32(v12, 24) = 0;
  v13 = *(void **)v1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "kurage_light_fog";
  v14 = (void *)Resource_getModel2(v13, &a2, 0, 0, 1, 0, 0, 0, 0);
  v15 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v16 = ModelWrapper_ctor(v15, v14, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v16, (int)v13, 0, 0);
  FIELD_U32(v1, 8) = v15;
  v17 = *(_DWORD *)v1;
  v18 = (char *)*FIELD_U32(v15, 0x18).animations;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "kurage_light_fog";
  ShuAnim_play(v18, v17, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(v18 + 4), 1);
  *((_DWORD *)v18 + 6) = 1065353216;
  v19 = *(void **)v1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "kurage_light_mask";
  v20 = (void *)Resource_getModel2(v19, &a2, 0, 0, 1, 0, 0, 0, 0);
  v21 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v22 = ModelWrapper_ctor(v21, v20, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v22, (int)v19, 0, 0);
  FIELD_U32(v1, 12) = v21;
  *((_DWORD *)FIELD_U32(v21, 0x0) + 9) = 17;
  v23 = *(_DWORD *)v1;
  v24 = **(_DWORD **)(FIELD_U32(v1, 12) + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "kurage_light_mask";
  sub_60446088(v24, v23, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(v24 + 4), 1);
  FIELD_U32(v24, 24) = 0;
  FIELD_U32(v24, 20) = 0;
  FIELD_U32(v24, 28) |= 2u;
  return LightMask__init((RevealMaskRelated *)(v1 + 20), 0, 2);
}
