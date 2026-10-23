/* fly_sea_ref_2
 * address: 0x60570C64   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fly_sea_ref_2(int a1, int r1_0)
{
  void *v4; // r6
  void *Model2; // r7
  ModelWrapper *v6; // r5
  ModelWrapper *v7; // r0
  int v8; // r7
  int v9; // r6
  int v10; // r1
  char *v11; // r0
  int v12; // r5
  int *v13; // r10
  int v14; // r0
  int v15; // r0
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-30h] BYREF
  int (**v18)(); // [sp+20h] [bp-28h] BYREF
  const char *v19; // [sp+24h] [bp-24h]

  v18 = &sead__SafeStringBase__vtable;
  v19 = "block_pata";
  a2.vtable = &sead__SafeStringBase__vtable;
  v4 = (void *)LoadResource(ResourceMgrRelated_instance, &v18);
  a2.cstr = "block_pata";
  Model2 = (void *)Resource_getModel2(v4, &a2, 1, 1, 0, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v7, v4, 0, 0);
  FIELD_U32(a1, 7388) = v6;
  v8 = a1 + 7388;
  v9 = (int)*FIELD_U32(v6, 0x8).animations;
  v18 = &sead__SafeStringBase__vtable;
  v19 = "block_pata";
  v10 = LoadResource(ResourceMgrRelated_instance, &v18);
  a2.vtable = &sead__SafeStringBase__vtable;
  if ( r1_0 )
    v11 = "fly_sea";
  else
    v11 = "fly_normal";
  a2.cstr = v11;
  SkeletalAnim_play(v9, v10, (const char **)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v8 + 12) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v8 + 12) + 4));
  v12 = **(_DWORD **)(*(_DWORD *)v8 + 20);
  FIELD_U32(a1, 7392) = v12;
  v13 = (int *)(a1 + 7392);
  v18 = &sead__SafeStringBase__vtable;
  v19 = "block_pata";
  v14 = LoadResource(ResourceMgrRelated_instance, &v18);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "block_pata";
  TexAnim_play(v12, v14, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(*v13 + 4), 0);
  v15 = *v13;
  FIELD_U32(v15, 20) = 0;
  FIELD_U32(v15, 28) |= 2u;
  result = *v13;
  *(_DWORD *)(*v13 + 24) = 0;
  return result;
}
