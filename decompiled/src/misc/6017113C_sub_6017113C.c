/* sub_6017113C
 * address: 0x6017113C   size: 2140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6017113C(int a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v6; // r0
  bool v7; // zf
  int v8; // r0
  int v9; // r9
  int v10; // r10
  int v11; // r0
  unsigned int v12; // r5
  int v13; // s16
  unsigned int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r7
  float v21; // r11
  int v22; // r9
  int v23; // r0
  unsigned int v24; // r2
  unsigned int v25; // r1
  int v26; // r5
  unsigned int v27; // r7
  unsigned int v28; // r2
  unsigned int v29; // r3
  int v30; // r1
  int v31; // r1
  int *v32; // r3
  int v33; // r8
  int v34; // r10
  int v35; // r11
  unsigned int v36; // r2
  int v37; // r2
  int v38; // r5
  _DWORD *v39; // r1
  int v40; // r2
  int v41; // r3
  int v42; // r1
  _DWORD *v43; // r9
  int v44; // r0
  int v45; // r0
  int v46; // r8
  float v47; // s16
  int v48; // r7
  float v49; // s0
  int v50; // r0
  unsigned int v51; // r3
  int v52; // r2
  int v53; // r1
  int v54; // r2
  _DWORD *v55; // r1
  int v56; // r5
  int v57; // r7
  int v58; // r1
  unsigned int v59; // r1
  int v60; // r1
  int v61; // r0
  float v62; // s0
  int v63; // r0
  bool v64; // zf
  float v65; // s0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r5
  float v70; // s16
  int v71; // r7
  float v72; // s0
  float v73; // s0
  float v74; // r0
  float v75; // r1
  float v76; // r2
  float v77; // r3
  float v78; // r7
  float v79; // s8
  unsigned int v80; // r1
  float v81; // r0
  float v82; // r1
  float v83; // r2
  float v84; // r3
  float v85; // r7
  float v86; // s10
  int v88; // [sp+8h] [bp-48h]
  _DWORD *v89; // [sp+Ch] [bp-44h]
  int v90; // [sp+10h] [bp-40h]
  int v91; // [sp+10h] [bp-40h]
  int v92; // [sp+14h] [bp-3Ch]
  int v93; // [sp+14h] [bp-3Ch]
  _DWORD *v94; // [sp+18h] [bp-38h]
  int v95; // [sp+1Ch] [bp-34h]

  FIELD_U8(a1, 600) = 0;
  v94 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
  v88 = FIELD_U8(a1, 602);
  if ( FIELD_U8(a1, 602) )
  {
    FIELD_U32(a1, 440) = 0;
    FIELD_U32(a1, 388) = FIELD_U32(a1, 424);
    FIELD_U32(a1, 392) = FIELD_U32(a1, 428);
    FIELD_U32(a1, 396) = FIELD_U32(a1, 432);
    v6 = FIELD_U32(a1, 580);
    if ( v6 <= 4 && ((1 << v6) & 0x1A) != 0 )
    {
      v7 = v6 == 4;
      if ( v6 == 4 )
        v6 = 2;
      FIELD_U32(a1, 328) = FIELD_U32(a1, 364);
      FIELD_U32(a1, 332) = FIELD_U32(a1, 368);
      FIELD_U32(a1, 336) = FIELD_U32(a1, 372);
      if ( v7 )
      {
        FIELD_U32(a1, 572) = v6;
        v6 = 0;
        FIELD_U32(a1, 580) = 0;
      }
    }
    FIELD_U32(a1, 560) = FIELD_U32(a1, 548);
    FIELD_U32(a1, 564) = FIELD_U32(a1, 552);
    FIELD_U32(a1, 568) = FIELD_U32(a1, 556);
    FIELD_U32(a1, 576) = FIELD_U32(a1, 572);
    FIELD_U32(a1, 584) = v6;
    FIELD_U32(a1, 16) = FIELD_U32(a1, 4);
    FIELD_U32(a1, 20) = FIELD_U32(a1, 8);
    FIELD_U32(a1, 24) = FIELD_U32(a1, 12);
    FIELD_U32(a1, 40) = FIELD_U32(a1, 36);
  }
  else
  {
    FIELD_U32(a1, 388) = FIELD_U32(a1, 400);
    FIELD_U32(a1, 392) = FIELD_U32(a1, 404);
    FIELD_U32(a1, 396) = FIELD_U32(a1, 408);
    FIELD_U32(a1, 440) = 0;
    FIELD_U32(a1, 328) = FIELD_U32(a1, 340);
    FIELD_U32(a1, 332) = FIELD_U32(a1, 344);
    FIELD_U32(a1, 336) = FIELD_U32(a1, 348);
    FIELD_U32(a1, 548) = FIELD_U32(a1, 560);
    FIELD_U32(a1, 552) = FIELD_U32(a1, 564);
    FIELD_U32(a1, 556) = FIELD_U32(a1, 568);
    FIELD_U32(a1, 572) = FIELD_U32(a1, 576);
    v8 = FIELD_U32(a1, 584);
    FIELD_U32(a1, 580) = v8;
    if ( v8 == 3 )
    {
      FIELD_U32(a1, 572) = 2;
      FIELD_U32(a1, 580) = 0;
    }
  }
  FIELD_U32(a1, 380) = 0;
  FIELD_U8(a1, 602) = 1;
  v9 = sub_601A443C(dword_60C89E18, *a2, a2[1]);
  v10 = sub_601A443C(dword_60C89E18, *a3, a3[1]);
  v11 = sub_60182E38(v10, a3[2]);
  v12 = sub_6081F5DC(dword_60CC6D78, *a3, a3[1], v11);
  FIELD_U32(a1, 516) = *a3;
  FIELD_U32(a1, 520) = a3[1];
  FIELD_U32(a1, 528) = v12;
  v92 = FIELD_U32(dword_60CC6D78, 2140);
  v90 = FIELD_U32(dword_60CC6D78, 2144);
  v13 = FIELD_U32(dword_60CC6D78, 2136);
  v95 = 0;
  if ( v12 >= 0x80 )
    v12 = 0;
  if ( sub_60182F24(v10, *a3, a3[1], a3[2], 128) && sub_60182F24(v9, *a2, a2[1], a2[2], 128) )
  {
    v95 = (FIELD_U32(a1, 196) & 4) == 0;
    if ( v88 && !FIELD_U8(a1, 607) )
      v13 = FIELD_U32(a1, 64);
    v14 = FIELD_U32(a1, 196) | 4;
    FIELD_U8(a1, 607) = 1;
  }
  else
  {
    FIELD_U8(a1, 607) = 0;
    v13 = FIELD_U32(a1, 64);
    v14 = FIELD_U32(a1, 196) & 0xFFFFFFFB;
  }
  FIELD_U32(a1, 196) = v14;
  if ( sub_60182F24(v10, *a3, a3[1], a3[2], 256) && sub_60182F24(v9, *a2, a2[1], a2[2], 256) )
  {
    v15 = FIELD_U32(a1, 196);
    FIELD_U8(a1, 608) = 1;
    FIELD_U32(a1, 196) = v15 | 8;
    v95 |= (v15 & 8) == 0;
  }
  else
  {
    FIELD_U8(a1, 608) = 0;
    FIELD_U32(a1, 196) &= ~8u;
  }
  v89 = a2;
  if ( sub_60182F24(v10, *a3, a3[1], a3[2], 512) && sub_60182F24(v9, *a2, a2[1], a2[2], 512) )
  {
    v16 = FIELD_U32(a1, 196);
    FIELD_U8(a1, 609) = 1;
    FIELD_U32(a1, 196) = v16 | 0x10;
    v95 |= (v16 & 0x10) == 0;
  }
  else
  {
    FIELD_U8(a1, 609) = 0;
    FIELD_U32(a1, 196) &= ~0x10u;
  }
  v17 = dword_60CC6D78;
  FIELD_U32(dword_60CC6D78, 2136) = v13;
  FIELD_U32(v17, 2140) = v92;
  FIELD_U32(v17, 2144) = v90;
  v18 = sub_601A4454(dword_60C89E18, *a3, a3[1]);
  v19 = sub_60178780(v18, a3[2]);
  v20 = FIELD_U32(v19, 72);
  v21 = FIELD_F32(v19, 76);
  v22 = FIELD_U32(v19, 80);
  v23 = sub_60182E50(v10, a3[2]);
  v24 = *a3;
  v25 = a3[1];
  if ( v23 )
  {
    v26 = dword_60CC6D78 + 2148;
    v27 = 0;
    if ( v24 >= 9 )
      v24 = 0;
    v28 = v26 + 1488 * v24;
    if ( v25 >= 2 )
      v25 = 0;
    v29 = v28 + 744 * v25;
    v30 = v23 - 1;
    if ( (unsigned int)(v23 - 1) >= 0x1F )
      v30 = 0;
    v31 = 3 * v30;
    v32 = (int *)(v29 + 8 * v31);
    v33 = *v32;
    v34 = v32[1];
    v35 = v32[2];
    FIELD_U32(a1, 64) = *v32;
    FIELD_U32(a1, 68) = v34;
    FIELD_U32(a1, 72) = v35;
    v36 = *a3;
    if ( *a3 >= 9 )
      v36 = 0;
    v37 = v26 + 1488 * v36;
    if ( a3[1] < 2 )
      v27 = a3[1];
    v38 = v23 + 2;
    v39 = (_DWORD *)(v37 + 744 * v27 + 8 * v31);
    v40 = v39[3];
    v41 = v39[4];
    v42 = v39[5];
    FIELD_U32(a1, 4) = v40;
    FIELD_U32(a1, 8) = v41;
    FIELD_U32(a1, 12) = v42;
    v43 = v89;
    if ( FIELD_U32(a1, 572) != v23 + 2 )
    {
      if ( (FIELD_U32(a1, 580) | 4) == 4 )
      {
        v44 = sub_601A4454(dword_60C89E18, *v89, v89[1]);
        v45 = sub_60178780(v44, v89[2]);
        v46 = FIELD_U32(v45, 80);
        v47 = FIELD_F32(v45, 76);
        v48 = FIELD_U32(v45, 72);
        v49 = sub_601C7324(v94);
        FIELD_U32(a1, 560) = v48;
        FIELD_F32(a1, 564) = v47 + v49;
        FIELD_U32(a1, 568) = v46;
        v33 = FIELD_U32(a1, 64);
        v34 = FIELD_U32(a1, 68);
        v35 = FIELD_U32(a1, 72);
      }
      FIELD_U32(a1, 548) = v33;
      FIELD_U32(a1, 552) = v34;
      FIELD_U32(a1, 556) = v35;
      FIELD_U32(a1, 572) = v38;
      FIELD_U32(a1, 580) = 1;
LABEL_60:
      FIELD_U32(a1, 516) = *a3;
      FIELD_U32(a1, 520) = a3[1];
    }
  }
  else
  {
    v91 = v22;
    v93 = v20;
    v50 = dword_60CC6D78 + 15540;
    v51 = 0;
    if ( v24 >= 9 )
      v24 = 0;
    v52 = 9 * v24;
    if ( v25 >= 2 )
      v25 = 0;
    v53 = v50 + (v52 << 10) + 4608 * v25;
    v54 = 9 * v12;
    v55 = (_DWORD *)(v53 + 36 * v12);
    v56 = v55[5];
    v57 = v55[6];
    v58 = v55[7];
    FIELD_U32(a1, 4) = v56;
    FIELD_U32(a1, 8) = v57;
    FIELD_U32(a1, 12) = v58;
    v59 = *a3;
    if ( *a3 >= 9 )
      v59 = 0;
    v60 = 9 * v59;
    if ( a3[1] < 2 )
      v51 = a3[1];
    v61 = *(_DWORD *)(v50 + (v60 << 10) + 4608 * v51 + 4 * v54 + 32);
    FIELD_U32(a1, 36) = v61;
    if ( (v61 & 1) != 0 )
    {
      v43 = v89;
      v66 = 1;
      if ( (FIELD_U8(a1, 40) & 1) == 0 )
      {
        v67 = sub_601A4454(dword_60C89E18, *v89, v89[1]);
        v68 = sub_60178780(v67, v89[2]);
        v69 = FIELD_U32(v68, 80);
        v70 = FIELD_F32(v68, 76);
        v71 = FIELD_U32(v68, 72);
        v72 = sub_601C7324(v94);
        v66 = 3;
        FIELD_U32(a1, 560) = v71;
        FIELD_F32(a1, 564) = v70 + v72;
        FIELD_U32(a1, 568) = v69;
      }
      FIELD_U32(a1, 580) = v66;
      v73 = v21 + sub_601C7324(v94);
      FIELD_U32(a1, 64) = v93;
      FIELD_F32(a1, 68) = v73;
      FIELD_U32(a1, 72) = v91;
      FIELD_U32(a1, 548) = v93;
      FIELD_F32(a1, 552) = v73;
      FIELD_U32(a1, 556) = v91;
      FIELD_U32(a1, 572) = 33;
      goto LABEL_60;
    }
    FIELD_U32(a1, 64) = v94[20];
    FIELD_U32(a1, 68) = v94[21];
    FIELD_U32(a1, 72) = v94[22];
    v62 = sub_601C7300(v94);
    FIELD_F32(a1, 68) = v62;
    v63 = FIELD_U32(a1, 572);
    v64 = v63 == 2;
    if ( v63 == 2 )
      v64 = (FIELD_U8(a1, 40) & 1) == 0;
    if ( v64 )
    {
      v43 = v89;
      if ( v95 == 1 )
      {
        FIELD_U32(a1, 548) = FIELD_U32(a1, 64);
        FIELD_F32(a1, 552) = v62;
        FIELD_U32(a1, 556) = FIELD_U32(a1, 72);
      }
    }
    else
    {
      v65 = sub_601C7324(v94);
      FIELD_U32(a1, 548) = v93;
      FIELD_F32(a1, 552) = v21 + v65;
      FIELD_U32(a1, 556) = v22;
      FIELD_U32(a1, 580) = 4;
      v43 = v89;
    }
    FIELD_U32(a1, 572) = 2;
  }
  FIELD_U32(a1, 44) = 1056964608;
  FIELD_U32(a1, 48) = 1128792064;
  FIELD_U32(a1, 52) = 1112014848;
  FIELD_U32(a1, 56) = 1028443341;
  v74 = FIELD_F32(a1, 16);
  FIELD_F32(a1, 400) = v74;
  v75 = FIELD_F32(a1, 20);
  FIELD_F32(a1, 404) = v75;
  v76 = FIELD_F32(a1, 24);
  FIELD_F32(a1, 408) = v76;
  v77 = FIELD_F32(a1, 4);
  FIELD_F32(a1, 424) = v77;
  v78 = FIELD_F32(a1, 8);
  FIELD_F32(a1, 428) = v78;
  v79 = FIELD_F32(a1, 12);
  FIELD_F32(a1, 432) = v79;
  FIELD_F32(a1, 412) = (float)(v74 + v77) * 0.5;
  FIELD_F32(a1, 416) = (float)(v75 + v78) * 0.5;
  FIELD_F32(a1, 420) = (float)(v76 + v79) * 0.5;
  FIELD_F32(a1, 388) = v74;
  FIELD_F32(a1, 392) = v75;
  FIELD_F32(a1, 396) = v76;
  FIELD_U32(a1, 436) = 0;
  FIELD_U32(a1, 440) = 1;
  FIELD_U32(a1, 184) = v94[20];
  FIELD_U32(a1, 188) = v94[21];
  FIELD_U32(a1, 192) = v94[22];
  v80 = FIELD_U32(a1, 580);
  if ( v80 <= 4 && ((1 << v80) & 0x1A) != 0 )
  {
    v81 = FIELD_F32(a1, 560);
    FIELD_F32(a1, 340) = v81;
    v82 = FIELD_F32(a1, 564);
    FIELD_F32(a1, 344) = v82;
    v83 = FIELD_F32(a1, 568);
    FIELD_F32(a1, 348) = v83;
    v84 = FIELD_F32(a1, 548);
    FIELD_F32(a1, 364) = v84;
    v85 = FIELD_F32(a1, 552);
    FIELD_F32(a1, 368) = v85;
    v86 = FIELD_F32(a1, 556);
    FIELD_F32(a1, 372) = v86;
    FIELD_U32(a1, 376) = 0;
    FIELD_U32(a1, 380) = 1;
    FIELD_F32(a1, 352) = (float)(v81 + v84) * 0.5;
    FIELD_F32(a1, 356) = (float)(v82 + v85) * 0.5;
    FIELD_F32(a1, 360) = (float)(v83 + v86) * 0.5;
    FIELD_F32(a1, 328) = v81;
    FIELD_F32(a1, 332) = v82;
    FIELD_F32(a1, 336) = v83;
  }
  return sub_6021C710(dword_60C8D408, v43, a3);
}
