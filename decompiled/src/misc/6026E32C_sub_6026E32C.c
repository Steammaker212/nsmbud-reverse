/* sub_6026E32C
 * address: 0x6026E32C   size: 1596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6026E32C(int a1)
{
  float v1; // s2
  float v2; // s6
  int **v3; // r4
  int v4; // r0
  int (__fastcall *v5)(int, float *); // r2
  int v6; // r7
  unsigned int v7; // r0
  float *v8; // r1
  float v9; // s0
  float v10; // s4
  float v11; // s2
  float v12; // s6
  unsigned int v13; // r1
  float *v14; // r2
  float v15; // s8
  float v16; // s10
  float v17; // s12
  float v18; // s14
  unsigned int v19; // r2
  float *v20; // r3
  float v21; // s9
  float v22; // s11
  float v23; // s13
  float v24; // s12
  float v25; // s5
  float v26; // s1
  float v27; // s8
  float v28; // s2
  float v29; // s0
  int v30; // r0
  int (__fastcall *v31)(int, int (***)()); // r2
  int v32; // r7
  int *v33; // r1
  int v34; // r0
  int (__fastcall *v35)(int, int (***)()); // r2
  int v36; // r7
  int *v37; // r1
  int v38; // r0
  int (__fastcall *v39)(int, int (***)()); // r2
  int v40; // r7
  int *v41; // r1
  int v42; // r0
  int (__fastcall *v43)(int, int (***)()); // r2
  int v44; // r7
  int *v45; // r1
  unsigned int v46; // r0
  unsigned int v47; // r3
  float *v48; // r1
  int v49; // s10
  float *v50; // r0
  float v51; // s2
  float v52; // s4
  float v53; // s0
  float v54; // s6
  unsigned int v55; // r1
  float v56; // s10
  float *v57; // r2
  float v58; // s0
  float v59; // s2
  float v60; // s8
  float v61; // s6
  float v62; // s3
  float v63; // s11
  float v64; // s14
  float v65; // s7
  _DWORD *result; // r0
  int (**v67)(); // [sp+0h] [bp-B0h] BYREF
  const char *v68; // [sp+4h] [bp-ACh]
  _DWORD v69[3]; // [sp+8h] [bp-A8h] BYREF
  int *v70; // [sp+14h] [bp-9Ch] BYREF
  int *v71; // [sp+18h] [bp-98h]
  int v72; // [sp+1Ch] [bp-94h]
  float v73; // [sp+20h] [bp-90h] BYREF
  float v74; // [sp+24h] [bp-8Ch]
  float v75; // [sp+28h] [bp-88h]
  int v76; // [sp+2Ch] [bp-84h]
  float v77; // [sp+30h] [bp-80h]
  float v78; // [sp+34h] [bp-7Ch]
  float v79; // [sp+38h] [bp-78h]
  int v80; // [sp+3Ch] [bp-74h]
  float v81; // [sp+40h] [bp-70h]
  float v82; // [sp+44h] [bp-6Ch]
  float v83; // [sp+48h] [bp-68h]
  int v84; // [sp+4Ch] [bp-64h]
  float v85[3]; // [sp+50h] [bp-60h] BYREF
  int *v86; // [sp+5Ch] [bp-54h]
  float v87; // [sp+60h] [bp-50h]
  float v88; // [sp+64h] [bp-4Ch]
  float v89; // [sp+68h] [bp-48h]
  int *v90; // [sp+6Ch] [bp-44h]
  float v91; // [sp+70h] [bp-40h]
  float v92; // [sp+74h] [bp-3Ch]
  float v93; // [sp+78h] [bp-38h]
  _DWORD *v94; // [sp+7Ch] [bp-34h]

  v1 = (float)(0.024541 * 0.0) + 0.0;
  v2 = (float)(-0.00030118 * 0.0) + 1.0;
  v85[0] = v2 * v2;
  v87 = v1 * v2;
  v91 = -v1;
  v85[1] = (float)((float)(v1 * v1) * v2) - (float)(v1 * v2);
  v88 = (float)(v2 * v2) + (float)(v1 * (float)(v1 * v1));
  v92 = v1 * v2;
  v85[2] = (float)(v1 * v1) + (float)(v1 * (float)(v2 * v2));
  v89 = (float)(v1 * v92) - v92;
  v93 = v2 * v2;
  v86 = 0;
  v90 = 0;
  v94 = 0;
  v3 = (int **)(a1 + 6104);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6104) + 60))(**(_DWORD **)(a1 + 6104), v85);
  (*(void (__fastcall **)(int, int **))(*(_DWORD *)**v3 + 68))(**v3, v3 - 1490);
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v69[0] = 1065353216;
  v69[1] = 1065353216;
  v69[2] = 1065353216;
  v4 = **v3;
  v5 = *(int (__fastcall **)(int, float *))(*(_DWORD *)v4 + 84);
  v73 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v74 = COERCE_FLOAT("houdai_rot_gun");
  v6 = v5(v4, &v73);
  (*(void (__fastcall **)(int, int, float *, int **))(*(_DWORD *)**v3 + 100))(**v3, v6, &v73, &v70);
  v7 = (unsigned int)*(v3 - 1487);
  v8 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  v13 = (unsigned int)*(v3 - 1486);
  v14 = (float *)((char *)sinLutTable + ((v13 >> 20) & 0xFF0));
  v15 = *v14;
  v16 = v14[1];
  v17 = v14[2];
  v18 = v14[3];
  v19 = (unsigned int)v3[843];
  v20 = (float *)((char *)sinLutTable + ((v19 >> 20) & 0xFF0));
  v21 = (float)(v7 & 0xFFFFFF);
  v22 = (float)(v13 & 0xFFFFFF) * 0.000000059605;
  v23 = (float)(v19 & 0xFFFFFF) * 0.000000059605;
  v24 = v17 + (float)(v22 * v18);
  v25 = v20[2] + (float)(v23 * v20[3]);
  v26 = *v20 + (float)(v23 * v20[1]);
  v27 = v15 + (float)(v22 * v16);
  v28 = v11 + (float)((float)(v21 * 0.000000059605) * v12);
  v29 = v9 + (float)(v10 * (float)(v21 * 0.000000059605));
  v73 = v24 * v25;
  v77 = v24 * v26;
  v81 = -v27;
  v74 = (float)((float)(v29 * v27) * v25) - (float)(v28 * v26);
  v78 = (float)(v28 * v25) + (float)((float)(v29 * v27) * v26);
  v82 = v29 * v24;
  v75 = (float)(v27 * (float)(v28 * v25)) + (float)(v29 * v26);
  v79 = (float)(v27 * (float)(v28 * v26)) - (float)(v29 * v25);
  v83 = v28 * v24;
  (*(void (__fastcall **)(int, int, float *, _DWORD *))(*(_DWORD *)**v3 + 96))(**v3, v6, &v73, v69);
  v30 = **v3;
  v31 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v30 + 84);
  v67 = &sead__SafeStringBase__vtable;
  v68 = "gun_upper";
  v32 = v31(v30, &v67);
  (*(void (__fastcall **)(int, int, float *, int **))(*(_DWORD *)**v3 + 100))(**v3, v32, &v73, &v70);
  v33 = v3[825];
  v70 = v3[824];
  v71 = v33;
  v72 = 1065353216;
  (*(void (__fastcall **)(int, int, float *, int **))(*(_DWORD *)**v3 + 96))(**v3, v32, &v73, &v70);
  v34 = **v3;
  v35 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v34 + 84);
  v67 = &sead__SafeStringBase__vtable;
  v68 = "gun_under";
  v36 = v35(v34, &v67);
  (*(void (__fastcall **)(int, int, float *, int **))(*(_DWORD *)**v3 + 100))(**v3, v36, &v73, &v70);
  v37 = v3[827];
  v70 = v3[826];
  v71 = v37;
  v72 = 1065353216;
  (*(void (__fastcall **)(int, int, float *, int **))(*(_DWORD *)**v3 + 96))(**v3, v36, &v73, &v70);
  v38 = **v3;
  v39 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v38 + 84);
  v67 = &sead__SafeStringBase__vtable;
  v68 = "gun_left";
  v40 = v39(v38, &v67);
  (*(void (__fastcall **)(int, int, float *, int **))(*(_DWORD *)**v3 + 100))(**v3, v40, &v73, &v70);
  v41 = v3[829];
  v70 = v3[828];
  v71 = v41;
  v72 = 1065353216;
  (*(void (__fastcall **)(int, int, float *, int **))(*(_DWORD *)**v3 + 96))(**v3, v40, &v73, &v70);
  v42 = **v3;
  v43 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v42 + 84);
  v67 = &sead__SafeStringBase__vtable;
  v68 = "gun_right";
  v44 = v43(v42, &v67);
  (*(void (__fastcall **)(int, int, float *, int **, int (**)()))(*(_DWORD *)**v3 + 100))(**v3, v44, &v73, &v70, v67);
  v45 = v3[831];
  v70 = v3[830];
  v71 = v45;
  v72 = 1065353216;
  (*(void (__fastcall **)(int, int, float *, int **))(*(_DWORD *)**v3 + 96))(**v3, v44, &v73, &v70);
  v46 = (unsigned int)*(v3 - 1485);
  v47 = (unsigned int)*(v3 - 1487);
  v48 = (float *)((char *)sinLutTable + ((v46 >> 20) & 0xFF0));
  v49 = v46 & 0xFFFFFF;
  v50 = (float *)((char *)sinLutTable + ((v47 >> 20) & 0xFF0));
  v51 = *v48;
  v52 = v48[1];
  v53 = v48[2];
  v54 = v48[3];
  v55 = (unsigned int)*(v3 - 1486);
  v56 = (float)(unsigned int)v49 * 0.000000059605;
  v57 = (float *)((char *)sinLutTable + ((v55 >> 20) & 0xFF0));
  v58 = v53 + (float)(v56 * v54);
  v59 = v51 + (float)(v56 * v52);
  v60 = (float)(v55 & 0xFFFFFF) * 0.000000059605;
  v61 = (float)(v47 & 0xFFFFFF) * 0.000000059605;
  v62 = v57[2] + (float)(v60 * v57[3]);
  v63 = v50[2] + (float)(v61 * v50[3]);
  v64 = *v57 + (float)(v60 * v57[1]);
  v65 = *v50 + (float)(v61 * v50[1]);
  v73 = v62 * v58;
  v77 = v62 * v59;
  v81 = -v64;
  v74 = (float)((float)(v65 * v64) * v58) - (float)(v63 * v59);
  v78 = (float)(v63 * v58) + (float)((float)(v65 * v64) * v59);
  v82 = v65 * v62;
  v75 = (float)(v64 * (float)(v63 * v58)) + (float)(v65 * v59);
  v79 = (float)(v64 * (float)(v63 * v59)) - (float)(v65 * v58);
  v83 = v63 * v62;
  v76 = (int)*(v3 - 1499);
  v80 = (int)*(v3 - 1498);
  v84 = (int)*(v3 - 1497);
  (*(void (__fastcall **)(int, _DWORD, float *, _DWORD *))(*(_DWORD *)**v3 + 96))(**v3, 0, &v73, v69);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v3 + 56))(**v3);
  (*(void (__fastcall **)(int, int, float *))(*(_DWORD *)**v3 + 108))(**v3, 1, v85);
  v3[832] = v86;
  v3[833] = v90;
  result = v94;
  v3[834] = v94;
  return result;
}
