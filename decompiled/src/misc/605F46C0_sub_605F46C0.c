/* sub_605F46C0
 * address: 0x605F46C0   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605F46C0(int a1)
{
  int v2; // r1
  void *Resource; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  void *v7; // r1
  void *v8; // r8
  void *v9; // r6
  sead__SafeString a2; // [sp+18h] [bp-30h] BYREF
  _DWORD v12[10]; // [sp+20h] [bp-28h] BYREF

  v2 = FIELD_U32(a1, 6132);
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "star_coin";
  if ( v2 )
  {
    Resource = (void *)LoadResource(ResourceMgrRelated_instance, v12);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "star_coinB";
    Model2 = (void *)Resource_getModel2(Resource, &a2, 1, 0, 0, 0, 0, 0, 0);
    v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 0, 0, 0);
    v7 = Resource;
  }
  else
  {
    v8 = (void *)LoadResource(ResourceMgrRelated_instance, v12);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "star_coinA";
    v9 = (void *)Resource_getModel2(v8, &a2, 1, 0, 0, 0, 0, 0, 0);
    v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v6 = ModelWrapper_ctor(v5, v9, 1, 0, 0, 0, 0);
    v7 = v8;
  }
  ModelWrapper_setup(v6, v7, 0, 0);
  FIELD_U32(a1, 6104) = v5;
  return 6104;
}
