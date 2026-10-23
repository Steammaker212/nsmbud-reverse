/* sub_608289C4
 * address: 0x608289C4   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608289C4(int a1, int a2)
{
  int v3; // r11
  _DWORD *v4; // r4
  _BYTE *v5; // r8
  _DWORD *v6; // r6
  int v7; // r9
  int v8; // r2
  int v9; // r3
  int v10; // r4
  int v11; // r5
  int v12; // r7
  int v13; // r3
  int v14; // r4
  int v15; // r5
  int v16; // r7
  int v17; // r3
  int v18; // r5
  int v19; // r7
  int v20; // r3
  int v21; // r4
  int v22; // r5
  int v23; // r7
  int v24; // r3
  int v25; // r4
  int v26; // r5
  int v27; // r7
  int v28; // r0
  int i; // r11
  int v30; // r0
  int v31; // r1
  int v32; // r1
  int v33; // r2
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int v40; // r7
  int v41; // r1
  int v42; // r2
  int v43; // r3
  int v44; // r7
  int v45; // r1
  int v46; // r2
  int v47; // r3
  int v48; // r7
  int result; // r0
  int v50; // r1
  int v51; // r2
  int v52; // r3
  int v53; // r7
  _DWORD *v55; // [sp+10h] [bp-1C0h]
  _DWORD *v56; // [sp+14h] [bp-1BCh]
  int v57; // [sp+1Ch] [bp-1B4h]
  _BYTE v58[192]; // [sp+20h] [bp-1B0h] BYREF
  int v59; // [sp+E0h] [bp-F0h]
  int v60; // [sp+E4h] [bp-ECh]
  int v61; // [sp+E8h] [bp-E8h]
  int v62; // [sp+ECh] [bp-E4h]
  int v63; // [sp+F0h] [bp-E0h]
  int v64; // [sp+F4h] [bp-DCh]
  int v65; // [sp+F8h] [bp-D8h]
  int v66; // [sp+FCh] [bp-D4h]
  int v67; // [sp+100h] [bp-D0h]
  int v68; // [sp+104h] [bp-CCh]
  int v69; // [sp+108h] [bp-C8h]
  int v70; // [sp+10Ch] [bp-C4h]
  int v71; // [sp+110h] [bp-C0h]
  int v72; // [sp+114h] [bp-BCh]
  int v73; // [sp+118h] [bp-B8h]
  int v74; // [sp+11Ch] [bp-B4h]
  int v75; // [sp+120h] [bp-B0h]
  int v76; // [sp+124h] [bp-ACh]
  int v77; // [sp+128h] [bp-A8h]
  int v78; // [sp+12Ch] [bp-A4h]
  int v79; // [sp+130h] [bp-A0h]
  int v80; // [sp+134h] [bp-9Ch]
  int v81; // [sp+138h] [bp-98h]
  int v82; // [sp+13Ch] [bp-94h]
  _DWORD v83[6]; // [sp+144h] [bp-8Ch]
  _BYTE v84[8]; // [sp+15Ch] [bp-74h]
  _DWORD v85[6]; // [sp+164h] [bp-6Ch]
  _DWORD v86[6]; // [sp+17Ch] [bp-54h]
  int v87[15]; // [sp+194h] [bp-3Ch] BYREF

  v3 = dword_60C99DEC;
  v4 = (_DWORD *)dword_60CC6D78;
  v5 = (_BYTE *)(dword_60CC6D78 + 796);
  sub_603F774C(
    dword_60CC6D78 + 796,
    FIELD_U8(dword_60CC6D78, 428),
    FIELD_U8(dword_60CC6D78, 440));
  v6 = (_DWORD *)(v3 + 16);
  sub_603FD0B4((_BYTE *)(v3 + 16));
  v7 = FIELD_U32(v3, 472);
  v84[0] = FIELD_U8(v3, 36);
  v86[0] = FIELD_U32(v3, 40);
  v87[0] = FIELD_U32(v3, 48);
  v85[0] = FIELD_U32(v3, 96);
  v83[0] = FIELD_U32(v3, 44);
  v84[1] = FIELD_U8(v3, 108);
  v86[1] = FIELD_U32(v3, 112);
  v87[1] = FIELD_U32(v3, 120);
  v85[1] = FIELD_U32(v3, 168);
  v83[1] = FIELD_U32(v3, 116);
  v84[2] = FIELD_U8(v3, 180);
  v86[2] = FIELD_U32(v3, 184);
  v87[2] = FIELD_U32(v3, 192);
  v85[2] = FIELD_U32(v3, 240);
  v83[2] = FIELD_U32(v3, 188);
  v84[3] = FIELD_U8(v3, 252);
  v86[3] = FIELD_U32(v3, 256);
  v87[3] = FIELD_U32(v3, 264);
  v85[3] = FIELD_U32(v3, 312);
  v83[3] = FIELD_U32(v3, 260);
  v84[4] = FIELD_U8(v3, 324);
  v86[4] = FIELD_U32(v3, 328);
  v87[4] = FIELD_U32(v3, 336);
  v85[4] = FIELD_U32(v3, 384);
  v83[4] = FIELD_U32(v3, 332);
  v84[5] = FIELD_U8(v3, 396);
  v86[5] = FIELD_U32(v3, 400);
  v87[5] = FIELD_U32(v3, 408);
  v85[5] = FIELD_U32(v3, 456);
  v57 = (int)v4;
  v83[5] = FIELD_U32(v3, 404);
  v56 = v4 + 24622;
  v8 = v4[24622];
  v9 = v4[24623];
  v10 = v4[24624];
  v11 = v56[3];
  v12 = v56[4];
  v73 = v8;
  v74 = v9;
  v75 = v10;
  v76 = v11;
  v77 = v12;
  v13 = v56[6];
  v14 = v56[7];
  v15 = v56[8];
  v16 = v56[9];
  v78 = v56[5];
  v79 = v13;
  v80 = v14;
  v81 = v15;
  v82 = v16;
  v55 = (_DWORD *)(v3 + 596);
  v17 = FIELD_U32(v3, 600);
  v18 = FIELD_U32(v3, 604);
  v19 = FIELD_U32(v3, 608);
  v59 = FIELD_U32(v3, 596);
  v60 = v17;
  v61 = v18;
  v62 = v19;
  v20 = FIELD_U32(v3, 616);
  v21 = FIELD_U32(v3, 620);
  v22 = FIELD_U32(v3, 624);
  v23 = FIELD_U32(v3, 628);
  v63 = FIELD_U32(v3, 612);
  v64 = v20;
  v65 = v21;
  v66 = v22;
  v67 = v23;
  v24 = FIELD_U32(v3, 636);
  v25 = FIELD_U32(v3, 640);
  v26 = FIELD_U32(v3, 644);
  v27 = FIELD_U32(v3, 648);
  v68 = FIELD_U32(v3, 632);
  v69 = v24;
  v70 = v25;
  v71 = v26;
  v72 = v27;
  memset(v58, 0, 185);
  sub_603F78A8((int)v5, (int)v58);
  sub_60828180(a1, a2);
  sub_603FD238(v3 + 16);
  v28 = 999999999;
  if ( v7 < 999999999 )
    v28 = v7;
  if ( v7 < 0 )
    v28 = 0;
  FIELD_U32(v3, 472) = v28;
  sub_603FCCE4((_DWORD *)(v3 + 16), v87);
  for ( i = 0; i != 6; ++i )
  {
    v30 = sub_603FCBD8(v6, v87[i]);
    if ( v30 )
    {
      v31 = (unsigned __int8)v84[i];
      *(_BYTE *)v30 = v31;
      if ( v31 )
      {
        FIELD_U32(v30, 4) = 5;
        FIELD_U32(v30, 8) = 0;
        FIELD_U32(v30, 60) = v85[i];
        FIELD_U8(v30, 30) = 0;
      }
      else
      {
        v32 = v86[i];
        v33 = v32;
        if ( v32 >= 99 )
          v33 = 99;
        if ( v32 < 0 )
          v33 = 0;
        FIELD_U32(v30, 4) = v33;
        FIELD_U32(v30, 8) = v83[i];
      }
    }
  }
  sub_603F7868((int)v5, (int)v58);
  sub_603FD36C((int)v6, 0);
  sub_603F7548(v5);
  sub_6081F164(v57);
  sub_6081F170(v57);
  v34 = v60;
  v35 = v61;
  v36 = v62;
  *v55 = v59;
  v55[1] = v34;
  v55[2] = v35;
  v55[3] = v36;
  v37 = v64;
  v38 = v65;
  v39 = v66;
  v40 = v67;
  v55[4] = v63;
  v55[5] = v37;
  v55[6] = v38;
  v55[7] = v39;
  v55[8] = v40;
  v41 = v69;
  v42 = v70;
  v43 = v71;
  v44 = v72;
  v55[9] = v68;
  v55[10] = v41;
  v55[11] = v42;
  v55[12] = v43;
  v55[13] = v44;
  v45 = v74;
  v46 = v75;
  v47 = v76;
  v48 = v77;
  *v56 = v73;
  v56[1] = v45;
  v56[2] = v46;
  v56[3] = v47;
  v56[4] = v48;
  result = v78;
  v50 = v79;
  v51 = v80;
  v52 = v81;
  v53 = v82;
  v56[5] = v78;
  v56[6] = v50;
  v56[7] = v51;
  v56[8] = v52;
  v56[9] = v53;
  return result;
}
