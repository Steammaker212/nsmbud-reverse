/* sub_606A6930
 * address: 0x606A6930   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A6930(int a1, _DWORD *a2)
{
  int v4; // r1
  int *v5; // r6
  float v6; // s4
  float v7; // s0
  void *ResArchiveById; // r8
  void *Model2; // r9
  ModelWrapper *v10; // r7
  ModelWrapper *v11; // r0

  v4 = FIELD_U32(a1, 20) & 7;
  if ( v4 == 7 )
    LOWORD(v4) = 0;
  v5 = &dword_60CB9B74[13 * (__int16)v4];
  FIELD_F32(a1, 108) = *((float *)v5 + 2) + FIELD_F32(a1, 108);
  FIELD_F32(a1, 112) = *((float *)v5 + 3) + FIELD_F32(a1, 112);
  v6 = *((float *)v5 + 3);
  v7 = 64.0 - *((float *)v5 + 2);
  FIELD_F32(a1, 6804) = v7;
  FIELD_F32(a1, 6808) = -128.0 - v6;
  FIELD_F32(a1, 492) = v7;
  FIELD_F32(a1, 496) = -128.0 - v6;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)v5, 0, 0, 0, 0, 0, 0, 0);
  v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v11 = ModelWrapper_ctor(v10, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v11, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6788) = v10;
  *a2 = v5[4];
  a2[1] = v5[5];
  a2[2] = v5[6];
  a2[3] = v5[7];
  a2[4] = v5[8];
  a2[5] = v5[9];
  a2[6] = v5[10];
  a2[7] = v5[11];
  a2[8] = v5[12];
  FIELD_U32(a1, 6116) = FIELD_U8(a1, 23) & 3;
  return 1;
}
