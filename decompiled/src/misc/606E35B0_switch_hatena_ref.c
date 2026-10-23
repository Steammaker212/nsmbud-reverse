/* switch_hatena_ref
 * address: 0x606E35B0   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall switch_hatena_ref(int a1)
{
  void *Resource; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  sead__SafeString a2; // [sp+18h] [bp-30h] BYREF
  _DWORD v8[10]; // [sp+20h] [bp-28h] BYREF

  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "switch";
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v8);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "switch_hatena";
  Model2 = (void *)Resource_getModel2(Resource, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, Resource, 0, 0);
  FIELD_U32(a1, 6104) = v4;
  return down_switch_hatena_ref(a1);
}
