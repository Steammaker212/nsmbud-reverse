/* throw_ball_ref
 * address: 0x6013C304   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall throw_ball_ref(int a1)
{
  void *ResArchiveById; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  void *v6; // r6
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  int v9; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ball";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ball";
  v6 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v8 = ModelWrapper_ctor(v7, v6, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v8, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6304) = v7;
  v9 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "throw_ball";
  SkeletalAnim_play(v9, (int)ResArchiveById, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4), 0);
  result = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  FIELD_U32(result, 24) = 0;
  return result;
}
