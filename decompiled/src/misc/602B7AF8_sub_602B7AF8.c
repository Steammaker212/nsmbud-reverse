/* sub_602B7AF8
 * address: 0x602B7AF8   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B7AF8(int a1)
{
  unsigned int v1; // r1
  unsigned int v2; // r2
  unsigned int v3; // r3
  float *v4; // r6
  float *v5; // lr
  float *v6; // r5
  float v7; // s0
  float v8; // s2
  float v9; // s4
  float v10; // s12
  float v11; // s5
  float v12; // s8
  float v13; // s1
  float v14; // s9
  float v15; // s13
  int v16; // r4
  float v18[16]; // [sp+0h] [bp-40h] BYREF

  v1 = FIELD_U32(a1, 156);
  v2 = FIELD_U32(a1, 160);
  v3 = FIELD_U32(a1, 164);
  v4 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v5 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v6 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v7 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v8 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v9 = (float)(v1 & 0xFFFFFF) * 0.000000059605;
  v10 = v6[2] + (float)(v7 * v6[3]);
  v11 = v4[2] + (float)(v8 * v4[3]);
  v12 = *v6 + (float)(v7 * v6[1]);
  v13 = *v4 + (float)(v8 * v4[1]);
  v14 = *v5 + (float)(v9 * v5[1]);
  v15 = v5[2] + (float)(v9 * v5[3]);
  v18[0] = (float)(v11 * v10) + (float)(v14 * (float)(v13 * v12));
  v18[4] = v15 * v12;
  v18[8] = (float)(v14 * (float)(v11 * v12)) - (float)(v13 * v10);
  v18[1] = (float)(v14 * (float)(v13 * v10)) - (float)(v11 * v12);
  v18[5] = v15 * v10;
  v18[9] = (float)(v13 * v12) + (float)(v14 * (float)(v11 * v10));
  v18[2] = v15 * v13;
  v18[6] = -v14;
  v18[10] = v15 * v11;
  v18[3] = FIELD_F32(a1, 108);
  v18[7] = FIELD_F32(a1, 112);
  v18[11] = FIELD_F32(a1, 116);
  v16 = **(_DWORD **)(a1 + 6304);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v16 + 68))(v16, a1 + 6356);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v16 + 60))(v16, v18);
  (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 52))(v16);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 56))(v16);
}
