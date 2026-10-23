/* sub_607479DC
 * address: 0x607479DC   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607479DC(int a1, ActorBuildInfo *r1_0)
{
  void *v3; // r8
  void *Model2; // r5
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int v7; // r5
  int v8; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v11)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v12; // [sp+20h] [bp-28h]

  sub_60748A1C((StageActor *)a1, r1_0, 1);
  *(_DWORD *)a1 = &off_60C234CC;
  v11 = &sead__SafeStringBase__vtable;
  v12 = "YoshiChibi_TexBalloon";
  v3 = (void *)LoadResource(ResourceMgrRelated_instance, &v11);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "yoshichibi_balloon";
  Model2 = (void *)Resource_getModel2(v3, &a2, 1, 1, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v6, v3, 0, 0);
  FIELD_U32(a1, 728) = v5;
  FIELD_U32(a1, 772) = 0;
  FIELD_U32(a1, 768) = 0;
  FIELD_U32(a1, 764) = 0;
  FIELD_U32(a1, 760) = 0;
  FIELD_U32(a1, 756) = 0;
  FIELD_U32(a1, 752) = 0;
  FIELD_U32(a1, 748) = 0;
  FIELD_U32(a1, 744) = 0;
  FIELD_U32(a1, 776) = dword_60CBE6A4;
  FIELD_U32(a1, 788) = 0;
  FIELD_U32(a1, 784) = 0;
  FIELD_U32(a1, 780) = 0;
  FIELD_U32(a1, 792) = 0;
  FIELD_U32(a1, 796) = 1045220557;
  FIELD_U32(a1, 800) = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  FIELD_U32(a1, 804) = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  v7 = **(_DWORD **)(FIELD_U32(a1, 728) + 12);
  v11 = &sead__SafeStringBase__vtable;
  v12 = "YoshiChibi_TexBalloon";
  v8 = LoadResource(ResourceMgrRelated_instance, &v11);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "balloon";
  SkeletalAnim_play(v7, v8, (const char **)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(v7 + 4), 0);
  FIELD_U32(v7, 20) = 0;
  FIELD_U32(v7, 28) |= 2u;
  FIELD_U32(v7, 24) = 0;
  *(_DWORD *)(**(_DWORD **)(a1 + 728) + 32) = 0;
  *(_DWORD *)(**(_DWORD **)(a1 + 728) + 36) = 0;
  return a1;
}
