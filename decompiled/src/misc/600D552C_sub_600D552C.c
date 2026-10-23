/* sub_600D552C
 * address: 0x600D552C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D552C(int *a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "boss_ef_attack";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[1525] = (int)v2;
  a1 += 1525;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopa_attack";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  a1[1] = (int)v4;
  v6 = (int)*FIELD_U32(v4, 0x18).animations;
  a1[2] = v6;
  v7 = *a1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopa_attack";
  sub_60446088(v6, v7, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[2] + 4), 1);
  v8 = a1[2];
  FIELD_U32(v8, 20) = 0;
  FIELD_U32(v8, 28) |= 2u;
  result = a1[2];
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
