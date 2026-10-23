/* sub_60724888
 * address: 0x60724888   size: 952   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60724888(int a1, unsigned __int16 *a2, int a3, int a4, _DWORD *a5, int a6)
{
  int v6; // r4
  _DWORD *v7; // r12
  int result; // r0
  int v11; // r8
  int v12; // r5
  _WORD *v13; // r11
  int v14; // r10
  bool v15; // cc
  int v16; // r0
  int v17; // r9
  int v18; // r11
  int v19; // r0
  unsigned __int16 *v20; // r5
  int v21; // r9
  int v22; // r10
  int v23; // r1
  unsigned __int16 v24; // r0
  unsigned __int16 *v25; // [sp+4h] [bp-4Ch]
  _WORD *v26; // [sp+8h] [bp-48h]
  __int16 v27; // [sp+Ch] [bp-44h]
  _WORD *v28; // [sp+10h] [bp-40h]
  _WORD *v29; // [sp+14h] [bp-3Ch]
  int v30; // [sp+14h] [bp-3Ch]
  unsigned __int16 *v31; // [sp+18h] [bp-38h]
  int v32; // [sp+1Ch] [bp-34h]
  int v33; // [sp+20h] [bp-30h]
  int v35[10]; // [sp+28h] [bp-28h] BYREF

  v7 = a5;
  result = a5[2];
  v32 = a3;
  if ( result >= 1 )
  {
    v11 = a3 - 2;
    v12 = 0;
    v25 = a2 + 1541;
    v29 = a2 + 1543;
    v28 = a2 + 1548;
    v13 = a2 + 1542;
    v27 = a3 - 1;
    v26 = a2 + 1547;
    do
    {
      if ( v12 + a4 >= a2[1550] )
        break;
      *v13 = v27 + *v26 + v7[1];
      *v29 = *v28 + v12 + a4;
      v14 = v7[1];
      v15 = v14 < 1;
      v33 = v12;
      v6 = 3 * v14 + *(_DWORD *)(*v7 + 4 * v12) - 3;
      if ( v14 >= 1 )
        v15 = v14 + a3 - 1 < 0;
      if ( !v15 )
      {
        do
        {
          sub_6072342C(a1, (int)a2, v6 + 1);
          sub_6072334C(a1, a2, a6);
          if ( *v25 != 0xFFFF )
            sub_607261E4(a1, a2, 0);
          v6 -= 3;
          --*v13;
          if ( v14 - 1 < 1 )
            break;
          v16 = v11 + v14--;
        }
        while ( v16 >= 0 );
      }
      v7 = a5;
      a3 = v32;
      result = a5[2];
      ++v12;
    }
    while ( v33 + 1 < result );
    v35[0] = v6;
  }
  if ( a3 >= 1 && v7[6] && result >= 1 )
  {
    v17 = 0;
    v18 = 0;
    v30 = -a3;
    do
    {
      if ( a4 + v18 >= a2[1550] )
        break;
      a2[1542] = a2[1547];
      a2[1543] = a4 + v18 + a2[1548];
      v35[0] = *(_DWORD *)(v7[6] + 4 * v17);
      v19 = a2[1549];
      if ( v19 >= a3 )
        sub_60723CC0(a1, (int)a2, v35, v30, a6);
      else
        sub_60723CC0(a1, (int)a2, v35, -v19, a6);
      v7 = a5;
      a3 = v32;
      ++v17;
      ++v18;
      result = a5[2];
      if ( v17 == a5[8] )
        v17 = 0;
    }
    while ( v18 < result );
  }
  v20 = a2 + 1549;
  if ( v7[1] + a3 < a2[1549] && v7[3] && result >= 1 )
  {
    v21 = 0;
    v22 = 0;
    v31 = a2 + 1542;
    do
    {
      result = a4 + v22;
      if ( a4 + v22 >= a2[1550] )
        break;
      v35[0] = *(_DWORD *)(v7[3] + 4 * v21);
      a2[1543] = result + a2[1548];
      v23 = v7[1] + a3;
      v24 = a2[1547];
      if ( v23 < 0 )
      {
        *v31 = v24;
        sub_60723CC0(a1, (int)a2, v35, *v20, a6);
      }
      else
      {
        *v31 = v23 + v24;
        sub_60723CC0(a1, (int)a2, v35, *v20 - a3 - v7[1], a6);
      }
      v7 = a5;
      a3 = v32;
      ++v21;
      ++v22;
      result = a5[2];
      if ( v21 == a5[5] )
        v21 = 0;
    }
    while ( v22 < result );
  }
  return result;
}
