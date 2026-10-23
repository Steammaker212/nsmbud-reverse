/* sub_601C8120
 * address: 0x601C8120   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C8120(int a1)
{
  int v2; // r6
  unsigned int v3; // r0
  float *v4; // r1
  float v5; // s8
  float v6; // s2
  float v7; // s0
  float v8; // s14
  float v9; // s3
  float v10; // s1
  float v11; // s5
  float v12; // s10
  float v13; // s12
  float v14; // s0
  float v15; // s2
  float v16; // s8
  float v17; // s4
  float v18; // s7
  float v19; // s0
  float v20; // s18
  float v21; // s16
  float v22; // s20
  float *v23; // r0

  FIELD_U8(dword_60CC6D78, 512) = FIELD_U32(a1, 1208) == 9;
  FIELD_U32(a1, 1120) &= ~0x10000000u;
  v2 = sub_6019172C(dword_60C8996C);
  sub_60217DD8(v2, a1 + 80);
  v3 = FIELD_U32(v2, 180);
  v4 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v5 = (float)(-0.00030118 * 0.0) + 1.0;
  v6 = (float)(0.024541 * 0.0) + 0.0;
  v7 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v8 = *v4 + (float)(v7 * v4[1]);
  v9 = v4[2] + (float)(v7 * v4[3]);
  v10 = v6 * v9;
  v11 = (float)((float)(v5 * v5) * v8) + (float)(v6 * v6);
  v12 = (float)((float)(v6 * v5) * v8) - (float)(v6 * v5);
  v13 = (float)(v5 * (float)(v6 * v8)) - (float)(v6 * v5);
  v14 = (float)(v5 * v5) + (float)(v6 * (float)(v6 * v8));
  v15 = FIELD_F32(a1, 80);
  v16 = v5 * v9;
  v17 = FIELD_F32(a1, 88);
  v18 = (float)(v10 * 0.0) + (float)(v14 * 0.0);
  v19 = FIELD_F32(a1, 84);
  FIELD_F32(a1, 968) = v15;
  FIELD_F32(a1, 972) = v19;
  FIELD_F32(a1, 976) = v17;
  FIELD_F32(a1, 980) = v15
                       + (float)((float)((float)((float)(v13 * 0.0) + (float)(v16 * 0.0)) + (float)(v11 * 3000.0)) + 0.0);
  FIELD_F32(a1, 984) = v19 + (float)((float)(v18 + (float)(v12 * 3000.0)) + 0.0);
  FIELD_F32(a1, 988) = v17
                       + (float)((float)((float)((float)(v10 * 0.0) - (float)(v8 * 0.0)) + (float)(v16 * 3000.0)) + 0.0);
  if ( FIELD_U32(a1, 1032) == 7 )
  {
    v20 = 800.0;
    v21 = 30.0;
  }
  else
  {
    FIELD_F32(a1, 980) = v15;
    v21 = 0.033333;
    v20 = v19 + 500.0;
    FIELD_F32(a1, 988) = v17 + 1.0;
    FIELD_F32(a1, 984) = v19 + 1000.0;
  }
  v22 = *((float *)sub_601C6BF0(a1) + 1);
  v23 = (float *)sub_601C6BF0(a1);
  sub_601C4A1C(a1, (float *)(a1 + 80), (float *)(a1 + 980), 0, v21, v20, v22, v23[1], 1);
  FIELD_U32(a1, 1112) = 15;
  (*(void (__fastcall **)(int, int, int, float))(*(_DWORD *)a1 + 336))(a1, 15, -1, 0.0);
  FIELD_U32(a1, 1000) = FIELD_U32(a1, 180);
  FIELD_U32(a1, 1012) = 0;
  return sub_60816B60(dword_60CC6B68);
}
