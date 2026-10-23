/* sub_6032C7D8
 * address: 0x6032C7D8   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032C7D8(int a1)
{
  void *v2; // r0
  int v3; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int v7; // r4
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int *v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  _DWORD **v16; // r0
  _DWORD *v17; // r0
  int v18; // r0
  int *v19; // r0
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "killer";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  v3 = (int)v2;
  a2.cstr = "killer";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 2, 2, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 2, 2, 0, 0);
  ModelWrapper_setup(v6, v3, 0, 0);
  FIELD_U32(a1, 13064) = v5;
  v7 = a1 + 13064;
  v8 = (int)*FIELD_U32(v5, 0xC);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "search";
  SkeletalAnim_play(v8, v3, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v7 + 12) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v7 + 12) + 4));
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v7 + 12) + 24) = 1065353216;
  v9 = **(_DWORD **)(*(_DWORD *)v7 + 20);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "search";
  TexAnim_play(v9, v3, &a2);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v7 + 20) + 24) = 0;
  v10 = **(_DWORD **)(*(_DWORD *)v7 + 20);
  FIELD_U32(v10, 20) = 1065353216;
  FIELD_U32(v10, 28) |= 2u;
  v11 = *(int **)(*(_DWORD *)v7 + 20);
  if ( *(_DWORD *)(*(_DWORD *)v7 + 16) > 1u )
    ++v11;
  v12 = *v11;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "switching";
  TexAnim_play(v12, v3, &a2);
  v13 = *(_DWORD *)(*(_DWORD *)v7 + 20);
  if ( *(_DWORD *)(*(_DWORD *)v7 + 16) > 1u )
    v13 += 4;
  *(_DWORD *)(*(_DWORD *)v13 + 24) = 0;
  v14 = *(_DWORD *)(*(_DWORD *)v7 + 20);
  if ( *(_DWORD *)(*(_DWORD *)v7 + 16) > 1u )
    v14 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v14 + 4), 1);
  v15 = **(_DWORD ***)(*(_DWORD *)v7 + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "search";
  ShuAnim_play(v15, v3, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v7 + 28) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v7 + 28) + 24) = 0;
  v16 = *(_DWORD ***)(*(_DWORD *)v7 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v7 + 24) > 1u )
    ++v16;
  v17 = *v16;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "switching";
  ShuAnim_play(v17, v3, (int)&a2);
  v18 = *(_DWORD *)(*(_DWORD *)v7 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v7 + 24) > 1u )
    v18 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v18 + 4), 1);
  v19 = *(int **)(*(_DWORD *)v7 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v7 + 24) > 1u )
    ++v19;
  result = *v19;
  FIELD_U32(result, 24) = 0;
  return result;
}
