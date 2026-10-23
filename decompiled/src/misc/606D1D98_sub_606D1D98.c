/* sub_606D1D98
 * address: 0x606D1D98   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D1D98(int a1)
{
  unsigned int v2; // r0
  float *v3; // r1
  _DWORD *v4; // r7
  unsigned int v5; // r5
  float v6; // s0
  unsigned int v7; // r10
  float *v8; // r6
  float v9; // s16
  float v10; // s18
  float v11; // s0
  float v12; // s2
  float v13; // r1
  float v14; // r2
  int result; // r0
  float v16[18]; // [sp+0h] [bp-48h] BYREF

  v2 = FIELD_U32(a1, 164);
  v3 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v4 = (_DWORD *)(a1 + 10812);
  v5 = a1 + 6168;
  v6 = (float)(v2 & 0xFFFFFF);
  v7 = FIELD_U32(a1, 6164);
  v8 = (float *)&dword_60CBB4D4;
  v9 = *v3 + (float)((float)(v6 * v3[1]) * 0.000000059605);
  v10 = v3[2] + (float)((float)(v6 * v3[3]) * 0.000000059605);
  do
  {
    v11 = *v8;
    v12 = v8[1];
    v13 = FIELD_F32(a1, 112);
    v14 = FIELD_F32(a1, 116);
    v16[0] = FIELD_F32(a1, 108);
    v16[2] = v14;
    v16[0] = (float)((float)(v10 * v11) - (float)(v9 * v12)) + v16[0];
    v16[1] = (float)((float)(v10 * v12) + (float)(v9 * v11)) + v13;
    sub_606361F8(v5, v16, (_DWORD *)(a1 + 156));
    result = FIELD_U32(a1, 164);
    v5 += 1100;
    v8 += 3;
    *v4 = result;
    v4 += 164;
  }
  while ( v5 < v7 );
  return result;
}
