/* deka_sanbo_ref
 * address: 0x600F6C80   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall deka_sanbo_ref(int a1)
{
  const char *v2; // r0
  void *v3; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int (**v8)(); // [sp+18h] [bp-28h] BYREF
  const char *v9; // [sp+1Ch] [bp-24h]
  sead__SafeString a2; // [sp+20h] [bp-20h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = &byte_60B3BA34;
  if ( FIELD_U8(a1, 6304) )
  {
    v8 = &sead__SafeStringBase__vtable;
    v2 = "deka_sanbo_head";
  }
  else
  {
    v8 = &sead__SafeStringBase__vtable;
    v2 = "deka_sanbo_body";
  }
  v9 = v2;
  sead__SafeStringBase__operator_assign((int)&a2, (int)&v8);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "deka_sanbo";
  v3 = (void *)LoadResource(ResourceMgrRelated_instance, &v8);
  Model2 = (void *)Resource_getModel2(v3, &a2, 0, 0, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v6, (int)v3, 0, 0);
  FIELD_U32(a1, 6300) = v5;
  return 6300;
}
