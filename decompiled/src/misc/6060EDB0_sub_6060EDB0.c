/* sub_6060EDB0
 * address: 0x6060EDB0   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060EDB0(int a1)
{
  int v2; // r2
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r2
  float *v6; // r5
  float *v7; // r4
  float *v8; // r3
  float v9; // s0
  float v10; // s2
  float v11; // s4
  float v12; // s12
  float v13; // s5
  float v14; // s8
  float v15; // s1
  float v16; // s9
  float v17; // s13
  int v18; // r5
  float v20[18]; // [sp+0h] [bp-48h] BYREF

  v2 = a1 + 156;
  v3 = FIELD_U32(a1, 156);
  v4 = FIELD_U32(v2, 4);
  v5 = FIELD_U32(v2, 8);
  v6 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v7 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v10 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v11 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v12 = v8[2] + (float)(v9 * v8[3]);
  v13 = v7[2] + (float)(v10 * v7[3]);
  v14 = *v8 + (float)(v9 * v8[1]);
  v15 = *v7 + (float)(v10 * v7[1]);
  v16 = *v6 + (float)(v11 * v6[1]);
  v17 = v6[2] + (float)(v11 * v6[3]);
  v20[0] = (float)(v13 * v12) + (float)(v16 * (float)(v15 * v14));
  v20[4] = v17 * v14;
  v20[8] = (float)(v16 * (float)(v13 * v14)) - (float)(v15 * v12);
  v20[1] = (float)(v16 * (float)(v15 * v12)) - (float)(v13 * v14);
  v20[5] = v17 * v12;
  v20[9] = (float)(v15 * v14) + (float)(v16 * (float)(v13 * v12));
  v20[2] = v17 * v15;
  v20[6] = -v16;
  v20[10] = v17 * v13;
  v20[3] = FIELD_F32(a1, 108);
  v20[7] = FIELD_F32(a1, 112);
  v20[11] = FIELD_F32(a1, 116);
  v18 = **(_DWORD **)(a1 + 644);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v18 + 60))(v18, v20);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v18 + 68))(v18, a1 + 144);
  (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 52))(v18);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 56))(v18);
}
