/* ef_waterpillar_ref
 * address: 0x606F4A88   size: 1312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall ef_waterpillar_ref(int a1)
{
  float v2; // r9
  float v3; // r12
  float v4; // lr
  unsigned int v5; // r6
  unsigned int v6; // r5
  unsigned int v7; // r3
  float *v8; // r1
  float *v9; // r2
  float *v10; // r0
  float v11; // s4
  float v12; // s2
  float v13; // s0
  float v14; // s10
  float v15; // s3
  float v16; // s6
  float v17; // s14
  float v18; // s7
  float v19; // s11
  _DWORD **v20; // r6
  unsigned int v21; // r3
  unsigned int v22; // r0
  unsigned int v23; // r2
  float v24; // r12
  float v25; // lr
  float *v26; // r1
  float v27; // s0
  float v28; // s2
  float v29; // s4
  float v30; // s6
  float *v31; // r1
  float v32; // s8
  float v33; // s10
  float v34; // s12
  float v35; // s14
  float *v36; // r1
  float v37; // s5
  float v38; // s3
  float v39; // s1
  float v40; // s12
  float v41; // s4
  float v42; // s8
  float v43; // s0
  float v44; // s7
  float v45; // s11
  unsigned int v46; // r1
  unsigned int v47; // r2
  unsigned int v48; // r3
  float v49; // s2
  float v50; // s0
  float v51; // s4
  float *v52; // r5
  float *v53; // r0
  int v54; // s6
  float *v55; // r3
  float v56; // s6
  float v57; // s8
  float v58; // s10
  float v59; // s9
  float v60; // s5
  float v61; // s1
  float v62; // s12
  float v63; // s13
  float v64; // s18
  float v65; // s3
  int v66; // r0
  void (__fastcall *v67)(int, _DWORD *); // r2
  int v68; // r0
  int (__fastcall *v69)(int, float *); // r2
  int v70; // r0
  float v71; // r0
  float result; // s0
  _DWORD v73[3]; // [sp+4h] [bp-74h] BYREF
  float v74; // [sp+10h] [bp-68h] BYREF
  float v75; // [sp+14h] [bp-64h]
  float v76; // [sp+18h] [bp-60h]
  float v77; // [sp+1Ch] [bp-5Ch]
  float v78; // [sp+20h] [bp-58h]
  float v79; // [sp+24h] [bp-54h]
  float v80; // [sp+28h] [bp-50h]
  float v81; // [sp+2Ch] [bp-4Ch]
  float v82; // [sp+30h] [bp-48h]
  float v83; // [sp+34h] [bp-44h]
  float v84; // [sp+38h] [bp-40h]
  float v85; // [sp+3Ch] [bp-3Ch]

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_U32(a1, 160);
  v6 = FIELD_U32(a1, 164);
  v7 = FIELD_U32(a1, 156);
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v11 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v14 = v9[2] + (float)(v11 * v9[3]);
  v15 = v8[2] + (float)(v12 * v8[3]);
  v16 = *v9 + (float)(v11 * v9[1]);
  v17 = *v8 + (float)(v12 * v8[1]);
  v18 = *v10 + (float)(v13 * v10[1]);
  v19 = v10[2] + (float)(v13 * v10[3]);
  v74 = (float)(v15 * v14) + (float)(v18 * (float)(v17 * v16));
  v78 = v19 * v16;
  v82 = (float)(v18 * (float)(v15 * v16)) - (float)(v17 * v14);
  v75 = (float)(v18 * (float)(v17 * v14)) - (float)(v15 * v16);
  v79 = v19 * v14;
  v83 = (float)(v17 * v16) + (float)(v18 * (float)(v15 * v14));
  v76 = v19 * v17;
  v80 = -v18;
  v84 = v19 * v15;
  v77 = v2;
  v81 = v3;
  v85 = v4;
  v20 = (_DWORD **)(a1 + 6156);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6156) + 60))(**(_DWORD **)(a1 + 6156), &v74);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v20 + 68))(**v20, a1 + 144);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6156));
  v21 = FIELD_U32(a1, 160);
  v22 = FIELD_U32(a1, 164);
  v23 = FIELD_U32(a1, 156);
  v24 = FIELD_F32(a1, 112);
  v25 = FIELD_F32(a1, 108);
  v26 = (float *)((char *)sinLutTable + ((v21 >> 20) & 0xFF0));
  v27 = *v26;
  v28 = v26[1];
  v29 = v26[2];
  v30 = v26[3];
  v31 = (float *)((char *)sinLutTable + ((v22 >> 20) & 0xFF0));
  v32 = *v31;
  v33 = v31[1];
  v34 = v31[2];
  v35 = v31[3];
  v36 = (float *)((char *)sinLutTable + ((v23 >> 20) & 0xFF0));
  v37 = (float)(v22 & 0xFFFFFF) * 0.000000059605;
  v38 = (float)(v21 & 0xFFFFFF) * 0.000000059605;
  v39 = (float)(v23 & 0xFFFFFF) * 0.000000059605;
  v40 = v34 + (float)(v37 * v35);
  v41 = v29 + (float)(v38 * v30);
  v42 = v32 + (float)(v37 * v33);
  v43 = v27 + (float)(v38 * v28);
  v44 = *v36 + (float)(v39 * v36[1]);
  v45 = v36[2] + (float)(v39 * v36[3]);
  v74 = (float)(v41 * v40) + (float)(v44 * (float)(v43 * v42));
  v78 = v45 * v42;
  v82 = (float)(v44 * (float)(v41 * v42)) - (float)(v43 * v40);
  v75 = (float)(v44 * (float)(v43 * v40)) - (float)(v41 * v42);
  v79 = v45 * v40;
  v83 = (float)(v43 * v42) + (float)(v44 * (float)(v41 * v40));
  v76 = v45 * v43;
  v80 = -v44;
  v84 = v45 * v41;
  v77 = v25;
  v81 = v24;
  v85 = 400.0;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6164) + 60))(**(_DWORD **)(a1 + 6164), &v74);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6164) + 68))(**(_DWORD **)(a1 + 6164), a1 + 144);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6164));
  v46 = FIELD_U32(a1, 156);
  v47 = FIELD_U32(a1, 160);
  v48 = FIELD_U32(a1, 164);
  v49 = FIELD_F32(a1, 108);
  v50 = FIELD_F32(a1, 112);
  v51 = FIELD_F32(a1, 116);
  v52 = (float *)((char *)sinLutTable + ((v47 >> 20) & 0xFF0));
  v53 = (float *)((char *)sinLutTable + ((v46 >> 20) & 0xFF0));
  v54 = v48 & 0xFFFFFF;
  v55 = (float *)((char *)sinLutTable + ((v48 >> 20) & 0xFF0));
  v56 = (float)(unsigned int)v54 * 0.000000059605;
  v57 = (float)(v47 & 0xFFFFFF) * 0.000000059605;
  v58 = (float)(v46 & 0xFFFFFF) * 0.000000059605;
  v59 = v52[2] + (float)(v57 * v52[3]);
  v60 = *v52 + (float)(v57 * v52[1]);
  v61 = v55[2] + (float)(v56 * v55[3]);
  v62 = *v55 + (float)(v56 * v55[1]);
  v63 = *v53 + (float)(v58 * v53[1]);
  v64 = v53[2] + (float)(v58 * v53[3]);
  v74 = (float)(v59 * v61) + (float)(v63 * (float)(v60 * v62));
  v78 = v64 * v62;
  v82 = (float)(v63 * (float)(v59 * v62)) - (float)(v60 * v61);
  v75 = (float)(v63 * (float)(v60 * v61)) - (float)(v59 * v62);
  v79 = v64 * v61;
  v83 = (float)(v60 * v62) + (float)(v63 * (float)(v59 * v61));
  v76 = v64 * v60;
  v80 = -v63;
  v84 = v64 * v59;
  v65 = FIELD_F32(a1, 6116) + -2.0;
  v77 = v49 + (float)((float)((float)(v65 * v75) + (float)(v74 * 0.0)) + (float)((float)(v64 * v60) * 0.0));
  v81 = v50
      + (float)((float)((float)(v65 * (float)(v64 * v61)) + (float)((float)(v64 * v62) * 0.0)) + (float)(v63 * -0.0));
  v85 = (float)(v51 + 1.0)
      + (float)((float)((float)(v65 * v83) + (float)(v82 * 0.0)) + (float)((float)(v64 * v59) * 0.0));
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6160) + 60))(**(_DWORD **)(a1 + 6160), &v74);
  v66 = **(_DWORD **)(a1 + 6160);
  v67 = *(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v66 + 68);
  v73[0] = FIELD_U32(a1, 144);
  v73[1] = 1065353216;
  v73[2] = 1065353216;
  v67(v66, v73);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6160));
  v68 = **(_DWORD **)(a1 + 6156);
  v69 = *(int (__fastcall **)(int, float *))(*(_DWORD *)v68 + 84);
  v74 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v75 = COERCE_FLOAT("ef_waterpillar");
  v70 = v69(v68, &v74);
  (*(void (__fastcall **)(_DWORD, int, float *))(*(_DWORD *)**v20 + 108))(**v20, v70, &v74);
  FIELD_F32(a1, 8000) = v77;
  v71 = v81;
  FIELD_F32(a1, 8004) = v81;
  FIELD_F32(a1, 8008) = v85;
  result = v71 - FIELD_F32(a1, 112);
  FIELD_F32(a1, 6116) = result;
  FIELD_F32(a1, 6128) = result - FIELD_F32(a1, 6120);
  FIELD_F32(a1, 6120) = result;
  return result;
}
