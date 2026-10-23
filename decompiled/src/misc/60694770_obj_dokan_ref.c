/* obj_dokan_ref
 * address: 0x60694770   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall obj_dokan_ref(_DWORD *a1)
{
  void *v2; // r5
  void *Model2; // r9
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  void *v6; // r5
  void *v7; // r6
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0
  ModelWrapper *result; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_dokan_cannon";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[226] = v2;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_dokan_cannon";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  a1[228] = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_dokan";
  v6 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[227] = v6;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_dokan_B";
  v7 = (void *)Resource_getModel2(v6, &a2, 1, 0, 0, 0, 0, 0, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v9 = ModelWrapper_ctor(v8, v7, 1, 0, 0, 0, 0);
  result = ModelWrapper_setup(v9, v6, 0, 0);
  a1[229] = v8;
  return result;
}
