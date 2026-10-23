/* sub_60724C40
 * address: 0x60724C40   size: 812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60724C40(int a1, _WORD *a2, int a3, int a4, _DWORD *a5, int a6)
{
  _DWORD *v7; // r6
  int v10; // r1
  unsigned __int16 *v11; // r3
  int v12; // r0
  int v13; // r9
  int v14; // r1
  int v15; // r8
  int v16; // r7
  int v17; // r0
  int v18; // r7
  int v19; // r1
  int v20; // r2
  int v21; // r2
  int v22; // r7
  int v23; // r4
  int result; // r0
  int v25; // r4
  int v26; // r7
  int v27; // [sp+Ch] [bp-3Ch]
  int v28; // [sp+10h] [bp-38h]
  unsigned __int16 *v29; // [sp+14h] [bp-34h]
  int v31; // [sp+1Ch] [bp-2Ch] BYREF
  int v32[10]; // [sp+20h] [bp-28h] BYREF

  v7 = a5;
  v11 = a2 + 1549;
  v10 = (unsigned __int16)a2[1549];
  v29 = v11;
  if ( a5[4] + a3 <= v10 )
  {
    if ( a5[3] )
    {
      v12 = a5[5];
      if ( v12 >= 1 )
      {
        v27 = a4;
        v13 = 0;
        v14 = a4 + 1;
        v15 = v12 + 1;
        v16 = v14 - v12;
        do
        {
          if ( v16 < 0 )
            break;
          a2[1542] = a2[1547] + a3;
          a2[1543] = v16 + a2[1548];
          v32[0] = *(_DWORD *)(v7[3] + 4 * v13);
          sub_60723CC0(a1, (int)a2, v32, v7[4], a6);
          v7 = a5;
          ++v13;
          --v15;
          ++v16;
          if ( v13 == a5[5] )
            v13 = 0;
        }
        while ( v15 > 1 );
        a4 = v27;
        v10 = *v29;
      }
    }
  }
  v17 = v7[1];
  if ( v17 + a3 <= v10 && (int)v7[2] >= 1 )
  {
    v18 = 0;
    v19 = 0;
    do
    {
      v20 = a4 - v7[5] + v19;
      if ( v20 < 0 )
        break;
      a2[1543] = a2[1548] + v20;
      v17 = v7[1];
      v21 = v7[2];
      if ( v17 >= 1 )
      {
        v28 = v18;
        v22 = 0;
        v23 = *(_DWORD *)(*v7 + 4 * (v19 + v21) - 4) + 1;
        do
        {
          if ( a3 + v22 >= *v29 )
            break;
          a2[1542] = a3 + v22 + a2[1547];
          sub_6072342C(a1, (int)a2, v23);
          sub_6072334C(a1, a2, a6);
          if ( (unsigned __int16)a2[1541] != 0xFFFF )
            sub_607261E4(a1, a2, 0);
          v7 = a5;
          ++v22;
          v23 += 3;
          v17 = a5[1];
        }
        while ( v22 < v17 );
        v21 = v7[2];
        v18 = v28;
      }
      v19 = ~v18++;
    }
    while ( v18 < v21 );
    v10 = *v29;
  }
  result = v17 + a3;
  if ( result < v10 )
  {
    if ( v7[6] )
    {
      a2[1542] = result + a2[1547];
      result = v7[2];
      if ( result >= 1 )
      {
        v25 = v7[8];
        v26 = 0;
        do
        {
          result = v7[5];
          if ( a4 - result < 0 )
            break;
          --v25;
          a2[1543] = a4 + a2[1548] - result;
          v31 = *(_DWORD *)(v7[6] + 4 * v25);
          sub_60723CC0(a1, (int)a2, &v31, v7[1], a6);
          v7 = a5;
          ++v26;
          --a4;
          result = a5[2];
          if ( !v25 )
            v25 = a5[8];
        }
        while ( v26 < result );
      }
    }
  }
  return result;
}
