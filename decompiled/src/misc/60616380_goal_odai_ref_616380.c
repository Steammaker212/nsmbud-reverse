/* goal_odai_ref_616380
 * address: 0x60616380   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall goal_odai_ref_616380(_DWORD *a1)
{
  void *v2; // r9
  void *Model2; // r11
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int v7; // r0
  _DWORD *v8; // r5
  int v9; // r0
  int result; // r0
  sead__SafeString a2; // [sp+1Ch] [bp-34h] BYREF
  int (**v12)(); // [sp+24h] [bp-2Ch] BYREF
  const char *v13; // [sp+28h] [bp-28h]

  v12 = &sead__SafeStringBase__vtable;
  v13 = "goal_odai";
  a2.vtable = &sead__SafeStringBase__vtable;
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v12);
  a2.cstr = "goal_odai";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  a1[1526] = v4;
  a1 += 1526;
  v6 = (int)*FIELD_U32(v4, 0xC);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "goal_odai";
  v7 = LoadResource(ResourceMgrRelated_instance, &v12);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "goal_odai";
  SkeletalAnim_play(v6, v7, (const char **)&a2);
  *(_DWORD *)(**(_DWORD **)(*a1 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*a1 + 12) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*a1 + 12) + 4));
  v8 = **(_DWORD ***)(*a1 + 28);
  a1[1] = v8;
  v12 = &sead__SafeStringBase__vtable;
  v13 = "goal_odai";
  v9 = LoadResource(ResourceMgrRelated_instance, &v12);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "goal_odai";
  ShuAnim_play(v8, v9, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1] + 4), 1);
  result = a1[1];
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
