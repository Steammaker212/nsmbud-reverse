/* demo_fortress_ref
 * address: 0x60054DC0   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall demo_fortress_ref(int a1)
{
  int v2; // r0
  void *ResArchiveById; // r11
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int v7; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  v2 = dword_60CC6484;
  FIELD_F32(a1, 108) = FIELD_F32(dword_60CC6484, 116) + 16.0;
  FIELD_F32(a1, 112) = FIELD_F32(v2, 128) + 32.0;
  FIELD_U32(a1, 116) = 1164394496;
  qmemcpy((void *)(a1 + 144), "fff?fff?fff?", 12);
  FIELD_U32(a1, 80) = 1;
  FIELD_U32(a1, 160) = -536870912;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "kameck";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 0, 1, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v6, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v5;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "demo_fortress";
  sub_60421AE4(v5, &a2, 0);
  sub_60054F68(a1);
  v7 = FIELD_U32(a1, 6308);
  FIELD_U32(a1, 6444) = FIELD_U32(a1, 6304);
  FIELD_U32(a1, 6448) = v7;
  FIELD_U32(a1, 6452) = 2;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C808A0);
  return 1;
}
