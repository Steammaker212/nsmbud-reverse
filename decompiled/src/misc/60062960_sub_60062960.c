/* sub_60062960
 * address: 0x60062960   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60062960(int a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  unsigned int animations; // r2
  int *v7; // r0
  int v8; // r1
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r0
  _DWORD *v14; // r0
  int *v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r0
  int v18; // r0
  _DWORD *v19; // r0
  int v20; // r1
  unsigned int v21; // r2
  unsigned int v22; // r0
  int v23; // r0
  int (__fastcall *v24)(int, sead__SafeString *); // r2
  int v25; // r0
  _DWORD *v26; // r0
  int v27; // r1
  int v28; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  FIELD_U32(a1, 6300) = v2;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 1, 1, 1, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 1, 1, 1, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  FIELD_U32(a1, 6304) = v4;
  animations = (unsigned int)v4[1].texAnims.animations;
  v7 = (int *)FIELD_U32(v4, 0xC);
  v8 = FIELD_U32(a1, 6300);
  if ( FIELD_U32(v4, 0x8) > animations )
    v7 += animations;
  v9 = *v7;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "jc_wait";
  SkeletalAnim_play(v9, v8, (int)&a2);
  v10 = *(_DWORD **)(a1 + 6304);
  v11 = v10[3];
  v12 = v10[2];
  v13 = v10[17];
  if ( v12 > v13 )
    v11 += 4 * v13;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
  v14 = *(_DWORD **)(a1 + 6304);
  v15 = (int *)v14[3];
  v16 = v14[2];
  v17 = v14[17];
  if ( v16 > v17 )
    v15 += v17;
  v18 = *v15;
  FIELD_U32(v18, 20) = 0;
  FIELD_U32(v18, 28) |= 2u;
  v19 = *(_DWORD **)(a1 + 6304);
  v20 = v19[3];
  v21 = v19[2];
  v22 = v19[17];
  if ( v21 > v22 )
    v20 += 4 * v22;
  *(_DWORD *)(*(_DWORD *)v20 + 24) = 1065353216;
  *(_DWORD *)(**(_DWORD **)(a1 + 6304) + 36) = 8;
  v23 = **(_DWORD **)(a1 + 6304);
  v24 = *(int (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)v23 + 124);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "cover";
  v25 = v24(v23, &a2);
  (*(void (__fastcall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(a1 + 6304) + 136))(**(_DWORD **)(a1 + 6304), v25, 0);
  v26 = **(_DWORD ***)(FIELD_U32(a1, 6304) + 28);
  FIELD_U32(a1, 6312) = v26;
  v27 = FIELD_U32(a1, 6300);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "jc_damage_s";
  ShuAnim_play(v26, v27, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6312) + 4), 1);
  v28 = FIELD_U32(a1, 6312);
  FIELD_U32(v28, 20) = 0;
  FIELD_U32(v28, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6312) + 24) = 0;
  sub_600D061C(a1);
  result = **(_DWORD **)(a1 + 6320);
  FIELD_U32(result, 36) = 8;
  return result;
}
