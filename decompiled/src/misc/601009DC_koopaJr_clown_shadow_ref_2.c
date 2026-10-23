/* koopaJr_clown_shadow_ref_2
 * address: 0x601009DC   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall koopaJr_clown_shadow_ref_2(int a1)
{
  void *v2; // r5
  int *v3; // r10
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  unsigned int animations; // r2
  int *v8; // r0
  int v9; // r1
  int v10; // r0
  _DWORD *v11; // r0
  int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r0
  _DWORD *v15; // r0
  int *v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r0
  int v19; // r0
  _DWORD *v20; // r0
  int v21; // r1
  unsigned int v22; // r2
  unsigned int v23; // r0
  int v24; // r0
  int v25; // r1
  int v26; // r0
  _DWORD *v27; // r0
  int v28; // r1
  int v29; // r0
  void *v30; // r5
  void *v31; // r6
  ModelWrapper *v32; // r7
  ModelWrapper *v33; // r0
  int result; // r0
  sead__SafeString a2; // [sp+1Ch] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  FIELD_U32(a1, 6300) = v2;
  v3 = (int *)(a1 + 6300);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 1, 1, 1, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 1, 1, 1, 0);
  j_ModelWrapper_setupModel((int)v6, (int)v2, 0, 0);
  FIELD_U32(a1, 6304) = v5;
  animations = (unsigned int)v5[1].texAnims.animations;
  v8 = (int *)FIELD_U32(v5, 0x8).animations;
  v9 = FIELD_U32(a1, 6300);
  if ( FIELD_U32(v5, 0x8).count > animations )
    v8 += animations;
  v10 = *v8;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "jc_wait";
  SkeletalAnim_play(v10, v9, (int)&a2);
  v11 = *(_DWORD **)(a1 + 6304);
  v12 = v11[3];
  v13 = v11[2];
  v14 = v11[17];
  if ( v13 > v14 )
    v12 += 4 * v14;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), 1);
  v15 = *(_DWORD **)(a1 + 6304);
  v16 = (int *)v15[3];
  v17 = v15[2];
  v18 = v15[17];
  if ( v17 > v18 )
    v16 += v18;
  v19 = *v16;
  FIELD_U32(v19, 20) = 0;
  FIELD_U32(v19, 28) |= 2u;
  v20 = *(_DWORD **)(a1 + 6304);
  v21 = v20[3];
  v22 = v20[2];
  v23 = v20[17];
  if ( v22 > v23 )
    v21 += 4 * v23;
  *(_DWORD *)(*(_DWORD *)v21 + 24) = 1065353216;
  *(_DWORD *)(**(_DWORD **)(a1 + 6304) + 36) = 8;
  v24 = **(_DWORD **)(FIELD_U32(a1, 6304) + 20);
  FIELD_U32(a1, 6308) = v24;
  v25 = *v3;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown";
  TexAnim_play(v24, v25, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6308) + 4), 0);
  v26 = FIELD_U32(a1, 6308);
  FIELD_U32(v26, 20) = 0;
  FIELD_U32(v26, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6308) + 24) = 0;
  v27 = **(_DWORD ***)(FIELD_U32(a1, 6304) + 28);
  FIELD_U32(a1, 6312) = v27;
  v28 = *v3;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "jc_damage_s";
  ShuAnim_play(v27, v28, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6312) + 4), 1);
  v29 = FIELD_U32(a1, 6312);
  FIELD_U32(v29, 20) = 0;
  FIELD_U32(v29, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6312) + 24) = 0;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown";
  v30 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown_shadow";
  v31 = (void *)Resource_getModel2(v30, &a2, 0, 0, 0, 0, 0, 0, 0);
  v32 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v33 = ModelWrapper_ctor(v32, v31, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v33, (int)v30, 0, 0);
  FIELD_U32(a1, 7656) = v32;
  *((_DWORD *)FIELD_U32(v32, 0x0) + 9) = 8;
  sub_600D061C((int *)a1);
  result = **(_DWORD **)(a1 + 6320);
  FIELD_U32(result, 36) = 8;
  return result;
}
