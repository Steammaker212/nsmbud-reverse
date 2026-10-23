/* sub_60622AC0
 * address: 0x60622AC0   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60622AC0(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_turara_rakka_Big";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  v6 = (int)*FIELD_U32(v4, 0xC);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "gura_wait_Big";
  SkeletalAnim_play(v6, (int)ResArchiveById, (const char **)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4), 1);
  v7 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  FIELD_U32(v7, 20) = 1065353216;
  FIELD_U32(v7, 28) |= 2u;
  v8 = **(_DWORD **)(FIELD_U32(a1, 6300) + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_turara_rakka_Big";
  sub_60446088(v8, (int)ResArchiveById, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 24) = 1065353216;
  result = **(_DWORD **)(FIELD_U32(a1, 6300) + 28);
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
