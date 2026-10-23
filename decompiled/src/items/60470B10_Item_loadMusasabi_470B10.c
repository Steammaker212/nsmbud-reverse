/* Item_loadMusasabi_470B10
 * address: 0x60470B10   size: 656   group: items
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Item_loadMusasabi_470B10(int a1)
{
  void *v2; // r9
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r6
  int v7; // r5
  int v8; // r0
  int *v9; // r2
  float *v10; // r1
  float *v11; // r0
  int v12; // r0
  float v13; // s4
  float v14; // s2
  sead__SafeString a2; // [sp+18h] [bp-30h] BYREF
  int (**v17)(); // [sp+20h] [bp-28h] BYREF
  const char *v18; // [sp+24h] [bp-24h]

  v17 = &sead__SafeStringBase__vtable;
  v18 = "I_musasabi";
  a2.vtable = &sead__SafeStringBase__vtable;
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v17);
  a2.cstr = "I_musasabi";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  FIELD_U32(a1, 6104) = v4;
  v6 = a1 + 6104;
  v7 = (int)*FIELD_U32(v4, 0x8).animations;
  if ( FIELD_U32(a1, 20) )
  {
    v17 = &sead__SafeStringBase__vtable;
    v18 = "I_musasabi";
    v8 = LoadResource(ResourceMgrRelated_instance, &v17);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "wait";
    SkeletalAnim_play(v7, v8, (const char **)&a2);
    *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v6 + 12) + 24) = 1065353216;
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v6 + 12) + 4), 1);
    sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v6 + 12) + 4));
    v9 = &dword_60C9D8C4;
    v10 = (float *)&unk_60C9D8C0;
    v11 = (float *)&unk_60C9D8BC;
  }
  else
  {
    v17 = &sead__SafeStringBase__vtable;
    v18 = "I_musasabi";
    v12 = LoadResource(ResourceMgrRelated_instance, &v17);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "wait";
    SkeletalAnim_play(v7, v12, (const char **)&a2);
    *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v6 + 12) + 24) = -1082130432;
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v6 + 12) + 4), 1);
    sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v6 + 12) + 4));
    v11 = (float *)&unk_60C9D8B0;
    v9 = &dword_60C9D8B8;
    v10 = (float *)&unk_60C9D8B4;
  }
  v13 = *v11;
  v14 = *v10;
  FIELD_U32(a1, 116) = *v9;
  FIELD_F32(a1, 108) = v13 + 0.0;
  FIELD_U32(a1, 6108) = 0;
  FIELD_F32(a1, 112) = v14 + 0.0;
  FIELD_U32(a1, 132) = 1056964608;
  FIELD_U32(a1, 136) = -1056964608;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  sub_60470DD4(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9D888);
  return 1;
}
