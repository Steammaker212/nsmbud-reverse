/* lift_zen_kaitenita_ref_2
 * address: 0x6066F5A4   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_zen_kaitenita_ref_2(int a1, int r1_0)
{
  char *v3; // r2
  ModelWrapper **v4; // r10
  char v5; // r1
  const char *v6; // r1
  void *Resource; // r5
  void *Model2; // r7
  ModelWrapper *v9; // r6
  ModelWrapper *v10; // r0
  void *v11; // r6
  ModelWrapper *v12; // r7
  ModelWrapper *v13; // r0
  void *v14; // r6
  ModelWrapper *v15; // r7
  ModelWrapper *v16; // r0
  _DWORD v18[2]; // [sp+18h] [bp-38h] BYREF
  sead__SafeString identifier; // [sp+20h] [bp-30h] BYREF
  sead__SafeString a2; // [sp+28h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  v3 = *(char **)(r1_0 + 4);
  identifier.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = v3;
  identifier.cstr = *(char **)(r1_0 + 12);
  v4 = (ModelWrapper **)(a1 + 6104);
  v5 = FIELD_U8(a1, 22);
  v18[0] = &sead__SafeStringBase__vtable;
  if ( (v5 & 1) != 0 )
    v6 = "lift_zen_kaitenita_toride";
  else
    v6 = "lift_zen_kaitenita";
  v18[1] = v6;
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v18);
  Model2 = (void *)Resource_getModel2(Resource, &a2, 0, 0, 0, 0, 0, 0, 0);
  v9 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v10 = ModelWrapper_ctor(v9, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v10, Resource, 0, 0);
  *v4 = v9;
  v11 = (void *)Resource_getModel2(Resource, &a2, 0, 0, 0, 0, 0, 0, 0);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v13 = ModelWrapper_ctor(v12, v11, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v13, Resource, 0, 0);
  FIELD_U32(a1, 6108) = v12;
  v14 = (void *)Resource_getModel2(Resource, &identifier, 0, 0, 0, 0, 0, 0, 0);
  v15 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v16 = ModelWrapper_ctor(v15, v14, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v16, Resource, 0, 0);
  FIELD_U32(a1, 6112) = v15;
  return 6112;
}
