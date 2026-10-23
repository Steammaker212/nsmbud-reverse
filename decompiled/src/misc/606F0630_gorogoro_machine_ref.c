/* gorogoro_machine_ref
 * address: 0x606F0630   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall gorogoro_machine_ref(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  void *v6; // r5
  void *v7; // r6
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0
  int v10; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "gorogoro_machine_0";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6808) = v4;
  v6 = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "gorogoro_machine_1";
  v7 = (void *)Resource_getModel2(v6, &a2, 1, 0, 0, 0, 0, 0, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v9 = ModelWrapper_ctor(v8, v7, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v9, v6, 0, 0);
  FIELD_U32(a1, 6812) = v8;
  v10 = FIELD_U32(a1, 6808);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "gorogoro_machine_0";
  return sub_6040F4B8(v10, (int)&a2, 0, 1.0, 0.0);
}
