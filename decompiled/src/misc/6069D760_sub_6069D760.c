/* sub_6069D760
 * address: 0x6069D760   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069D760(int a1, int a2, _DWORD *a3)
{
  int v6; // r8
  float v7; // r9
  float v8; // s2
  unsigned int v9; // r2
  unsigned int v10; // r3
  int v11; // r7
  int v12; // r6
  int v13; // s4
  int v14; // r2
  float *v15; // r7
  float *v16; // r6
  float v17; // s6
  float v18; // s4
  float v19; // s12
  float v20; // s7
  float v21; // s8
  float v22; // s3
  float v23; // s14
  float v24; // s15
  float v25; // s11
  float v26; // s18
  int result; // r0
  ModelWrapper *v28; // r5
  unsigned int v29; // r2
  unsigned int v30; // r3
  int v31; // r1
  int v32; // s0
  int v33; // r3
  float *v34; // r7
  float *v35; // r1
  float v36; // s2
  float v37; // s0
  float v38; // s8
  float v39; // s3
  float v40; // s4
  float v41; // s14
  float v42; // s10
  float v43; // s11
  float v44; // s7
  float v45; // [sp+0h] [bp-60h] BYREF
  float v46; // [sp+4h] [bp-5Ch]
  float v47; // [sp+8h] [bp-58h]
  float v48; // [sp+Ch] [bp-54h]
  float v49; // [sp+10h] [bp-50h]
  float v50; // [sp+14h] [bp-4Ch]
  float v51; // [sp+18h] [bp-48h]
  int v52; // [sp+1Ch] [bp-44h]
  float v53; // [sp+20h] [bp-40h]
  float v54; // [sp+24h] [bp-3Ch]
  float v55; // [sp+28h] [bp-38h]
  float v56; // [sp+2Ch] [bp-34h]

  sub_6069D354(a1);
  v6 = FIELD_U32(a2, 4);
  v7 = FIELD_F32(a2, 8);
  v8 = *(float *)a2;
  v9 = a3[1];
  v10 = a3[2];
  v11 = (v9 >> 20) & 0xFF0;
  v12 = (v10 >> 20) & 0xFF0;
  v10 &= 0xFFFFFFu;
  v13 = v9 & 0xFFFFFF;
  v14 = (*a3 >> 20) & 0xFF0;
  v15 = (float *)((char *)sinLutTable + v11);
  v16 = (float *)((char *)sinLutTable + v12);
  v17 = (float)v10 * 0.000000059605;
  v18 = (float)(unsigned int)v13 * 0.000000059605;
  v19 = v16[2] + (float)(v17 * v16[3]);
  v20 = v15[2] + (float)(v18 * v15[3]);
  v21 = *v16 + (float)(v17 * v16[1]);
  v22 = *v15 + (float)(v18 * v15[1]);
  v23 = (float)(*a3 & 0xFFFFFF) * 0.000000059605;
  v24 = *(float *)((char *)&sinLutTable[2] + v14) + (float)(v23 * *(float *)((char *)&sinLutTable[3] + v14));
  v25 = *(float *)((char *)sinLutTable + v14) + (float)(v23 * *(float *)((char *)&sinLutTable[1] + v14));
  v26 = v8 + FIELD_F32(a1, 40);
  v45 = v20 * v19;
  v49 = v20 * v21;
  v53 = -v22;
  v46 = (float)((float)(v25 * v22) * v19) - (float)(v24 * v21);
  v50 = (float)(v24 * v19) + (float)((float)(v25 * v22) * v21);
  v54 = v25 * v20;
  v47 = (float)(v22 * (float)(v24 * v19)) + (float)(v25 * v21);
  v51 = (float)(v22 * (float)(v24 * v21)) - (float)(v25 * v19);
  v55 = v24 * v20;
  v48 = v26;
  v52 = v6;
  v56 = v7;
  result = ((int (__fastcall *)(int, float *, int, unsigned int, float))loc_60630830)(a1, &v45, v14, v10, 0.0);
  v28 = *(ModelWrapper **)(a1 + 20);
  if ( v28 )
  {
    v29 = a3[2];
    v30 = a3[1];
    v31 = (v30 >> 20) & 0xFF0;
    v32 = v30 & 0xFFFFFF;
    v33 = (*a3 >> 20) & 0xFF0;
    v34 = (float *)((char *)sinLutTable + ((v29 >> 20) & 0xFF0));
    v35 = (float *)((char *)sinLutTable + v31);
    v36 = (float)(v29 & 0xFFFFFF) * 0.000000059605;
    v37 = (float)(unsigned int)v32 * 0.000000059605;
    v38 = v34[2] + (float)(v36 * v34[3]);
    v39 = v35[2] + (float)(v37 * v35[3]);
    v40 = *v34 + (float)(v36 * v34[1]);
    v41 = *v35 + (float)(v37 * v35[1]);
    v42 = (float)(*a3 & 0xFFFFFF) * 0.000000059605;
    v43 = *(float *)((char *)&sinLutTable[2] + v33) + (float)(v42 * *(float *)((char *)&sinLutTable[3] + v33));
    v44 = *(float *)((char *)sinLutTable + v33) + (float)(v42 * *(float *)((char *)&sinLutTable[1] + v33));
    v45 = v39 * v38;
    v49 = v39 * v40;
    v53 = -v41;
    v46 = (float)((float)(v44 * v41) * v38) - (float)(v43 * v40);
    v50 = (float)(v43 * v38) + (float)((float)(v44 * v41) * v40);
    v54 = v44 * v39;
    v47 = (float)(v41 * (float)(v43 * v38)) + (float)(v44 * v40);
    v51 = (float)(v41 * (float)(v43 * v40)) - (float)(v44 * v38);
    v55 = v43 * v39;
    v48 = v26;
    v52 = v6;
    v56 = v7 + 2.0;
    (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v28, 0x0) + 60))(FIELD_U32(v28, 0x0), &v45);
    return ModelWrapper_updateModel(v28);
  }
  return result;
}
