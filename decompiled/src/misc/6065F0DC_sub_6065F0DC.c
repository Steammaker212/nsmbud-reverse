/* sub_6065F0DC
 * address: 0x6065F0DC   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6065F0DC(Actor *a1)
{
  char *v2; // r1
  void *v3; // r5
  int *p_settings1; // r8
  void *Model2; // r6
  ModelWrapper *v6; // r7
  ModelWrapper *v7; // r0
  void *v8; // r5
  void *v9; // r6
  ModelWrapper *v10; // r7
  ModelWrapper *v11; // r0
  ModelWrapper *result; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  if ( Actor__getProfileId(a1) == 221 )
    v2 = "R_lift_kinoko_shiso";
  else
    v2 = "lift_kinoko_shiso";
  a2.cstr = v2;
  v3 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[76].settings1 = (int)v3;
  p_settings1 = &a1[76].settings1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_kinoko_shiso_kuki_U";
  Model2 = (void *)Resource_getModel2(v3, &a2, 0, 0, 0, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v7, v3, 0, 0);
  p_settings1[1] = (int)v6;
  v8 = (void *)*p_settings1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_kinoko_shiso_T";
  v9 = (void *)Resource_getModel2(v8, &a2, 0, 0, 0, 0, 0, 0, 0);
  v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v11 = ModelWrapper_ctor(v10, v9, 0, 0, 0, 0, 0);
  result = ModelWrapper_setup(v11, v8, 0, 0);
  p_settings1[2] = (int)v10;
  return result;
}
