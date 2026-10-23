/* sub_605BC1B4
 * address: 0x605BC1B4   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BC1B4(_DWORD *a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  _DWORD *v6; // r6
  int v7; // r5
  int v8; // r0
  int v9; // r0
  int v10; // r5
  _DWORD *v11; // r9
  int v12; // r0
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-30h] BYREF
  int (**v15)(); // [sp+20h] [bp-28h] BYREF
  const char *v16; // [sp+24h] [bp-24h]

  v15 = &sead__SafeStringBase__vtable;
  v16 = "block_tsuta";
  a2.vtable = &sead__SafeStringBase__vtable;
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v15);
  a2.cstr = "block_tsuta";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  a1[1694] = v4;
  v6 = a1 + 1694;
  v7 = (int)*FIELD_U32(v4, 0xC);
  if ( a1[1696] )
  {
    v15 = &sead__SafeStringBase__vtable;
    v16 = "block_tsuta";
    v8 = LoadResource(ResourceMgrRelated_instance, &v15);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "wait";
    SkeletalAnim_play(v7, v8, (const char **)&a2);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v6 + 12) + 4), 1);
  }
  else
  {
    v15 = &sead__SafeStringBase__vtable;
    v16 = "block_tsuta";
    v9 = LoadResource(ResourceMgrRelated_instance, &v15);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "up_anim";
    SkeletalAnim_play(v7, v9, (const char **)&a2);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v6 + 12) + 4), 0);
    *(_DWORD *)(*(_DWORD *)*v6 + 36) = 1;
  }
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v6 + 12) + 4));
  v10 = **(_DWORD **)(*v6 + 28);
  a1[1695] = v10;
  v11 = a1 + 1695;
  v15 = &sead__SafeStringBase__vtable;
  v16 = "block_tsuta";
  v12 = LoadResource(ResourceMgrRelated_instance, &v15);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "up_anim";
  sub_60446088(v10, v12, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(*v11 + 4), 1);
  result = *v11;
  *(_DWORD *)(*v11 + 24) = 1065353216;
  return result;
}
