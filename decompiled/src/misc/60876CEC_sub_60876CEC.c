/* sub_60876CEC
 * address: 0x60876CEC   size: 1008   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60876CEC(int a1)
{
  int v2; // r2
  float *v3; // r1
  int v4; // r0
  float v5; // s16
  int v6; // r4
  int v7; // r5
  int v8; // r7
  int v9; // r6
  int v10; // r8
  float v11; // s18
  int v12; // r1
  int v13; // r0
  int v14; // r9
  int v15; // r12
  int v16; // r2
  int v17; // r2
  float *v18; // r11
  int v19; // r1
  float *v20; // r2
  int v21; // r1
  float *v22; // r2
  int v23; // r1
  int v24; // r0
  float *v25; // r0
  float *v26; // r1
  int v27; // r5
  int v28; // r7
  int v29; // r6
  float v30; // s18
  float *v31; // r2
  int v32; // r1
  int v33; // r0
  float *v34; // r0
  float *v35; // r1
  int v36; // r1
  int v37; // r0
  int v38; // r12
  int v39; // r2
  int v40; // r9
  float *v41; // r8
  int v42; // r1
  float *v43; // r2
  int v44; // r1
  int v45; // [sp+0h] [bp-40h]
  int v46; // [sp+4h] [bp-3Ch]

  v2 = FIELD_U32(a1, 48);
  v3 = *(float **)(a1 + 4);
  v4 = FIELD_U32(a1, 40);
  v46 = v2;
  v5 = *v3;
  if ( v4 <= 0 )
  {
    v6 = FIELD_U16(a1, 64);
    goto LABEL_25;
  }
  v6 = FIELD_U16(a1, 64);
  if ( v4 > FIELD_U32(a1, 36) )
  {
LABEL_25:
    if ( !v6 )
      return;
    v27 = v2;
    v28 = 0;
    v29 = 0;
    v30 = nn__util__FloatPi;
    while ( 1 )
    {
      v36 = FIELD_U32(a1, 56);
      if ( (*(_DWORD *)(v36 + 4 * v29) & 0x40000000) != 0 )
        goto LABEL_44;
      v37 = FIELD_U32(a1, 72) + v28;
      if ( (FIELD_U8(a1, 80) & 0x40) == 0
        || (v38 = FIELD_U32(a1, 88),
            v39 = *(__int16 *)(FIELD_U32(v38, 56) + 2 * (*(_DWORD *)(v36 + 4 * v29) & 0x7FFF)),
            v39 <= -1) )
      {
        sub_6087278C(v37, v27, v5);
        goto LABEL_44;
      }
      v40 = 3 * ((*(_DWORD *)(v36 + 4 * v39) >> 15) & 0x7FFF);
      v41 = (float *)(v46 + 48 * ((*(_DWORD *)(v36 + 4 * v39) >> 15) & 0x7FFF));
      v42 = *(_DWORD *)(FIELD_U32(v38, 24) + 96 * ((*(_DWORD *)(v36 + 4 * v39) >> 15) & 0x7FFF) + 52) & 0x300000;
      switch ( v42 )
      {
        case 0:
          goto LABEL_42;
        case 0x200000:
          v31 = (float *)(FIELD_U32(v37, 16) + 4 * FIELD_U8(v37, 31));
          v41[4] = *v31;
          v32 = *((_DWORD *)v31 + 1);
          v41[6] = v31[2];
          *((_DWORD *)v41 + 5) = v32;
          break;
        case 0x100000:
LABEL_42:
          v43 = (float *)(FIELD_U32(v37, 16) + 4 * FIELD_U8(v37, 28));
          v41[8] = *v43;
          v44 = *((_DWORD *)v43 + 1);
          v41[10] = v43[2];
          *((_DWORD *)v41 + 9) = v44;
          v41[4] = *(float *)(FIELD_U32(v37, 16) + 4 * FIELD_U8(v37, 31));
          break;
      }
      sub_6087278C(v37, (int)v41, v5);
      v33 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 88) + 24) + 32 * v40 + 52) & 0x300000;
      switch ( v33 )
      {
        case 0x200000:
          v34 = v41 + 6;
          v35 = v41 + 4;
          v41[4] = -v41[4];
          v41[5] = -v41[5];
          goto LABEL_35;
        case 0x100000:
          v41[4] = -v41[4];
          v41[8] = v41[8] + v30;
LABEL_34:
          v34 = v41 + 10;
          v35 = v41 + 8;
          v41[9] = -v41[9];
LABEL_35:
          v35[2] = -*v34;
          break;
        case 0:
          v41[4] = -v41[4];
          goto LABEL_34;
      }
LABEL_44:
      ++v29;
      v27 += 48;
      v28 += 40;
      if ( v29 >= v6 )
        return;
    }
  }
  if ( FIELD_U16(a1, 64) )
  {
    v7 = v2;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = nn__util__FloatPi;
    do
    {
      v12 = FIELD_U32(a1, 56);
      v13 = FIELD_U32(a1, 72) + v8;
      v14 = FIELD_U8(v13, 30);
      if ( (*(_DWORD *)(v12 + 4 * v10) & 0x40000000) != 0 )
        goto LABEL_22;
      if ( (FIELD_U8(a1, 80) & 0x40) == 0
        || (v15 = FIELD_U32(a1, 88),
            v16 = *(__int16 *)(FIELD_U32(v15, 56) + 2 * (*(_DWORD *)(v12 + 4 * v10) & 0x7FFF)),
            v16 <= -1) )
      {
        sub_608727FC(v13, v7, FIELD_U32(a1, 32) + 12 * v9, v5);
        goto LABEL_22;
      }
      v17 = 3 * ((*(_DWORD *)(v12 + 4 * v16) >> 15) & 0x7FFF);
      v18 = (float *)(v46 + 16 * v17);
      v45 = v17;
      v19 = *(_DWORD *)(FIELD_U32(v15, 24) + 32 * v17 + 52) & 0x300000;
      switch ( v19 )
      {
        case 0:
          goto LABEL_11;
        case 0x200000:
          v22 = (float *)(FIELD_U32(v13, 16) + 4 * FIELD_U8(v13, 31));
          v18[4] = *v22;
          v23 = *((_DWORD *)v22 + 1);
          v18[6] = v22[2];
          *((_DWORD *)v18 + 5) = v23;
          break;
        case 0x100000:
LABEL_11:
          v20 = (float *)(FIELD_U32(v13, 16) + 4 * FIELD_U8(v13, 28));
          v18[8] = *v20;
          v21 = *((_DWORD *)v20 + 1);
          v18[10] = v20[2];
          *((_DWORD *)v18 + 9) = v21;
          v18[4] = *(float *)(FIELD_U32(v13, 16) + 4 * FIELD_U8(v13, 31));
          break;
      }
      sub_608727FC(v13, (int)v18, FIELD_U32(a1, 32) + 12 * v9, v5);
      v24 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 88) + 24) + 32 * v45 + 52) & 0x300000;
      switch ( v24 )
      {
        case 0x200000:
          v25 = v18 + 6;
          v26 = v18 + 4;
          v18[4] = -v18[4];
          v18[5] = -v18[5];
          goto LABEL_21;
        case 0x100000:
          v18[4] = -v18[4];
          v18[8] = v18[8] + v11;
LABEL_20:
          v25 = v18 + 10;
          v26 = v18 + 8;
          v18[9] = -v18[9];
LABEL_21:
          v26[2] = -*v25;
          break;
        case 0:
          v18[4] = -v18[4];
          goto LABEL_20;
      }
LABEL_22:
      ++v10;
      v9 += v14;
      v7 += 48;
      v8 += 40;
    }
    while ( v6 != v10 );
  }
}
