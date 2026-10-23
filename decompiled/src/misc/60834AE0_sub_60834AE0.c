/* sub_60834AE0
 * address: 0x60834AE0   size: 888   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60834AE0(int a1, int a2, int a3, int a4)
{
  int v5; // r10
  int v6; // r2
  unsigned int v7; // r1
  int v8; // r5
  _BYTE *v9; // r8
  int result; // r0
  int v11; // r4
  _BYTE *v12; // r7
  unsigned int v13; // r2
  unsigned int v14; // r1
  int v15; // r5
  int v16; // r8
  int v17; // r7
  unsigned int v18; // r7
  int v19; // r5
  _DWORD *v20; // r0
  int v21; // r5
  int v22; // r2
  int v23; // r4
  unsigned int v24; // r8
  int v25; // r11
  _DWORD *v26; // r7
  int v27; // r0
  int v28; // r1
  unsigned int v29; // r0
  unsigned int v30; // r0
  int v31; // r0
  int v32; // r0
  int *v33; // r4
  bool v34; // zf
  unsigned int v36; // [sp+Ch] [bp-64h]
  _DWORD v38[7]; // [sp+14h] [bp-5Ch]
  _DWORD v39[16]; // [sp+30h] [bp-40h]

  v5 = a4;
  v6 = FIELD_U8(dword_60CC6D8C, 17);
  v39[0] = 7;
  v39[1] = 7;
  v39[2] = 7;
  v39[3] = 7;
  v39[4] = 7;
  v39[5] = 7;
  v38[0] = 7;
  v38[1] = 7;
  v38[2] = 7;
  v38[3] = 7;
  v38[4] = 7;
  v38[5] = 7;
  v39[6] = 7;
  v38[6] = 7;
  if ( v6 )
  {
    v7 = 0;
    v8 = 0;
    v9 = (_BYTE *)(a1 + 20541);
    result = 0x437154u;
    do
    {
      v11 = dword_60B0D08C[v8];
      if ( v11 )
      {
        if ( a2 < 1 )
        {
LABEL_9:
          result = dword_60B0D0A8[v8];
          v13 = 0;
          if ( v7 < 7 )
            v13 = v7;
          ++v7;
          v38[v13] = v11;
          v39[v13] = result;
        }
        else
        {
          result = 0;
          v12 = v9;
          while ( !*v12 || v11 != *(_DWORD *)(v12 - 45) )
          {
            ++result;
            v12 += 20556;
            if ( result >= a2 )
              goto LABEL_9;
          }
        }
      }
      ++v8;
    }
    while ( v8 != 7 );
  }
  else
  {
    v14 = 0;
    v15 = 0;
    v16 = a1 + 20496;
    do
    {
      if ( a2 < 1 )
      {
LABEL_20:
        v18 = 0;
        if ( v14 < 7 )
          v18 = v14;
        ++v14;
        v39[v18] = dword_60B0D0A8[v15];
        result = dword_60B0D08C[v15];
        v38[v18] = result;
      }
      else
      {
        result = 0;
        v17 = v16;
        while ( !FIELD_U8(v17, 45) || dword_60B0D08C[v15] != *(_DWORD *)v17 )
        {
          ++result;
          v17 += 20556;
          if ( result >= a2 )
            goto LABEL_20;
        }
      }
      ++v15;
    }
    while ( v15 != 7 );
  }
  if ( a4 < 1 )
    return result;
  v19 = a4;
  v20 = (_DWORD *)(a3 + 12);
  do
  {
    *((_BYTE *)v20 - 12) = 0;
    *((_BYTE *)v20 - 11) = 0;
    *(v20 - 2) = 7;
    *(v20 - 1) = 5;
    *v20 = 0;
    v20[1] = -1;
    v20[2] = 7;
    v20 += 6;
    --v19;
  }
  while ( v19 );
  v21 = a1;
  v22 = 20556;
  v23 = a4;
  v24 = 0;
  v25 = 0;
  v26 = (_DWORD *)(a3 + 20);
  v36 = 0;
  do
  {
    if ( v25 < a2 )
    {
      v27 = a1 + 20556 * v25;
      if ( FIELD_U8(v27, 20541) )
      {
        v28 = FIELD_U32(v27, 20496);
        *v26 = v28;
        *((_BYTE *)v26 - 20) = 1;
        if ( FIELD_U32(v27, 20496) == 6 )
        {
          v29 = 0;
          if ( v36 < 7 )
            v29 = v36;
          *(v26 - 4) = v39[v29];
          ++v36;
        }
        else
        {
          *(v26 - 4) = dword_60B0D0A8[v28];
        }
LABEL_39:
        *(v26 - 1) = sub_604A4C68(v21);
        v22 = 20556;
        ++v25;
        *(v26 - 3) = FIELD_U32(v21, 20528);
        goto LABEL_40;
      }
    }
    v30 = 0;
    if ( v24 < 7 )
      v30 = v24;
    ++v24;
    v31 = v38[v30];
    *v26 = v31;
    v32 = dword_60B0D0A8[v31];
    *((_BYTE *)v26 - 20) = 0;
    *(v26 - 4) = v32;
    if ( v25 < a2 )
      goto LABEL_39;
LABEL_40:
    v21 += 20556;
    v26 += 6;
    --v23;
  }
  while ( v23 );
  v33 = (int *)(a3 + 12);
  do
  {
    result = v33[2];
    if ( result == 6 )
    {
      result = *((unsigned __int8 *)v33 - 12);
      if ( *((_BYTE *)v33 - 12) )
      {
        result = 100663296;
        v34 = dword_60C9C0FC == 0;
        if ( dword_60C9C0FC )
        {
          v22 = FIELD_U32(dword_60C9C0FC, 724);
          v34 = v22 == 0;
        }
        if ( !v34 )
          result = sub_6042EFA8(v22, v33[1]);
        *v33 = result;
        *((_BYTE *)v33 - 11) = 0;
      }
    }
    v33 += 6;
    --v5;
  }
  while ( v5 );
  return result;
}
