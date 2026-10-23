/* sub_606CF480
 * address: 0x606CF480   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CF480(int a1)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  int v4; // r7
  int v5; // s0
  unsigned int v6; // r2
  float *v7; // r7
  int v8; // s4
  float *v9; // r3
  float *v10; // r0
  float v11; // s13
  float v12; // s15
  float v13; // s9
  float v14; // s11
  int v15; // r0
  float v16; // s4
  float v17; // s0
  float v18; // s2
  float v19; // s6
  float v20; // s12
  float v21; // s5
  float v22; // s8
  float v23; // s1
  float v24; // s4
  float v25; // s10
  float v26; // s14
  float v27; // s13
  float v28; // s9
  float v29; // r1
  float v30; // r2
  ModelWrapper *v31; // r5
  int v32; // r0
  float v33; // r1
  ModelWrapper *v34; // r5
  float v35; // r0
  int result; // r0
  ModelWrapper *v37; // r5
  float v38; // [sp+0h] [bp-48h] BYREF
  float v39; // [sp+4h] [bp-44h]
  float v40; // [sp+8h] [bp-40h]
  float v41; // [sp+Ch] [bp-3Ch]
  float v42; // [sp+10h] [bp-38h]
  float v43; // [sp+14h] [bp-34h]
  float v44; // [sp+18h] [bp-30h]
  float v45; // [sp+1Ch] [bp-2Ch]
  float v46; // [sp+20h] [bp-28h]
  float v47; // [sp+24h] [bp-24h]
  float v48; // [sp+28h] [bp-20h]
  int v49; // [sp+2Ch] [bp-1Ch]

  v2 = FIELD_U32(a1, 160);
  v3 = FIELD_U32(a1, 164);
  v4 = (v2 >> 20) & 0xFF0;
  v5 = v2 & 0xFFFFFF;
  v6 = FIELD_U32(a1, 156);
  v7 = (float *)((char *)sinLutTable + v4);
  v8 = v3 & 0xFFFFFF;
  v9 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v11 = v10[2];
  v12 = v10[3];
  v13 = *v10;
  v14 = v10[1];
  v15 = FIELD_U32(a1, 116);
  v16 = (float)(unsigned int)v8 * 0.000000059605;
  v17 = (float)(unsigned int)v5 * 0.000000059605;
  v18 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v19 = FIELD_F32(a1, 112);
  v20 = v9[2] + (float)(v16 * v9[3]);
  v21 = v7[2] + (float)(v17 * v7[3]);
  v22 = *v9 + (float)(v16 * v9[1]);
  v23 = *v7 + (float)(v17 * v7[1]);
  v24 = FIELD_F32(a1, 108);
  v25 = FIELD_F32(a1, 6904);
  v26 = FIELD_F32(a1, 6900);
  v27 = v11 + (float)(v18 * v12);
  v28 = v13 + (float)(v18 * v14);
  v38 = v21 * v20;
  v42 = v21 * v22;
  v46 = -v23;
  v39 = (float)((float)(v28 * v23) * v20) - (float)(v27 * v22);
  v43 = (float)(v27 * v20) + (float)((float)(v28 * v23) * v22);
  v47 = v28 * v21;
  v40 = (float)(v23 * (float)(v27 * v20)) + (float)(v28 * v22);
  v44 = (float)(v23 * (float)(v27 * v22)) - (float)(v28 * v20);
  v48 = v27 * v21;
  v41 = v24 + v26;
  v45 = v19 + v25;
  v49 = v15;
  sub_606CFD50(a1 + 6916, &v38);
  v29 = FIELD_F32(a1, 108);
  v30 = FIELD_F32(a1, 112);
  v31 = *(ModelWrapper **)(a1 + 6932);
  v32 = FIELD_U32(a1, 6956);
  v38 = 1.0;
  v39 = 0.0;
  v40 = 0.0;
  v42 = 0.0;
  v43 = 1.0;
  v44 = 0.0;
  v46 = 0.0;
  v47 = 0.0;
  v48 = 1.0;
  v41 = v29;
  v45 = v30;
  v49 = v32;
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v31, 0x0) + 60))(FIELD_U32(v31, 0x0), &v38);
  ModelWrapper_updateModel(v31);
  v33 = FIELD_F32(a1, 112);
  v34 = *(ModelWrapper **)(a1 + 6936);
  v35 = FIELD_F32(a1, 108);
  v38 = 1.0;
  v39 = 0.0;
  v40 = 0.0;
  v42 = 0.0;
  v43 = 1.0;
  v44 = 0.0;
  v46 = 0.0;
  v47 = 0.0;
  v48 = 1.0;
  v41 = v35;
  v45 = v33;
  v49 = 1162551296;
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v34, 0x0) + 60))(FIELD_U32(v34, 0x0), &v38);
  ModelWrapper_updateModel(v34);
  result = 6940;
  v37 = *(ModelWrapper **)(a1 + 6940);
  if ( v37 )
  {
    v38 = 1.0;
    v39 = 0.0;
    v40 = 0.0;
    v42 = 0.0;
    v43 = 1.0;
    v44 = 0.0;
    v46 = 0.0;
    v47 = 0.0;
    v48 = 1.0;
    v41 = FIELD_F32(a1, 6944);
    v45 = FIELD_F32(a1, 6948);
    v49 = FIELD_U32(a1, 6952);
    (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v37, 0x0) + 60))(FIELD_U32(v37, 0x0), &v38);
    return ModelWrapper_updateModel(v37);
  }
  return result;
}
