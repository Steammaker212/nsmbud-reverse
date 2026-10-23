/* sub_6033699C
 * address: 0x6033699C   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6033699C(int a1)
{
  void *ResArchiveById; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // s2
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koton";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  sub_60336E10(a1);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6300) + 52))(**(_DWORD **)(a1 + 6300));
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6300) + 56))(**(_DWORD **)(a1 + 6300));
  FIELD_F32(a1, 116) = (float)((float)sub_6000A650((_BYTE *)EnemyCounterMaybe_instance) * 16.0) + -260.0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 620) = a1 + 6324;
  FIELD_U32(a1, 6340) = 0;
  FIELD_U32(a1, 6388) = 0;
  FIELD_U32(a1, 624) = 0;
  FIELD_F64(a1, 6940) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6936))(a1 + 6936);
  FIELD_U32(a1, 6948) = v6;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 632))(a1);
  FIELD_U8(a1, 6312) = FIELD_U16(a1, 22) & 1;
  FIELD_U32(a1, 96) = 1098907648;
  FIELD_U32(a1, 6308) = 1;
  FIELD_U32(a1, 6400) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6404) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6408) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 6304) = 10 * (FIELD_U32(a1, 24) & 0xF) + 100;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U32(a1, 100) = -1108109481;
  FIELD_U32(a1, 6320) = 0x40000000;
  FIELD_U32(a1, 136) = -1061695783;
  return 1;
}
