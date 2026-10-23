/* block_roulette_ref
 * address: 0x606D3694   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall block_roulette_ref(_DWORD *a1)
{
  void *v2; // r9
  void *Model2; // r5
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r5
  int v10; // r0
  void *v11; // r5
  void *v12; // r6
  ModelWrapper *v13; // r7
  ModelWrapper *v14; // r0
  ModelWrapper *result; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v17)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v18; // [sp+20h] [bp-28h]

  v17 = &sead__SafeStringBase__vtable;
  v18 = "block_roulette";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v17);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "block_roulette";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 1, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 1, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  a1[1847] = v4;
  a1 += 1847;
  v6 = (int)*FIELD_U32(v4, 0x10).animations;
  a1[2] = v6;
  v17 = &sead__SafeStringBase__vtable;
  v18 = "block_roulette";
  v7 = LoadResource(ResourceMgrRelated_instance, &v17);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "block_roulette";
  TexAnim_play(v6, v7, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[2] + 4), 0);
  v8 = a1[2];
  FIELD_U32(v8, 20) = 0;
  FIELD_U32(v8, 28) |= 2u;
  *(_DWORD *)(a1[2] + 24) = 1065353216;
  v9 = **(_DWORD **)(*a1 + 28);
  a1[3] = v9;
  v17 = &sead__SafeStringBase__vtable;
  v18 = "block_roulette";
  v10 = LoadResource(ResourceMgrRelated_instance, &v17);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "block_roulette_glass";
  sub_60446088(v9, v10, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[3] + 4), 1);
  *(_DWORD *)(a1[3] + 24) = 1065353216;
  v17 = &sead__SafeStringBase__vtable;
  v18 = "block_roulette";
  v11 = (void *)LoadResource(ResourceMgrRelated_instance, &v17);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "block_roulette_empty";
  v12 = (void *)Resource_getModel2(v11, &a2, 1, 0, 0, 0, 0, 0, 0);
  v13 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v14 = ModelWrapper_ctor(v13, v12, 1, 0, 0, 0, 0);
  result = ModelWrapper_setup(v14, v11, 0, 0);
  a1[1] = v13;
  return result;
}
