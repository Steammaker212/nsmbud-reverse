/* sub_60642CE4
 * address: 0x60642CE4   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60642CE4(int a1, int a2)
{
  int v4; // r1
  int *v5; // r6
  unsigned int v6; // r0
  float v7; // s16
  void *ResArchiveById; // r8
  void *Model2; // r9
  ModelWrapper *v10; // r6
  ModelWrapper *v11; // r0
  float v12; // s0
  float v13; // s10
  float v14; // s2
  float v15; // s6
  float v16; // s4
  float v17; // s8
  int v18; // r1
  _DWORD v20[22]; // [sp+18h] [bp-58h] BYREF

  v4 = (FIELD_U32(a1, 24) >> 8) & 3;
  if ( v4 == 3 )
    v4 = 0;
  v5 = &dword_60CB5A30[3 * v4];
  v6 = *((unsigned __int8 *)v5 + 8);
  FIELD_U32(a1, 492) = 1119879168;
  FIELD_U32(a1, 496) = -1033895936;
  v7 = (float)v6;
  FIELD_U32(a1, 504) = 1127219200;
  FIELD_F32(a1, 572) = (float)v6 * 8.0;
  FIELD_U32(a1, 576) = -1030750208;
  FIELD_U32(a1, 580) = 0;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)v5, 0, 0, 0, 0, 0, 0, 0);
  v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v11 = ModelWrapper_ctor(v10, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v11, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6768) = v10;
  v12 = FIELD_F32(a1, 572);
  v13 = FIELD_F32(a1, 108);
  v14 = FIELD_F32(a1, 576);
  v15 = FIELD_F32(a1, 112);
  v16 = FIELD_F32(a1, 580);
  v17 = FIELD_F32(a1, 116);
  v20[0] = 1065353216;
  v20[1] = 0;
  v20[2] = 0;
  v20[4] = 0;
  v20[5] = 1065353216;
  v20[6] = 0;
  v20[8] = 0;
  v20[9] = 0;
  v20[10] = 1065353216;
  *(float *)&v20[3] = v13 + v12;
  *(float *)&v20[7] = v15 + v14;
  *(float *)&v20[11] = v17 + v16;
  (*(void (__fastcall **)(void *, _DWORD *))(*(_DWORD *)FIELD_U32(v10, 0x0) + 60))(FIELD_U32(v10, 0x0), v20);
  ModelWrapper_updateModel(v10);
  *(_DWORD *)a2 = 0;
  FIELD_U32(a2, 4) = 0;
  v18 = FIELD_U32(a1, 576);
  FIELD_U32(a2, 8) = FIELD_U32(a1, 572);
  FIELD_U32(a2, 12) = v18;
  FIELD_U32(a2, 16) = 0;
  FIELD_U32(a2, 20) = 0;
  FIELD_F32(a2, 24) = v7 * 16.0;
  FIELD_U32(a2, 28) = -1022361600;
  FIELD_U32(a2, 32) = 0;
  return 1;
}
