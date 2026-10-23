/* ef_waterpillar_ref_2
 * address: 0x606FE65C   size: 1420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall ef_waterpillar_ref_2(int a1)
{
  _DWORD *v2; // r8
  float v3; // r12
  float v4; // lr
  unsigned int v5; // r3
  unsigned int v6; // r6
  unsigned int v7; // r7
  float *v8; // r1
  float *v9; // r0
  float *v10; // r2
  float v11; // s4
  float v12; // s2
  float v13; // s0
  float v14; // s10
  float v15; // s3
  float v16; // s6
  float v17; // s14
  float v18; // s7
  float v19; // s11
  int v20; // r3
  int v21; // r0
  void (__fastcall *v22)(int, float *); // r2
  int v23; // r1
  float v24; // r12
  _DWORD *v25; // lr
  unsigned int v26; // r2
  unsigned int v27; // r3
  unsigned int v28; // r7
  float *v29; // r0
  float *v30; // r6
  float *v31; // r1
  float v32; // s0
  float v33; // s2
  float v34; // s4
  float v35; // s10
  float v36; // s3
  float v37; // s6
  float v38; // s14
  float v39; // s7
  float v40; // s11
  int v41; // r3
  int v42; // r0
  void (__fastcall *v43)(int, float *); // r2
  int v44; // r1
  float v45; // s22
  float v46; // s24
  float v47; // s20
  _DWORD *v48; // r10
  StateBase *CurrentState; // r0
  int v50; // r5
  float v51; // s22
  float *v52; // r9
  float v53; // r8
  unsigned int v54; // r0
  unsigned int v55; // r1
  unsigned int v56; // r2
  int v57; // r6
  float *v58; // r5
  float *v59; // r3
  float v60; // s0
  float v61; // s2
  float v62; // s4
  float v63; // s10
  float v64; // s3
  float v65; // s6
  float v66; // s14
  float v67; // s7
  float v68; // s11
  int v69; // r0
  void (__fastcall *v70)(int, float *); // r2
  float *v71; // r4
  int *v72; // t1
  int v73; // r0
  int (__fastcall *v74)(int, float *); // r2
  int v75; // r0
  float v76; // r0
  float result; // s0
  float v78; // [sp+4h] [bp-8Ch] BYREF
  int v79; // [sp+8h] [bp-88h]
  int v80; // [sp+Ch] [bp-84h]
  float v81; // [sp+10h] [bp-80h] BYREF
  float v82; // [sp+14h] [bp-7Ch]
  float v83; // [sp+18h] [bp-78h]
  _DWORD *v84; // [sp+1Ch] [bp-74h]
  float v85; // [sp+20h] [bp-70h]
  float v86; // [sp+24h] [bp-6Ch]
  float v87; // [sp+28h] [bp-68h]
  float v88; // [sp+2Ch] [bp-64h]
  float v89; // [sp+30h] [bp-60h]
  float v90; // [sp+34h] [bp-5Ch]
  float v91; // [sp+38h] [bp-58h]
  float v92; // [sp+3Ch] [bp-54h]

  v2 = *(_DWORD **)(a1 + 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_U32(a1, 156);
  v6 = FIELD_U32(a1, 160);
  v7 = FIELD_U32(a1, 164);
  v8 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v11 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v14 = v10[2] + (float)(v11 * v10[3]);
  v15 = v8[2] + (float)(v12 * v8[3]);
  v16 = *v10 + (float)(v11 * v10[1]);
  v17 = *v8 + (float)(v12 * v8[1]);
  v18 = *v9 + (float)(v13 * v9[1]);
  v19 = v9[2] + (float)(v13 * v9[3]);
  v81 = (float)(v15 * v14) + (float)(v18 * (float)(v17 * v16));
  v85 = v19 * v16;
  v89 = (float)(v18 * (float)(v15 * v16)) - (float)(v17 * v14);
  v82 = (float)(v18 * (float)(v17 * v14)) - (float)(v15 * v16);
  v86 = v19 * v14;
  v90 = (float)(v17 * v16) + (float)(v18 * (float)(v15 * v14));
  v83 = v19 * v17;
  v87 = -v18;
  v91 = v19 * v15;
  v84 = v2;
  v88 = v3;
  v92 = v4;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6104) + 60))(**(_DWORD **)(a1 + 6104), &v81);
  v20 = FIELD_U32(a1, 152);
  v21 = **(_DWORD **)(a1 + 6104);
  v22 = *(void (__fastcall **)(int, float *))(*(_DWORD *)v21 + 68);
  v23 = FIELD_U32(a1, 148);
  v78 = FIELD_F32(a1, 144) + 0.3125;
  v79 = v23;
  v80 = v20;
  v22(v21, &v78);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6104));
  v24 = FIELD_F32(a1, 112);
  v25 = *(_DWORD **)(a1 + 108);
  v26 = FIELD_U32(a1, 156);
  v27 = FIELD_U32(a1, 160);
  v28 = FIELD_U32(a1, 164);
  v29 = (float *)((char *)sinLutTable + ((v27 >> 20) & 0xFF0));
  v30 = (float *)((char *)sinLutTable + ((v26 >> 20) & 0xFF0));
  v31 = (float *)((char *)sinLutTable + ((v28 >> 20) & 0xFF0));
  v32 = (float)(v28 & 0xFFFFFF) * 0.000000059605;
  v33 = (float)(v27 & 0xFFFFFF) * 0.000000059605;
  v34 = (float)(v26 & 0xFFFFFF) * 0.000000059605;
  v35 = v31[2] + (float)(v32 * v31[3]);
  v36 = v29[2] + (float)(v33 * v29[3]);
  v37 = *v31 + (float)(v32 * v31[1]);
  v38 = *v29 + (float)(v33 * v29[1]);
  v39 = *v30 + (float)(v34 * v30[1]);
  v40 = v30[2] + (float)(v34 * v30[3]);
  v81 = (float)(v36 * v35) + (float)(v39 * (float)(v38 * v37));
  v85 = v40 * v37;
  v89 = (float)(v39 * (float)(v36 * v37)) - (float)(v38 * v35);
  v82 = (float)(v39 * (float)(v38 * v35)) - (float)(v36 * v37);
  v86 = v40 * v35;
  v90 = (float)(v38 * v37) + (float)(v39 * (float)(v36 * v35));
  v83 = v40 * v38;
  v87 = -v39;
  v91 = v40 * v36;
  v84 = v25;
  v88 = v24;
  v92 = 400.0;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6112) + 60))(**(_DWORD **)(a1 + 6112), &v81);
  v41 = FIELD_U32(a1, 152);
  v42 = **(_DWORD **)(a1 + 6112);
  v43 = *(void (__fastcall **)(int, float *))(*(_DWORD *)v42 + 68);
  v44 = FIELD_U32(a1, 148);
  v78 = FIELD_F32(a1, 144) + 0.3125;
  v79 = v44;
  v80 = v41;
  v43(v42, &v78);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6112));
  v45 = FIELD_F32(a1, 6128);
  v46 = FIELD_F32(a1, 112);
  v47 = FIELD_F32(a1, 116);
  v48 = *(_DWORD **)(a1 + 108);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v50 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v51 = v46 + v45;
  v52 = (float *)(a1 + 6128);
  v53 = v51;
  if ( v50 == (*(int (**)(void))(dword_60CBC614 + 8))() && (float)(FIELD_F32(a1, 6136) - *v52) >= 64.0 )
    v53 = v51 + 2.0;
  v54 = FIELD_U32(a1, 156);
  v55 = FIELD_U32(a1, 160);
  v56 = FIELD_U32(a1, 164);
  v57 = (v56 >> 20) & 0xFF0;
  v58 = (float *)((char *)sinLutTable + ((v55 >> 20) & 0xFF0));
  v59 = (float *)((char *)sinLutTable + ((v54 >> 20) & 0xFF0));
  v60 = (float)(v56 & 0xFFFFFF) * 0.000000059605;
  v61 = (float)(v55 & 0xFFFFFF) * 0.000000059605;
  v62 = (float)(v54 & 0xFFFFFF) * 0.000000059605;
  v63 = *(float *)((char *)&sinLutTable[2] + v57) + (float)(v60 * *(float *)((char *)&sinLutTable[3] + v57));
  v64 = v58[2] + (float)(v61 * v58[3]);
  v65 = *(float *)((char *)sinLutTable + v57) + (float)(v60 * *(float *)((char *)&sinLutTable[1] + v57));
  v66 = *v58 + (float)(v61 * v58[1]);
  v67 = *v59 + (float)(v62 * v59[1]);
  v68 = v59[2] + (float)(v62 * v59[3]);
  v81 = (float)(v64 * v63) + (float)(v67 * (float)(v66 * v65));
  v85 = v68 * v65;
  v89 = (float)(v67 * (float)(v64 * v65)) - (float)(v66 * v63);
  v82 = (float)(v67 * (float)(v66 * v63)) - (float)(v64 * v65);
  v86 = v68 * v63;
  v90 = (float)(v66 * v65) + (float)(v67 * (float)(v64 * v63));
  v83 = v68 * v66;
  v87 = -v67;
  v91 = v68 * v64;
  v84 = v48;
  v88 = v53;
  v92 = v47 + 1.0;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6108) + 60))(**(_DWORD **)(a1 + 6108), &v81);
  v69 = **(_DWORD **)(a1 + 6108);
  v70 = *(void (__fastcall **)(int, float *))(*(_DWORD *)v69 + 68);
  v78 = FIELD_F32(a1, 144) + 0.3125;
  v79 = 1065353216;
  v80 = 1065353216;
  v70(v69, &v78);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6108));
  v72 = *(int **)(a1 + 6104);
  v71 = (float *)(a1 + 6104);
  v73 = *v72;
  v74 = *(int (__fastcall **)(int, float *))(*(_DWORD *)*v72 + 84);
  v81 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v82 = COERCE_FLOAT("ef_waterpillar");
  v75 = v74(v73, &v81);
  (*(void (__fastcall **)(_DWORD, int, float *))(***(_DWORD ***)v71 + 108))(**(_DWORD **)v71, v75, &v81);
  *((_DWORD *)v71 + 405) = v84;
  v76 = v88;
  v71[406] = v88;
  v71[407] = 6500.0;
  result = v76 - *(v71 - 1498);
  *v52 = result;
  return result;
}
