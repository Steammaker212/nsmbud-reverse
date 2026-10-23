/* sub_60876698
 * address: 0x60876698   size: 1620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60876698(int a1)
{
  int v2; // r2
  float *v3; // r1
  int v4; // r0
  float v5; // s16
  int v6; // r12
  int v7; // r5
  int v8; // r6
  int v9; // r7
  int v10; // r8
  int v11; // r9
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // lr
  int v17; // r11
  int v18; // r3
  int v19; // r12
  int v20; // r4
  int v21; // r3
  _DWORD *v22; // r4
  _DWORD *v23; // r0
  int v24; // r12
  int v25; // r3
  _DWORD *v26; // r3
  _DWORD *v27; // r0
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
  float v44; // s0
  float *v45; // r11
  int v46; // t1
  int v47; // r1
  int v48; // r7
  int v49; // r6
  int v50; // r11
  int v51; // r5
  int v52; // r1
  int v53; // r9
  int v54; // r0
  int v55; // r8
  int v56; // r4
  int v57; // r12
  int v58; // r3
  int v59; // r2
  _DWORD *v60; // r3
  _DWORD *v61; // r1
  int v62; // r12
  int v63; // r2
  _DWORD *v64; // r3
  _DWORD *v65; // r1
  int v66; // r2
  float *v67; // r2
  float *v68; // r9
  int v69; // r1
  float v70; // s4
  float v71; // s6
  float v72; // s8
  int v73; // r0
  __int64 v74; // d1
  float v75; // s10
  float v76; // s12
  float v77; // s14
  float v78; // s5
  int v79; // r0
  float *v80; // r0
  float v81; // s0
  float *v82; // r8
  int v83; // t1
  int v84; // r1
  int v85; // [sp+4h] [bp-44h]
  int v86; // [sp+4h] [bp-44h]
  int v87; // [sp+8h] [bp-40h]
  int v88; // [sp+8h] [bp-40h]
  int v89; // [sp+Ch] [bp-3Ch]
  int v90; // [sp+10h] [bp-38h]
  int v91; // [sp+10h] [bp-38h]
  int v92; // [sp+14h] [bp-34h]

  v2 = FIELD_U32(a1, 48);
  v3 = *(float **)(a1 + 4);
  v4 = FIELD_U32(a1, 40);
  v92 = v2;
  v5 = *v3;
  if ( v4 <= 0 )
  {
    v6 = FIELD_U16(a1, 64);
    goto LABEL_29;
  }
  v6 = FIELD_U16(a1, 64);
  if ( v4 > FIELD_U32(a1, 36) )
  {
LABEL_29:
    if ( !v6 )
      return;
    v48 = v2;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v91 = v6;
    while ( 1 )
    {
      v52 = FIELD_U32(a1, 56);
      if ( (*(_DWORD *)(v52 + 4 * v51) & 0x40000000) != 0 )
        goto LABEL_51;
      v53 = 0;
      v54 = FIELD_U32(a1, 72) + v49;
      if ( (FIELD_U8(a1, 80) & 0x40) != 0 )
      {
        v57 = FIELD_U32(a1, 88);
        v55 = v48;
        v56 = v51;
        v58 = *(__int16 *)(FIELD_U32(v57, 56) + 2 * (*(_DWORD *)(v52 + 4 * v51) & 0x7FFF));
        if ( v58 > -1 )
        {
          v53 = 1;
          v56 = (*(_DWORD *)(v52 + 4 * v58) >> 15) & 0x7FFF;
          v55 = v92 + 48 * v56;
          v59 = *(_DWORD *)(FIELD_U32(v57, 24) + 96 * v56 + 52) & 0x300000;
          switch ( v59 )
          {
            case 0:
              goto LABEL_38;
            case 0x200000:
              v64 = (_DWORD *)(FIELD_U32(v54, 16) + 4 * FIELD_U8(v54, 31));
              v65 = (_DWORD *)(v92 + 48 * v56);
              v65[4] = *v64;
              v66 = v64[1];
              v65[6] = v64[2];
              v65[5] = v66;
              break;
            case 0x100000:
LABEL_38:
              v60 = (_DWORD *)(FIELD_U32(v54, 16) + 4 * FIELD_U8(v54, 28));
              v61 = (_DWORD *)(v92 + 48 * v56);
              v61[8] = *v60;
              v62 = v60[1];
              v63 = v60[2];
              v61[11] = v60[3];
              v61[10] = v63;
              v61[9] = v62;
              v61[4] = *(_DWORD *)(FIELD_U32(v54, 16) + 4 * FIELD_U8(v54, 31));
              break;
          }
        }
      }
      else
      {
        v55 = v48;
        v56 = v51;
      }
      if ( (FIELD_U8(v54, 25) & 0xE0) != 0 )
      {
        v67 = (float *)(FIELD_U32(v54, 16) + 4 * FIELD_U8(v54, 31));
        v88 = v53;
        v68 = (float *)(v92 + 48 * v56);
        v68[4] = *v67;
        v69 = *((_DWORD *)v67 + 1);
        v68[6] = v67[2];
        *((_DWORD *)v68 + 5) = v69;
        sub_6087278C(v54, v55, v5);
        v70 = v68[4];
        v71 = v68[5];
        v72 = v68[6];
        v73 = FIELD_U32(a1, 84) + v50;
        v74 = FIELD_U64(v73, 8);
        v75 = (float)((float)(*(float *)v73 * v71) + (float)(v72 * *((float *)&v74 + 1)))
            - (float)(v70 * FIELD_F32(v73, 4));
        v76 = (float)((float)(*((float *)&v74 + 1) * v71) + (float)(v70 * *(float *)&v74))
            - (float)(v72 * *(float *)v73);
        v77 = (float)((float)(FIELD_F32(v73, 4) * v71) + (float)(v70 * *(float *)v73)) + (float)(v72 * *(float *)&v74);
        v78 = (float)((float)(*((float *)&v74 + 1) * v70) + (float)(v72 * FIELD_F32(v73, 4)))
            - (float)(*(float *)&v74 * v71);
        v68[4] = (float)((float)((float)(FIELD_F32(v73, 4) * v75) - (float)(*(float *)&v74 * v76))
                       + (float)(*(float *)v73 * v77))
               + (float)(*((float *)&v74 + 1) * v78);
        v68[5] = (float)((float)((float)(v78 * FIELD_F32(v73, 8)) - (float)(*(float *)v73 * v75))
                       + (float)(v77 * FIELD_F32(v73, 4)))
               + (float)(FIELD_F32(v73, 12) * v76);
        v68[6] = (float)((float)((float)(v76 * *(float *)v73) - (float)(v78 * FIELD_F32(v73, 4)))
                       + (float)(v77 * FIELD_F32(v73, 8)))
               + (float)(v75 * FIELD_F32(v73, 12));
        v53 = v88;
      }
      else
      {
        sub_6087278C(v54, v55, v5);
      }
      v6 = v91;
      if ( v53 != 1 )
        goto LABEL_51;
      v79 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 88) + 24) + 96 * v56 + 52) & 0x300000;
      switch ( v79 )
      {
        case 0x200000:
          v80 = (float *)(v55 + 24);
          FIELD_F32(v55, 16) = -FIELD_F32(v55, 16);
          FIELD_F32(v55, 20) = -FIELD_F32(v55, 20);
          v81 = FIELD_F32(v55, 24);
          goto LABEL_50;
        case 0x100000:
          FIELD_F32(v55, 16) = -FIELD_F32(v55, 16);
          v83 = FIELD_U32(v55, 44);
          v82 = (float *)(v55 + 44);
          v81 = *(v82 - 3);
          v84 = *((_DWORD *)v82 - 2);
          *((_DWORD *)v82 - 3) = v83;
          v80 = v82;
          *(v82 - 2) = -*(v82 - 1);
          *((_DWORD *)v82 - 1) = v84;
          goto LABEL_50;
        case 0:
          v80 = (float *)(v55 + 40);
          FIELD_F32(v55, 16) = -FIELD_F32(v55, 16);
          FIELD_F32(v55, 36) = -FIELD_F32(v55, 36);
          v81 = FIELD_F32(v55, 40);
LABEL_50:
          *v80 = -v81;
          break;
      }
LABEL_51:
      ++v51;
      v48 += 48;
      v49 += 40;
      v50 += 16;
      if ( v51 >= v6 )
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
    v90 = FIELD_U16(a1, 64);
    do
    {
      v12 = FIELD_U32(a1, 56);
      v13 = FIELD_U32(a1, 72);
      v14 = v13 + v9;
      v15 = *(unsigned __int8 *)(v13 + v9 - 1);
      if ( (*(_DWORD *)(v12 + 4 * v11) & 0x40000000) != 0 )
        goto LABEL_26;
      v89 = *(unsigned __int8 *)(v13 + v9 - 1);
      v16 = 0;
      if ( (FIELD_U8(a1, 80) & 0x40) != 0 )
      {
        v19 = FIELD_U32(a1, 88);
        v17 = v7;
        v20 = *(__int16 *)(FIELD_U32(v19, 56) + 2 * (*(_DWORD *)(v12 + 4 * v11) & 0x7FFF));
        v18 = v11;
        if ( v20 > -1 )
        {
          v16 = 1;
          v85 = (*(_DWORD *)(v12 + 4 * v20) >> 15) & 0x7FFF;
          v17 = v92 + 48 * v85;
          v21 = *(_DWORD *)(FIELD_U32(v19, 24) + 96 * v85 + 52) & 0x300000;
          switch ( v21 )
          {
            case 0:
              goto LABEL_12;
            case 0x200000:
              v26 = (_DWORD *)(*(_DWORD *)(v13 + v9 - 15) + 4 * *(unsigned __int8 *)(v13 + v9));
              v27 = (_DWORD *)(v92 + 48 * v85);
              v27[4] = *v26;
              v28 = v26[1];
              v27[6] = v26[2];
              v27[5] = v28;
              break;
            case 0x100000:
LABEL_12:
              v22 = (_DWORD *)(*(_DWORD *)(v14 - 15) + 4 * *(unsigned __int8 *)(v14 - 3));
              v23 = (_DWORD *)(v92 + 48 * v85);
              v23[8] = *v22;
              v24 = v22[1];
              v25 = v22[2];
              v23[11] = v22[3];
              v23[10] = v25;
              v23[9] = v24;
              v23[4] = *(_DWORD *)(*(_DWORD *)(v14 - 15) + 4 * *(unsigned __int8 *)(v13 + v9));
              break;
          }
          v18 = v85;
        }
      }
      else
      {
        v17 = v7;
        v18 = v11;
      }
      v87 = v16;
      v29 = v14 - 31;
      v86 = v18;
      if ( (*(_BYTE *)(v14 - 6) & 0xE0) != 0 )
      {
        v30 = (float *)(v92 + 48 * v18);
        v31 = (float *)(*(_DWORD *)(v13 + v9 - 15) + 4 * *(unsigned __int8 *)(v13 + v9));
        v30[4] = *v31;
        v32 = *((_DWORD *)v31 + 1);
        v30[6] = v31[2];
        *((_DWORD *)v30 + 5) = v32;
        sub_608727FC(v29, v17, FIELD_U32(a1, 32) + 12 * v10, v5);
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
        sub_608727FC(v29, v17, FIELD_U32(a1, 32) + 12 * v10, v5);
      }
      v6 = v90;
      v15 = v89;
      if ( v87 != 1 )
        goto LABEL_26;
      v42 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 88) + 24) + 96 * v86 + 52) & 0x300000;
      switch ( v42 )
      {
        case 0x200000:
          v43 = (float *)(v17 + 24);
          FIELD_F32(v17, 16) = -FIELD_F32(v17, 16);
          FIELD_F32(v17, 20) = -FIELD_F32(v17, 20);
          v44 = FIELD_F32(v17, 24);
          goto LABEL_25;
        case 0x100000:
          FIELD_F32(v17, 16) = -FIELD_F32(v17, 16);
          v46 = FIELD_U32(v17, 44);
          v45 = (float *)(v17 + 44);
          v44 = *(v45 - 3);
          v47 = *((_DWORD *)v45 - 2);
          *((_DWORD *)v45 - 3) = v46;
          v43 = v45;
          *(v45 - 2) = -*(v45 - 1);
          *((_DWORD *)v45 - 1) = v47;
          goto LABEL_25;
        case 0:
          v43 = (float *)(v17 + 40);
          FIELD_F32(v17, 16) = -FIELD_F32(v17, 16);
          FIELD_F32(v17, 36) = -FIELD_F32(v17, 36);
          v44 = FIELD_F32(v17, 40);
LABEL_25:
          *v43 = -v44;
          break;
      }
LABEL_26:
      ++v11;
      v10 += v15;
      v7 += 48;
      v9 += 40;
      v8 += 16;
    }
    while ( v6 != v11 );
  }
}
