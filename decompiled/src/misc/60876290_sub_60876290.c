/* sub_60876290
 * address: 0x60876290   size: 1032   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60876290(int a1)
{
  int v2; // r2
  float *v3; // r1
  int v4; // r0
  float v5; // s16
  int v6; // r10
  int v7; // r5
  int v8; // r7
  int v9; // r6
  int v10; // r8
  int v11; // r1
  int v12; // r0
  int v13; // r10
  int v14; // r3
  int v15; // r2
  int v16; // r4
  float *v17; // r11
  int v18; // r1
  float *v19; // r2
  int v20; // r1
  int v21; // r3
  float *v22; // r2
  int v23; // r1
  int v24; // r0
  float *v25; // r0
  float v26; // s0
  float *v27; // r11
  int v28; // t1
  int v29; // r1
  int v30; // r5
  int v31; // r7
  int v32; // r4
  float *v33; // r2
  int v34; // r1
  int v35; // r0
  float *v36; // r0
  float v37; // s0
  float *v38; // r6
  int v39; // t1
  int v40; // r1
  int v41; // r1
  int v42; // r0
  int v43; // r3
  int v44; // r2
  int v45; // r8
  float *v46; // r6
  int v47; // r1
  float *v48; // r2
  int v49; // r1
  int v50; // r3
  int v51; // [sp+0h] [bp-38h]
  int v52; // [sp+4h] [bp-34h]

  v2 = FIELD_U32(a1, 48);
  v3 = *(float **)(a1 + 4);
  v4 = FIELD_U32(a1, 40);
  v51 = v2;
  v5 = *v3;
  if ( v4 <= 0 )
  {
    v6 = FIELD_U16(a1, 64);
    goto LABEL_24;
  }
  v6 = FIELD_U16(a1, 64);
  if ( v4 > FIELD_U32(a1, 36) )
  {
LABEL_24:
    if ( !v6 )
      return;
    v30 = v2;
    v31 = 0;
    v32 = 0;
    while ( 1 )
    {
      v41 = FIELD_U32(a1, 56);
      if ( (*(_DWORD *)(v41 + 4 * v32) & 0x40000000) != 0 )
        goto LABEL_42;
      v42 = FIELD_U32(a1, 72) + v31;
      if ( (FIELD_U8(a1, 80) & 0x40) == 0
        || (v43 = FIELD_U32(a1, 88),
            v44 = *(__int16 *)(FIELD_U32(v43, 56) + 2 * (*(_DWORD *)(v41 + 4 * v32) & 0x7FFF)),
            v44 <= -1) )
      {
        sub_6087278C(v42, v30, v5);
        goto LABEL_42;
      }
      v45 = 3 * ((*(_DWORD *)(v41 + 4 * v44) >> 15) & 0x7FFF);
      v46 = (float *)(v51 + 48 * ((*(_DWORD *)(v41 + 4 * v44) >> 15) & 0x7FFF));
      v47 = *(_DWORD *)(FIELD_U32(v43, 24) + 96 * ((*(_DWORD *)(v41 + 4 * v44) >> 15) & 0x7FFF) + 52) & 0x300000;
      switch ( v47 )
      {
        case 0:
          goto LABEL_40;
        case 0x200000:
          v33 = (float *)(FIELD_U32(v42, 16) + 4 * FIELD_U8(v42, 31));
          v46[4] = *v33;
          v34 = *((_DWORD *)v33 + 1);
          v46[6] = v33[2];
          *((_DWORD *)v46 + 5) = v34;
          break;
        case 0x100000:
LABEL_40:
          v48 = (float *)(FIELD_U32(v42, 16) + 4 * FIELD_U8(v42, 28));
          v46[8] = *v48;
          v49 = *((_DWORD *)v48 + 1);
          v50 = *((_DWORD *)v48 + 2);
          v46[11] = v48[3];
          *((_DWORD *)v46 + 10) = v50;
          *((_DWORD *)v46 + 9) = v49;
          v46[4] = *(float *)(FIELD_U32(v42, 16) + 4 * FIELD_U8(v42, 31));
          break;
      }
      sub_6087278C(v42, (int)v46, v5);
      v35 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 88) + 24) + 32 * v45 + 52) & 0x300000;
      switch ( v35 )
      {
        case 0x200000:
          v36 = v46 + 6;
          v46[4] = -v46[4];
          v46[5] = -v46[5];
          v37 = v46[6];
          goto LABEL_33;
        case 0x100000:
          v46[4] = -v46[4];
          v39 = *((_DWORD *)v46 + 11);
          v38 = v46 + 11;
          v37 = *(v38 - 3);
          v40 = *((_DWORD *)v38 - 2);
          *((_DWORD *)v38 - 3) = v39;
          v36 = v38;
          *(v38 - 2) = -*(v38 - 1);
          *((_DWORD *)v38 - 1) = v40;
          goto LABEL_33;
        case 0:
          v36 = v46 + 10;
          v46[4] = -v46[4];
          v46[9] = -v46[9];
          v37 = v46[10];
LABEL_33:
          *v36 = -v37;
          break;
      }
LABEL_42:
      ++v32;
      v30 += 48;
      v31 += 40;
      if ( v32 >= v6 )
        return;
    }
  }
  if ( FIELD_U16(a1, 64) )
  {
    v7 = v2;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v52 = FIELD_U16(a1, 64);
    do
    {
      v11 = FIELD_U32(a1, 56);
      v12 = FIELD_U32(a1, 72) + v8;
      v13 = FIELD_U8(v12, 30);
      if ( (*(_DWORD *)(v11 + 4 * v10) & 0x40000000) != 0 )
        goto LABEL_21;
      if ( (FIELD_U8(a1, 80) & 0x40) == 0
        || (v14 = FIELD_U32(a1, 88),
            v15 = *(__int16 *)(FIELD_U32(v14, 56) + 2 * (*(_DWORD *)(v11 + 4 * v10) & 0x7FFF)),
            v15 <= -1) )
      {
        sub_608727FC(v12, v7, FIELD_U32(a1, 32) + 12 * v9, v5);
        goto LABEL_21;
      }
      v16 = 3 * ((*(_DWORD *)(v11 + 4 * v15) >> 15) & 0x7FFF);
      v17 = (float *)(v51 + 48 * ((*(_DWORD *)(v11 + 4 * v15) >> 15) & 0x7FFF));
      v18 = *(_DWORD *)(FIELD_U32(v14, 24) + 96 * ((*(_DWORD *)(v11 + 4 * v15) >> 15) & 0x7FFF) + 52) & 0x300000;
      switch ( v18 )
      {
        case 0:
          goto LABEL_11;
        case 0x200000:
          v22 = (float *)(FIELD_U32(v12, 16) + 4 * FIELD_U8(v12, 31));
          v17[4] = *v22;
          v23 = *((_DWORD *)v22 + 1);
          v17[6] = v22[2];
          *((_DWORD *)v17 + 5) = v23;
          break;
        case 0x100000:
LABEL_11:
          v19 = (float *)(FIELD_U32(v12, 16) + 4 * FIELD_U8(v12, 28));
          v17[8] = *v19;
          v20 = *((_DWORD *)v19 + 1);
          v21 = *((_DWORD *)v19 + 2);
          v17[11] = v19[3];
          *((_DWORD *)v17 + 10) = v21;
          *((_DWORD *)v17 + 9) = v20;
          v17[4] = *(float *)(FIELD_U32(v12, 16) + 4 * FIELD_U8(v12, 31));
          break;
      }
      sub_608727FC(v12, (int)v17, FIELD_U32(a1, 32) + 12 * v9, v5);
      v24 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 88) + 24) + 32 * v16 + 52) & 0x300000;
      switch ( v24 )
      {
        case 0x200000:
          v25 = v17 + 6;
          v17[4] = -v17[4];
          v17[5] = -v17[5];
          v26 = v17[6];
          goto LABEL_20;
        case 0x100000:
          v17[4] = -v17[4];
          v28 = *((_DWORD *)v17 + 11);
          v27 = v17 + 11;
          v26 = *(v27 - 3);
          v29 = *((_DWORD *)v27 - 2);
          *((_DWORD *)v27 - 3) = v28;
          v25 = v27;
          *(v27 - 2) = -*(v27 - 1);
          *((_DWORD *)v27 - 1) = v29;
          goto LABEL_20;
        case 0:
          v25 = v17 + 10;
          v17[4] = -v17[4];
          v17[9] = -v17[9];
          v26 = v17[10];
LABEL_20:
          *v25 = -v26;
          break;
      }
LABEL_21:
      v9 += v13;
      ++v10;
      v7 += 48;
      v8 += 40;
    }
    while ( v52 != v10 );
  }
}
