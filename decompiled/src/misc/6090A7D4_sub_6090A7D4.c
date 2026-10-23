/* sub_6090A7D4
 * address: 0x6090A7D4   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090A7D4(int a1, float *a2)
{
  float v4; // s18
  float v5; // s20
  float v6; // s0
  float v7; // s18
  float v8; // s16
  float v9; // s0

  v4 = (float)(a2[41] + a2[42]) * 0.5;
  v5 = (float)(a2[39] + a2[40]) * 0.5;
  v6 = (*(float (__fastcall **)(float *))(*(_DWORD *)a2 + 16))(a2);
  FIELD_F32(a1, 52) = v4;
  FIELD_F32(a1, 56) = v5;
  FIELD_F32(a1, 60) = v6;
  v7 = (float)(a2[41] + a2[42]) * 0.5;
  v8 = (float)(a2[39] + a2[40]) * 0.5;
  v9 = (*(float (__fastcall **)(float *))(*(_DWORD *)a2 + 16))(a2);
  FIELD_F32(a1, 64) = v7;
  FIELD_F32(a1, 68) = v8;
  FIELD_F32(a1, 72) = v9 + -1.0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 80) = 1065353216;
  FIELD_U32(a1, 84) = 0;
  return 0;
}
