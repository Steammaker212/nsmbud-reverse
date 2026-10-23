/* sub_6092E6CC
 * address: 0x6092E6CC   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092E6CC(int a1, int a2)
{
  int v2; // r4
  int v3; // r9
  int v4; // r11
  int v5; // r8
  int v6; // r2
  int v7; // r3
  _DWORD *v8; // r10
  int v9; // r5
  int v10; // r4
  int v11; // r6
  int v12; // r0
  int v13; // r11
  __int16 v14; // r9
  int v15; // r6
  int v16; // r6
  int v17; // r6
  int v18; // r6
  _WORD *v19; // r0
  unsigned int v20; // r1
  int result; // r0
  int v24; // [sp+14h] [bp-74h]
  _DWORD *v25; // [sp+18h] [bp-70h]
  int v26; // [sp+1Ch] [bp-6Ch]
  int v27; // [sp+20h] [bp-68h]
  __int16 v28; // [sp+28h] [bp-60h]
  __int16 v29; // [sp+2Ch] [bp-5Ch]
  int v30; // [sp+30h] [bp-58h]
  __int16 v31; // [sp+34h] [bp-54h]
  int v32; // [sp+38h] [bp-50h]
  int v33; // [sp+3Ch] [bp-4Ch]
  _DWORD v34[3]; // [sp+40h] [bp-48h] BYREF
  _DWORD v35[3]; // [sp+4Ch] [bp-3Ch] BYREF
  _DWORD v36[12]; // [sp+58h] [bp-30h] BYREF

  v2 = 0;
  do
  {
    v3 = a1 + 744 * v2 + 2140;
    v25 = (_DWORD *)(a1 + 744 * v2);
    v4 = dword_60AF22D8[v2];
    sub_60913D88(v3, 36 * v4, a2, 4, 0);
    sub_60913A6C(v35, v3, 0);
    v24 = v2;
    if ( (v2 | 1) == 1 )
    {
      v5 = 0;
      v6 = 0;
      v7 = 0;
      v33 = v4;
      v8 = v25 + 538;
      do
      {
        v9 = 0;
        v26 = v6;
        v27 = v5;
        v10 = 2 * v7 + 10;
        v29 = v4 + v6 * v4;
        v28 = v6 * v4;
        do
        {
          v32 = v7;
          v11 = dword_60CC73E8(*v8);
          ++v9;
          *(_WORD *)(v11 + sub_60913FB4(v3) + v10 - 10) = v5;
          v12 = v9 / v4;
          v13 = v3;
          v14 = v9 - v12 * v33;
          v31 = v14 + v29;
          v30 = dword_60CC73E8(*v8);
          *(_WORD *)(v30 + sub_60913FB4(v13) + v10 - 8) = v14 + v29;
          v15 = dword_60CC73E8(*v8);
          *(_WORD *)(v15 + sub_60913FB4(v13) + v10 - 6) = v14 + v28;
          v3 = v13;
          v4 = v33;
          v16 = dword_60CC73E8(*v8);
          *(_WORD *)(v16 + sub_60913FB4(v3) + v10 - 4) = v5;
          v17 = dword_60CC73E8(*v8);
          *(_WORD *)(v17 + sub_60913FB4(v3) + v10 - 2) = v33 + v5;
          v18 = dword_60CC73E8(*v8);
          LOWORD(v5) = v5 + 1;
          v19 = (_WORD *)(v18 + sub_60913FB4(v3) + v10);
          v10 += 12;
          v7 = v32 + 6;
          *v19 = v31;
        }
        while ( v9 < v33 );
        v6 = v26 + 1;
        v5 = v27 + v33;
      }
      while ( v26 != 2 );
    }
    sub_60913A6C(v34, v3, 0);
    v20 = v25[537];
    v36[0] = v34[0];
    v36[1] = v34[1];
    v36[2] = v34[2];
    sub_60919D48(v25 + 694, v36, 1, v20 >> 1);
    result = 4;
    v25[696] = 4;
    v2 = v24 + 1;
  }
  while ( v24 != 1 );
  return result;
}
