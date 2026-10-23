/* Water_onExecute_helper
 * address: 0x605AC130   size: 828   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall Water_onExecute_helper(int a1)
{
  ModelWrapper *v2; // r0
  ModelWrapper **v3; // r11
  _DWORD **v4; // r10
  float *v5; // r0
  float v6; // r2
  int v7; // r3
  int v8; // r4
  int v9; // r5
  int v10; // r6
  int v11; // r7
  float v12; // r3
  int v13; // r4
  int v14; // r5
  int v15; // r6
  int v16; // r7
  int v17; // r0
  int v18; // r1
  float v19; // r2
  float *v20; // r0
  float v21; // r2
  int v22; // r3
  int v23; // r4
  int v24; // r5
  int v25; // r6
  int v26; // r7
  float v27; // r3
  int v28; // r4
  int v29; // r5
  int v30; // r6
  int v31; // r7
  int v32; // r0
  int v33; // r1
  float v34; // r2
  float32x2_t v35; // d1
  float32x2_t v36; // d0
  ModelWrapper *result; // r0
  ModelWrapper **v38; // r11
  ModelWrapper **v39; // r10
  float *v40; // r0
  float v41; // r2
  int v42; // r3
  int v43; // r4
  int v44; // r5
  int v45; // r6
  int v46; // r7
  float v47; // r3
  int v48; // r4
  int v49; // r5
  int v50; // r6
  int v51; // r7
  int v52; // r0
  int v53; // r1
  float v54; // r2
  float *v55; // r9
  float v56; // s0
  float *v57; // r0
  float v58; // r2
  int v59; // r3
  int v60; // r4
  int v61; // r5
  int v62; // r6
  int v63; // r7
  float v64; // r3
  int v65; // r4
  int v66; // r5
  int v67; // r6
  int v68; // r7
  int v69; // r0
  int v70; // r1
  float v71; // r2
  float v72; // s0
  float32x2_t v73; // d2
  float32x2_t v74; // d0
  int v75; // [sp+0h] [bp-78h] BYREF
  float v76; // [sp+4h] [bp-74h]
  int v77; // [sp+8h] [bp-70h]
  float v78; // [sp+10h] [bp-68h] BYREF
  int v79; // [sp+14h] [bp-64h]
  int v80; // [sp+18h] [bp-60h]
  int v81; // [sp+1Ch] [bp-5Ch]
  int v82; // [sp+20h] [bp-58h]
  int v83; // [sp+24h] [bp-54h]
  float v84; // [sp+28h] [bp-50h]
  float v85; // [sp+2Ch] [bp-4Ch]
  int v86; // [sp+30h] [bp-48h]
  int v87; // [sp+34h] [bp-44h]
  int v88; // [sp+38h] [bp-40h]
  int v89; // [sp+3Ch] [bp-3Ch]

  v3 = (ModelWrapper **)(a1 + 72332);
  v2 = *(ModelWrapper **)(a1 + 72332);
  if ( v2 )
  {
    ModelWrapper_updateAnims(v2);
    v4 = (_DWORD **)(a1 + 6104);
    v5 = (float *)(*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6104) + 64))(**(_DWORD **)(a1 + 6104));
    v6 = *v5;
    v7 = *((_DWORD *)v5 + 1);
    v8 = *((_DWORD *)v5 + 2);
    v9 = *((_DWORD *)v5 + 3);
    v10 = *((_DWORD *)v5 + 4);
    v11 = *((_DWORD *)v5 + 5);
    v5 += 6;
    v78 = v6;
    v79 = v7;
    v80 = v8;
    v81 = v9;
    v82 = v10;
    v83 = v11;
    v12 = v5[1];
    v13 = *((_DWORD *)v5 + 2);
    v14 = *((_DWORD *)v5 + 3);
    v15 = *((_DWORD *)v5 + 4);
    v16 = *((_DWORD *)v5 + 5);
    v84 = *v5;
    v85 = v12;
    v86 = v13;
    v87 = v14;
    v88 = v15;
    v89 = v16;
    v17 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v4 + 72))(**v4);
    v18 = *(_DWORD *)v17;
    v19 = FIELD_F32(v17, 4);
    v77 = FIELD_U32(v17, 8);
    v75 = v18;
    v76 = 1.0;
    v85 = v85 + (float)((float)((float)(v19 * 0.5) + -0.5) * 16.0);
    (*(void (__fastcall **)(void *, float *))(*(_DWORD *)(*v3)->model + 60))((*v3)->model, &v78);
    (*(void (__fastcall **)(void *, int *))(*(_DWORD *)(*v3)->model + 68))((*v3)->model, &v75);
    ModelWrapper_updateModel(*v3);
    v20 = (float *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v4 + 64))(**v4);
    v21 = *v20;
    v22 = *((_DWORD *)v20 + 1);
    v23 = *((_DWORD *)v20 + 2);
    v24 = *((_DWORD *)v20 + 3);
    v25 = *((_DWORD *)v20 + 4);
    v26 = *((_DWORD *)v20 + 5);
    v20 += 6;
    v78 = v21;
    v79 = v22;
    v80 = v23;
    v81 = v24;
    v82 = v25;
    v83 = v26;
    v27 = v20[1];
    v28 = *((_DWORD *)v20 + 2);
    v29 = *((_DWORD *)v20 + 3);
    v30 = *((_DWORD *)v20 + 4);
    v31 = *((_DWORD *)v20 + 5);
    v84 = *v20;
    v85 = v27;
    v86 = v28;
    v87 = v29;
    v88 = v30;
    v89 = v31;
    v32 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v4 + 72))(**v4);
    v33 = *(_DWORD *)v32;
    v34 = FIELD_F32(v32, 4);
    v77 = FIELD_U32(v32, 8);
    v75 = v33;
    v35.n64_u32[0] = 0;
    v85 = v85 + -8.0;
    v36.n64_f32[0] = v34 + -1.0;
    LODWORD(v76) = vmax_f32(v36, v35).n64_u32[0];
    (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v4 + 60))(**v4, &v78);
    (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)**v4 + 68))(**v4, &v75);
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6104));
  }
  v38 = (ModelWrapper **)(a1 + 72336);
  result = *(ModelWrapper **)(a1 + 72336);
  if ( result )
  {
    v39 = (ModelWrapper **)(a1 + 72328);
    if ( FIELD_U32(a1, 72328) )
    {
      ModelWrapper_updateAnims(result);
      v40 = (float *)(*(int (__fastcall **)(void *))(*(_DWORD *)(*v39)->model + 64))((*v39)->model);
      v41 = *v40;
      v42 = *((_DWORD *)v40 + 1);
      v43 = *((_DWORD *)v40 + 2);
      v44 = *((_DWORD *)v40 + 3);
      v45 = *((_DWORD *)v40 + 4);
      v46 = *((_DWORD *)v40 + 5);
      v40 += 6;
      v78 = v41;
      v79 = v42;
      v80 = v43;
      v81 = v44;
      v82 = v45;
      v83 = v46;
      v47 = v40[1];
      v48 = *((_DWORD *)v40 + 2);
      v49 = *((_DWORD *)v40 + 3);
      v50 = *((_DWORD *)v40 + 4);
      v51 = *((_DWORD *)v40 + 5);
      v84 = *v40;
      v85 = v47;
      v86 = v48;
      v87 = v49;
      v88 = v50;
      v89 = v51;
      v52 = (*(int (__fastcall **)(void *))(*(_DWORD *)(*v39)->model + 72))((*v39)->model);
      v53 = *(_DWORD *)v52;
      v54 = FIELD_F32(v52, 4);
      v77 = FIELD_U32(v52, 8);
      v75 = v53;
      v76 = v54;
      v55 = (float *)(a1 + 72324);
      v56 = (float)(v54 * 0.5) - (float)(*v55 * 0.5);
      v76 = *v55;
      v85 = v85 + (float)(v56 * 16.0);
      (*(void (__fastcall **)(void *, float *))(*(_DWORD *)(*v38)->model + 60))((*v38)->model, &v78);
      (*(void (__fastcall **)(void *, int *))(*(_DWORD *)(*v38)->model + 68))((*v38)->model, &v75);
      ModelWrapper_updateModel(*v38);
      v57 = (float *)(*(int (__fastcall **)(void *))(*(_DWORD *)(*v39)->model + 64))((*v39)->model);
      v58 = *v57;
      v59 = *((_DWORD *)v57 + 1);
      v60 = *((_DWORD *)v57 + 2);
      v61 = *((_DWORD *)v57 + 3);
      v62 = *((_DWORD *)v57 + 4);
      v63 = *((_DWORD *)v57 + 5);
      v57 += 6;
      v78 = v58;
      v79 = v59;
      v80 = v60;
      v81 = v61;
      v82 = v62;
      v83 = v63;
      v64 = v57[1];
      v65 = *((_DWORD *)v57 + 2);
      v66 = *((_DWORD *)v57 + 3);
      v67 = *((_DWORD *)v57 + 4);
      v68 = *((_DWORD *)v57 + 5);
      v84 = *v57;
      v85 = v64;
      v86 = v65;
      v87 = v66;
      v88 = v67;
      v89 = v68;
      v69 = (*(int (__fastcall **)(void *))(*(_DWORD *)(*v39)->model + 72))((*v39)->model);
      v70 = *(_DWORD *)v69;
      v71 = FIELD_F32(v69, 4);
      v77 = FIELD_U32(v69, 8);
      v75 = v70;
      v76 = v71;
      v72 = *v55;
      v73.n64_u32[0] = 0;
      v85 = v85 - (float)((float)(*v55 * 0.5) * 16.0);
      v74.n64_f32[0] = v71 - v72;
      LODWORD(v76) = vmax_f32(v74, v73).n64_u32[0];
      (*(void (__fastcall **)(void *, float *))(*(_DWORD *)(*v39)->model + 60))((*v39)->model, &v78);
      (*(void (__fastcall **)(void *, int *))(*(_DWORD *)(*v39)->model + 68))((*v39)->model, &v75);
      return (ModelWrapper *)ModelWrapper_updateModel(*v39);
    }
  }
  return result;
}
