/* sub_6063B5E4
 * address: 0x6063B5E4   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6063B5E4(int a1, unsigned int a2, float *a3, _DWORD *a4, float a5)
{
  unsigned int v7; // r1
  float *v8; // r11
  int v9; // s2
  float *v10; // r2
  float *v11; // r3
  float *v12; // r6
  float v13; // s8
  float v14; // s10
  float v15; // s12
  float v16; // s14
  float v17; // s1
  float v18; // s3
  float v19; // s5
  float v20; // s7
  float v21; // s9
  float v22; // s11
  float v23; // s13
  float v24; // s15
  float v25; // s18
  float v26; // s20
  float v27; // s22
  float v28; // s4
  float v29; // s2
  float v30; // s6
  float v31; // s9
  float v32; // s8
  float v33; // s5
  float v34; // s1
  float v35; // s12
  float v36; // s13
  float v37; // s21
  float v38; // s17
  float v39; // s19
  float v40; // s23
  float v41; // s25
  float v42; // s26
  float v43; // s24
  float v44; // s28
  float v45; // s30
  ModelWrapper *v46; // r4
  ModelWrapper *v47; // r4
  void *model; // r6
  int v49; // r0
  int v50; // r4
  float v51; // r2
  float v52; // s0
  float v53; // s2
  unsigned int v54; // r0
  float *v55; // r1
  float v56; // s4
  float v57; // s6
  float v58; // s8
  float v59; // s10
  float v60; // s12
  float v61; // r0
  float v62; // s12
  float v63; // s8
  float v64; // s4
  _DWORD *result; // r0
  bool v66; // cf
  float v68[12]; // [sp+4h] [bp+0h] BYREF
  float v69[20]; // [sp+34h] [bp+30h] BYREF

  v7 = a4[1];
  v8 = (float *)(a1 + 32);
  v9 = *a4 & 0xFFFFFF;
  v10 = (float *)((char *)sinLutTable + ((*a4 >> 20) & 0xFF0));
  v11 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v12 = (float *)((char *)sinLutTable + (((unsigned int)v68 >> 20) & 0xFF0));
  v13 = *v12;
  v14 = v12[1];
  v15 = v12[2];
  v16 = v12[3];
  v17 = *v10;
  v18 = v10[1];
  v19 = v10[2];
  v20 = v10[3];
  v21 = *v11;
  v22 = v11[1];
  v23 = v11[2];
  v24 = v11[3];
  v25 = *a3;
  v26 = a3[1];
  v27 = a3[2];
  v69[0] = a5;
  v69[1] = a5;
  v69[2] = 1.0;
  v28 = (float)((unsigned int)v68 & 0xFFFFFF) * 0.000000059605;
  v29 = (float)(unsigned int)v9 * 0.000000059605;
  v30 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v31 = v21 + (float)(v30 * v22);
  v32 = v13 + (float)(v28 * v14);
  v33 = v19 + (float)(v29 * v20);
  v34 = v17 + (float)(v29 * v18);
  v35 = v15 + (float)(v28 * v16);
  v36 = v23 + (float)(v30 * v24);
  v37 = -v31;
  v38 = v33 * v36;
  v39 = v34 * v36;
  v40 = v36 * v32;
  v41 = v36 * v35;
  v42 = (float)(v33 * v35) + (float)((float)(v34 * v31) * v32);
  v43 = (float)((float)(v34 * v31) * v35) - (float)(v33 * v32);
  v44 = (float)(v31 * (float)(v33 * v32)) - (float)(v34 * v35);
  v45 = (float)(v31 * (float)(v33 * v35)) + (float)(v34 * v32);
  do
  {
    v68[0] = v41;
    v68[1] = v43;
    v68[2] = v45;
    v68[3] = v25 + (float)((float)((float)(v43 * *(v8 - 4)) + (float)(v41 * *(v8 - 5))) + (float)(v45 * *(v8 - 3)));
    v68[4] = v40;
    v68[5] = v42;
    v68[6] = v44;
    v68[7] = v26 + (float)((float)((float)(v42 * *(v8 - 4)) + (float)(v40 * *(v8 - 5))) + (float)(v44 * *(v8 - 3)));
    v68[8] = v37;
    v68[9] = v39;
    v68[10] = v38;
    v68[11] = v27 + (float)((float)((float)(v39 * *(v8 - 4)) + (float)(*(v8 - 5) * v37)) + (float)(v38 * *(v8 - 3)));
    v46 = *((ModelWrapper **)v8 - 8);
    (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v46, 0x0) + 60))(FIELD_U32(v46, 0x0), v68);
    ModelWrapper_updateModel(v46);
    v47 = *((ModelWrapper **)v8 - 7);
    if ( v47 )
    {
      model = FIELD_U32(v47, 0x0);
      (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v47, 0x0) + 60))(FIELD_U32(v47, 0x0), v68);
      (*(void (__fastcall **)(void *, float *))(*(_DWORD *)model + 68))(model, v69);
      ModelWrapper_updateModel(v47);
      v49 = 1;
    }
    else
    {
      v49 = 0;
    }
    v50 = *((_DWORD *)v8 - 6);
    if ( v50 )
    {
      (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)v50 + 60))(*((_DWORD *)v8 - 6), v68);
      (*(void (__fastcall **)(int, float *))(*(_DWORD *)v50 + 68))(v50, v69);
      (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 56))(v50);
    }
    else if ( v49 != 1 )
    {
      goto LABEL_9;
    }
    v51 = *a3;
    v52 = *(v8 - 5);
    v53 = *(v8 - 4);
    v54 = a4[2];
    v55 = (float *)((char *)sinLutTable + ((v54 >> 20) & 0xFF0));
    v56 = *v55;
    v57 = v55[1];
    v58 = v55[2];
    v59 = v55[3];
    *(v8 - 2) = *a3;
    v60 = (float)(v54 & 0xFFFFFF);
    v61 = a3[1];
    *(v8 - 1) = v61;
    v62 = v60 * 0.000000059605;
    *v8 = a3[2];
    v63 = v58 + (float)(v62 * v59);
    v64 = v56 + (float)(v57 * v62);
    *(v8 - 2) = (float)((float)(v52 * v63) - (float)(v64 * v53)) + v51;
    *(v8 - 1) = (float)((float)(v53 * v63) + (float)(v52 * v64)) + v61;
LABEL_9:
    result = v8 + 9;
    v66 = (unsigned int)(v8 + 1) >= a2;
    v8 += 9;
  }
  while ( !v66 );
  return result;
}
