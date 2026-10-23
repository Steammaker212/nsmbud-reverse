/* sub_6063C10C
 * address: 0x6063C10C   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063C10C(int a1)
{
  ModelWrapper *v2; // r6
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r2
  int v6; // s2
  float *v7; // r3
  float *v8; // r5
  float *v9; // r1
  float v10; // s0
  float v11; // s2
  float v12; // s8
  float v13; // s3
  float v14; // s4
  float v15; // s14
  float v16; // s10
  float v17; // s11
  float v18; // s7
  unsigned int v19; // r3
  unsigned int v20; // r2
  int v21; // r12
  int v22; // lr
  ModelWrapper *v23; // r9
  unsigned int v24; // r0
  float *v25; // r6
  float v26; // s0
  float *v27; // r1
  float v28; // s4
  float v29; // s6
  float v30; // s8
  float v31; // s10
  float *v32; // r1
  float v33; // s14
  float v34; // s12
  float v35; // s8
  float v36; // s7
  float v37; // s4
  float v38; // s3
  float v39; // s10
  float v40; // s15
  float v41; // s11
  float v43; // [sp+0h] [bp-60h] BYREF
  float v44; // [sp+4h] [bp-5Ch]
  float v45; // [sp+8h] [bp-58h]
  int v46; // [sp+Ch] [bp-54h]
  float v47; // [sp+10h] [bp-50h]
  float v48; // [sp+14h] [bp-4Ch]
  float v49; // [sp+18h] [bp-48h]
  int v50; // [sp+1Ch] [bp-44h]
  float v51; // [sp+20h] [bp-40h]
  float v52; // [sp+24h] [bp-3Ch]
  float v53; // [sp+28h] [bp-38h]
  float v54; // [sp+2Ch] [bp-34h]

  v2 = *(ModelWrapper **)(a1 + 6192);
  v3 = FIELD_U32(a1, 156);
  v4 = FIELD_U32(a1, 160);
  v5 = FIELD_U32(a1, 164);
  v6 = v4 & 0xFFFFFF;
  v7 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v10 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v11 = (float)(unsigned int)v6 * 0.000000059605;
  v12 = v8[2] + (float)(v10 * v8[3]);
  v13 = v7[2] + (float)(v11 * v7[3]);
  v14 = *v8 + (float)(v10 * v8[1]);
  v15 = *v7 + (float)(v11 * v7[1]);
  v16 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v17 = v9[2] + (float)(v16 * v9[3]);
  v18 = *v9 + (float)(v16 * v9[1]);
  v43 = v13 * v12;
  v47 = v13 * v14;
  v51 = -v15;
  v44 = (float)((float)(v18 * v15) * v12) - (float)(v17 * v14);
  v48 = (float)(v17 * v12) + (float)((float)(v18 * v15) * v14);
  v52 = v18 * v13;
  v45 = (float)(v15 * (float)(v17 * v12)) + (float)(v18 * v14);
  v49 = (float)(v15 * (float)(v17 * v14)) - (float)(v18 * v12);
  v53 = v17 * v13;
  v46 = FIELD_U32(a1, 108);
  v50 = FIELD_U32(a1, 112);
  v54 = FIELD_F32(a1, 116);
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v2, 0x0) + 60))(FIELD_U32(v2, 0x0), &v43);
  ModelWrapper_updateModel(v2);
  v19 = FIELD_U32(a1, 160);
  v20 = FIELD_U32(a1, 156);
  v21 = FIELD_U32(a1, 112);
  v22 = FIELD_U32(a1, 108);
  v23 = *(ModelWrapper **)(a1 + 6196);
  v24 = FIELD_U32(a1, 164);
  v25 = (float *)((char *)sinLutTable + ((v19 >> 20) & 0xFF0));
  v26 = FIELD_F32(a1, 116) + FIELD_F32(a1, 6772);
  v27 = (float *)((char *)sinLutTable + ((v24 >> 20) & 0xFF0));
  v28 = *v27;
  v29 = v27[1];
  v30 = v27[2];
  v31 = v27[3];
  v32 = (float *)((char *)sinLutTable + ((v20 >> 20) & 0xFF0));
  v33 = (float)(v24 & 0xFFFFFF) * 0.000000059605;
  v34 = (float)(v19 & 0xFFFFFF) * 0.000000059605;
  v35 = v30 + (float)(v33 * v31);
  v36 = v25[2] + (float)(v34 * v25[3]);
  v37 = v28 + (float)(v33 * v29);
  v38 = *v25 + (float)(v34 * v25[1]);
  v39 = (float)(v20 & 0xFFFFFF) * 0.000000059605;
  v40 = v32[2] + (float)(v39 * v32[3]);
  v41 = *v32 + (float)(v39 * v32[1]);
  v43 = v36 * v35;
  v47 = v36 * v37;
  v51 = -v38;
  v44 = (float)((float)(v41 * v38) * v35) - (float)(v40 * v37);
  v48 = (float)(v40 * v35) + (float)((float)(v41 * v38) * v37);
  v52 = v41 * v36;
  v45 = (float)(v38 * (float)(v40 * v35)) + (float)(v41 * v37);
  v49 = (float)(v38 * (float)(v40 * v37)) - (float)(v41 * v35);
  v53 = v40 * v36;
  v46 = v22;
  v50 = v21;
  v54 = v26;
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v23, 0x0) + 60))(FIELD_U32(v23, 0x0), &v43);
  ModelWrapper_updateModel(v23);
  return sub_6063CC9C(a1 + 6200, a1 + 108, FIELD_U32(a1, 164));
}
