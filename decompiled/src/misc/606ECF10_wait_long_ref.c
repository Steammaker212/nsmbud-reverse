/* wait_long_ref
 * address: 0x606ECF10   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall wait_long_ref(ModelWrapper **a1, int r1_0)
{
  void *v4; // r10
  void *Model2; // r7
  ModelWrapper *v6; // r5
  ModelWrapper *v7; // r0
  int v8; // r6
  int v9; // r1
  char *v10; // r0
  _DWORD *v11; // r0
  int v12; // r6
  int v13; // r1
  char *v14; // r0
  ModelWrapper *v15; // r0
  char **v16; // r0
  char *v17; // r1
  char *result; // r0
  sead__SafeString a2; // [sp+18h] [bp-30h] BYREF
  int (**v20)(); // [sp+20h] [bp-28h] BYREF
  const char *v21; // [sp+24h] [bp-24h]

  v20 = &sead__SafeStringBase__vtable;
  v21 = "lift_trampoline";
  v4 = (void *)LoadResource(ResourceMgrRelated_instance, &v20);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = off_60C1FDDC[4 * r1_0];
  Model2 = (void *)Resource_getModel2(v4, &a2, 1, 1, 0, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v7, v4, 0, 0);
  *a1 = v6;
  v8 = (int)*FIELD_U32(v6, 0xC);
  v20 = &sead__SafeStringBase__vtable;
  v21 = "lift_trampoline";
  v9 = LoadResource(ResourceMgrRelated_instance, &v20);
  a2.vtable = &sead__SafeStringBase__vtable;
  if ( r1_0 )
    v10 = "wait_long";
  else
    v10 = "wait";
  a2.cstr = v10;
  SkeletalAnim_play(v8, v9, (const char **)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)((char *)*(*a1)->sklAnims.animations + 4), 1);
  v11 = *(*a1)->sklAnims.animations;
  v11[5] = 0;
  v11[7] |= 2u;
  *((_DWORD *)*(*a1)->sklAnims.animations + 6) = 1065353216;
  v12 = (int)*(*a1)->texAnims.animations;
  a1[1] = (ModelWrapper *)v12;
  v20 = &sead__SafeStringBase__vtable;
  v21 = "lift_trampoline";
  v13 = LoadResource(ResourceMgrRelated_instance, &v20);
  a2.vtable = &sead__SafeStringBase__vtable;
  if ( r1_0 )
    v14 = "wait_long";
  else
    v14 = "wait";
  a2.cstr = v14;
  TexAnim_play(v12, v13, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)&a1[1]->archive, 1);
  v15 = a1[1];
  FIELD_U32(v15, 0x14) = 0;
  FIELD_U32(v15, 0x1C) = (void **)((int)FIELD_U32(v15, 0x1C) | 2);
  a1[1]->shuAnims.count = 1065353216;
  v16 = &off_60C1FDDC[4 * r1_0];
  v17 = v16[1];
  result = v16[3];
  a1[20] = (ModelWrapper *)v17;
  a1[22] = (ModelWrapper *)result;
  return result;
}
