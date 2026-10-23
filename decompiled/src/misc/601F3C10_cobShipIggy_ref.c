/* cobShipIggy_ref
 * address: 0x601F3C10   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cobShipIggy_ref(int a1)
{
  void *v2; // r5
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  sead__SafeString identifier; // [sp+18h] [bp-20h] BYREF

  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobShipIggy";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  FIELD_U32(a1, 308) = v2;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobShipIggy";
  Model = (void *)Resource_getModel(v2, &identifier, 6, 2, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  FIELD_U32(a1, 304) = v4;
  sub_601F0304(a1);
  return 1;
}
