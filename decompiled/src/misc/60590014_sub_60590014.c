/* sub_60590014
 * address: 0x60590014   size: 1456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60590014(int a1)
{
  float v2; // s0
  unsigned int v3; // r0
  unsigned int v4; // r3
  int v5; // r1
  int v6; // s4
  int v7; // s14
  float *v8; // r3
  float *v9; // r1
  float *v10; // r0
  float v11; // s2
  float v12; // s4
  float v13; // s10
  float v14; // s5
  float v15; // s6
  float v16; // s1
  float v17; // s12
  float v18; // s13
  float v19; // s9
  unsigned int v20; // r2
  unsigned int v21; // r3
  unsigned int v22; // r1
  int v23; // r12
  int v24; // lr
  float *v25; // r0
  float *v26; // r6
  float *v27; // r5
  float v28; // s12
  float v29; // r2
  float v30; // s0
  float v31; // s2
  float v32; // s8
  float v33; // s3
  float v34; // s4
  float v35; // s14
  float v36; // s11
  float v37; // s7
  unsigned int v38; // r2
  unsigned int v39; // r5
  int v40; // r12
  int v41; // lr
  float *v42; // r6
  float *v43; // r0
  float *v44; // r1
  float v45; // s2
  float v46; // r2
  float v47; // s0
  float v48; // s8
  float v49; // s4
  float v50; // s10
  float v51; // s3
  float v52; // s14
  float v53; // s11
  float v54; // s7
  float v55; // s0
  int result; // r0
  unsigned int v57; // r2
  unsigned int v58; // r5
  int v59; // r12
  int v60; // lr
  float *v61; // r6
  float *v62; // r0
  float *v63; // r1
  float v64; // s4
  float v65; // s2
  float v66; // s10
  float v67; // s6
  float v68; // s12
  float v69; // s5
  float v70; // s1
  float v71; // s13
  float v72; // s9
  float v73; // [sp+0h] [bp-50h] BYREF
  float v74; // [sp+4h] [bp-4Ch]
  float v75; // [sp+8h] [bp-48h]
  float v76; // [sp+Ch] [bp-44h]
  float v77; // [sp+10h] [bp-40h]
  float v78; // [sp+14h] [bp-3Ch]
  float v79; // [sp+18h] [bp-38h]
  int v80; // [sp+1Ch] [bp-34h]
  float v81; // [sp+20h] [bp-30h]
  float v82; // [sp+24h] [bp-2Ch]
  float v83; // [sp+28h] [bp-28h]
  int v84; // [sp+2Ch] [bp-24h]

  v2 = FIELD_F32(a1, 108);
  if ( (float)(FIELD_F32(dword_60CC6484, 112) + -300.0) < v2 && (float)(FIELD_F32(dword_60CC6484, 120) + 300.0) > v2 )
  {
    v3 = FIELD_U32(a1, 156);
    v4 = FIELD_U32(a1, 160);
    v5 = (v4 >> 20) & 0xFF0;
    v6 = v4 & 0xFFFFFF;
    v7 = v3 & 0xFFFFFF;
    v8 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 164) >> 20) & 0xFF0));
    v9 = (float *)((char *)sinLutTable + v5);
    v10 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
    v11 = (float)(FIELD_U32(a1, 164) & 0xFFFFFF) * 0.000000059605;
    v12 = (float)(unsigned int)v6 * 0.000000059605;
    v13 = v8[2] + (float)(v11 * v8[3]);
    v14 = v9[2] + (float)(v12 * v9[3]);
    v15 = *v8 + (float)(v11 * v8[1]);
    v16 = *v9 + (float)(v12 * v9[1]);
    v17 = (float)(unsigned int)v7 * 0.000000059605;
    v18 = v10[2] + (float)(v17 * v10[3]);
    v19 = *v10 + (float)(v17 * v10[1]);
    v73 = v14 * v13;
    v77 = v14 * v15;
    v81 = -v16;
    v74 = (float)((float)(v19 * v16) * v13) - (float)(v18 * v15);
    v78 = (float)(v18 * v13) + (float)((float)(v19 * v16) * v15);
    v82 = v19 * v14;
    v75 = (float)(v16 * (float)(v18 * v13)) + (float)(v19 * v15);
    v79 = (float)(v16 * (float)(v18 * v15)) - (float)(v19 * v13);
    v83 = v18 * v14;
    v76 = v2;
    v80 = FIELD_U32(a1, 112);
    v84 = FIELD_U32(a1, 116);
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 644) + 60))(**(_DWORD **)(a1 + 644), &v73);
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 644));
    v20 = FIELD_U32(a1, 156);
    v21 = FIELD_U32(a1, 160);
    v22 = FIELD_U32(a1, 164);
    v23 = FIELD_U32(a1, 116);
    v24 = FIELD_U32(a1, 112);
    v25 = (float *)((char *)sinLutTable + ((v21 >> 20) & 0xFF0));
    v26 = (float *)((char *)sinLutTable + ((v22 >> 20) & 0xFF0));
    v27 = (float *)((char *)sinLutTable + ((v20 >> 20) & 0xFF0));
    v28 = (float)(v20 & 0xFFFFFF);
    v29 = FIELD_F32(a1, 668);
    v30 = (float)(v22 & 0xFFFFFF) * 0.000000059605;
    v31 = (float)(v21 & 0xFFFFFF) * 0.000000059605;
    v32 = v26[2] + (float)(v30 * v26[3]);
    v33 = v25[2] + (float)(v31 * v25[3]);
    v34 = *v26 + (float)(v30 * v26[1]);
    v35 = *v25 + (float)(v31 * v25[1]);
    v36 = v27[2] + (float)((float)(v28 * 0.000000059605) * v27[3]);
    v37 = *v27 + (float)((float)(v28 * 0.000000059605) * v27[1]);
    v73 = v33 * v32;
    v77 = v33 * v34;
    v81 = -v35;
    v74 = (float)((float)(v37 * v35) * v32) - (float)(v36 * v34);
    v78 = (float)(v36 * v32) + (float)((float)(v37 * v35) * v34);
    v82 = v37 * v33;
    v75 = (float)(v35 * (float)(v36 * v32)) + (float)(v37 * v34);
    v79 = (float)(v35 * (float)(v36 * v34)) - (float)(v37 * v32);
    v83 = v36 * v33;
    v76 = v29;
    v80 = v24;
    v84 = v23;
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 652) + 60))(**(_DWORD **)(a1 + 652), &v73);
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 652));
  }
  v38 = FIELD_U32(a1, 164);
  v39 = FIELD_U32(a1, 156);
  v40 = FIELD_U32(a1, 116);
  v41 = FIELD_U32(a1, 112);
  v42 = (float *)((char *)sinLutTable + ((v38 >> 20) & 0xFF0));
  v43 = (float *)((char *)sinLutTable + ((v39 >> 20) & 0xFF0));
  v44 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 160) >> 20) & 0xFF0));
  v45 = (float)(v38 & 0xFFFFFF) * 0.000000059605;
  v46 = FIELD_F32(a1, 672);
  v47 = (float)(FIELD_U32(a1, 160) & 0xFFFFFF) * 0.000000059605;
  v48 = v42[2] + (float)(v45 * v42[3]);
  v49 = *v42 + (float)(v45 * v42[1]);
  v50 = (float)(v39 & 0xFFFFFF) * 0.000000059605;
  v51 = v44[2] + (float)(v47 * v44[3]);
  v52 = *v44 + (float)(v47 * v44[1]);
  v53 = v43[2] + (float)(v50 * v43[3]);
  v54 = *v43 + (float)(v50 * v43[1]);
  v73 = v51 * v48;
  v77 = v51 * v49;
  v81 = -v52;
  v74 = (float)((float)(v54 * v52) * v48) - (float)(v53 * v49);
  v78 = (float)(v53 * v48) + (float)((float)(v54 * v52) * v49);
  v82 = v54 * v51;
  v75 = (float)(v52 * (float)(v53 * v48)) + (float)(v54 * v49);
  v79 = (float)(v52 * (float)(v53 * v49)) - (float)(v54 * v48);
  v83 = v53 * v51;
  v76 = v46;
  v80 = v41;
  v84 = v40;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 648) + 60))(**(_DWORD **)(a1 + 648), &v73);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 648));
  v55 = FIELD_F32(a1, 676);
  result = dword_60CC6484;
  if ( (float)(FIELD_F32(dword_60CC6484, 112) + -32.0) < v55 && (float)(FIELD_F32(dword_60CC6484, 120) + 32.0) > v55 )
  {
    v57 = FIELD_U32(a1, 164);
    v58 = FIELD_U32(a1, 156);
    v59 = FIELD_U32(a1, 116);
    v60 = FIELD_U32(a1, 112);
    v61 = (float *)((char *)sinLutTable + ((v57 >> 20) & 0xFF0));
    v62 = (float *)((char *)sinLutTable + ((v58 >> 20) & 0xFF0));
    v63 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 160) >> 20) & 0xFF0));
    v64 = (float)(v57 & 0xFFFFFF) * 0.000000059605;
    v65 = (float)(FIELD_U32(a1, 160) & 0xFFFFFF) * 0.000000059605;
    v66 = v61[2] + (float)(v64 * v61[3]);
    v67 = *v61 + (float)(v64 * v61[1]);
    v68 = (float)(v58 & 0xFFFFFF) * 0.000000059605;
    v69 = v63[2] + (float)(v65 * v63[3]);
    v70 = *v63 + (float)(v65 * v63[1]);
    v71 = v62[2] + (float)(v68 * v62[3]);
    v72 = *v62 + (float)(v68 * v62[1]);
    v73 = v69 * v66;
    v77 = v69 * v67;
    v81 = -v70;
    v74 = (float)((float)(v72 * v70) * v66) - (float)(v71 * v67);
    v78 = (float)(v71 * v66) + (float)((float)(v72 * v70) * v67);
    v82 = v72 * v69;
    v75 = (float)(v70 * (float)(v71 * v66)) + (float)(v72 * v67);
    v79 = (float)(v70 * (float)(v71 * v67)) - (float)(v72 * v66);
    v83 = v71 * v69;
    v76 = v55;
    v80 = v60;
    v84 = v59;
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 656) + 60))(**(_DWORD **)(a1 + 656), &v73);
    return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 656));
  }
  return result;
}
