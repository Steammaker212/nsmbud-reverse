/* lift_kinoko_yoko_ref
 * address: 0x6066092C   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_kinoko_yoko_ref(int a1)
{
  void *v2; // r9
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  void *v6; // r9
  void *v7; // r6
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v12)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v13; // [sp+20h] [bp-28h]

  v12 = &sead__SafeStringBase__vtable;
  v13 = "lift_kinoko_yoko";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v12);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_kinoko_yoko_kuki_U";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  FIELD_U32(a1, 6104) = v4;
  v12 = &sead__SafeStringBase__vtable;
  v13 = "lift_kinoko_yoko";
  v6 = (void *)LoadResource(ResourceMgrRelated_instance, &v12);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_kinoko_yoko_kuki_T";
  v7 = (void *)Resource_getModel2(v6, &a2, 1, 0, 0, 0, 0, 0, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v9 = ModelWrapper_ctor(v8, v7, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v9, v6, 0, 0);
  FIELD_U32(a1, 6108) = v8;
  return 6108;
}
