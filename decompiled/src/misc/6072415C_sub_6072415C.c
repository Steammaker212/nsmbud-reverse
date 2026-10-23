/* sub_6072415C
 * address: 0x6072415C   size: 952   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072415C(int a1, unsigned __int16 *a2, int a3, int a4, _DWORD *a5, int a6)
{
  int v6; // r5
  _DWORD *v7; // r12
  int result; // r0
  int v11; // r11
  int v12; // r4
  _WORD *v13; // lr
  _WORD *v14; // r8
  _WORD *v15; // r10
  int v16; // r9
  bool v17; // cc
  int v18; // r0
  int v19; // r10
  int v20; // r11
  int v21; // r9
  int v22; // r0
  unsigned __int16 *v23; // r11
  int v24; // r8
  _WORD *v25; // r4
  _WORD *v26; // r10
  int v27; // r9
  int v28; // r1
  __int16 v29; // r0
  int v30; // r5
  int v31; // r3
  _WORD *v32; // r5
  int v33; // r10
  unsigned __int16 *v34; // [sp+8h] [bp-48h]
  _WORD *v35; // [sp+Ch] [bp-44h]
  _WORD *v36; // [sp+10h] [bp-40h]
  int v37; // [sp+14h] [bp-3Ch]
  int v38; // [sp+18h] [bp-38h]
  __int16 v39; // [sp+1Ch] [bp-34h]
  int v40; // [sp+20h] [bp-30h]
  int v41; // [sp+24h] [bp-2Ch]
  int v42[10]; // [sp+28h] [bp-28h] BYREF

  v7 = a5;
  result = a5[2];
  v37 = a4;
  v40 = a3;
  if ( result >= 1 )
  {
    v11 = a3 - 2;
    v12 = 0;
    v34 = a2 + 1541;
    v13 = a2 + 1543;
    v14 = a2 + 1548;
    v36 = a2 + 1543;
    v15 = a2 + 1542;
    v35 = a2 + 1548;
    v39 = a3 - 1;
    do
    {
      if ( a4 - v12 < 0 )
        break;
      *v15 = v39 + a2[1547] + v7[1];
      *v13 = *v14 + a4 - v12;
      v16 = v7[1];
      result = v7[2];
      v41 = v12;
      v17 = v16 < 1;
      v6 = 3 * v16 + *(_DWORD *)(*v7 + 4 * (result + ~v12)) - 3;
      if ( v16 >= 1 )
        v17 = v16 + a3 - 1 < 0;
      if ( !v17 )
      {
        do
        {
          sub_6072342C(a1, (int)a2, v6 + 1);
          sub_6072334C(a1, a2, a6);
          if ( *v34 != 0xFFFF )
            sub_607261E4(a1, a2, 0);
          v6 -= 3;
          --*v15;
          if ( v16 - 1 < 1 )
            break;
          v18 = v11 + v16--;
        }
        while ( v18 >= 0 );
        v7 = a5;
        a4 = v37;
        a3 = v40;
        v13 = v36;
        v14 = v35;
        result = a5[2];
      }
      ++v12;
    }
    while ( v41 + 1 < result );
    v42[0] = v6;
  }
  if ( a3 >= 1 && v7[6] && result >= 1 )
  {
    v19 = 0;
    v20 = a4;
    v38 = -a3;
    v21 = v7[8];
    do
    {
      if ( v20 < 0 )
        break;
      --v21;
      a2[1542] = a2[1547];
      a2[1543] = v20 + a2[1548];
      v42[0] = *(_DWORD *)(v7[6] + 4 * v21);
      v22 = a2[1549];
      if ( v22 >= a3 )
        sub_60723CC0(a1, (int)a2, v42, v38, a6);
      else
        sub_60723CC0(a1, (int)a2, v42, -v22, a6);
      v7 = a5;
      a4 = v37;
      a3 = v40;
      ++v19;
      --v20;
      result = a5[2];
      if ( !v21 )
        v21 = a5[8];
    }
    while ( v19 < result );
  }
  v23 = a2 + 1549;
  if ( v7[1] + a3 < a2[1549] && v7[3] && result >= 1 )
  {
    v24 = 0;
    v25 = a2 + 1542;
    v26 = a2 + 1547;
    result = (int)(a2 + 1548);
    v27 = v7[5];
    do
    {
      if ( a4 < 0 )
        break;
      --v27;
      v42[0] = *(_DWORD *)(v7[3] + 4 * v27);
      a2[1543] = a4 + a2[1548];
      v28 = v7[1] + a3;
      v29 = *v26;
      if ( v28 < 0 )
      {
        *v25 = v29;
        v32 = v26;
        v33 = a4;
        sub_60723CC0(a1, (int)a2, v42, *v23, a6);
        v7 = a5;
        v31 = v33;
        v26 = v32;
      }
      else
      {
        *v25 = v28 + v29;
        v30 = a4;
        sub_60723CC0(a1, (int)a2, v42, *v23 - a3 - v7[1], a6);
        v7 = a5;
        v31 = v30;
      }
      result = v7[2];
      a3 = v40;
      ++v24;
      a4 = v31 - 1;
      if ( !v27 )
        v27 = v7[5];
    }
    while ( v24 < result );
  }
  return result;
}
