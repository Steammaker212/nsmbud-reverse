/* sub_6090A6D0
 * address: 0x6090A6D0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090A6D0(int a1, float *a2)
{
  float v4; // s18
  float v5; // s20
  float v6; // s22
  float v7; // s24
  float v8; // s0
  float v9; // s26
  float v10; // s28
  float v11; // s30
  float v12; // s17
  float v13; // s16
  float v14; // s0

  v4 = a2[39];
  v5 = a2[40];
  v6 = a2[41];
  v7 = a2[42];
  v8 = (*(float (__fastcall **)(float *))(*(_DWORD *)a2 + 16))(a2);
  v9 = a2[39];
  v10 = a2[40];
  v11 = a2[41];
  v12 = a2[42];
  v13 = v8;
  v14 = (*(float (__fastcall **)(float *, float))(*(_DWORD *)a2 + 16))(a2, v8);
  *(_DWORD *)a1 = off_60C5D04C;
  FIELD_U32(a1, 4) = 1065353216;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 1065353216;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 44) = 1065353216;
  FIELD_U32(a1, 48) = 0;
  FIELD_F32(a1, 52) = (float)(v6 + v7) * 0.5;
  FIELD_F32(a1, 56) = (float)(v4 + v5) * 0.5;
  FIELD_F32(a1, 60) = v13;
  FIELD_F32(a1, 64) = (float)(v11 + v12) * 0.5;
  FIELD_F32(a1, 68) = (float)(v9 + v10) * 0.5;
  FIELD_F32(a1, 72) = v14 + -1.0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 80) = 1065353216;
  FIELD_U32(a1, 84) = 0;
  *(_DWORD *)a1 = off_60C5D030;
  return a1;
}
