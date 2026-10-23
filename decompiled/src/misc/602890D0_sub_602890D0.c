/* sub_602890D0
 * address: 0x602890D0   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602890D0(int result)
{
  unsigned int v1; // r5
  int v2; // r12
  int v3; // lr
  _DWORD *v4; // r1
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r1
  int v8; // s4
  float *v9; // r5
  float v10; // s0
  unsigned int v11; // r3
  int v12; // r2
  int v13; // s6
  unsigned int v14; // r3
  float *v15; // r2
  float v16; // s4
  float *v17; // r1
  float v18; // s6
  float v19; // s12
  float v20; // s8
  float v21; // s4
  float v22; // s5
  float v23; // s1
  float v24; // s2
  float v25; // s13
  float v26; // s9
  float v27; // s6
  float v28; // s2
  int v29; // s0
  EffectData *v30; // r0
  int v31; // r1
  __int64 v32; // [sp+0h] [bp-40h] BYREF
  float v33; // [sp+8h] [bp-38h]
  int v34; // [sp+Ch] [bp-34h]
  float v35; // [sp+10h] [bp-30h]
  float v36; // [sp+14h] [bp-2Ch]
  float v37; // [sp+18h] [bp-28h]
  int v38; // [sp+1Ch] [bp-24h]
  float v39; // [sp+20h] [bp-20h]
  float v40; // [sp+24h] [bp-1Ch]
  float v41; // [sp+28h] [bp-18h]
  int v42; // [sp+2Ch] [bp-14h]

  v1 = FIELD_U32(result, 164);
  v2 = FIELD_U32(result, 108);
  v3 = FIELD_U32(result, 112);
  v4 = *(_DWORD **)(result + 6300);
  v5 = v4[3];
  v6 = v4[2];
  v7 = v4[17];
  if ( v6 > v7 )
    v5 += 4 * v7;
  v8 = v1 & 0xFFFFFF;
  v9 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v10 = *(float *)(*(_DWORD *)v5 + 20);
  v11 = FIELD_U32(result, 160);
  v12 = (v11 >> 20) & 0xFF0;
  v13 = v11 & 0xFFFFFF;
  v14 = FIELD_U32(result, 156);
  v15 = (float *)((char *)sinLutTable + v12);
  v16 = (float)(unsigned int)v8 * 0.000000059605;
  v17 = (float *)((char *)sinLutTable + ((v14 >> 20) & 0xFF0));
  v18 = (float)(unsigned int)v13 * 0.000000059605;
  v19 = v9[2] + (float)(v16 * v9[3]);
  v20 = *v9 + (float)(v16 * v9[1]);
  v21 = FIELD_F32(result, 144);
  v22 = v15[2] + (float)(v18 * v15[3]);
  v23 = *v15 + (float)(v18 * v15[1]);
  v24 = (float)(v14 & 0xFFFFFF) * 0.000000059605;
  v25 = v17[2] + (float)(v24 * v17[3]);
  v26 = *v17 + (float)(v24 * v17[1]);
  *(float *)&v32 = v21 * (float)(v22 * v19);
  v35 = (float)(v22 * v20) * v21;
  v39 = -(float)(v23 * v21);
  v27 = FIELD_F32(result, 148);
  *((float *)&v32 + 1) = (float)((float)((float)(v26 * v23) * v19) - (float)(v25 * v20)) * v27;
  v36 = (float)((float)(v25 * v19) + (float)((float)(v26 * v23) * v20)) * v27;
  v40 = (float)(v26 * v22) * v27;
  v28 = FIELD_F32(result, 152);
  v33 = (float)((float)(v23 * (float)(v25 * v19)) + (float)(v26 * v20)) * v28;
  v37 = (float)((float)(v23 * (float)(v25 * v20)) - (float)(v26 * v19)) * v28;
  v41 = (float)(v25 * v22) * v28;
  v34 = v2;
  v38 = v3;
  v29 = (int)v10;
  v42 = 1166843904;
  if ( v29 == 12 )
  {
    v30 = (EffectData *)(result + 6388);
    v31 = 734;
  }
  else
  {
    if ( v29 )
      return result;
    v30 = (EffectData *)(result + 6388);
    v31 = 733;
  }
  return sub_60237610(v30, v31, &v32, 0);
}
