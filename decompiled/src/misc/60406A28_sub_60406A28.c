/* sub_60406A28
 * address: 0x60406A28   size: 2104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60406A28(_DWORD *a1)
{
  int v2; // r1
  _DWORD *v3; // r2
  _DWORD *v4; // r5
  int v5; // r0
  int v6; // r0
  unsigned int v7; // r1
  _DWORD *v8; // r1
  _DWORD *v9; // r5
  int v10; // r0
  int v11; // r0
  unsigned int v12; // r1
  _DWORD *v13; // r1
  _DWORD *v14; // r5
  int v15; // r0
  _DWORD *v16; // r8
  int v17; // r0
  unsigned int v18; // r1
  _DWORD *v19; // r1
  int v20; // r0
  unsigned int v21; // r1
  _DWORD *v22; // r1
  _DWORD *v23; // r5
  int v24; // r0
  int v25; // r0
  unsigned int v26; // r1
  _DWORD *v27; // r1
  _DWORD *v28; // r5
  int v29; // r0
  int v30; // r0
  unsigned int v31; // r1
  _DWORD *v32; // r1
  _DWORD *v33; // r5
  int v34; // r0
  int v35; // r1
  unsigned int v36; // r2
  _DWORD *v37; // r2
  int v38; // r1
  unsigned int v39; // r2
  _DWORD *v40; // r2
  _DWORD *v41; // r5
  int v42; // r0
  int v43; // r1
  unsigned int v44; // r2
  _DWORD *v45; // r2
  _DWORD *v46; // r5
  int v47; // r0

  v2 = 0;
  do
  {
    v3 = &a1[v2];
    v2 += 8;
    v3[5] = 0;
    v3[6] = 0;
    v3[7] = 0;
    v3[8] = 0;
    v3[5] &= ~2u;
    v3[9] = 0;
    v3[10] = 0;
    v3[11] = 0;
    v3[12] = 0;
    v3[9] &= ~2u;
  }
  while ( v2 != 128 );
  a1[5] |= 2u;
  a1[9] |= 2u;
  a1[13] |= 2u;
  a1[17] |= 2u;
  a1[21] |= 2u;
  a1[25] |= 2u;
  a1[29] |= 2u;
  a1[33] |= 2u;
  a1[6] = 2;
  v4 = (_DWORD *)operator_new(8u);
  *v4 = 0;
  v4[1] = 0;
  a1[8] = v4;
  v5 = sub_608DE334(0x10u, 0, 4);
  if ( v5 )
  {
    *v4 = 2;
    v4[1] = v5;
  }
  *(_DWORD *)(*(_DWORD *)(a1[8] + 4) + 4) = -1;
  **(_DWORD **)(a1[8] + 4) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[8] + 4) + 12) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[8] + 4) + 8) = -1;
  a1[133] = 0;
  a1[135] = 0;
  *(_DWORD *)(*(_DWORD *)(a1[8] + 4) + 4) = 0;
  **(_DWORD **)(a1[8] + 4) = 0;
  v6 = a1[135] + 1;
  a1[135] = v6;
  v7 = a1[133];
  if ( v7 >= 0x20 )
    v7 = 0;
  v8 = &a1[4 * v7];
  *(_DWORD *)(*(_DWORD *)(v8[8] + 4) + 8 * v6 + 4) = 0;
  *(_DWORD *)(*(_DWORD *)(v8[8] + 4) + 8 * v6) = 1;
  ++a1[135];
  a1[10] = 2;
  v9 = (_DWORD *)operator_new(8u);
  *v9 = 0;
  v9[1] = 0;
  a1[12] = v9;
  v10 = sub_608DE334(0x10u, 0, 4);
  if ( v10 )
  {
    *v9 = 2;
    v9[1] = v10;
  }
  *(_DWORD *)(*(_DWORD *)(a1[12] + 4) + 4) = -1;
  **(_DWORD **)(a1[12] + 4) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[12] + 4) + 12) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[12] + 4) + 8) = -1;
  a1[133] = 1;
  a1[135] = 0;
  *(_DWORD *)(*(_DWORD *)(a1[12] + 4) + 4) = 0;
  **(_DWORD **)(a1[12] + 4) = 3;
  v11 = a1[135] + 1;
  a1[135] = v11;
  v12 = a1[133];
  if ( v12 >= 0x20 )
    v12 = 0;
  v13 = &a1[4 * v12];
  *(_DWORD *)(*(_DWORD *)(v13[8] + 4) + 8 * v11 + 4) = 22;
  *(_DWORD *)(*(_DWORD *)(v13[8] + 4) + 8 * v11) = 0;
  ++a1[135];
  a1[14] = 3;
  v14 = (_DWORD *)operator_new(8u);
  *v14 = 0;
  v14[1] = 0;
  a1[16] = v14;
  v15 = sub_608DE334(0x18u, 0, 4);
  v16 = a1 + 5;
  if ( v15 )
  {
    *v14 = 3;
    v14[1] = v15;
  }
  *(_DWORD *)(*(_DWORD *)(a1[16] + 4) + 4) = -1;
  **(_DWORD **)(a1[16] + 4) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[16] + 4) + 12) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[16] + 4) + 8) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[16] + 4) + 20) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[16] + 4) + 16) = -1;
  a1[133] = 2;
  a1[135] = 0;
  *(_DWORD *)(*(_DWORD *)(a1[16] + 4) + 4) = 3;
  **(_DWORD **)(a1[16] + 4) = 0;
  v17 = a1[135] + 1;
  a1[135] = v17;
  v18 = a1[133];
  if ( v18 >= 0x20 )
    v18 = 0;
  v19 = &v16[4 * v18];
  *(_DWORD *)(*(_DWORD *)(v19[3] + 4) + 8 * v17 + 4) = 4;
  *(_DWORD *)(*(_DWORD *)(v19[3] + 4) + 8 * v17) = 1;
  v20 = a1[135] + 1;
  a1[135] = v20;
  v21 = a1[133];
  if ( v21 >= 0x20 )
    v21 = 0;
  v22 = &v16[4 * v21];
  *(_DWORD *)(*(_DWORD *)(v22[3] + 4) + 8 * v20 + 4) = 22;
  *(_DWORD *)(*(_DWORD *)(v22[3] + 4) + 8 * v20) = 3;
  ++a1[135];
  a1[18] = 2;
  v23 = (_DWORD *)operator_new(8u);
  *v23 = 0;
  v23[1] = 0;
  a1[20] = v23;
  v24 = sub_608DE334(0x10u, 0, 4);
  if ( v24 )
  {
    *v23 = 2;
    v23[1] = v24;
  }
  *(_DWORD *)(*(_DWORD *)(a1[20] + 4) + 4) = -1;
  **(_DWORD **)(a1[20] + 4) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[20] + 4) + 12) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[20] + 4) + 8) = -1;
  a1[133] = 3;
  a1[135] = 0;
  *(_DWORD *)(*(_DWORD *)(a1[20] + 4) + 4) = 0;
  **(_DWORD **)(a1[20] + 4) = 5;
  v25 = a1[135] + 1;
  a1[135] = v25;
  v26 = a1[133];
  if ( v26 >= 0x20 )
    v26 = 0;
  v27 = &a1[4 * v26];
  *(_DWORD *)(*(_DWORD *)(v27[8] + 4) + 8 * v25 + 4) = 2;
  *(_DWORD *)(*(_DWORD *)(v27[8] + 4) + 8 * v25) = 0;
  ++a1[135];
  a1[22] = 2;
  v28 = (_DWORD *)operator_new(8u);
  *v28 = 0;
  v28[1] = 0;
  a1[24] = v28;
  v29 = sub_608DE334(0x10u, 0, 4);
  if ( v29 )
  {
    *v28 = 2;
    v28[1] = v29;
  }
  *(_DWORD *)(*(_DWORD *)(a1[24] + 4) + 4) = -1;
  **(_DWORD **)(a1[24] + 4) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[24] + 4) + 12) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[24] + 4) + 8) = -1;
  a1[133] = 4;
  a1[135] = 0;
  *(_DWORD *)(*(_DWORD *)(a1[24] + 4) + 4) = 15;
  **(_DWORD **)(a1[24] + 4) = 3;
  v30 = a1[135] + 1;
  a1[135] = v30;
  v31 = a1[133];
  if ( v31 >= 0x20 )
    v31 = 0;
  v32 = &a1[4 * v31];
  *(_DWORD *)(*(_DWORD *)(v32[8] + 4) + 8 * v30 + 4) = 1;
  *(_DWORD *)(*(_DWORD *)(v32[8] + 4) + 8 * v30) = 3;
  ++a1[135];
  a1[26] = 3;
  v33 = (_DWORD *)operator_new(8u);
  *v33 = 0;
  v33[1] = 0;
  a1[28] = v33;
  v34 = sub_608DE334(0x18u, 0, 4);
  if ( v34 )
  {
    *v33 = 3;
    v33[1] = v34;
  }
  *(_DWORD *)(*(_DWORD *)(a1[28] + 4) + 4) = -1;
  **(_DWORD **)(a1[28] + 4) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[28] + 4) + 12) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[28] + 4) + 8) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[28] + 4) + 20) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[28] + 4) + 16) = -1;
  a1[133] = 5;
  a1[135] = 0;
  *(_DWORD *)(*(_DWORD *)(a1[28] + 4) + 4) = 3;
  **(_DWORD **)(a1[28] + 4) = 4;
  v35 = a1[135] + 1;
  a1[135] = v35;
  v36 = a1[133];
  if ( v36 >= 0x20 )
    v36 = 0;
  v37 = &v16[4 * v36];
  *(_DWORD *)(*(_DWORD *)(v37[3] + 4) + 8 * v35 + 4) = 0;
  *(_DWORD *)(*(_DWORD *)(v37[3] + 4) + 8 * v35) = 7;
  v38 = a1[135] + 1;
  a1[135] = v38;
  v39 = a1[133];
  if ( v39 >= 0x20 )
    v39 = 0;
  v40 = &v16[4 * v39];
  *(_DWORD *)(*(_DWORD *)(v40[3] + 4) + 8 * v38 + 4) = 22;
  *(_DWORD *)(*(_DWORD *)(v40[3] + 4) + 8 * v38) = 4;
  ++a1[135];
  a1[30] = 2;
  v41 = (_DWORD *)operator_new(8u);
  *v41 = 0;
  v41[1] = 0;
  a1[32] = v41;
  v42 = sub_608DE334(0x10u, 0, 4);
  if ( v42 )
  {
    *v41 = 2;
    v41[1] = v42;
  }
  *(_DWORD *)(*(_DWORD *)(a1[32] + 4) + 4) = -1;
  **(_DWORD **)(a1[32] + 4) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[32] + 4) + 12) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[32] + 4) + 8) = -1;
  a1[133] = 6;
  a1[135] = 0;
  *(_DWORD *)(*(_DWORD *)(a1[32] + 4) + 4) = 3;
  **(_DWORD **)(a1[32] + 4) = 8;
  v43 = a1[135] + 1;
  a1[135] = v43;
  v44 = a1[133];
  if ( v44 >= 0x20 )
    v44 = 0;
  v45 = &a1[4 * v44];
  *(_DWORD *)(*(_DWORD *)(v45[8] + 4) + 8 * v43 + 4) = 6;
  *(_DWORD *)(*(_DWORD *)(v45[8] + 4) + 8 * v43) = 8;
  ++a1[135];
  a1[34] = 2;
  v46 = (_DWORD *)operator_new(8u);
  *v46 = 0;
  v46[1] = 0;
  a1[36] = v46;
  v47 = sub_608DE334(0x10u, 0, 4);
  if ( v47 )
  {
    *v46 = 2;
    v46[1] = v47;
  }
  *(_DWORD *)(*(_DWORD *)(a1[36] + 4) + 4) = -1;
  **(_DWORD **)(a1[36] + 4) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[36] + 4) + 12) = -1;
  *(_DWORD *)(*(_DWORD *)(a1[36] + 4) + 8) = -1;
  a1[133] = 0;
  a1[134] = 8;
  a1[135] = 0;
  return 0;
}
