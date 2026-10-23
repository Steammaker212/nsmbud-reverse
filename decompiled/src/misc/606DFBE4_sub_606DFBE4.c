/* sub_606DFBE4
 * address: 0x606DFBE4   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606DFBE4(int a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int v7; // r0
  _DWORD *v8; // r5
  int v9; // r0
  sead__SafeString a2; // [sp+1Ch] [bp-34h] BYREF
  int (**v12)(); // [sp+24h] [bp-2Ch] BYREF
  const char *v13; // [sp+28h] [bp-28h]

  v12 = &sead__SafeStringBase__vtable;
  v13 = "switch_koopa";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v12);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "boss_koopa_ax";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  FIELD_U32(a1, 6104) = v4;
  a1 += 6104;
  v6 = (int)*FIELD_U32(v4, 0xC);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "switch_koopa";
  v7 = LoadResource(ResourceMgrRelated_instance, &v12);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "boss_koopa_ax_swing";
  SkeletalAnim_play(v6, v7, (const char **)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)a1 + 12) + 4), 0);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)a1 + 12) + 4));
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)a1 + 12) + 24) = 0;
  v8 = **(_DWORD ***)(*(_DWORD *)a1 + 28);
  FIELD_U32(a1, 4) = v8;
  v12 = &sead__SafeStringBase__vtable;
  v13 = "switch_koopa";
  v9 = LoadResource(ResourceMgrRelated_instance, &v12);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "boss_koopa_ax_switch";
  ShuAnim_play(v8, v9, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 4) + 4), 1);
  *(_DWORD *)(FIELD_U32(a1, 4) + 24) = 1065353216;
  return LightSource_update1((LightSource *)(a1 + 892), 57, (Vec3 *)(a1 - 5996), 0, 0, 0, 0, 0, 0);
}
