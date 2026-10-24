/* FinalBowser__vf3EC
 * address: 0x60074610   size: 968   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026BE4
// 
// Overridden by: None
int __fastcall FinalBowser__vf3EC(int *a1)
{
  void *v2; // r10
  int v3; // r11
  void *heap; // r7
  void *Model; // r6
  ModelWrapper *v6; // r5
  ModelWrapper *v7; // r0
  unsigned int animations; // r2
  int *v9; // r0
  int v10; // r0
  int v11; // r0
  void *Model2; // r5
  ModelWrapper *v13; // r7
  ModelWrapper *v14; // r0
  int v15; // r0
  void *v16; // r5
  ModelWrapper *v17; // r7
  ModelWrapper *v18; // r0
  int *v19; // r0
  int v20; // r9
  void *v21; // r5
  ModelWrapper *v22; // r7
  ModelWrapper *v23; // r0
  _DWORD *v24; // r0
  int result; // r0
  int *v26; // [sp+24h] [bp-44h]
  sead__SafeString a2; // [sp+2Ch] [bp-3Ch] BYREF
  int (**v28)(); // [sp+34h] [bp-34h] BYREF
  const char *v29; // [sp+38h] [bp-30h]
  int v30; // [sp+3Ch] [bp-2Ch]
  int v31; // [sp+40h] [bp-28h] BYREF

  v28 = &sead__SafeStringBase__vtable;
  v29 = "koopa_model";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v28);
  v28 = &sead__SafeStringBase__vtable;
  v29 = "koopa";
  v3 = LoadResource(ResourceMgrRelated_instance, &v28);
  v28 = 0;
  v29 = 0;
  v30 = 0;
  sub_608DEB0C(&v28, 1, (int)&v31);
  if ( (int)v28 < (int)v29 )
  {
    *(_DWORD *)(v30 + 4 * (_DWORD)v28) = v3;
    v28 = (int (**)())((char *)v28 + 1);
  }
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopa";
  heap = (void *)a1[1777];
  Model = (void *)Resource_getModel(v2, &a2, 6, 2, 1, 1, 0, 0, 1, (int)heap);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x48u, heap, 4);
  v7 = sub_60421830(v6, Model, 2, 1, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v7, (int)v2, (int)&v28, (int)heap);
  a1[1778] = (int)v6;
  animations = (unsigned int)FIELD_U32(v6 + (1) * 48, 0x14);
  v9 = (int *)FIELD_U32(v6, 0xC);
  if ( FIELD_U32(v6, 0x8) > animations )
    v9 += animations;
  v10 = *v9;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lkp_wait";
  SkeletalAnim_play(v10, v3, (int)&a2);
  v11 = **(_DWORD **)(a1[1778] + 20);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lkp_wait";
  TexAnim_play(v11, v2, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopa_shell";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v13 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v14 = ModelWrapper_ctor(v13, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v14, (int)v2, (int)&v28, 0);
  a1[1779] = (int)v13;
  v15 = (int)*FIELD_U32(v13, 0xC);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lkp_shell_model_in";
  SkeletalAnim_play(v15, v3, (int)&a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopa_shadow";
  v16 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
  v17 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v18 = ModelWrapper_ctor(v17, v16, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v18, (int)v2, 0, 0);
  a1[1780] = (int)v17;
  *((_DWORD *)FIELD_U32(v17, 0x0) + 9) = 8;
  v19 = a1 + 1787;
  v20 = 0;
  v26 = v19;
  do
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "koopa_damage";
    v21 = (void *)Resource_getModel(v2, &a2, 6, 0, 0, 1, 0, 0, 1, 0);
    v22 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v23 = ModelWrapper_ctor(v22, v21, 0, 0, 1, 0, 0);
    ModelWrapper_setup(v23, (int)v2, 0, 0);
    v26[v20] = (int)v22;
    v24 = *FIELD_U32(v22, 0x1C);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "koopa_damage";
    result = ShuAnim_play(v24, (int)v2, (int)&a2);
    v20 += 7;
  }
  while ( v20 != 56 );
  return result;
}
