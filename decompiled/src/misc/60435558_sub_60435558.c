/* sub_60435558
 * address: 0x60435558   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60435558(int a1, int a2, unsigned int a3, int a4, int a5, _DWORD *a6)
{
  int result; // r0
  int v8; // r6
  int v9; // r7
  int v10; // r10
  unsigned int *v11; // r11
  int v12; // r0
  unsigned int **v13; // r5
  int v14; // r6
  unsigned int *v15; // r2
  unsigned int v16; // r0
  int v17; // r1
  unsigned __int16 v18; // r1
  _BYTE *v19; // r3
  int v20; // r0
  unsigned int **v21; // r5
  int v22; // r6
  unsigned int *v23; // r2
  unsigned int v24; // r0
  int v25; // r1
  unsigned __int16 v26; // r1
  _BYTE *v27; // r3
  unsigned int v28; // r1
  _DWORD v29[6]; // [sp+4h] [bp-54h] BYREF
  char v30; // [sp+1Ch] [bp-3Ch]
  char v31; // [sp+1Dh] [bp-3Bh]
  int v32; // [sp+20h] [bp-38h]
  int v33; // [sp+24h] [bp-34h]
  int v34; // [sp+2Ch] [bp-2Ch]
  int v35; // [sp+30h] [bp-28h]

  result = FIELD_U8(a1, 348);
  if ( (result & 4) != 0 )
  {
    result = FIELD_U32(a1, 432);
    if ( (result & (1 << a3)) != 0 )
    {
      v8 = a6[225];
      if ( a6[224] > a3 )
        v8 += a3 << 7;
      v9 = FIELD_U32(v8, 120);
      v29[0] = a3;
      v29[1] = a4;
      v29[2] = a5;
      v29[3] = 0;
      v29[4] = 0;
      v29[5] = -1;
      v31 = 0;
      v32 = 4;
      v33 = -1;
      v34 = v9;
      v35 = a2;
      v30 = 0;
      v10 = FIELD_U32(a1, 316);
      FIELD_U32(a1, 316) = v10 & 0xFFFFFFFE;
      v11 = *(unsigned int **)(a1 + 324);
      v12 = FIELD_U32(a1, 200);
      if ( FIELD_U32(a1, 320) > a3 )
        v11 += 2 * a3;
      if ( v12 )
      {
        v13 = *(unsigned int ***)(a1 + 208);
        v14 = 4 * v12;
        do
        {
          v15 = *v13;
          v16 = **v13;
          v17 = *(_DWORD *)(FIELD_U32(a1, 72) + 56 * v16);
          if ( (*(_DWORD *)(FIELD_U32(a1, 48) + 4 * (FIELD_U16(v17, 94) >> 5))
              & (1 << (FIELD_U16(v17, 94) & 0x1F))) != 0 )
          {
            v18 = FIELD_U16(v17, 96);
            if ( (v15[2] & 4) != 0 && (*(_DWORD *)(FIELD_U32(a1, 44) + 4 * (v18 >> 5)) & (1 << (v18 & 0x1F))) != 0 )
            {
              v19 = (_BYTE *)v11[1];
              if ( *v11 > v16 )
                v19 += 4 * v16;
              if ( (*v19 & 1) != 0 )
                sub_60434AE8(a1, (int)v29, (int)v15, a6);
            }
          }
          v14 -= 4;
          ++v13;
        }
        while ( v14 );
      }
      v20 = FIELD_U32(a1, 212);
      if ( v20 )
      {
        v21 = *(unsigned int ***)(a1 + 220);
        v22 = 4 * v20;
        do
        {
          v23 = *v21;
          v24 = **v21;
          v25 = *(_DWORD *)(FIELD_U32(a1, 72) + 56 * v24);
          if ( (*(_DWORD *)(FIELD_U32(a1, 48) + 4 * (FIELD_U16(v25, 94) >> 5))
              & (1 << (FIELD_U16(v25, 94) & 0x1F))) != 0 )
          {
            v26 = FIELD_U16(v25, 96);
            if ( (v23[2] & 4) != 0 && (*(_DWORD *)(FIELD_U32(a1, 44) + 4 * (v26 >> 5)) & (1 << (v26 & 0x1F))) != 0 )
            {
              v27 = (_BYTE *)v11[1];
              if ( *v11 > v24 )
                v27 += 4 * v24;
              if ( (*v27 & 1) != 0 )
                sub_60434AE8(a1, (int)v29, (int)v23, a6);
            }
          }
          v22 -= 4;
          ++v21;
        }
        while ( v22 );
      }
      result = FIELD_U32(a1, 316);
      v28 = result & 0xFFFFFFFE;
      if ( (v10 & 1) != 0 )
        v28 = result | 1;
      FIELD_U32(a1, 316) = v28;
    }
  }
  return result;
}
