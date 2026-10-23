/* sub_602CB558
 * address: 0x602CB558   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_602CB558(float *a1)
{
  int v1; // r1
  unsigned int v2; // r2
  int v3; // r12
  float v4; // s0
  float v5; // s2
  float v6; // s6
  float v7; // s4
  float v8; // s2
  float v9; // s0
  float v10; // s4
  float v11; // s4
  float v12; // s6
  float v13; // s8
  float v14; // s4
  float v15; // s6
  float v16; // s4
  float v17; // s6
  float v18; // s4
  float v19; // s6
  float v20; // s4
  float v21; // s6
  float v22; // s4
  float v23; // s6
  float v24; // s4
  float v25; // s6
  float v26; // s4
  float v27; // s6
  float v28; // s4
  float v29; // s6
  float v30; // s4
  float v31; // s6
  float v32; // s4
  float v33; // s6
  float v34; // s4
  float v35; // s6
  float v36; // s4
  float v37; // s6
  float v38; // s4
  float v39; // s6
  float v40; // s4
  float v41; // s6
  float v42; // s4
  float *v43; // r1
  float *result; // r0

  v1 = *(_DWORD *)a1;
  v2 = *(_DWORD *)(*(_DWORD *)a1 + 164);
  v3 = (v2 >> 20) & 0xFF0;
  v4 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v5 = *(float *)(*(_DWORD *)a1 + 144);
  v6 = v5 * (float)(*(float *)((char *)&sinLutTable[2] + v3) + (float)(v4 * *(float *)((char *)&sinLutTable[3] + v3)));
  v7 = (float)(*(float *)((char *)sinLutTable + v3) + (float)(*(float *)((char *)&sinLutTable[1] + v3) * v4)) * v5;
  a1[1533] = v6 * 72.0;
  a1[1534] = v7 * 72.0;
  FIELD_F32(v1, 304) = v6 * 72.0;
  v8 = v6 * 3.0;
  FIELD_F32(v1, 308) = v7 * 72.0;
  v9 = v7 * 3.0;
  a1[40] = 0.0;
  a1[41] = 0.0;
  v10 = (float)(v6 * 3.0) + 0.0;
  a1[116] = v10;
  v11 = (float)(v6 * 3.0) + v10;
  a1[117] = v9 + 0.0;
  v12 = v9 + (float)(v9 + 0.0);
  v13 = v8 + v11;
  a1[192] = v11;
  a1[193] = v12;
  a1[268] = v8 + v11;
  a1[269] = v9 + v12;
  v14 = v9 + (float)(v9 + v12);
  a1[344] = v8 + v13;
  v15 = v8 + (float)(v8 + v13);
  a1[345] = v14;
  v16 = v9 + v14;
  a1[420] = v15;
  v17 = v8 + v15;
  a1[421] = v16;
  v18 = v9 + v16;
  a1[496] = v17;
  v19 = v8 + v17;
  a1[497] = v18;
  v20 = v9 + v18;
  a1[572] = v19;
  v21 = v8 + v19;
  a1[573] = v20;
  v22 = v9 + v20;
  a1[648] = v21;
  v23 = v8 + v21;
  a1[649] = v22;
  v24 = v9 + v22;
  a1[724] = v23;
  v25 = v8 + v23;
  a1[725] = v24;
  v26 = v9 + v24;
  a1[800] = v25;
  v27 = v8 + v25;
  a1[801] = v26;
  v28 = v9 + v26;
  a1[876] = v27;
  v29 = v8 + v27;
  a1[877] = v28;
  v30 = v9 + v28;
  a1[952] = v29;
  v31 = v8 + v29;
  a1[953] = v30;
  v32 = v9 + v30;
  a1[1028] = v31;
  v33 = v8 + v31;
  a1[1029] = v32;
  v34 = v9 + v32;
  a1[1104] = v33;
  v35 = v8 + v33;
  a1[1105] = v34;
  v36 = v9 + v34;
  a1[1180] = v35;
  v37 = v8 + v35;
  a1[1181] = v36;
  v38 = v9 + v36;
  a1[1256] = v37;
  v39 = v8 + v37;
  a1[1257] = v38;
  v40 = v9 + v38;
  a1[1332] = v39;
  v41 = v8 + v39;
  a1[1333] = v40;
  v42 = v9 + v40;
  a1[1408] = v41;
  a1[1409] = v42;
  v43 = a1 + 1485;
  result = a1 + 1484;
  *result = v8 + v41;
  *v43 = v9 + v42;
  return result;
}
