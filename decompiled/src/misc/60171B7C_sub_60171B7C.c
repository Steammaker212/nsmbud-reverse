/* sub_60171B7C
 * address: 0x60171B7C   size: 1632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60171B7C(int a1, _DWORD *a2, unsigned int *a3)
{
  int v4; // r10
  int v7; // r11
  int v8; // r8
  int v9; // r0
  unsigned int v10; // r5
  int v11; // r0
  int v12; // r0
  int v13; // r9
  _DWORD *v14; // r10
  int v15; // r0
  int v16; // r0
  float *v17; // r0
  int v18; // r9
  float v19; // r8
  int v20; // r11
  int v21; // r0
  int v22; // r0
  int v23; // r7
  float v24; // r10
  int v25; // r5
  int v26; // r0
  unsigned int v27; // r2
  unsigned int v28; // r1
  int v29; // r11
  int v30; // r9
  int v31; // r5
  int v32; // r8
  int v33; // r2
  unsigned int v34; // r1
  int v35; // r2
  int v36; // r2
  int *v37; // r1
  int v38; // r7
  int v39; // r3
  int v40; // r1
  int v41; // r7
  unsigned int v42; // r1
  unsigned int v43; // r3
  int v44; // r1
  _DWORD *v45; // r1
  int v46; // r2
  int v47; // r3
  int v48; // r1
  _DWORD *v49; // r8
  float v50; // s0
  int v51; // r0
  unsigned int v52; // r3
  int v53; // r2
  _DWORD *v54; // r1
  int v55; // r7
  int v56; // r5
  int v57; // r1
  unsigned int v58; // r1
  int v59; // r1
  int v60; // r0
  float v61; // s0
  int v62; // r0
  bool v63; // zf
  float v64; // s0
  int v65; // r0
  float v66; // s0
  float v67; // s0
  float v68; // s0
  int result; // r0
  int v70; // [sp+4h] [bp-44h]
  int v71; // [sp+8h] [bp-40h]
  float v72; // [sp+Ch] [bp-3Ch]
  unsigned int v73; // [sp+14h] [bp-34h]
  int v74; // [sp+18h] [bp-30h]
  _DWORD *v75; // [sp+1Ch] [bp-2Ch]
  int v76; // [sp+20h] [bp-28h]

  v4 = 0;
  FIELD_U8(a1, 600) = 0;
  v75 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
  sub_6019EC34(a1 + 492, a2);
  sub_6019EC34(a1 + 504, a3);
  FIELD_U8(a1, 602) = 1;
  FIELD_U32(a1, 560) = FIELD_U32(a1, 548);
  FIELD_U32(a1, 564) = FIELD_U32(a1, 552);
  FIELD_U32(a1, 568) = FIELD_U32(a1, 556);
  FIELD_U32(a1, 576) = FIELD_U32(a1, 572);
  FIELD_U32(a1, 584) = FIELD_U32(a1, 580);
  FIELD_U32(a1, 16) = FIELD_U32(a1, 4);
  FIELD_U32(a1, 20) = FIELD_U32(a1, 8);
  FIELD_U32(a1, 24) = FIELD_U32(a1, 12);
  FIELD_U32(a1, 40) = FIELD_U32(a1, 36);
  v7 = sub_601A443C(dword_60C89E18, *a2, a2[1]);
  v8 = sub_601A443C(dword_60C89E18, *a3, a3[1]);
  v9 = sub_60182E38(v8, a3[2]);
  v10 = sub_6081F5DC(dword_60CC6D78, *a3, a3[1], v9);
  FIELD_U32(a1, 516) = *a3;
  FIELD_U32(a1, 520) = a3[1];
  FIELD_U32(a1, 528) = v10;
  if ( v10 >= 0x80 )
    v10 = 0;
  if ( sub_60182F24(v8, *a3, a3[1], a3[2], 128) && sub_60182F24(v7, *a2, a2[1], a2[2], 128) )
  {
    v11 = FIELD_U32(a1, 196);
    FIELD_U32(a1, 196) = v11 | 4;
    v4 = (v11 & 4) == 0;
  }
  else
  {
    FIELD_U32(a1, 196) &= ~4u;
  }
  if ( sub_60182F24(v8, *a3, a3[1], a3[2], 256) && sub_60182F24(v7, *a2, a2[1], a2[2], 256) )
  {
    v12 = FIELD_U32(a1, 196);
    v13 = v7;
    FIELD_U32(a1, 196) = v12 | 8;
    v4 |= (v12 & 8) == 0;
  }
  else
  {
    v13 = v7;
    FIELD_U32(a1, 196) &= ~8u;
  }
  v74 = v4;
  v73 = v10;
  v76 = v8;
  if ( sub_60182F24(v8, *a3, a3[1], a3[2], 512) )
  {
    v14 = a2 + 2;
    if ( sub_60182F24(v13, *a2, a2[1], a2[2], 512) )
    {
      v15 = FIELD_U32(a1, 196);
      FIELD_U32(a1, 196) = v15 | 0x10;
      v74 |= (v15 & 0x10) == 0;
      goto LABEL_16;
    }
  }
  else
  {
    v14 = a2 + 2;
  }
  FIELD_U32(a1, 196) &= ~0x10u;
LABEL_16:
  v16 = sub_601A4454(dword_60C89E18, *a3, a3[1]);
  v17 = (float *)sub_60178780(v16, a3[2]);
  v18 = *((_DWORD *)v17 + 18);
  v19 = v17[19];
  v20 = *((_DWORD *)v17 + 20);
  FIELD_U32(a1, 480) = v18;
  FIELD_F32(a1, 484) = v19;
  FIELD_U32(a1, 488) = v20;
  v21 = sub_601A4454(dword_60C89E18, *a2, a2[1]);
  v22 = sub_60178780(v21, *v14);
  v23 = FIELD_U32(v22, 72);
  v24 = FIELD_F32(v22, 76);
  v25 = FIELD_U32(v22, 80);
  FIELD_U32(a1, 444) = v23;
  FIELD_F32(a1, 448) = v24;
  FIELD_U32(a1, 452) = v25;
  v26 = sub_60182E50(v76, a3[2]);
  v27 = *a3;
  v28 = a3[1];
  if ( v26 )
  {
    v29 = v23;
    v30 = v25;
    v31 = 0;
    if ( v27 >= 9 )
      v27 = 0;
    v32 = dword_60CC6D78 + 2148;
    v33 = dword_60CC6D78 + 2148 + 1488 * v27;
    if ( v28 >= 2 )
      v28 = 0;
    v34 = v33 + 744 * v28;
    v35 = v26 - 1;
    if ( (unsigned int)(v26 - 1) >= 0x1F )
      v35 = 0;
    v36 = 3 * v35;
    v37 = (int *)(v34 + 8 * v36);
    v38 = *v37;
    v39 = v37[1];
    v40 = v37[2];
    FIELD_U32(a1, 64) = v38;
    v41 = v26 + 2;
    FIELD_U32(a1, 68) = v39;
    FIELD_U32(a1, 72) = v40;
    v42 = *a3;
    v43 = a3[1];
    if ( *a3 >= 9 )
      v42 = 0;
    v44 = v32 + 1488 * v42;
    if ( v43 >= 2 )
      v43 = 0;
    v45 = (_DWORD *)(v44 + 744 * v43 + 8 * v36);
    v46 = v45[3];
    v47 = v45[4];
    v48 = v45[5];
    FIELD_U32(a1, 4) = v46;
    FIELD_U32(a1, 8) = v47;
    FIELD_U32(a1, 12) = v48;
    v49 = v75;
    if ( FIELD_U32(a1, 572) != v41 )
    {
      v50 = sub_601C7324(v75);
      FIELD_U32(a1, 560) = v29;
      FIELD_F32(a1, 564) = v24 + v50;
      FIELD_U32(a1, 568) = v30;
      FIELD_U32(a1, 548) = FIELD_U32(a1, 64);
      FIELD_U32(a1, 552) = FIELD_U32(a1, 68);
      FIELD_U32(a1, 556) = FIELD_U32(a1, 72);
      FIELD_U32(a1, 572) = v41;
      FIELD_U32(a1, 516) = *a3;
      FIELD_U32(a1, 520) = a3[1];
    }
    FIELD_U32(a1, 580) = 1;
    if ( v41 == 33 )
      v31 = 1;
  }
  else
  {
    v70 = v23;
    v71 = v25;
    v72 = v19;
    v51 = dword_60CC6D78 + 15540;
    v52 = 0;
    if ( v27 >= 9 )
      v27 = 0;
    v53 = 9 * v27;
    if ( v28 >= 2 )
      v28 = 0;
    v54 = (_DWORD *)(v51 + (v53 << 10) + 4608 * v28 + 36 * v73);
    v55 = v54[5];
    v56 = v54[6];
    v57 = v54[7];
    FIELD_U32(a1, 4) = v55;
    FIELD_U32(a1, 8) = v56;
    FIELD_U32(a1, 12) = v57;
    v58 = *a3;
    if ( *a3 >= 9 )
      v58 = 0;
    v59 = 9 * v58;
    if ( a3[1] < 2 )
      v52 = a3[1];
    v60 = *(_DWORD *)(v51 + (v59 << 10) + 4608 * v52 + 36 * v73 + 32);
    FIELD_U32(a1, 36) = v60;
    if ( (v60 & 1) != 0 )
    {
      v49 = v75;
      v31 = 1;
      v65 = 1;
      if ( (FIELD_U8(a1, 40) & 1) == 0 )
      {
        v66 = sub_601C7324(v75);
        FIELD_U32(a1, 560) = v70;
        FIELD_F32(a1, 564) = v24 + v66;
        FIELD_U32(a1, 568) = v71;
        v65 = 3;
      }
      FIELD_U32(a1, 580) = v65;
      v67 = sub_601C7324(v75);
      FIELD_U32(a1, 64) = v18;
      v68 = v72 + v67;
      FIELD_F32(a1, 68) = v68;
      FIELD_U32(a1, 72) = v20;
      FIELD_U32(a1, 548) = v18;
      FIELD_F32(a1, 552) = v68;
      FIELD_U32(a1, 556) = v20;
      FIELD_U32(a1, 572) = 33;
      FIELD_U32(a1, 516) = *a3;
      FIELD_U32(a1, 520) = a3[1];
    }
    else
    {
      v49 = v75;
      FIELD_U32(a1, 64) = v75[20];
      FIELD_U32(a1, 68) = v75[21];
      FIELD_U32(a1, 72) = v75[22];
      v61 = sub_601C7300(v75);
      FIELD_F32(a1, 68) = v61;
      v62 = FIELD_U32(a1, 572);
      v63 = v62 == 2;
      if ( v62 == 2 )
        v63 = (FIELD_U8(a1, 40) & 1) == 0;
      if ( v63 )
      {
        if ( v74 == 1 )
        {
          FIELD_U32(a1, 548) = FIELD_U32(a1, 64);
          FIELD_F32(a1, 552) = v61;
          FIELD_U32(a1, 556) = FIELD_U32(a1, 72);
        }
      }
      else
      {
        v64 = sub_601C7324(v75);
        FIELD_U32(a1, 548) = v18;
        FIELD_F32(a1, 552) = v72 + v64;
        FIELD_U32(a1, 556) = v20;
        FIELD_U32(a1, 580) = 4;
      }
      v31 = 0;
      FIELD_U32(a1, 572) = 2;
      FIELD_U32(a1, 580) = 0;
    }
  }
  FIELD_U32(a1, 44) = 1056964608;
  FIELD_U32(a1, 48) = 1128792064;
  FIELD_U32(a1, 52) = 1112014848;
  FIELD_U32(a1, 56) = 1028443341;
  FIELD_U32(a1, 400) = FIELD_U32(a1, 16);
  FIELD_U32(a1, 404) = FIELD_U32(a1, 20);
  FIELD_U32(a1, 408) = FIELD_U32(a1, 24);
  FIELD_U32(a1, 424) = FIELD_U32(a1, 4);
  FIELD_U32(a1, 428) = FIELD_U32(a1, 8);
  FIELD_U32(a1, 432) = FIELD_U32(a1, 12);
  result = 0;
  FIELD_U32(a1, 436) = 0;
  FIELD_U32(a1, 440) = 0;
  FIELD_U32(a1, 184) = v49[20];
  FIELD_U32(a1, 188) = v49[21];
  FIELD_U32(a1, 192) = v49[22];
  if ( v31 == 1 )
  {
    FIELD_U32(a1, 340) = FIELD_U32(a1, 560);
    FIELD_U32(a1, 344) = FIELD_U32(a1, 564);
    FIELD_U32(a1, 348) = FIELD_U32(a1, 568);
    FIELD_U32(a1, 364) = FIELD_U32(a1, 548);
    FIELD_U32(a1, 368) = FIELD_U32(a1, 552);
    FIELD_U32(a1, 372) = FIELD_U32(a1, 556);
    FIELD_U32(a1, 376) = 0;
    FIELD_U32(a1, 380) = 0;
  }
  return result;
}
