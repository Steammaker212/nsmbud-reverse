/* sub_607287D4
 * address: 0x607287D4   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607287D4(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6, int a7)
{
  int v8; // r9
  int result; // r0
  unsigned int v10; // r0
  int v11; // r11
  _DWORD *v12; // r8
  int v13; // r7
  _DWORD *v14; // r5
  int v15; // r6
  unsigned int v16; // r0
  int v17; // r9
  int v18; // r7
  _DWORD *v19; // r5
  int v20; // r6
  unsigned int v21; // r0
  int v22; // r9
  int v23; // r7
  _DWORD *v24; // r5
  int v25; // r6
  unsigned int v26; // r0
  int v27; // r9
  int v28; // r7
  _DWORD *v29; // r5
  int v30; // r6
  unsigned int v31; // r0
  int v32; // r9
  int v33; // r7
  _DWORD *v34; // r5
  int v35; // r6
  unsigned int v36; // r0
  int v37; // r9
  int v38; // r7
  _DWORD *v39; // r5
  int v40; // r6
  _DWORD *v41; // r6
  int v42; // r5
  int v43; // r0
  int v44; // r2
  _DWORD *v45; // r3
  _DWORD *v46; // r1
  _DWORD *v47; // r1
  _DWORD *v48; // r0

  v8 = a1[972];
  result = v8 + 4;
  if ( v8 + 4 <= 256 )
  {
    v10 = a1[974];
    v11 = 0;
    v12 = a1 + 3;
    v13 = a1[973];
    if ( v10 >= 2 )
      v10 = 0;
    v14 = &v12[7 * v10];
    v15 = dword_60CC73E8(v14[3]);
    *(_DWORD *)(v15 + sub_60913FB4(v14) + 4 * v13) = v8;
    v16 = a1[974];
    v17 = a1[972];
    v18 = a1[973];
    if ( v16 >= 2 )
      v16 = 0;
    v19 = &v12[7 * v16];
    v20 = dword_60CC73E8(v19[3]);
    *(_DWORD *)(v20 + sub_60913FB4(v19) + 4 * v18 + 4) = v17 + 2;
    v21 = a1[974];
    v22 = a1[972];
    v23 = a1[973];
    if ( v21 >= 2 )
      v21 = 0;
    v24 = &v12[7 * v21];
    v25 = dword_60CC73E8(v24[3]);
    *(_DWORD *)(v25 + sub_60913FB4(v24) + 4 * v23 + 8) = v22 + 1;
    v26 = a1[974];
    v27 = a1[972];
    v28 = a1[973];
    if ( v26 >= 2 )
      v26 = 0;
    v29 = &v12[7 * v26];
    v30 = dword_60CC73E8(v29[3]);
    *(_DWORD *)(v30 + sub_60913FB4(v29) + 4 * v28 + 12) = v27;
    v31 = a1[974];
    v32 = a1[972];
    v33 = a1[973];
    if ( v31 >= 2 )
      v31 = 0;
    v34 = &v12[7 * v31];
    v35 = dword_60CC73E8(v34[3]);
    *(_DWORD *)(v35 + sub_60913FB4(v34) + 4 * v33 + 16) = v32 + 3;
    v36 = a1[974];
    v37 = a1[972];
    v38 = a1[973];
    if ( v36 >= 2 )
      v36 = 0;
    v39 = &v12[7 * v36];
    v40 = dword_60CC73E8(v39[3]);
    *(_DWORD *)(v40 + sub_60913FB4(v39) + 4 * v38 + 20) = v37 + 2;
    if ( a1[974] < 2u )
      v11 = a1[974];
    v41 = &a1[7 * v11];
    v42 = dword_60CC73E8(v41[809]);
    v43 = v42 + sub_60913FB4(v41 + 806);
    v44 = 5 * a1[972];
    *(_DWORD *)(v43 + 20 * a1[972]) = *a2;
    v45 = (_DWORD *)(v43 + 4 * v44);
    v45[1] = a2[1];
    v45[2] = a2[2];
    v45[3] = a2[3];
    v45[4] = a2[4];
    v46 = (_DWORD *)(v43 + 20 * a1[972]);
    v46[5] = *a3;
    v46[6] = a3[1];
    v46[7] = a3[2];
    v46[8] = a3[3];
    v46[9] = a3[4];
    v47 = (_DWORD *)(v43 + 20 * a1[972]);
    v47[10] = *a4;
    v47[11] = a4[1];
    v47[12] = a4[2];
    v47[13] = a4[3];
    v47[14] = a4[4];
    v48 = (_DWORD *)(v43 + 20 * a1[972]);
    v48[15] = *a5;
    v48[16] = a5[1];
    v48[17] = a5[2];
    v48[18] = a5[3];
    v48[19] = a5[4];
    a1[3 * a1[972] + 39] = a7;
    a1[3 * a1[972] + 38] = a6;
    LOWORD(a1[3 * a1[972] + 40]) = 4;
    a1[3 * a1[972] + 42] = a7;
    a1[3 * a1[972] + 41] = a6;
    LOWORD(a1[3 * a1[972] + 43]) = 4;
    a1[3 * a1[972] + 45] = a7;
    a1[3 * a1[972] + 44] = a6;
    LOWORD(a1[3 * a1[972] + 46]) = 4;
    a1[3 * a1[972] + 48] = a7;
    a1[3 * a1[972] + 47] = a6;
    LOWORD(a1[3 * a1[972] + 49]) = 4;
    a1[973] += 6;
    result = a1[972] + 4;
    a1[972] = result;
  }
  return result;
}
