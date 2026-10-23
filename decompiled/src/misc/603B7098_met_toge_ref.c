/* met_toge_ref
 * address: 0x603B7098   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall met_toge_ref(int a1)
{
  void *ResArchiveById; // r9
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r6
  int v7; // r0
  void *v8; // r6
  ModelWrapper *v9; // r7
  ModelWrapper *v10; // r0
  void *v11; // r6
  ModelWrapper *v12; // r7
  ModelWrapper *v13; // r0
  int v14; // r5
  int v15; // r0
  int result; // r0
  int v17; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "met_toge";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  v6 = (int)*FIELD_U32(v4, 0x8).animations;
  v7 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "walk";
  SkeletalAnim_play(v6, v7, (int)&a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "met_toge_shell";
  v8 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
  v9 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v10 = ModelWrapper_ctor(v9, v8, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v10, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6304) = v9;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "met_toge_eye_light";
  v11 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v13 = ModelWrapper_ctor(v12, v11, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v13, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6308) = v12;
  v14 = (int)*FIELD_U32(v12, 0x8).animations;
  v15 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "met_toge_eye_light";
  SkeletalAnim_play(v14, v15, (int)&a2);
  *(_DWORD *)(**(_DWORD **)(a1 + 6308) + 36) = 19;
  result = FIELD_U8(a1, 22648);
  if ( FIELD_U8(a1, 22648) )
  {
    v17 = FIELD_U32(a1, 6308);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "met_toge_eye_light";
    return sub_6040F4B8(v17, &a2, 1);
  }
  return result;
}
