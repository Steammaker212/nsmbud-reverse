/* sub_607201B0
 * address: 0x607201B0   size: 1288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607201B0(int result, unsigned int a2, float *a3, unsigned int a4)
{
  unsigned int v4; // r7
  unsigned int v6; // r2
  __int64 v7; // r8
  unsigned int v8; // r6
  int v9; // r12
  unsigned int v10; // r10
  int *v11; // r12
  unsigned int v12; // t1
  unsigned int v13; // r4
  float v14; // s20
  float v15; // s22
  float v16; // s24
  float v17; // s26
  float v18; // s16
  float v19; // s28
  float v20; // s30
  float v21; // s17
  float v22; // s19
  float v23; // s21
  float v24; // s23
  float v25; // s25
  unsigned int v26; // r1
  int v27; // r11
  int v28; // r6
  int v29; // r0
  int v30; // r2
  int v31; // r10
  float *v32; // r0
  int v33; // r6
  int v34; // r0
  float v35; // s0
  float v36; // s20
  float v37; // s22
  float v38; // s24
  float v39; // s26
  float v40; // s28
  float v41; // s30
  float v42; // s17
  float v43; // s19
  float v44; // s21
  float v45; // s23
  float v46; // s25
  float v47; // s29
  float v48; // s27
  int v49; // r6
  int v50; // r4
  float *v51; // r0
  int v52; // r6
  int v53; // r0
  float v54; // s24
  int v55; // r6
  int v56; // r0
  float v57; // s24
  float v58; // s26
  float v59; // s28
  float v60; // s30
  float v61; // s17
  float v62; // s19
  float v63; // s21
  float v64; // s23
  float v65; // s25
  float v66; // s29
  float v67; // s27
  int v68; // r6
  int v69; // r4
  float *v70; // r0
  int v71; // r6
  int v72; // r0
  float v73; // s24
  int v74; // r6
  int v75; // r0
  float v76; // s24
  float v77; // s26
  float v78; // s28
  float v79; // s30
  float v80; // s17
  float v81; // s19
  float v82; // s21
  float v83; // s23
  float v84; // s25
  float v85; // s29
  float v86; // s27
  int v87; // r5
  int v88; // r4
  float *v89; // r0
  int v90; // r5
  int v91; // r0
  float v92; // s16
  int v93; // r5
  int v94; // r0
  float v95; // s16
  int v96; // r5
  int v97; // r0
  int v98; // [sp+4h] [bp-7Ch]
  int v99; // [sp+8h] [bp-78h]
  int *v100; // [sp+10h] [bp-70h]
  int v101; // [sp+14h] [bp-6Ch]

  v4 = 0;
  v6 = 0;
  if ( a2 < 4 )
    v4 = a2;
  v7 = *(_QWORD *)&dword_60CBD840;
  v8 = (unsigned __int8)(a4 / (dword_60CBD844 * dword_60CBD840));
  if ( v8 >= 4 )
    v8 = 0;
  v9 = result + 16 * v4 + 4 * v8;
  v12 = FIELD_U32(v9, 944);
  v11 = (int *)(v9 + 944);
  v10 = v12;
  if ( !(v12 >> 11) )
  {
    v13 = a4 % (dword_60CBD844 * dword_60CBD840);
    v14 = a3[8];
    v15 = a3[9];
    v16 = a3[10];
    v17 = a3[11];
    v18 = a3[1];
    v19 = a3[2];
    v20 = a3[3];
    v21 = a3[4];
    v22 = a3[5];
    v23 = a3[6];
    v24 = a3[7];
    v25 = *a3;
    v26 = a2 + 4 * FIELD_U32(result, 16);
    if ( v26 < 8 )
      v6 = v26;
    v27 = result + 112 * v6 + 28 * v8;
    v100 = v11;
    v99 = dword_60CBD848;
    v98 = dword_60CBD84C;
    v28 = dword_60CC73E8(FIELD_U32(v27, 32));
    v29 = sub_60913FB4(v27 + 20);
    v30 = 5 * (2048 - v10);
    v31 = 80 * (2048 - v10) - 80;
    v101 = v30;
    v32 = (float *)(v28 + v29 + v31);
    *v32 = v20 + (float)((float)((float)(v18 * -8.0) - (float)(v25 * 8.0)) + (float)(v19 * 0.0));
    v32[1] = v24 + (float)((float)((float)(v22 * -8.0) - (float)(v21 * 8.0)) + (float)(v23 * 0.0));
    v32[2] = v17 + (float)((float)((float)(v15 * -8.0) - (float)(v14 * 8.0)) + (float)(v16 * 0.0));
    v33 = dword_60CC73E8(FIELD_U32(v27, 32));
    v34 = v33 + sub_60913FB4(v27 + 20) + v31;
    v35 = (float)((v99 - v98) / 2);
    v36 = (float)((float)(v13 % (unsigned int)v7) / (float)(int)v7) + (float)(v35 * 0.00048828);
    v37 = (float)((float)(v13 / (unsigned int)v7) / (float)SHIDWORD(v7)) + (float)(v35 * 0.0019531);
    FIELD_F32(v34, 12) = v36;
    FIELD_F32(v34, 16) = v37;
    v38 = a3[2];
    v39 = a3[3];
    v40 = a3[5];
    v41 = a3[6];
    v42 = a3[7];
    v43 = a3[8];
    v44 = a3[9];
    v45 = a3[10];
    v46 = a3[11];
    v47 = a3[4] * 8.0;
    v48 = (float)(*a3 * 8.0) - (float)(a3[1] * 8.0);
    v49 = dword_60CC73E8(FIELD_U32(v27, 32));
    v50 = 16 * v101 - 60;
    v51 = (float *)(v49 + sub_60913FB4(v27 + 20) + v50);
    *v51 = v39 + (float)(v48 + (float)(v38 * 0.0));
    v51[1] = v42 + (float)((float)(v47 - (float)(v40 * 8.0)) + (float)(v41 * 0.0));
    v51[2] = v46 + (float)((float)((float)(v43 * 8.0) - (float)(v44 * 8.0)) + (float)(v45 * 0.0));
    v52 = dword_60CC73E8(FIELD_U32(v27, 32));
    v53 = v52 + sub_60913FB4(v27 + 20) + v50;
    FIELD_F32(v53, 12) = v36;
    FIELD_F32(v53, 16) = v37;
    v54 = unk_60CBD850;
    v55 = dword_60CC73E8(FIELD_U32(v27, 32));
    v56 = sub_60913FB4(v27 + 20);
    *(float *)(v55 + v56 + v50 + 12) = v54 + *(float *)(v55 + v56 + v50 + 12);
    v57 = a3[2];
    v58 = a3[3];
    v59 = a3[4];
    v60 = a3[6];
    v61 = a3[7];
    v62 = a3[8];
    v63 = a3[9];
    v64 = a3[10];
    v65 = a3[11];
    v66 = a3[5] * 8.0;
    v67 = (float)(a3[1] * 8.0) - (float)(*a3 * 8.0);
    v68 = dword_60CC73E8(FIELD_U32(v27, 32));
    v69 = 16 * v101 - 40;
    v70 = (float *)(v68 + sub_60913FB4(v27 + 20) + v69);
    *v70 = v58 + (float)(v67 + (float)(v57 * 0.0));
    v70[1] = v61 + (float)((float)(v66 - (float)(v59 * 8.0)) + (float)(v60 * 0.0));
    v70[2] = v65 + (float)((float)((float)(v63 * 8.0) - (float)(v62 * 8.0)) + (float)(v64 * 0.0));
    v71 = dword_60CC73E8(FIELD_U32(v27, 32));
    v72 = v71 + sub_60913FB4(v27 + 20) + v69;
    FIELD_F32(v72, 12) = v36;
    FIELD_F32(v72, 16) = v37;
    v73 = unk_60CBD854;
    v74 = dword_60CC73E8(FIELD_U32(v27, 32));
    v75 = sub_60913FB4(v27 + 20);
    *(float *)(v74 + v75 + v69 + 16) = v73 + *(float *)(v74 + v75 + v69 + 16);
    v76 = a3[2];
    v77 = a3[3];
    v78 = a3[4];
    v79 = a3[6];
    v80 = a3[7];
    v81 = a3[8];
    v82 = a3[9];
    v83 = a3[10];
    v84 = a3[11];
    v85 = a3[5] * 8.0;
    v86 = (float)(a3[1] * 8.0) + (float)(*a3 * 8.0);
    v87 = dword_60CC73E8(FIELD_U32(v27, 32));
    v88 = 16 * v101 - 20;
    v89 = (float *)(v87 + sub_60913FB4(v27 + 20) + v88);
    *v89 = v77 + (float)(v86 + (float)(v76 * 0.0));
    v89[1] = v80 + (float)((float)(v85 + (float)(v78 * 8.0)) + (float)(v79 * 0.0));
    v89[2] = v84 + (float)((float)((float)(v82 * 8.0) + (float)(v81 * 8.0)) + (float)(v83 * 0.0));
    v90 = dword_60CC73E8(FIELD_U32(v27, 32));
    v91 = v90 + sub_60913FB4(v27 + 20) + v88;
    FIELD_F32(v91, 12) = v36;
    FIELD_F32(v91, 16) = v37;
    v92 = unk_60CBD850;
    v93 = dword_60CC73E8(FIELD_U32(v27, 32));
    v94 = sub_60913FB4(v27 + 20);
    *(float *)(v93 + v94 + v88 + 12) = v92 + *(float *)(v93 + v94 + v88 + 12);
    v95 = unk_60CBD854;
    v96 = dword_60CC73E8(FIELD_U32(v27, 32));
    v97 = sub_60913FB4(v27 + 20);
    *(float *)(v96 + v97 + v88 + 16) = v95 + *(float *)(v96 + v97 + v88 + 16);
    result = *v100 + 1;
    *v100 = result;
  }
  return result;
}
