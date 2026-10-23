/* sub_6031962C
 * address: 0x6031962C   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031962C(int a1)
{
  void *v2; // r5
  int *v3; // r4
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  unsigned int animations; // r2
  int *v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int result; // r0
  _DWORD v15[2]; // [sp+1Ch] [bp-34h] BYREF
  sead__SafeString a2; // [sp+24h] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "karon";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  FIELD_U32(a1, 6300) = v2;
  v3 = (int *)(a1 + 6300);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "karon_head";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 1, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 1, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v6, (int)v2, 0, 0);
  v3[1] = (int)v5;
  animations = (unsigned int)v5[1].texAnims.animations;
  v8 = (int *)FIELD_U32(v5, 0x8).animations;
  if ( FIELD_U32(v5, 0x8).count > animations )
    v8 += animations;
  v9 = *v8;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "karon";
  v10 = LoadResource(ResourceMgrRelated_instance, &a2);
  v15[0] = &sead__SafeStringBase__vtable;
  v15[1] = "head_anim";
  SkeletalAnim_play(v9, v10, (int)v15);
  v11 = **(_DWORD **)(v3[1] + 20);
  v3[2] = v11;
  v12 = *v3;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "karon_head";
  TexAnim_play(v11, v12, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(v3[2] + 4), 0);
  v13 = v3[2];
  FIELD_U32(v13, 20) = 1065353216;
  FIELD_U32(v13, 28) |= 2u;
  result = v3[2];
  FIELD_U32(result, 24) = 0;
  return result;
}
