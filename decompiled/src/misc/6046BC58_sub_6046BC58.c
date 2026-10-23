/* sub_6046BC58
 * address: 0x6046BC58   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046BC58(_DWORD *a1)
{
  void *Resource; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  float v6; // s0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF
  _DWORD v9[8]; // [sp+20h] [bp-20h] BYREF

  a1[1542] = 5;
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "I_propeller";
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v9);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "I_propeller_model";
  Model2 = (void *)Resource_getModel2(Resource, &a2, 1, 1, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v5, Resource, 0, 0);
  a1[1540] = v4;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 208))(a1);
  v6 = sub_6046135C((int)a1);
  sub_6046BD70(a1, v6);
  P_body_ref(a1);
  return 1;
}
