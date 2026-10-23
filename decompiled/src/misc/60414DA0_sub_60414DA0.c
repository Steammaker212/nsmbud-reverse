/* sub_60414DA0
 * address: 0x60414DA0   size: 2604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60414DA0(_DWORD *a1, int a2)
{
  int v4; // r1
  int v5; // r0
  int v6; // r2
  int v7; // r1
  int v8; // r2
  int v9; // r7
  int i; // r6
  int v11; // r4
  _WORD *v12; // r0
  int v13; // r5
  unsigned int v14; // r1
  int v15; // r7
  int v16; // r0
  int v17; // r0
  int v18; // r7
  int v19; // r0
  int v20; // r7
  int v21; // r10
  unsigned int v22; // r1
  float *v23; // r2
  float v24; // s26
  float v25; // s28
  float v26; // s30
  float v27; // s17
  float v28; // s19
  int v29; // r4
  float v30; // s19
  int v31; // r4
  int v32; // r4
  int v33; // r4
  _DWORD *v34; // r5
  int v35; // r4
  int v36; // r4
  int v37; // r4
  unsigned int v38; // r0
  int v39; // r4
  int v40; // r0
  int v41; // r0
  int v42; // r4
  int v43; // r4
  _DWORD *v44; // r0
  int v45; // r4
  int v46; // r4
  _DWORD *v47; // r0
  int v48; // r4
  int v49; // r4
  int v50; // r4
  int v51; // r4
  int v52; // r4
  int v53; // r4
  int v54; // r4
  unsigned int v55; // r1
  int v56; // r4
  int v57; // r0
  int v58; // r4
  int v59; // r4
  int v60; // r4
  _DWORD *v61; // r0
  int v62; // r4
  int v63; // r4
  _DWORD *v64; // r0
  int v65; // r4
  int v66; // r4
  _DWORD *v67; // r0
  int v68; // r4
  _DWORD *v70; // [sp+8h] [bp-118h]
  _DWORD *v71; // [sp+Ch] [bp-114h]
  _DWORD *v72; // [sp+10h] [bp-110h]
  _DWORD *v73; // [sp+14h] [bp-10Ch]
  int v74; // [sp+18h] [bp-108h]
  _BYTE v75[12]; // [sp+1Ch] [bp-104h] BYREF
  _DWORD v76[3]; // [sp+28h] [bp-F8h] BYREF
  _BYTE v77[12]; // [sp+34h] [bp-ECh] BYREF
  _DWORD v78[3]; // [sp+40h] [bp-E0h] BYREF
  _BYTE v79[12]; // [sp+4Ch] [bp-D4h] BYREF
  _DWORD v80[3]; // [sp+58h] [bp-C8h] BYREF
  _BYTE v81[12]; // [sp+64h] [bp-BCh] BYREF
  _BYTE v82[12]; // [sp+70h] [bp-B0h] BYREF
  _BYTE v83[12]; // [sp+7Ch] [bp-A4h] BYREF
  _BYTE v84[12]; // [sp+88h] [bp-98h] BYREF
  _BYTE v85[12]; // [sp+94h] [bp-8Ch] BYREF
  _BYTE v86[12]; // [sp+A0h] [bp-80h] BYREF
  int v87; // [sp+ACh] [bp-74h] BYREF
  int v88; // [sp+B0h] [bp-70h]
  int v89; // [sp+B4h] [bp-6Ch]

  v4 = 0;
  v5 = dword_60C9CD58;
  v6 = 0;
  if ( FIELD_U32(dword_60C9CD58, 16) )
    v6 = **(_DWORD **)(dword_60C9CD58 + 24);
  a1[88] = v6;
  if ( FIELD_U32(v5, 16) >= 2u )
    v4 = *(_DWORD *)(FIELD_U32(v5, 24) + 4);
  a1[89] = v4;
  v7 = 0;
  v8 = 0;
  if ( FIELD_U32(v5, 16) >= 3u )
    v8 = *(_DWORD *)(FIELD_U32(v5, 24) + 8);
  a1[90] = v8;
  if ( FIELD_U32(v5, 16) >= 4u )
    v7 = *(_DWORD *)(FIELD_U32(v5, 24) + 12);
  a1[91] = v7;
  v9 = 0;
  sub_60913D88((int)(a1 + 92), 36, a2, 4, 0);
  sub_60913A6C(v86, a1 + 92, 0);
  sub_60913D88((int)(a1 + 99), 272, a2, 4, 0);
  sub_60913A6C(v85, a1 + 99, 0);
  v74 = a2;
  sub_60913D88((int)(a1 + 278), 6, a2, 4, 0);
  v70 = a1 + 278;
  sub_60913A6C(v84, a1 + 278, 0);
  sub_60913D88((int)(a1 + 285), 48, 0, 4, 0);
  v71 = a1 + 285;
  sub_60913A6C(v83, a1 + 285, 0);
  sub_60913D88((int)(a1 + 464), 12, 0, 4, 0);
  v72 = a1 + 464;
  sub_60913A6C(v82, a1 + 464, 0);
  sub_60913D88((int)(a1 + 471), 64, 0, 4, 0);
  v73 = a1 + 471;
  sub_60913A6C(v81, a1 + 471, 0);
  for ( i = 0; i != 17; ++i )
  {
    v11 = dword_60CC73E8(a1[95]);
    v12 = (_WORD *)(v11 + sub_60913FB4(a1 + 92) + v9);
    v9 += 2;
    *v12 = i;
  }
  v13 = dword_60CC73E8(a1[95]);
  *(_WORD *)(v13 + sub_60913FB4(a1 + 92) + 34) = 1;
  sub_60913A6C(v80, a1 + 92, 0);
  v14 = a1[94];
  v87 = v80[0];
  v88 = v80[1];
  v89 = v80[2];
  sub_60919D48(a1 + 258, &v87, 1, v14 >> 1);
  a1[260] = 6;
  v15 = dword_60CC73E8(a1[102]);
  v16 = sub_60913FB4(a1 + 99);
  *(_DWORD *)(v15 + v16) = 0;
  v17 = v15 + v16;
  FIELD_U32(v17, 4) = 0;
  FIELD_U32(v17, 8) = 0;
  v18 = dword_60CC73E8(a1[102]);
  v19 = v18 + sub_60913FB4(a1 + 99);
  v20 = 28;
  v21 = 0;
  FIELD_U32(v19, 12) = 0;
  do
  {
    v22 = (int)(float)((float)((float)((float)((float)((float)v21 + (float)v21) * 0.0625) + -1.0) * 2147500000.0) / 1.0);
    v23 = (float *)((char *)sinLutTable + ((v22 >> 20) & 0xFF0));
    v24 = *v23;
    v25 = v23[1];
    v26 = v23[2];
    v27 = v23[3];
    v28 = (float)(v22 & 0xFFFFFF);
    v29 = dword_60CC73E8(a1[102]);
    v30 = v28 * 0.000000059605;
    *(float *)(v29 + sub_60913FB4(a1 + 99) + v20 - 12) = v26 + (float)(v27 * v30);
    v31 = dword_60CC73E8(a1[102]);
    *(float *)(v31 + sub_60913FB4(a1 + 99) + v20 - 8) = v24 + (float)(v25 * v30);
    v32 = dword_60CC73E8(a1[102]);
    *(_DWORD *)(v32 + sub_60913FB4(a1 + 99) + v20 - 4) = 0;
    v33 = dword_60CC73E8(a1[102]);
    ++v21;
    *(_DWORD *)(v33 + sub_60913FB4(a1 + 99) + v20) = 1065353216;
    v20 += 16;
  }
  while ( v21 != 16 );
  sub_60913A6C(v79, a1 + 99, 0);
  v34 = a1;
  sub_609225B8(a1 + 106, v79, 16, 272);
  sub_60922768(a1 + 106, 0, 34, 0, 0);
  sub_60922768(a1 + 106, 1, 10, 12, 0);
  sub_60921D30(a1 + 174, 1, v74);
  sub_60921DF0(a1 + 174, 0, a1 + 106, 0);
  sub_60921DF0(a1 + 174, 3, a1 + 106, 1);
  sub_60921F90(a1 + 174);
  v35 = dword_60CC73E8(a1[281]);
  *(_WORD *)(v35 + sub_60913FB4(v70)) = 0;
  v36 = dword_60CC73E8(a1[281]);
  *(_WORD *)(v36 + sub_60913FB4(v70) + 2) = 1;
  v37 = dword_60CC73E8(a1[281]);
  *(_WORD *)(v37 + sub_60913FB4(v70) + 4) = 2;
  sub_60913A6C(v78, v70, 0);
  v38 = a1[280];
  v87 = v78[0];
  v88 = v78[1];
  v89 = v78[2];
  sub_60919D48(a1 + 444, &v87, 1, v38 >> 1);
  a1[446] = 4;
  v39 = dword_60CC73E8(a1[288]);
  v40 = sub_60913FB4(v71);
  *(_DWORD *)(v39 + v40) = 0;
  v41 = v39 + v40;
  FIELD_U32(v41, 4) = 0;
  FIELD_U32(v41, 8) = 0;
  v42 = dword_60CC73E8(a1[288]);
  *(_DWORD *)(v42 + sub_60913FB4(v71) + 12) = 0;
  v43 = dword_60CC73E8(a1[288]);
  v44 = (_DWORD *)(v43 + sub_60913FB4(v71));
  v44[4] = 1065353216;
  v44[5] = 1065353216;
  v44[6] = 0;
  v45 = dword_60CC73E8(a1[288]);
  *(_DWORD *)(v45 + sub_60913FB4(v71) + 28) = 1065353216;
  v46 = dword_60CC73E8(a1[288]);
  v47 = (_DWORD *)(v46 + sub_60913FB4(v71));
  v47[8] = 1065353216;
  v47[9] = -1082130432;
  v47[10] = 0;
  v48 = dword_60CC73E8(a1[288]);
  *(_DWORD *)(v48 + sub_60913FB4(v71) + 44) = 1065353216;
  sub_60913A6C(v77, v71, 0);
  sub_609225B8(a1 + 292, v77, 16, 48);
  sub_60922768(a1 + 292, 0, 34, 0, 0);
  sub_60922768(a1 + 292, 1, 10, 12, 0);
  sub_60921D30(a1 + 360, 1, v74);
  sub_60921DF0(v34 + 360, 0, v34 + 292, 0);
  sub_60921DF0(v34 + 360, 3, v34 + 292, 1);
  sub_60921F90(a1 + 360);
  v49 = dword_60CC73E8(a1[467]);
  *(_WORD *)(v49 + sub_60913FB4(v72)) = 0;
  v50 = dword_60CC73E8(a1[467]);
  *(_WORD *)(v50 + sub_60913FB4(v72) + 2) = 1;
  v51 = dword_60CC73E8(a1[467]);
  *(_WORD *)(v51 + sub_60913FB4(v72) + 4) = 2;
  v52 = dword_60CC73E8(a1[467]);
  *(_WORD *)(v52 + sub_60913FB4(v72) + 6) = 1;
  v53 = dword_60CC73E8(a1[467]);
  *(_WORD *)(v53 + sub_60913FB4(v72) + 8) = 2;
  v54 = dword_60CC73E8(a1[467]);
  *(_WORD *)(v54 + sub_60913FB4(v72) + 10) = 3;
  sub_60913A6C(v76, v72, 0);
  v55 = a1[466];
  v87 = v76[0];
  v88 = v76[1];
  v89 = v76[2];
  sub_60919D48(a1 + 630, &v87, 1, v55 >> 1);
  a1[632] = 4;
  v56 = dword_60CC73E8(a1[474]);
  v57 = sub_60913FB4(v73);
  *(_DWORD *)(v56 + v57) = -1090519040;
  v58 = v56 + v57;
  FIELD_U32(v58, 4) = 0;
  FIELD_U32(v58, 8) = 0;
  v59 = dword_60CC73E8(a1[474]);
  *(_DWORD *)(v59 + sub_60913FB4(v73) + 12) = 1065353216;
  v60 = dword_60CC73E8(a1[474]);
  v61 = (_DWORD *)(v60 + sub_60913FB4(v73));
  v61[4] = 1056964608;
  v61[5] = 0;
  v61[6] = 0;
  v62 = dword_60CC73E8(a1[474]);
  *(_DWORD *)(v62 + sub_60913FB4(v73) + 28) = 1065353216;
  v63 = dword_60CC73E8(a1[474]);
  v64 = (_DWORD *)(v63 + sub_60913FB4(v73));
  v64[8] = -1090519040;
  v64[9] = -1082130432;
  v64[10] = 0;
  v65 = dword_60CC73E8(a1[474]);
  *(_DWORD *)(v65 + sub_60913FB4(v73) + 44) = 1065353216;
  v66 = dword_60CC73E8(a1[474]);
  v67 = (_DWORD *)(v66 + sub_60913FB4(v73));
  v67[12] = 1056964608;
  v67[13] = -1082130432;
  v67[14] = 0;
  v68 = dword_60CC73E8(a1[474]);
  *(_DWORD *)(v68 + sub_60913FB4(v73) + 60) = 1065353216;
  sub_60913A6C(v75, v73, 0);
  sub_609225B8(a1 + 478, v75, 16, 64);
  sub_60922768(a1 + 478, 0, 34, 0, 0);
  sub_60922768(a1 + 478, 1, 10, 12, 0);
  sub_60921D30(a1 + 546, 1, v74);
  sub_60921DF0(a1 + 546, 0, a1 + 478, 0);
  sub_60921DF0(a1 + 546, 3, a1 + 478, 1);
  return sub_60921F90(a1 + 546);
}
