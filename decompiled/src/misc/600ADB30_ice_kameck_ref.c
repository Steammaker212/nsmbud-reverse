/* ice_kameck_ref
 * address: 0x600ADB30   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall ice_kameck_ref(int a1)
{
  void *result; // r0
  int v3; // r4
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int v7; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  result = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v3 = (int)result;
  if ( result )
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "ice_kameck";
    Model2 = (void *)Resource_getModel2(result, &a2, 1, 0, 1, 0, 0, 0, 0);
    v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 1, 0, 0);
    ModelWrapper_setup(v6, v3, 0, 0);
    FIELD_U32(a1, 6104) = v5;
    v7 = (int)*FIELD_U32(v5, 0x1C);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "ice_kameck";
    return (void *)sub_60446088(v7, v3, (int)&a2);
  }
  return result;
}
