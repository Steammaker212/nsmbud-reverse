/* sub_60175C54
 * address: 0x60175C54   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60175C54(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r1
  int v4; // r8
  int v5; // r9
  int v6; // r10
  float *v7; // r7
  unsigned int v8; // r2
  float *v9; // r6
  float *v10; // r5
  float v11; // s20
  float v12; // s18
  float v13; // s16
  float v14; // s12
  float v15; // s5
  float v16; // s8
  float v17; // s1
  float v18; // s0
  float v19; // s9
  float v20; // s4
  float v21; // s12
  float v22; // s0
  float v23; // s8
  float v24; // s1
  float v25; // s5
  float v27; // [sp+0h] [bp-70h] BYREF
  float v28; // [sp+4h] [bp-6Ch]
  float v29; // [sp+8h] [bp-68h]
  int v30; // [sp+Ch] [bp-64h]
  float v31; // [sp+10h] [bp-60h]
  float v32; // [sp+14h] [bp-5Ch]
  float v33; // [sp+18h] [bp-58h]
  int v34; // [sp+1Ch] [bp-54h]
  float v35; // [sp+20h] [bp-50h]
  float v36; // [sp+24h] [bp-4Ch]
  float v37; // [sp+28h] [bp-48h]
  int v38; // [sp+2Ch] [bp-44h]

  v2 = FIELD_U32(a1, 176);
  v3 = FIELD_U32(a1, 184);
  v4 = FIELD_U32(a1, 84);
  v5 = FIELD_U32(a1, 88);
  v6 = FIELD_U32(a1, 80);
  v7 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v8 = FIELD_U32(a1, 180);
  v9 = (float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v11 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(v8 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v14 = v10[2] + (float)(v11 * v10[3]);
  v15 = v9[2] + (float)(v12 * v9[3]);
  v16 = *v10 + (float)(v11 * v10[1]);
  v17 = *v9 + (float)(v12 * v9[1]);
  v18 = *v7 + (float)(v13 * v7[1]);
  v19 = v7[2] + (float)(v13 * v7[3]);
  v27 = (float)(v15 * v14) + (float)(v18 * (float)(v17 * v16));
  v31 = v19 * v16;
  v35 = (float)(v18 * (float)(v15 * v16)) - (float)(v17 * v14);
  v28 = (float)(v18 * (float)(v17 * v14)) - (float)(v15 * v16);
  v32 = v19 * v14;
  v36 = (float)(v17 * v16) + (float)(v18 * (float)(v15 * v14));
  v29 = v19 * v17;
  v33 = -v18;
  v37 = v19 * v15;
  v30 = v6;
  v34 = v4;
  v38 = v5;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 376) + 60))(**(_DWORD **)(a1 + 376), &v27);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 376) + 68))(**(_DWORD **)(a1 + 376), a1 + 596);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 376));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 376));
  v20 = v10[2] + (float)(v11 * v10[3]);
  v21 = v9[2] + (float)(v12 * v9[3]);
  v22 = *v10 + (float)(v11 * v10[1]);
  v23 = *v9 + (float)(v12 * v9[1]);
  v24 = *v7 + (float)(v13 * v7[1]);
  v25 = v7[2] + (float)(v13 * v7[3]);
  v27 = (float)(v21 * v20) + (float)(v24 * (float)(v23 * v22));
  v31 = v25 * v22;
  v35 = (float)(v24 * (float)(v21 * v22)) - (float)(v23 * v20);
  v28 = (float)(v24 * (float)(v23 * v20)) - (float)(v21 * v22);
  v32 = v25 * v20;
  v36 = (float)(v23 * v22) + (float)(v24 * (float)(v21 * v20));
  v29 = v25 * v23;
  v33 = -v24;
  v37 = v25 * v21;
  v30 = v6;
  v34 = v4;
  v38 = v5;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 384) + 60))(**(_DWORD **)(a1 + 384), &v27);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 384) + 68))(**(_DWORD **)(a1 + 384), a1 + 596);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 384));
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 384));
}
