/* sub_604A1E08
 * address: 0x604A1E08   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A1E08(_DWORD *a1)
{
  _BYTE *v2; // r5
  int result; // r0
  int *v4; // r7
  int v5; // r1
  int i; // r1
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  unsigned int v10; // r10
  char *v11; // r5
  unsigned int v12; // r1
  int v13; // r0
  _DWORD *v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r1
  int v20; // r0
  unsigned int v21; // r3
  _DWORD *v22; // r3
  int v23; // [sp+4h] [bp-3Ch] BYREF
  int v24; // [sp+8h] [bp-38h]
  int v25; // [sp+Ch] [bp-34h]
  _DWORD v26[12]; // [sp+10h] [bp-30h] BYREF

  v2 = (_BYTE *)dword_60C99DEC;
  if ( FIELD_U8(dword_60C99DEC, 522) )
  {
    if ( FIELD_U8(dword_60C99DEC, 36) )
    {
      if ( a1[5583] )
        sub_604A1D14((int)a1, 0);
      else
        sub_604A1C24((int)a1, 0);
      v7 = (_DWORD *)a1[5069];
      v7[95] = v7[104];
      v7[96] = v7[105];
      v7[97] = v7[106];
    }
    if ( v2[108] )
    {
      if ( a1[5584] )
        sub_604A1D14((int)a1, 1u);
      else
        sub_604A1C24((int)a1, 1u);
      v8 = (_DWORD *)a1[5070];
      v8[95] = v8[104];
      v8[96] = v8[105];
      v8[97] = v8[106];
    }
    if ( v2[180] )
    {
      if ( a1[5585] )
        sub_604A1D14((int)a1, 2u);
      else
        sub_604A1C24((int)a1, 2u);
      v9 = (_DWORD *)a1[5071];
      v9[95] = v9[104];
      v9[96] = v9[105];
      v9[97] = v9[106];
    }
    result = (unsigned __int8)v2[252];
    if ( v2[252] )
    {
      if ( a1[5586] )
        sub_604A1D14((int)a1, 3u);
      else
        sub_604A1C24((int)a1, 3u);
      result = a1[5072];
      FIELD_U32(result, 380) = FIELD_U32(result, 416);
      FIELD_U32(result, 384) = FIELD_U32(result, 420);
      FIELD_U32(result, 388) = FIELD_U32(result, 424);
    }
  }
  else
  {
    v4 = a1 + 5624;
    result = a1[5624];
    v5 = result - 2;
    if ( result - 2 > 2 )
      v5 = 0;
    if ( result < 2 )
      v5 = 0;
    if ( result >= 1 )
    {
      if ( v5 == 12 )
      {
        for ( i = 0; (result & 7) != i; ++i )
          ;
        if ( (unsigned int)(result - 1) >= 7 )
        {
          do
            i += 8;
          while ( i < result );
        }
      }
      else
      {
        v10 = 0;
        v11 = (char *)&unk_60B02C18 + 16 * v5;
        do
        {
          v12 = *(_DWORD *)&v11[4 * v10];
          v13 = a1[908];
          if ( v12 >= 0xC )
            v12 = 0;
          if ( v13 )
          {
            v14 = (_DWORD *)a1[v12 + 5051];
            v15 = v14[23];
            v16 = v14[27];
            v17 = v14[31];
            v26[0] = v15;
            v26[1] = v16;
            v26[2] = v17;
            sub_6090A384(v13, &v23, v26);
            v18 = v23;
            v19 = v24;
            v20 = v25;
          }
          else
          {
            v20 = 0;
            v19 = 0;
            v18 = 0;
            v23 = 0;
            v24 = 0;
            v25 = 0;
          }
          v21 = 0;
          if ( v10 < 4 )
            v21 = v10;
          ++v10;
          v22 = (_DWORD *)a1[v21 + 5069];
          v22[95] = v18;
          v22[96] = v19;
          v22[97] = v20;
          result = *v4;
        }
        while ( (int)v10 < *v4 );
      }
    }
  }
  return result;
}
