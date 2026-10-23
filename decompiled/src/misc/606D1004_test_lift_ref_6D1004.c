/* test_lift_ref_6D1004
 * address: 0x606D1004   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall test_lift_ref_6D1004(int a1)
{
  float v2; // s2
  float v3; // s2
  void *Resource; // r8
  void *Model2; // r6
  ModelWrapper *v6; // r7
  ModelWrapper *v7; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF
  _DWORD v10[8]; // [sp+20h] [bp-20h] BYREF

  v2 = (float)((FIELD_U32(a1, 24) >> 8) & 0x1F) * 0.5;
  FIELD_F32(a1, 144) = v2;
  v3 = v2 * 32.0;
  FIELD_U32(a1, 148) = 1048576000;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_F32(a1, 6608) = v3;
  FIELD_U32(a1, 6612) = 1090519040;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)(v3 * 0.5);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -4.0;
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "test_lift";
  a2.vtable = &sead__SafeStringBase__vtable;
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v10);
  a2.cstr = "test_lift";
  Model2 = (void *)Resource_getModel2(Resource, &a2, 1, 0, 0, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v7, Resource, 0, 0);
  FIELD_U32(a1, 6152) = v6;
  sub_606D114C(a1);
  return 1;
}
