/* sub_60258A64
 * address: 0x60258A64   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60258A64(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int v7; // r0
  _DWORD *v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r5
  int v12; // r0
  sead__SafeString identifier; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "bilikyu";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &identifier, 1, 1, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 1, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 0x189C) = v4;
  v6 = (int)*FIELD_U32(v4, 0x8).animations;
  v7 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "body_wait";
  SkeletalAnim_play(v6, v7, (int)&identifier);
  v8 = **(_DWORD ***)(FIELD_U32(a1, 0x189C) + 28);
  v9 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "bilikyu";
  ShuAnim_play(v8, v9, (int)&identifier);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 0x189C) + 28) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 0x189C) + 28) + 24) = 1065353216;
  v10 = **(_DWORD **)(FIELD_U32(a1, 0x189C) + 28);
  FIELD_U32(v10, 20) = 0;
  FIELD_U32(v10, 28) |= 2u;
  v11 = **(_DWORD **)(FIELD_U32(a1, 0x189C) + 20);
  v12 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "touch";
  TexAnim_play(v11, v12, &identifier);
  return sub_60258C1C(a1);
}
