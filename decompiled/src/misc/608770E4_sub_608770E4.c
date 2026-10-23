/* sub_608770E4
 * address: 0x608770E4   size: 1580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608770E4(int a1)
{
  float *v2; // r2
  float *v3; // r1
  int v4; // r0
  float v5; // s16
  int v6; // r12
  float *v7; // r5
  int v8; // r6
  int v9; // r7
  int v10; // r8
  int v11; // r9
  float v12; // s18
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // lr
  float *v18; // r11
  int v19; // r3
  int v20; // r12
  int v21; // r4
  int v22; // r3
  float *v23; // r4
  float *v24; // r0
  int v25; // r3
  float *v26; // r3
  float *v27; // r0
  int v28; // r4
  int v29; // r0
  float *v30; // r4
  float *v31; // r1
  int v32; // r2
  float v33; // s4
  float v34; // s6
  float v35; // s8
  int v36; // r0
  __int64 v37; // d1
  float v38; // s10
  float v39; // s12
  float v40; // s14
  float v41; // s5
  int v42; // r0
  float *v43; // r0
  float *v44; // r1
  float *v45; // r7
  int v46; // r6
  int v47; // r11
  int v48; // r5
  float v49; // s18
  int v50; // r1
  int v51; // r9
  int v52; // r0
  float *v53; // r8
  int v54; // r4
  int v55; // r12
  int v56; // r3
  int v57; // r2
  float *v58; // r3
  float *v59; // r1
  int v60; // r2
  float *v61; // r3
  float *v62; // r1
  int v63; // r2
  float *v64; // r2
  float *v65; // r9
  int v66; // r1
  float v67; // s4
  float v68; // s6
  float v69; // s8
  int v70; // r0
  __int64 v71; // d1
  float v72; // s10
  float v73; // s12
  float v74; // s14
  float v75; // s5
  int v76; // r0
  float *v77; // r0
  float *v78; // r1
  int v79; // [sp+4h] [bp-4Ch]
  int v80; // [sp+4h] [bp-4Ch]
  int v81; // [sp+8h] [bp-48h]
  int v82; // [sp+8h] [bp-48h]
  int v83; // [sp+Ch] [bp-44h]
  int v84; // [sp+10h] [bp-40h]
  int v85; // [sp+10h] [bp-40h]
  float *v86; // [sp+14h] [bp-3Ch]

  v2 = *(float **)(a1 + 48);
  v3 = *(float **)(a1 + 4);
  v4 = FIELD_U32(a1, 40);
  v86 = v2;
  v5 = *v3;
  if ( v4 <= 0 )
  {
    v6 = FIELD_U16(a1, 64);
    goto LABEL_30;
  }
  v6 = FIELD_U16(a1, 64);
  if ( v4 > FIELD_U32(a1, 36) )
  {
LABEL_30:
    if ( !v6 )
      return;
    v45 = v2;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v85 = v6;
    v49 = nn__util__FloatPi;
    while ( 1 )
    {
      v50 = FIELD_U32(a1, 56);
      if ( (*(_DWORD *)(v50 + 4 * v48) & 0x40000000) != 0 )
        goto LABEL_53;
      v51 = 0;
      v52 = FIELD_U32(a1, 72) + v46;
      if ( (FIELD_U8(a1, 80) & 0x40) != 0 )
      {
        v55 = FIELD_U32(a1, 88);
        v53 = v45;
        v54 = v48;
        v56 = *(__int16 *)(FIELD_U32(v55, 56) + 2 * (*(_DWORD *)(v50 + 4 * v48) & 0x7FFF));
        if ( v56 > -1 )
        {
          v51 = 1;
          v54 = (*(_DWORD *)(v50 + 4 * v56) >> 15) & 0x7FFF;
          v53 = &v86[12 * v54];
          v57 = *(_DWORD *)(FIELD_U32(v55, 24) + 96 * v54 + 52) & 0x300000;
          switch ( v57 )
          {
            case 0:
              goto LABEL_39;
            case 0x200000:
              v61 = (float *)(FIELD_U32(v52, 16) + 4 * FIELD_U8(v52, 31));
              v62 = &v86[12 * v54];
              v62[4] = *v61;
              v63 = *((_DWORD *)v61 + 1);
              v62[6] = v61[2];
              *((_DWORD *)v62 + 5) = v63;
              break;
            case 0x100000:
LABEL_39:
              v58 = (float *)(FIELD_U32(v52, 16) + 4 * FIELD_U8(v52, 28));
              v59 = &v86[12 * v54];
              v59[8] = *v58;
              v60 = *((_DWORD *)v58 + 1);
              v59[10] = v58[2];
              *((_DWORD *)v59 + 9) = v60;
              v59[4] = *(float *)(FIELD_U32(v52, 16) + 4 * FIELD_U8(v52, 31));
              break;
          }
        }
      }
      else
      {
        v53 = v45;
        v54 = v48;
      }
      if ( (FIELD_U8(v52, 25) & 0xE0) != 0 )
      {
        v64 = (float *)(FIELD_U32(v52, 16) + 4 * FIELD_U8(v52, 31));
        v82 = v51;
        v65 = &v86[12 * v54];
        v65[4] = *v64;
        v66 = *((_DWORD *)v64 + 1);
        v65[6] = v64[2];
        *((_DWORD *)v65 + 5) = v66;
        sub_6087278C(v52, (int)v53, v5);
        v67 = v65[4];
        v68 = v65[5];
        v69 = v65[6];
        v70 = FIELD_U32(a1, 84) + v47;
        v71 = FIELD_U64(v70, 8);
        v72 = (float)((float)(*(float *)v70 * v68) + (float)(v69 * *((float *)&v71 + 1)))
            - (float)(v67 * FIELD_F32(v70, 4));
        v73 = (float)((float)(*((float *)&v71 + 1) * v68) + (float)(v67 * *(float *)&v71))
            - (float)(v69 * *(float *)v70);
        v74 = (float)((float)(FIELD_F32(v70, 4) * v68) + (float)(v67 * *(float *)v70)) + (float)(v69 * *(float *)&v71);
        v75 = (float)((float)(*((float *)&v71 + 1) * v67) + (float)(v69 * FIELD_F32(v70, 4)))
            - (float)(*(float *)&v71 * v68);
        v65[4] = (float)((float)((float)(FIELD_F32(v70, 4) * v72) - (float)(*(float *)&v71 * v73))
                       + (float)(*(float *)v70 * v74))
               + (float)(*((float *)&v71 + 1) * v75);
        v65[5] = (float)((float)((float)(v75 * FIELD_F32(v70, 8)) - (float)(*(float *)v70 * v72))
                       + (float)(v74 * FIELD_F32(v70, 4)))
               + (float)(FIELD_F32(v70, 12) * v73);
        v65[6] = (float)((float)((float)(v73 * *(float *)v70) - (float)(v75 * FIELD_F32(v70, 4)))
                       + (float)(v74 * FIELD_F32(v70, 8)))
               + (float)(v72 * FIELD_F32(v70, 12));
        v51 = v82;
      }
      else
      {
        sub_6087278C(v52, (int)v53, v5);
      }
      v6 = v85;
      if ( v51 != 1 )
        goto LABEL_53;
      v76 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 88) + 24) + 96 * v54 + 52) & 0x300000;
      switch ( v76 )
      {
        case 0x200000:
          v77 = v53 + 6;
          v78 = v53 + 4;
          v53[4] = -v53[4];
          v53[5] = -v53[5];
LABEL_52:
          v78[2] = -*v77;
          break;
        case 0x100000:
          v53[4] = -v53[4];
          v53[8] = v53[8] + v49;
          goto LABEL_51;
        case 0:
          v53[4] = -v53[4];
LABEL_51:
          v77 = v53 + 10;
          v78 = v53 + 8;
          v53[9] = -v53[9];
          goto LABEL_52;
      }
LABEL_53:
      ++v48;
      v45 += 12;
      v46 += 40;
      v47 += 16;
      if ( v48 >= v6 )
        return;
    }
  }
  if ( FIELD_U16(a1, 64) )
  {
    v7 = v2;
    v8 = 0;
    v9 = 31;
    v10 = 0;
    v11 = 0;
    v84 = FIELD_U16(a1, 64);
    v12 = nn__util__FloatPi;
    do
    {
      v13 = FIELD_U32(a1, 56);
      v14 = FIELD_U32(a1, 72);
      v15 = v14 + v9;
      v16 = *(unsigned __int8 *)(v14 + v9 - 1);
      if ( (*(_DWORD *)(v13 + 4 * v11) & 0x40000000) != 0 )
        goto LABEL_27;
      v83 = *(unsigned __int8 *)(v14 + v9 - 1);
      v17 = 0;
      if ( (FIELD_U8(a1, 80) & 0x40) != 0 )
      {
        v20 = FIELD_U32(a1, 88);
        v18 = v7;
        v21 = *(__int16 *)(FIELD_U32(v20, 56) + 2 * (*(_DWORD *)(v13 + 4 * v11) & 0x7FFF));
        v19 = v11;
        if ( v21 > -1 )
        {
          v17 = 1;
          v79 = (*(_DWORD *)(v13 + 4 * v21) >> 15) & 0x7FFF;
          v18 = &v86[12 * v79];
          v22 = *(_DWORD *)(FIELD_U32(v20, 24) + 96 * v79 + 52) & 0x300000;
          switch ( v22 )
          {
            case 0:
              goto LABEL_12;
            case 0x200000:
              v26 = (float *)(*(_DWORD *)(v14 + v9 - 15) + 4 * *(unsigned __int8 *)(v14 + v9));
              v27 = &v86[12 * v79];
              v27[4] = *v26;
              v28 = *((_DWORD *)v26 + 1);
              v27[6] = v26[2];
              *((_DWORD *)v27 + 5) = v28;
              break;
            case 0x100000:
LABEL_12:
              v23 = (float *)(*(_DWORD *)(v15 - 15) + 4 * *(unsigned __int8 *)(v15 - 3));
              v24 = &v86[12 * v79];
              v24[8] = *v23;
              v25 = *((_DWORD *)v23 + 1);
              v24[10] = v23[2];
              *((_DWORD *)v24 + 9) = v25;
              v24[4] = *(float *)(*(_DWORD *)(v15 - 15) + 4 * *(unsigned __int8 *)(v14 + v9));
              break;
          }
          v19 = v79;
        }
      }
      else
      {
        v18 = v7;
        v19 = v11;
      }
      v81 = v17;
      v29 = v15 - 31;
      v80 = v19;
      if ( (*(_BYTE *)(v15 - 6) & 0xE0) != 0 )
      {
        v30 = &v86[12 * v19];
        v31 = (float *)(*(_DWORD *)(v14 + v9 - 15) + 4 * *(unsigned __int8 *)(v14 + v9));
        v30[4] = *v31;
        v32 = *((_DWORD *)v31 + 1);
        v30[6] = v31[2];
        *((_DWORD *)v30 + 5) = v32;
        sub_608727FC(v29, (int)v18, FIELD_U32(a1, 32) + 12 * v10, v5);
        v33 = v30[4];
        v34 = v30[5];
        v35 = v30[6];
        v36 = FIELD_U32(a1, 84) + v8;
        v37 = FIELD_U64(v36, 8);
        v38 = (float)((float)(*(float *)v36 * v34) + (float)(v35 * *((float *)&v37 + 1)))
            - (float)(v33 * FIELD_F32(v36, 4));
        v39 = (float)((float)(*((float *)&v37 + 1) * v34) + (float)(v33 * *(float *)&v37))
            - (float)(v35 * *(float *)v36);
        v40 = (float)((float)(FIELD_F32(v36, 4) * v34) + (float)(v33 * *(float *)v36)) + (float)(v35 * *(float *)&v37);
        v41 = (float)((float)(*((float *)&v37 + 1) * v33) + (float)(v35 * FIELD_F32(v36, 4)))
            - (float)(*(float *)&v37 * v34);
        v30[4] = (float)((float)((float)(FIELD_F32(v36, 4) * v38) - (float)(*(float *)&v37 * v39))
                       + (float)(*(float *)v36 * v40))
               + (float)(*((float *)&v37 + 1) * v41);
        v30[5] = (float)((float)((float)(v41 * FIELD_F32(v36, 8)) - (float)(*(float *)v36 * v38))
                       + (float)(v40 * FIELD_F32(v36, 4)))
               + (float)(FIELD_F32(v36, 12) * v39);
        v30[6] = (float)((float)((float)(v39 * *(float *)v36) - (float)(v41 * FIELD_F32(v36, 4)))
                       + (float)(v40 * FIELD_F32(v36, 8)))
               + (float)(v38 * FIELD_F32(v36, 12));
      }
      else
      {
        sub_608727FC(v29, (int)v18, FIELD_U32(a1, 32) + 12 * v10, v5);
      }
      v6 = v84;
      v16 = v83;
      if ( v81 != 1 )
        goto LABEL_27;
      v42 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 88) + 24) + 96 * v80 + 52) & 0x300000;
      switch ( v42 )
      {
        case 0x200000:
          v43 = v18 + 6;
          v44 = v18 + 4;
          v18[4] = -v18[4];
          v18[5] = -v18[5];
          goto LABEL_26;
        case 0x100000:
          v18[4] = -v18[4];
          v18[8] = v18[8] + v12;
          goto LABEL_24;
        case 0:
          v18[4] = -v18[4];
LABEL_24:
          v43 = v18 + 10;
          v44 = v18 + 8;
          v18[9] = -v18[9];
LABEL_26:
          v44[2] = -*v43;
          break;
      }
LABEL_27:
      ++v11;
      v10 += v16;
      v7 += 12;
      v9 += 40;
      v8 += 16;
    }
    while ( v6 != v11 );
  }
}
