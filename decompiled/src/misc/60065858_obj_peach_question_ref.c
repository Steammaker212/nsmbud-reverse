/* obj_peach_question_ref
 * address: 0x60065858   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall obj_peach_question_ref(int a1)
{
  void *v2; // r6
  void *v3; // r8
  void *Model2; // r7
  ModelWrapper *v5; // r5
  ModelWrapper *v6; // r0
  _DWORD **v7; // r10
  unsigned int animations; // r2
  int *v9; // r0
  int v10; // r0
  int v11; // r0
  void *v12; // r5
  ModelWrapper *v13; // r6
  ModelWrapper *v14; // r0
  unsigned int v15; // r2
  int *v16; // r0
  int v17; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "peach";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_peach_question";
  v3 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "peach";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 1, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 1, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v6, (int)v2, 0, 0);
  FIELD_U32(a1, 6100) = v5;
  v7 = (_DWORD **)(a1 + 6100);
  animations = (unsigned int)v5[1].texAnims.animations;
  v9 = (int *)FIELD_U32(v5, 0x8).animations;
  if ( FIELD_U32(v5, 0x8).count > animations )
    v9 += animations;
  v10 = *v9;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lkp_wait";
  SkeletalAnim_play(v10, (int)v2, (int)&a2);
  v11 = *(_DWORD *)(*v7)[5];
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lkp_wait";
  TexAnim_play(v11, v2, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_peach_question";
  v12 = (void *)Resource_getModel2(v3, &a2, 1, 0, 0, 0, 0, 0, 0);
  v13 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v14 = sub_60421830(v13, v12, 1, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v14, (int)v3, 0, 0);
  v7[1] = &FIELD_U32(v13, 0x0);
  v15 = (unsigned int)v13[1].texAnims.animations;
  v16 = (int *)FIELD_U32(v13, 0x8).animations;
  if ( FIELD_U32(v13, 0x8).count > v15 )
    v16 += v15;
  v17 = *v16;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_peach_question";
  SkeletalAnim_play(v17, (int)v3, (int)&a2);
  *(_DWORD *)(**v7 + 32) = 0;
  *(_DWORD *)(**v7 + 36) = 0;
  *(_DWORD *)(*v7[1] + 32) = 0;
  result = *v7[1];
  FIELD_U32(result, 36) = 0;
  return result;
}
