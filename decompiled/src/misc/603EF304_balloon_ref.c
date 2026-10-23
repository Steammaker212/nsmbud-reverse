/* balloon_ref
 * address: 0x603EF304   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall balloon_ref(int a1)
{
  void *v2; // r0
  int v3; // r8
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  sead__SafeString a2; // [sp+18h] [bp-20h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "balloon";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  v3 = (int)v2;
  a2.cstr = "balloon";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v6, v3, 0, 0);
  FIELD_U32(a1, 92) = v5;
  FIELD_U16(a1, 88) = 120;
  FIELD_U32(a1, 80) = -1103101952;
  FIELD_U32(a1, 48) = -1065353216;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 76) = 0;
  return sub_603EF410(a1);
}
