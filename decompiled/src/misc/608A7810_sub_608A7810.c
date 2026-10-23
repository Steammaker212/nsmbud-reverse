/* sub_608A7810
 * address: 0x608A7810   size: 1372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608A7810(int a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  _DWORD *v8; // r10
  int v9; // r2
  int v10; // r5
  int v11; // r11
  int v12; // r6
  int v13; // r5
  _DWORD *v14; // r0
  int v15; // r1
  int v16; // r2
  _DWORD *v17; // r6
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r2
  int v22; // r3
  int v23; // r5
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r4
  int v28; // r9
  int v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r5
  float v32; // s0
  char *v33; // r5
  float v34; // s0
  float v35; // r0
  int v36; // r11
  int v37; // r1
  int v38; // r5
  int v39; // r4
  int v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // r1
  int v44; // r2
  int v45; // r3
  int v46; // r2
  int v47; // r3
  int v48; // r6
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int v52; // r9
  int v53; // r5
  int v54; // r8
  _DWORD *v55; // r0
  _DWORD *v56; // r7
  float v57; // s0
  char *v58; // r7
  float v59; // r0
  int v60; // r1
  int v61; // r5
  int v62; // [sp+Ch] [bp-9Ch]
  int v63; // [sp+10h] [bp-98h]
  int v64; // [sp+14h] [bp-94h]
  int v65; // [sp+18h] [bp-90h]
  int v66; // [sp+1Ch] [bp-8Ch]
  char v67; // [sp+20h] [bp-88h]
  char v68; // [sp+21h] [bp-87h]
  char v69; // [sp+22h] [bp-86h]
  char v70; // [sp+23h] [bp-85h]
  char v71; // [sp+24h] [bp-84h]
  char v72; // [sp+25h] [bp-83h]
  char v73; // [sp+26h] [bp-82h]
  char v74; // [sp+27h] [bp-81h]
  char v75; // [sp+28h] [bp-80h]
  char v76; // [sp+29h] [bp-7Fh]
  char v77; // [sp+2Ah] [bp-7Eh]
  char v78; // [sp+2Bh] [bp-7Dh]
  char v79; // [sp+2Ch] [bp-7Ch]
  char v80; // [sp+2Dh] [bp-7Bh]
  char v81; // [sp+2Eh] [bp-7Ah]
  char v82; // [sp+2Fh] [bp-79h]
  _DWORD v83[16]; // [sp+30h] [bp-78h] BYREF
  int v84; // [sp+70h] [bp-38h] BYREF
  int v85; // [sp+74h] [bp-34h]
  int v86; // [sp+78h] [bp-30h]
  int v87; // [sp+7Ch] [bp-2Ch]

  v8 = (_DWORD *)a3[183];
  if ( v8[9] )
  {
    v9 = a3[87];
    v10 = 0;
    v11 = FIELD_U32(a6, 36);
    v12 = FIELD_U32(v9, 580);
    if ( a4 != 3 )
      v10 = *(_DWORD *)(v9 + 4 * a4 + 584);
    if ( sub_6088ACD0(a2, a3, a4, v10, a5, a6) == 1 )
    {
      v64 = v12;
      v63 = v10;
      v13 = *(_DWORD *)(a3[87] + 704);
      v14 = (_DWORD *)sub_608966EC((int)(a3 + 344), v8[10]);
      v65 = a2;
      sub_60835D28(a2, v13, v14, 80, a3[364]);
      v15 = v8[6];
      v16 = v8[7];
      v83[1] = v8[5];
      v83[2] = v15;
      v83[3] = v16;
      v17 = v8 + 4;
      v83[0] = v8[4];
      v18 = v8[1];
      v19 = v8[2];
      v20 = v8[3];
      v83[4] = *v8;
      v83[5] = v18;
      v83[6] = v19;
      v83[7] = v20;
      v21 = FIELD_U32(dword_60CC8294, 8);
      v22 = FIELD_U32(dword_60CC8294, 12);
      v23 = FIELD_U32(dword_60CC8294, 16);
      v83[8] = FIELD_U32(dword_60CC8294, 4);
      v83[9] = v21;
      v83[10] = v22;
      v83[11] = v23;
      v24 = FIELD_U32(dword_60CC8294, 4);
      v25 = FIELD_U32(dword_60CC8294, 8);
      v26 = FIELD_U32(dword_60CC8294, 12);
      v83[15] = FIELD_U32(dword_60CC8294, 16);
      v83[12] = v24;
      v83[13] = v25;
      v83[14] = v26;
      v27 = v8[9];
      v28 = a3[17];
      v29 = *(_DWORD *)(a3[34] + 2232);
      v87 = 0;
      v86 = 0;
      v85 = 0;
      v84 = 0;
      v62 = v29;
      v30 = (_DWORD *)sub_60895D14(v11, &v84, 96);
      v31 = v30;
      v66 = v11;
      if ( v30 )
      {
        qmemcpy(v30, v83, 0x40u);
        v31[16] = v28;
        v32 = (double)v27 * 0.5;
        *((_BYTE *)v31 + 68) = LOBYTE(v32);
        v33 = (char *)(v31 + 17);
        *((_WORD *)v33 + 1) = HIWORD(v32);
        v33[1] = BYTE1(v32);
        v34 = (float)v62;
        v33[5] = 0;
        v33[4] = 0;
        v33[7] = 0;
        v33[6] = 0;
        v35 = (float)v62;
        v33[8] = LOBYTE(v35);
        v33 += 8;
        *((_WORD *)v33 + 1) = HIWORD(v34);
        v33[1] = BYTE1(v34);
        v33[16] = v79;
        v33[19] = v82;
        v33[18] = v81;
        v33[17] = v80;
        v33[12] = v75;
        v33[15] = v78;
        v33[14] = v77;
        v33[13] = v76;
        v33[8] = v71;
        v33[11] = v74;
        v33[10] = v73;
        v33[9] = v72;
        v33[4] = v67;
        v33[7] = v70;
        v33[6] = v69;
        v33[5] = v68;
        v36 = v65;
        v37 = FIELD_U32(v63, 316);
        v38 = FIELD_U32(v63, 320);
        if ( v37 != -1 )
          sub_60836348(v65, v37, 0, &v84, 96);
        v39 = v64;
        if ( v38 != -1 )
          sub_60836348(v65, v38, 4, &v84, 96);
        nullsub_98();
        sub_6083558C(v65, 4, v8[9], 0);
        v17 = v8 + 4;
      }
      else
      {
        nullsub_95();
        v39 = v64;
        v36 = v65;
      }
      if ( FIELD_U32(v39, 8) == 1 )
      {
        v40 = v17[1];
        v41 = v17[2];
        v42 = v17[3];
        v83[0] = *v17;
        v83[1] = v40;
        v83[2] = v41;
        v83[3] = v42;
        v43 = v8[1];
        v44 = v8[2];
        v45 = v8[3];
        v83[4] = *v8;
        v83[5] = v43;
        v83[6] = v44;
        v83[7] = v45;
        v46 = FIELD_U32(dword_60CC8294, 8);
        v47 = FIELD_U32(dword_60CC8294, 12);
        v48 = FIELD_U32(dword_60CC8294, 16);
        v83[8] = FIELD_U32(dword_60CC8294, 4);
        v83[9] = v46;
        v83[10] = v47;
        v83[11] = v48;
        v49 = FIELD_U32(dword_60CC8294, 4);
        v50 = FIELD_U32(dword_60CC8294, 8);
        v51 = FIELD_U32(dword_60CC8294, 12);
        v83[15] = FIELD_U32(dword_60CC8294, 16);
        v83[12] = v49;
        v83[13] = v50;
        v83[14] = v51;
        v52 = v8[9];
        v53 = a3[17];
        v54 = *(_DWORD *)(a3[34] + 2232);
        v87 = 0;
        v86 = 0;
        v85 = 0;
        v84 = 0;
        v55 = (_DWORD *)sub_60895D14(v66, &v84, 96);
        v56 = v55;
        if ( v55 )
        {
          qmemcpy(v55, v83, 0x40u);
          v56[16] = v53;
          v57 = (double)v52 * 0.5;
          *((_BYTE *)v56 + 68) = LOBYTE(v57);
          v58 = (char *)(v56 + 17);
          *((_WORD *)v58 + 1) = HIWORD(v57);
          v58[1] = BYTE1(v57);
          v58[5] = 0;
          v58[4] = 0;
          v58[7] = 63;
          v58[6] = 0x80;
          v59 = (float)v54;
          v58[8] = LOBYTE(v59);
          v58 += 8;
          v58[3] = HIBYTE(COERCE_UNSIGNED_INT((float)v54));
          v58[2] = BYTE2(COERCE_UNSIGNED_INT((float)v54));
          v58[1] = BYTE1(COERCE_UNSIGNED_INT((float)v54));
          v58[16] = v79;
          v58[19] = v82;
          v58[18] = v81;
          v58[17] = v80;
          v58[12] = v75;
          v58[15] = v78;
          v58[14] = v77;
          v58[13] = v76;
          v58[8] = v71;
          v58[11] = v74;
          v58[10] = v73;
          v58[9] = v72;
          v58[4] = v67;
          v58[7] = v70;
          v58[6] = v69;
          v58[5] = v68;
          v60 = FIELD_U32(v63, 316);
          v61 = FIELD_U32(v63, 320);
          if ( v60 != -1 )
            sub_60836348(v36, v60, 0, &v84, 96);
          if ( v61 != -1 )
            sub_60836348(v36, v61, 4, &v84, 96);
          nullsub_98();
          sub_6083558C(v36, 4, v8[9], 0);
        }
        else
        {
          nullsub_95();
        }
      }
    }
  }
}
