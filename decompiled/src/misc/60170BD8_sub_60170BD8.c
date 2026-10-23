/* sub_60170BD8
 * address: 0x60170BD8   size: 1348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_60170BD8(int a1, unsigned int *a2)
{
  int v4; // r9
  _DWORD *v5; // r7
  const char *v6; // r0
  bool v7; // zf
  _DWORD *v8; // r0
  int v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r2
  int v12; // r10
  int v13; // r1
  unsigned int v14; // r1
  unsigned int v15; // r2
  int v16; // r0
  int v17; // r11
  float *v18; // r1
  float v19; // r7
  float v20; // r2
  float v21; // r1
  unsigned int v22; // r6
  unsigned int v23; // r3
  int v24; // r6
  _DWORD *v25; // r3
  int v26; // r6
  int v27; // r12
  int v28; // r3
  unsigned int v29; // r0
  int v30; // r0
  int v31; // r1
  unsigned int v32; // r2
  unsigned int v33; // r3
  int v34; // r2
  _DWORD *v35; // r2
  int v36; // r3
  int v37; // r7
  int v38; // r2
  unsigned int v39; // r2
  unsigned int v40; // r3
  int v41; // r2
  int v42; // r10
  int v43; // r6
  int v44; // r0
  float *v45; // r0
  float v46; // s16
  float v47; // r6
  float v48; // r7
  float v49; // s0
  int v50; // r6
  int v51; // r0
  int v52; // r1
  int v53; // r0
  unsigned int v54; // r2
  int v55; // r0
  int v56; // r1
  float v57; // r2
  float v58; // r1
  int v59; // r0
  float v60; // r6
  float v61; // r7
  int v62; // r3
  __n64 result; // d0

  FIELD_U8(a1, 600) = 0;
  FIELD_U8(a1, 602) = 1;
  FIELD_U32(a1, 516) = *a2;
  FIELD_U32(a1, 520) = a2[1];
  v4 = sub_601A443C(dword_60C89E18, *a2, a2[1]);
  v5 = (_DWORD *)sub_60182E38(v4, a2[2]);
  (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
  (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
  v6 = (const char *)v5[1];
  v7 = v6 == "K";
  if ( v6 != "K" )
    v7 = *v6 == 75;
  if ( v7 )
  {
    FIELD_U32(a1, 12) = 0;
    FIELD_U32(a1, 8) = 0;
    FIELD_U32(a1, 4) = 0;
    FIELD_U32(a1, 36) = 0;
    v8 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
    FIELD_U32(a1, 64) = v8[20];
    FIELD_U32(a1, 68) = v8[21];
    FIELD_U32(a1, 72) = v8[22];
    FIELD_F32(a1, 68) = ((float (*)(void))sub_601C7300)();
    FIELD_U32(a1, 572) = 2;
    FIELD_U32(a1, 580) = 0;
    goto LABEL_40;
  }
  v9 = sub_60182E50(v4, a2[2]);
  v10 = *a2;
  v11 = a2[1];
  if ( v9 )
  {
    if ( v10 >= 9 )
      v10 = 0;
    v12 = dword_60CC6D78 + 2148;
    v13 = dword_60CC6D78 + 2148 + 1488 * v10;
    if ( v11 >= 2 )
      v11 = 0;
    v14 = v13 + 744 * v11;
    v15 = v9 - 1;
    v16 = v9 + 2;
    if ( v15 >= 0x1F )
      v15 = 0;
    v17 = 3 * v15;
    v18 = (float *)(v14 + 24 * v15);
    v19 = *v18;
    v20 = v18[1];
    v21 = v18[2];
    FIELD_F32(a1, 64) = v19;
    FIELD_F32(a1, 68) = v20;
    FIELD_F32(a1, 72) = v21;
    v22 = *a2;
    v23 = a2[1];
    if ( *a2 >= 9 )
      v22 = 0;
    v24 = v12 + 1488 * v22;
    if ( v23 >= 2 )
      v23 = 0;
    v25 = (_DWORD *)(v24 + 744 * v23 + 8 * v17);
    v26 = v25[3];
    v27 = v25[4];
    v28 = v25[5];
    FIELD_U32(a1, 4) = v26;
    FIELD_U32(a1, 8) = v27;
    FIELD_U32(a1, 12) = v28;
    FIELD_F32(a1, 548) = v19;
    FIELD_F32(a1, 552) = v20;
    FIELD_F32(a1, 556) = v21;
    FIELD_U32(a1, 572) = v16;
    FIELD_U32(a1, 580) = 1;
    FIELD_F32(a1, 328) = v19;
    FIELD_F32(a1, 332) = v20;
    FIELD_F32(a1, 336) = v21;
    FIELD_F32(a1, 340) = v19;
    FIELD_F32(a1, 344) = v20;
    FIELD_F32(a1, 348) = v21;
    FIELD_F32(a1, 364) = v19;
    FIELD_F32(a1, 368) = v20;
    FIELD_F32(a1, 372) = v21;
    FIELD_F32(a1, 352) = (float)(v19 + v19) * 0.5;
    FIELD_F32(a1, 356) = (float)(v20 + v20) * 0.5;
    FIELD_F32(a1, 360) = (float)(v21 + v21) * 0.5;
    goto LABEL_31;
  }
  v29 = sub_6081F5DC(dword_60CC6D78, v10, v11, v5);
  if ( v29 >= 0x80 )
    v29 = 0;
  v30 = 9 * v29;
  v31 = dword_60CC6D78 + 15540;
  v32 = *a2;
  v33 = a2[1];
  if ( *a2 >= 9 )
    v32 = 0;
  v34 = 9 * v32;
  if ( v33 >= 2 )
    v33 = 0;
  v35 = (_DWORD *)(v31 + (v34 << 10) + 4608 * v33 + 4 * v30);
  v36 = v35[5];
  v37 = v35[6];
  v38 = v35[7];
  FIELD_U32(a1, 4) = v36;
  FIELD_U32(a1, 8) = v37;
  FIELD_U32(a1, 12) = v38;
  v39 = *a2;
  v40 = a2[1];
  if ( *a2 >= 9 )
    v39 = 0;
  v41 = 9 * v39;
  if ( v40 >= 2 )
    v40 = 0;
  FIELD_U32(a1, 36) = *(_DWORD *)(v31 + (v41 << 10) + 4608 * v40 + 4 * v30 + 32);
  v42 = sub_601CF9C0(dword_60C8AEF0);
  FIELD_U32(a1, 580) = 0;
  v43 = FIELD_U32(a1, 36);
  v44 = sub_601A4454(dword_60C89E18, *a2, a2[1]);
  v45 = (float *)sub_60178780(v44, a2[2]);
  if ( (v43 & 1) != 0 )
  {
    v46 = v45[19];
    v47 = v45[20];
    v48 = v45[18];
    v49 = v46 + sub_601C7324(v42);
    FIELD_F32(a1, 64) = v48;
    FIELD_F32(a1, 68) = v49;
    FIELD_F32(a1, 72) = v47;
    FIELD_F32(a1, 548) = v48;
    FIELD_F32(a1, 552) = v49;
    FIELD_F32(a1, 556) = v47;
    FIELD_U32(a1, 572) = 33;
    FIELD_U32(a1, 580) = 1;
    FIELD_F32(a1, 328) = v48;
    FIELD_F32(a1, 332) = v49;
    FIELD_F32(a1, 336) = v47;
    FIELD_F32(a1, 340) = v48;
    FIELD_F32(a1, 344) = v49;
    FIELD_F32(a1, 348) = v47;
    FIELD_F32(a1, 364) = v48;
    FIELD_F32(a1, 368) = v49;
    FIELD_F32(a1, 372) = v47;
    FIELD_F32(a1, 352) = (float)(v48 + v48) * 0.5;
    FIELD_F32(a1, 356) = (float)(v49 + v49) * 0.5;
    FIELD_F32(a1, 360) = (float)(v47 + v47) * 0.5;
LABEL_31:
    FIELD_U32(a1, 376) = 0;
    FIELD_U32(a1, 380) = 0;
    goto LABEL_32;
  }
  FIELD_F32(a1, 64) = v45[18];
  FIELD_F32(a1, 68) = v45[19];
  FIELD_F32(a1, 72) = v45[20];
  FIELD_F32(a1, 68) = sub_601C7300(v42);
  FIELD_U32(a1, 572) = 2;
LABEL_32:
  v50 = FIELD_U32(dword_60CC6D78, 2136);
  v51 = sub_60182F24(v4, *a2, a2[1], a2[2], 128);
  v52 = FIELD_U32(a1, 196);
  if ( v51 )
  {
    FIELD_U32(a1, 196) = v52 | 4;
    FIELD_U32(a1, 64) = v50;
  }
  else
  {
    FIELD_U32(a1, 196) = v52 & 0xFFFFFFFB;
  }
  v53 = sub_60182F24(v4, *a2, a2[1], a2[2], 256);
  v54 = FIELD_U32(a1, 196) & 0xFFFFFFF7;
  if ( v53 )
    v54 = FIELD_U32(a1, 196) | 8;
  FIELD_U32(a1, 196) = v54;
  v55 = sub_60182F24(v4, *a2, a2[1], a2[2], 512);
  v56 = FIELD_U32(a1, 196);
  if ( v55 )
    FIELD_U32(a1, 196) = v56 | 0x10;
  else
    FIELD_U32(a1, 196) = v56 & 0xFFFFFFEF;
LABEL_40:
  v57 = FIELD_F32(a1, 64);
  v58 = FIELD_F32(a1, 68);
  v59 = FIELD_U32(a1, 72);
  FIELD_U32(a1, 44) = 1056964608;
  FIELD_U32(a1, 48) = 1128792064;
  FIELD_U32(a1, 52) = 1112014848;
  FIELD_U32(a1, 56) = 1028443341;
  v60 = FIELD_F32(a1, 4);
  FIELD_F32(a1, 388) = v60;
  v61 = FIELD_F32(a1, 8);
  result.n64_f32[0] = v57 + v60;
  FIELD_F32(a1, 392) = v61;
  v62 = FIELD_U32(a1, 12);
  result.n64_f32[1] = v58 + v61;
  FIELD_U32(a1, 396) = v62;
  FIELD_F32(a1, 400) = v60;
  FIELD_F32(a1, 404) = v61;
  FIELD_U32(a1, 408) = v62;
  FIELD_F32(a1, 424) = v60;
  FIELD_F32(a1, 428) = v61;
  FIELD_U32(a1, 432) = v62;
  FIELD_U32(a1, 436) = 0;
  FIELD_U32(a1, 440) = 0;
  FIELD_F32(a1, 536) = v57;
  FIELD_F32(a1, 540) = v58;
  FIELD_U32(a1, 544) = v59;
  FIELD_U32(a1, 560) = FIELD_U32(a1, 548);
  FIELD_U32(a1, 564) = FIELD_U32(a1, 552);
  FIELD_U32(a1, 568) = FIELD_U32(a1, 556);
  FIELD_U32(a1, 576) = FIELD_U32(a1, 572);
  FIELD_U32(a1, 584) = FIELD_U32(a1, 580);
  FIELD_F32(a1, 16) = v60;
  FIELD_F32(a1, 20) = v61;
  FIELD_U32(a1, 24) = v62;
  return result;
}
