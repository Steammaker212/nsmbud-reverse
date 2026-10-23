/* sub_604302C8
 * address: 0x604302C8   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604302C8(int a1, int a2, int a3)
{
  float v4; // s0
  float v5; // s0
  float v6; // s0
  int result; // r0
  float v8; // [sp+4h] [bp-44h] BYREF
  float v9; // [sp+8h] [bp-40h]
  float v10; // [sp+Ch] [bp-3Ch]
  float v11[11]; // [sp+10h] [bp-38h] BYREF
  int v12; // [sp+3Ch] [bp-Ch]

  (*(void (__fastcall **)(int, int, float *, float *))(*(_DWORD *)a1 + 100))(a1, a2, v11, &v8);
  v4 = v8;
  *(float *)a3 = v11[0] * v8;
  FIELD_F32(a3, 16) = v4 * v11[4];
  FIELD_F32(a3, 32) = v11[8] * v4;
  v5 = v9;
  FIELD_F32(a3, 4) = v11[1] * v9;
  FIELD_F32(a3, 20) = v5 * v11[5];
  FIELD_F32(a3, 36) = v11[9] * v5;
  v6 = v10;
  FIELD_F32(a3, 8) = v11[2] * v10;
  FIELD_F32(a3, 24) = v6 * v11[6];
  FIELD_F32(a3, 40) = v11[10] * v6;
  FIELD_F32(a3, 12) = v11[3];
  FIELD_F32(a3, 28) = v11[7];
  result = v12;
  FIELD_U32(a3, 44) = v12;
  return result;
}
