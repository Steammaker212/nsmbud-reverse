/* houdai_slope_gun_ref
 * address: 0x60271094   size: 1064   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall houdai_slope_gun_ref(int a1)
{
  int v2; // r7
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r7
  int v6; // s2
  int v7; // s12
  float *v8; // r3
  float *v9; // r1
  float *v10; // r0
  float v11; // s0
  float v12; // s2
  float v13; // s8
  float v14; // s3
  float v15; // s4
  float v16; // s14
  float v17; // s10
  float v18; // s11
  float v19; // s7
  _DWORD **v20; // r7
  int v21; // r0
  int (__fastcall *v22)(int, float *); // r2
  int v23; // r6
  unsigned int v24; // r0
  unsigned int v25; // r2
  float *v26; // r1
  float *v27; // r3
  float v28; // s2
  float v29; // s4
  float v30; // s0
  float v31; // s6
  unsigned int v32; // r1
  float v33; // s8
  float *v34; // r0
  float v35; // s8
  float v36; // s10
  float v37; // s0
  float v38; // s3
  float v39; // s2
  float v40; // s14
  float v41; // s6
  float v42; // s11
  float v43; // s7
  int v44; // r0
  int (__fastcall *v45)(int, _DWORD *); // r2
  int v46; // r6
  float v47; // s0
  float v48; // s4
  float v49; // s4
  float v50; // s6
  _DWORD v52[3]; // [sp+4h] [bp-C4h] BYREF
  float v53; // [sp+10h] [bp-B8h]
  float v54; // [sp+20h] [bp-A8h]
  float v55; // [sp+30h] [bp-98h]
  float v56; // [sp+34h] [bp-94h] BYREF
  float v57; // [sp+38h] [bp-90h]
  float v58; // [sp+3Ch] [bp-8Ch]
  float v59; // [sp+44h] [bp-84h]
  float v60; // [sp+48h] [bp-80h]
  float v61; // [sp+4Ch] [bp-7Ch]
  float v62; // [sp+54h] [bp-74h]
  float v63; // [sp+58h] [bp-70h]
  float v64; // [sp+5Ch] [bp-6Ch]
  _DWORD v65[3]; // [sp+64h] [bp-64h] BYREF
  float v66[22]; // [sp+70h] [bp-58h] BYREF

  v2 = a1 + 156;
  v3 = FIELD_U32(a1, 156);
  v4 = FIELD_U32(v2, 4);
  v5 = FIELD_U32(v2, 8);
  v6 = v4 & 0xFFFFFF;
  v7 = v3 & 0xFFFFFF;
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v11 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(unsigned int)v6 * 0.000000059605;
  v13 = v8[2] + (float)(v11 * v8[3]);
  v14 = v9[2] + (float)(v12 * v9[3]);
  v15 = *v8 + (float)(v11 * v8[1]);
  v16 = *v9 + (float)(v12 * v9[1]);
  v17 = (float)(unsigned int)v7 * 0.000000059605;
  v18 = v10[2] + (float)(v17 * v10[3]);
  v19 = *v10 + (float)(v17 * v10[1]);
  v66[0] = v14 * v13;
  v66[4] = v14 * v15;
  v66[8] = -v16;
  v66[1] = (float)((float)(v19 * v16) * v13) - (float)(v18 * v15);
  v66[5] = (float)(v18 * v13) + (float)((float)(v19 * v16) * v15);
  v66[9] = v19 * v14;
  v66[2] = (float)(v16 * (float)(v18 * v13)) + (float)(v19 * v15);
  v66[6] = (float)(v16 * (float)(v18 * v15)) - (float)(v19 * v13);
  v66[10] = v18 * v14;
  v66[3] = FIELD_F32(a1, 108);
  v66[7] = FIELD_F32(a1, 112);
  v66[11] = FIELD_F32(a1, 116);
  v20 = (_DWORD **)(a1 + 6104);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6104) + 60))(**(_DWORD **)(a1 + 6104), v66);
  v65[0] = 1065353216;
  v65[1] = 1065353216;
  v65[2] = 1065353216;
  v21 = **(_DWORD **)(a1 + 6104);
  v22 = *(int (__fastcall **)(int, float *))(*(_DWORD *)v21 + 84);
  v56 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v57 = COERCE_FLOAT("houdai_slope_gun");
  v23 = v22(v21, &v56);
  sub_604302C8(**(_DWORD **)(a1 + 6104), v23, &v56);
  v24 = FIELD_U32(a1, 7492);
  v25 = FIELD_U32(a1, 160);
  v26 = (float *)((char *)sinLutTable + ((v24 >> 20) & 0xFF0));
  v27 = (float *)((char *)sinLutTable + ((v25 >> 20) & 0xFF0));
  v28 = *v26;
  v29 = v26[1];
  v30 = v26[2];
  v31 = v26[3];
  v32 = FIELD_U32(a1, 156);
  v33 = (float)(v24 & 0xFFFFFF);
  v34 = (float *)((char *)sinLutTable + ((v32 >> 20) & 0xFF0));
  v35 = v33 * 0.000000059605;
  v36 = (float)(v25 & 0xFFFFFF) * 0.000000059605;
  v37 = v30 + (float)(v35 * v31);
  v38 = v27[2] + (float)(v36 * v27[3]);
  v39 = v28 + (float)(v35 * v29);
  v40 = *v27 + (float)(v36 * v27[1]);
  v41 = (float)(v32 & 0xFFFFFF) * 0.000000059605;
  v42 = v34[2] + (float)(v41 * v34[3]);
  v43 = *v34 + (float)(v34[1] * v41);
  v56 = v38 * v37;
  v59 = v38 * v39;
  v62 = -v40;
  v57 = (float)((float)(v43 * v40) * v37) - (float)(v42 * v39);
  v60 = (float)(v42 * v37) + (float)((float)(v43 * v40) * v39);
  v63 = v43 * v38;
  v58 = (float)(v40 * (float)(v42 * v37)) + (float)(v43 * v39);
  v61 = (float)(v40 * (float)(v42 * v39)) - (float)(v43 * v37);
  v64 = v42 * v38;
  (*(void (__fastcall **)(_DWORD, int, float *, _DWORD *))(*(_DWORD *)**v20 + 96))(**v20, v23, &v56, v65);
  v44 = **(_DWORD **)(a1 + 6104);
  v45 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v44 + 84);
  v52[0] = &sead__SafeStringBase__vtable;
  v52[1] = "houdai_slope_gun_mouth";
  v46 = v45(v44, v52);
  sub_604302C8(**(_DWORD **)(a1 + 6104), v46, &v56);
  v47 = FIELD_F32(a1, 7424);
  v48 = FIELD_F32(a1, 7428);
  v56 = v47 * v56;
  v59 = v47 * v59;
  v62 = v47 * v62;
  v57 = v48 * v57;
  v60 = v48 * v60;
  v63 = v48 * v63;
  (*(void (__fastcall **)(_DWORD, int, float *, _DWORD *))(*(_DWORD *)**v20 + 96))(**v20, v46, &v56, v65);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v20 + 56))(**v20);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v20 + 108))(**v20, 3, v52);
  v53 = v53 + 0.0;
  v54 = v54 + 8.0;
  v49 = v54;
  v50 = v55;
  FIELD_F32(a1, 7436) = v53;
  FIELD_F32(a1, 7440) = v49;
  FIELD_F32(a1, 7444) = v50 + 0.0;
  return v50 + 0.0;
}
