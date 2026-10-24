/* sub_6012812C
 * address: 0x6012812C   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012812C(int a1)
{
  void *ResArchiveById; // r9
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  unsigned int animations; // r2
  int *v7; // r0
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  void *v11; // r6
  ModelWrapper *v12; // r7
  ModelWrapper *v13; // r0
  unsigned int v14; // r2
  int *v15; // r0
  int v16; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wendy";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 1, 2, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 1, 2, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 7096) = v4;
  animations = (unsigned int)FIELD_U32(v4 + (1) * 48, 0x14);
  v7 = (int *)FIELD_U32(v4, 0xC);
  if ( FIELD_U32(v4, 0x8) > animations )
    v7 += animations;
  v8 = *v7;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  SkeletalAnim_play(v8, (int)ResArchiveById, (int)&a2);
  v9 = **(_DWORD ***)(FIELD_U32(a1, 7096) + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "damage_s";
  ShuAnim_play(v9, (int)ResArchiveById, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7096) + 28) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 7096) + 28) + 24) = 0;
  v10 = **(_DWORD **)(FIELD_U32(a1, 7096) + 28);
  FIELD_U32(v10, 20) = 0;
  FIELD_U32(v10, 28) |= 2u;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wendy_shell";
  v11 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 1, 2, 0, 0, 0, 0);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v13 = sub_60421830(v12, v11, 2, 1, 2, 0, 0);
  j_ModelWrapper_setupModel((int)v13, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 7100) = v12;
  v14 = (unsigned int)FIELD_U32(v12 + (1) * 48, 0x14);
  v15 = (int *)FIELD_U32(v12, 0xC);
  if ( FIELD_U32(v12, 0x8) > v14 )
    v15 += v14;
  v16 = *v15;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shell_model_in";
  return SkeletalAnim_play(v16, (int)ResArchiveById, (int)&a2);
}
