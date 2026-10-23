/* sub_606134E8
 * address: 0x606134E8   size: 2120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606134E8(int a1)
{
  unsigned int v2; // r2
  unsigned int v3; // r5
  unsigned int v4; // r7
  float v5; // r1
  int v6; // r6
  float *v7; // r4
  float v8; // r0
  float *v9; // r3
  float v10; // s2
  float v11; // s0
  float v12; // s8
  float v13; // s3
  float v14; // s4
  float v15; // s14
  float v16; // s10
  float v17; // s11
  float v18; // s7
  unsigned int v19; // r0
  unsigned int v20; // r1
  unsigned int v21; // r2
  float *v22; // r7
  float *v23; // r3
  float *v24; // r6
  float v25; // s12
  float v26; // r0
  float v27; // s2
  float v28; // s0
  float v29; // s8
  float v30; // s4
  float v31; // s3
  float v32; // s14
  float v33; // s2
  float v34; // s11
  float v35; // s7
  unsigned int v36; // r2
  unsigned int v37; // r0
  unsigned int v38; // r3
  int v39; // r7
  float *v40; // r1
  float *v41; // r6
  float v42; // s0
  float v43; // s2
  float v44; // s8
  float v45; // s3
  float v46; // s4
  float v47; // s14
  float v48; // s10
  float v49; // s11
  float v50; // s7
  _DWORD **v51; // r4
  int v52; // r0
  int (__fastcall *v53)(int, int (***)()); // r2
  int v54; // r6
  float v55; // s2
  int v56; // r0
  int (__fastcall *v57)(int, int (***)()); // r2
  int v58; // r0
  int v59; // r0
  int (__fastcall *v60)(int, int (***)()); // r2
  int v61; // r0
  float v62; // s8
  float v63; // s4
  float v64; // r0
  float v65; // s14
  float v66; // s0
  int **v67; // r4
  unsigned int v68; // r1
  bool v69; // zf
  int v70; // r0
  int (__fastcall *v71)(int, int (***)()); // r2
  int v72; // r0
  int result; // r0
  _BYTE v74[12]; // [sp+14h] [bp-9Ch] BYREF
  int (**v75)(); // [sp+20h] [bp-90h] BYREF
  const char *v76; // [sp+24h] [bp-8Ch]
  float v77; // [sp+2Ch] [bp-84h]
  float v78; // [sp+3Ch] [bp-74h]
  float v79; // [sp+4Ch] [bp-64h]
  float v80; // [sp+50h] [bp-60h] BYREF
  float v81; // [sp+54h] [bp-5Ch]
  float v82; // [sp+58h] [bp-58h]
  float v83; // [sp+5Ch] [bp-54h]
  float v84; // [sp+60h] [bp-50h]
  float v85; // [sp+64h] [bp-4Ch]
  float v86; // [sp+68h] [bp-48h]
  float v87; // [sp+6Ch] [bp-44h]
  float v88; // [sp+70h] [bp-40h]
  float v89; // [sp+74h] [bp-3Ch]
  float v90; // [sp+78h] [bp-38h]
  int v91; // [sp+7Ch] [bp-34h]

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = FIELD_F32(a1, 108);
  v6 = (v2 >> 20) & 0xFF0;
  v7 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v8 = FIELD_F32(a1, 112);
  v9 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v10 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v11 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v12 = v7[2] + (float)(v10 * v7[3]);
  v13 = v9[2] + (float)(v11 * v9[3]);
  v14 = *v7 + (float)(v10 * v7[1]);
  v15 = *v9 + (float)(v11 * v9[1]);
  v16 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v17 = *(float *)((char *)&sinLutTable[2] + v6) + (float)(v16 * *(float *)((char *)&sinLutTable[3] + v6));
  v18 = *(float *)((char *)sinLutTable + v6) + (float)(v16 * *(float *)((char *)&sinLutTable[1] + v6));
  v80 = v13 * v12;
  v84 = v13 * v14;
  v88 = -v15;
  v81 = (float)((float)(v18 * v15) * v12) - (float)(v17 * v14);
  v85 = (float)(v17 * v12) + (float)((float)(v18 * v15) * v14);
  v89 = v18 * v13;
  v82 = (float)(v15 * (float)(v17 * v12)) + (float)(v18 * v14);
  v86 = (float)(v15 * (float)(v17 * v14)) - (float)(v18 * v12);
  v90 = v17 * v13;
  v83 = v5;
  v87 = v8;
  v91 = 1161117696;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6760) + 60))(**(_DWORD **)(a1 + 6760), &v80);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6760) + 68))(**(_DWORD **)(a1 + 6760), a1 + 144);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6760));
  v19 = FIELD_U32(a1, 156);
  v20 = FIELD_U32(a1, 160);
  v21 = FIELD_U32(a1, 164);
  v22 = (float *)((char *)sinLutTable + ((v20 >> 20) & 0xFF0));
  v23 = (float *)((char *)sinLutTable + ((v19 >> 20) & 0xFF0));
  v24 = (float *)((char *)sinLutTable + ((v21 >> 20) & 0xFF0));
  v25 = (float)(v19 & 0xFFFFFF);
  v26 = FIELD_F32(a1, 112);
  v27 = (float)(v21 & 0xFFFFFF) * 0.000000059605;
  v28 = (float)(v20 & 0xFFFFFF) * 0.000000059605;
  v29 = v24[2] + (float)(v27 * v24[3]);
  v30 = *v24 + (float)(v27 * v24[1]);
  v31 = v22[2] + (float)(v28 * v22[3]);
  v32 = *v22 + (float)(v28 * v22[1]);
  v33 = FIELD_F32(a1, 108);
  v34 = v23[2] + (float)((float)(v25 * 0.000000059605) * v23[3]);
  v35 = *v23 + (float)((float)(v25 * 0.000000059605) * v23[1]);
  v80 = v31 * v29;
  v84 = v31 * v30;
  v88 = -v32;
  v81 = (float)((float)(v35 * v32) * v29) - (float)(v34 * v30);
  v85 = (float)(v34 * v29) + (float)((float)(v35 * v32) * v30);
  v89 = v35 * v31;
  v82 = (float)(v32 * (float)(v34 * v29)) + (float)(v35 * v30);
  v86 = (float)(v32 * (float)(v34 * v30)) - (float)(v35 * v29);
  v90 = v34 * v31;
  v83 = v33 + 256.0;
  v87 = v26;
  v91 = -991887360;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6768) + 60))(**(_DWORD **)(a1 + 6768), &v80);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6768) + 68))(**(_DWORD **)(a1 + 6768), a1 + 144);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6768));
  v36 = FIELD_U32(a1, 7592);
  v37 = FIELD_U32(a1, 7588);
  v38 = FIELD_U32(a1, 7584);
  v39 = (v38 >> 20) & 0xFF0;
  v40 = (float *)((char *)sinLutTable + ((v37 >> 20) & 0xFF0));
  v41 = (float *)((char *)sinLutTable + ((v36 >> 20) & 0xFF0));
  v42 = (float)(v36 & 0xFFFFFF) * 0.000000059605;
  v43 = (float)(v37 & 0xFFFFFF) * 0.000000059605;
  v44 = v41[2] + (float)(v42 * v41[3]);
  v45 = v40[2] + (float)(v43 * v40[3]);
  v46 = *v41 + (float)(v42 * v41[1]);
  v47 = *v40 + (float)(v43 * v40[1]);
  v48 = (float)(v38 & 0xFFFFFF) * 0.000000059605;
  v49 = *(float *)((char *)&sinLutTable[2] + v39) + (float)(v48 * *(float *)((char *)&sinLutTable[3] + v39));
  v50 = *(float *)((char *)sinLutTable + v39) + (float)(v48 * *(float *)((char *)&sinLutTable[1] + v39));
  v80 = v45 * v44;
  v84 = v45 * v46;
  v88 = -v47;
  v81 = (float)((float)(v50 * v47) * v44) - (float)(v49 * v46);
  v85 = (float)(v49 * v44) + (float)((float)(v50 * v47) * v46);
  v89 = v50 * v45;
  v82 = (float)(v47 * (float)(v49 * v44)) + (float)(v50 * v46);
  v86 = (float)(v47 * (float)(v49 * v46)) - (float)(v50 * v44);
  v90 = v49 * v45;
  v83 = FIELD_F32(a1, 7424);
  v87 = FIELD_F32(a1, 7428);
  v91 = FIELD_U32(a1, 7432);
  v51 = (_DWORD **)(a1 + 6764);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6764) + 60))(**(_DWORD **)(a1 + 6764), &v80);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v51 + 68))(**v51, a1 + 144);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6764));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v51 + 52))(**v51);
  v52 = **(_DWORD **)(a1 + 6764);
  v53 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v52 + 84);
  v75 = &sead__SafeStringBase__vtable;
  v76 = "position_root";
  v54 = v53(v52, &v75);
  (*(void (__fastcall **)(_DWORD, int, int (***)(), _BYTE *))(*(_DWORD *)**v51 + 100))(**v51, v54, &v75, v74);
  v55 = FIELD_F32(a1, 7552);
  v77 = FIELD_F32(a1, 7556) + v77;
  v78 = v78 - v55;
  v79 = v79 + 0.0;
  (*(void (__fastcall **)(_DWORD, int, int (***)(), _BYTE *))(*(_DWORD *)**v51 + 96))(**v51, v54, &v75, v74);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v51 + 56))(**v51);
  v56 = **(_DWORD **)(a1 + 6764);
  v57 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v56 + 84);
  v75 = &sead__SafeStringBase__vtable;
  v76 = "flag_start";
  v58 = v57(v56, &v75);
  (*(void (__fastcall **)(_DWORD, int, int (***)()))(*(_DWORD *)**v51 + 108))(**v51, v58, &v75);
  FIELD_F32(a1, 7436) = v77;
  FIELD_F32(a1, 7440) = v78;
  FIELD_F32(a1, 7444) = v79;
  v59 = **(_DWORD **)(a1 + 6764);
  v60 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v59 + 84);
  v75 = &sead__SafeStringBase__vtable;
  v76 = "position_root";
  v61 = v60(v59, &v75);
  (*(void (__fastcall **)(_DWORD, int, int (***)()))(*(_DWORD *)**v51 + 108))(**v51, v61, &v75);
  FIELD_F32(a1, 7448) = v77;
  FIELD_F32(a1, 7452) = v78;
  FIELD_F32(a1, 7456) = v79;
  v62 = (float)(-0.00030118 * 0.0) + 1.0;
  v63 = (float)(0.024541 * 0.0) + 0.0;
  v64 = FIELD_F32(a1, 7424);
  v65 = (float)(0.00030118 * 0.0) + -1.0;
  v66 = FIELD_F32(a1, 7428) - FIELD_F32(a1, 7560);
  v80 = v62 * v63;
  v84 = v63 * v63;
  v88 = -v65;
  v81 = (float)(v62 * (float)(v63 * v65)) - (float)(v63 * v62);
  v85 = (float)(v62 * v62) + (float)(v63 * (float)(v63 * v65));
  v89 = v63 * v63;
  v82 = (float)((float)(v62 * v62) * v65) + (float)(v63 * v63);
  v86 = (float)((float)(v63 * v62) * v65) - (float)(v63 * v62);
  v90 = v62 * v63;
  v83 = v64;
  v87 = v66;
  v91 = 1161117696;
  v67 = (int **)(a1 + 6772);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6772) + 60))(**(_DWORD **)(a1 + 6772), &v80);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)**v67 + 68))(**v67, a1 + 144);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6772));
  (*(void (__fastcall **)(int))(*(_DWORD *)**v67 + 52))(**v67);
  v68 = FIELD_U32(a1, 7628);
  v69 = v68 == -1;
  if ( v68 != -1 )
    v69 = FIELD_U8(a1, 7611) == 0;
  if ( !v69 )
  {
    if ( v68 >= 4 )
      v68 = 0;
    sub_60959C28(a1 + 7640, dword_60CC6D78 + 1784 * v68 + 102208, 0);
    sub_6091872C(*(_DWORD *)(**v67 + 76), 1, a1 + 7648);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)**v67 + 56))(**v67);
  v70 = **v67;
  v71 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v70 + 84);
  v75 = &sead__SafeStringBase__vtable;
  v76 = "position_root";
  v72 = v71(v70, &v75);
  (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v67 + 108))(**v67, v72, &v75);
  FIELD_F32(a1, 7460) = v77;
  FIELD_F32(a1, 7464) = v78;
  result = LODWORD(v79);
  FIELD_F32(a1, 7468) = v79;
  return result;
}
