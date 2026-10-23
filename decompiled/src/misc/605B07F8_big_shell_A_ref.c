/* big_shell_A_ref
 * address: 0x605B07F8   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall big_shell_A_ref(int a1)
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
  void *v12; // r6
  ModelWrapper *v13; // r7
  ModelWrapper *v14; // r0
  void *v15; // r6
  ModelWrapper *v16; // r7
  ModelWrapper *v17; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "big_shell_A_temae";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6100) = v4;
  *((_DWORD *)FIELD_U32(v4, 0x0) + 8) = 1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "big_shell_A_temae";
  v6 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v8 = ModelWrapper_ctor(v7, v6, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v8, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6112) = v7;
  *((_DWORD *)FIELD_U32(v7, 0x0) + 8) = 1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "big_shell_A_oku";
  v9 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v11 = ModelWrapper_ctor(v10, v9, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v11, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6104) = v10;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "big_shell_A_futa";
  v12 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v13 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v14 = ModelWrapper_ctor(v13, v12, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v14, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6116) = v13;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "big_shell_A_filter";
  v15 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v16 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v17 = ModelWrapper_ctor(v16, v15, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v17, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6108) = v16;
  return 6108;
}
