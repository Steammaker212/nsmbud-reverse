/* lift_guraIwa_ref
 * address: 0x602CA078   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall lift_guraIwa_ref(int a1)
{
  int *v1; // r4
  void *v2; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r1
  int v7; // r0
  void *v8; // r8
  void *v9; // r6
  ModelWrapper *v10; // r7
  ModelWrapper *v11; // r0
  ModelWrapper *result; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  v1 = (int *)(a1 + 6112);
  v2 = *(void **)(a1 + 6112);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_guraIwa";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  *(v1 - 2) = (int)v4;
  v6 = *v1;
  v7 = (int)*FIELD_U32(v4, 0x8).animations;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  SkeletalAnim_play(v7, v6, (int)&a2);
  v8 = (void *)*v1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_guraIwa_ziku";
  v9 = (void *)Resource_getModel2(v8, &a2, 0, 0, 0, 0, 0, 0, 0);
  v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v11 = ModelWrapper_ctor(v10, v9, 0, 0, 0, 0, 0);
  result = ModelWrapper_setup(v11, (int)v8, 0, 0);
  *(v1 - 1) = (int)v10;
  return result;
}
