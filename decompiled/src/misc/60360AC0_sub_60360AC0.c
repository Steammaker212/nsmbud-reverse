/* sub_60360AC0
 * address: 0x60360AC0   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60360AC0(int a1)
{
  unsigned int v2; // r1
  unsigned int v3; // r12
  unsigned int v4; // r0
  int v5; // s0
  int v6; // s14
  float *v7; // r1
  float v8; // s0
  float v9; // s2
  float *v10; // r0
  float v11; // s6
  float v12; // s8
  float v13; // s10
  float v14; // s12
  float *v15; // r1
  float v16; // s1
  float v17; // s3
  float v18; // s5
  float v19; // s7
  float v20; // s13
  float v21; // s15
  float v22; // s9
  float v23; // s11
  float v24; // r0
  float v25; // r1
  float v26; // s10
  float v27; // s6
  float v28; // s0
  float v29; // s4
  float v30; // s5
  float v31; // s1
  float v32; // s13
  float v33; // s9
  float v35[14]; // [sp+0h] [bp-38h] BYREF

  v2 = FIELD_U32(a1, 164);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 156);
  v5 = v2 & 0xFFFFFF;
  v6 = v4 & 0xFFFFFF;
  v7 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v8 = (float)(unsigned int)v5 * 0.000000059605;
  v9 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v10 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v11 = *v7;
  v12 = v7[1];
  v13 = v7[2];
  v14 = v7[3];
  v15 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v16 = *v15;
  v17 = v15[1];
  v18 = v15[2];
  v19 = v15[3];
  v20 = v10[2];
  v21 = v10[3];
  v22 = *v10;
  v23 = v10[1];
  v24 = FIELD_F32(a1, 116);
  v25 = FIELD_F32(a1, 108);
  v26 = v13 + (float)(v8 * v14);
  v27 = v11 + (float)(v8 * v12);
  v28 = FIELD_F32(a1, 112);
  v29 = (float)(unsigned int)v6 * 0.000000059605;
  v30 = v18 + (float)(v9 * v19);
  v31 = v16 + (float)(v9 * v17);
  v32 = v20 + (float)(v29 * v21);
  v33 = v22 + (float)(v29 * v23);
  v35[0] = v30 * v26;
  v35[4] = v30 * v27;
  v35[8] = -v31;
  v35[1] = (float)((float)(v33 * v31) * v26) - (float)(v32 * v27);
  v35[5] = (float)(v32 * v26) + (float)((float)(v33 * v31) * v27);
  v35[9] = v33 * v30;
  v35[2] = (float)(v31 * (float)(v32 * v26)) + (float)(v33 * v27);
  v35[6] = (float)(v31 * (float)(v32 * v27)) - (float)(v33 * v26);
  v35[10] = v32 * v30;
  v35[3] = v25;
  v35[7] = v28 + -80.0;
  v35[11] = v24;
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 1312) + 68))(**(_DWORD **)(a1 + 1312), a1 + 144);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 1312) + 60))(**(_DWORD **)(a1 + 1312), v35);
  return sub_60421880(FIELD_U32(a1, 1312));
}
