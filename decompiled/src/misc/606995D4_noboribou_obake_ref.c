/* noboribou_obake_ref
 * address: 0x606995D4   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall noboribou_obake_ref(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  void *v6; // r6
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  void *v9; // r6
  ModelWrapper *v10; // r7
  ModelWrapper *v11; // r0
  ModelWrapper *result; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "noboribou_obake_naka";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 644) = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "noboribou_obake_shita";
  v6 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v8 = ModelWrapper_ctor(v7, v6, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v8, ResArchiveById, 0, 0);
  FIELD_U32(a1, 648) = v7;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "noboribou_obake_ue";
  v9 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v11 = ModelWrapper_ctor(v10, v9, 0, 0, 0, 0, 0);
  result = ModelWrapper_setup(v11, ResArchiveById, 0, 0);
  FIELD_U32(a1, 652) = v10;
  return result;
}
