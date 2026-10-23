/* sub_60728534
 * address: 0x60728534   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60728534(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v6; // r9
  int result; // r0
  int v8; // r6
  _DWORD *v9; // r8
  unsigned int v10; // r0
  _DWORD *v11; // r5
  int v12; // r10
  unsigned int v13; // r0
  int v14; // r9
  _DWORD *v15; // r5
  int v16; // r10
  unsigned int v17; // r0
  int v18; // r9
  _DWORD *v19; // r5
  int v20; // r10
  _DWORD *v21; // r6
  int v22; // r5
  int v23; // r0
  int v24; // r2
  _DWORD *v25; // r3
  _DWORD *v26; // r1
  _DWORD *v27; // r0
  int v28; // [sp+0h] [bp-30h]
  int v29; // [sp+0h] [bp-30h]
  int v30; // [sp+0h] [bp-30h]

  v6 = a1[972];
  result = v6 + 3;
  if ( v6 + 3 <= 256 )
  {
    v8 = 0;
    v9 = a1 + 3;
    v28 = a1[973];
    v10 = a1[974];
    if ( v10 >= 2 )
      v10 = 0;
    v11 = &v9[7 * v10];
    v12 = dword_60CC73E8(v11[3]);
    *(_DWORD *)(v12 + sub_60913FB4(v11) + 4 * v28) = v6;
    v29 = a1[972];
    v13 = a1[974];
    v14 = a1[973];
    if ( v13 >= 2 )
      v13 = 0;
    v15 = &v9[7 * v13];
    v16 = dword_60CC73E8(v15[3]);
    *(_DWORD *)(v16 + sub_60913FB4(v15) + 4 * v14 + 4) = v29 + 1;
    v30 = a1[972];
    v17 = a1[974];
    v18 = a1[973];
    if ( v17 >= 2 )
      v17 = 0;
    v19 = &v9[7 * v17];
    v20 = dword_60CC73E8(v19[3]);
    *(_DWORD *)(v20 + sub_60913FB4(v19) + 4 * v18 + 8) = v30 + 2;
    if ( a1[974] < 2u )
      v8 = a1[974];
    v21 = &a1[7 * v8];
    v22 = dword_60CC73E8(v21[809]);
    v23 = v22 + sub_60913FB4(v21 + 806);
    v24 = 5 * a1[972];
    *(_DWORD *)(v23 + 20 * a1[972]) = *a2;
    v25 = (_DWORD *)(v23 + 4 * v24);
    v25[1] = a2[1];
    v25[2] = a2[2];
    v25[3] = a2[3];
    v25[4] = a2[4];
    v26 = (_DWORD *)(v23 + 20 * a1[972]);
    v26[5] = a2[5];
    v26[6] = a2[6];
    v26[7] = a2[7];
    v26[8] = a2[8];
    v26[9] = a2[9];
    v27 = (_DWORD *)(v23 + 20 * a1[972]);
    v27[10] = a2[10];
    v27[11] = a2[11];
    v27[12] = a2[12];
    v27[13] = a2[13];
    v27[14] = a2[14];
    a1[3 * a1[972] + 39] = a4;
    a1[3 * a1[972] + 38] = a3;
    LOWORD(a1[3 * a1[972] + 40]) = 3;
    a1[3 * a1[972] + 42] = a4;
    a1[3 * a1[972] + 41] = a3;
    LOWORD(a1[3 * a1[972] + 43]) = 3;
    a1[3 * a1[972] + 45] = a4;
    a1[3 * a1[972] + 44] = a3;
    LOWORD(a1[3 * a1[972] + 46]) = 3;
    a1[973] += 3;
    result = a1[972] + 3;
    a1[972] = result;
  }
  return result;
}
