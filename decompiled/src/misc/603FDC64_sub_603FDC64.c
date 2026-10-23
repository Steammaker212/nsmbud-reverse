/* sub_603FDC64
 * address: 0x603FDC64   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FDC64(int a1)
{
  __int64 v1; // d8
  __int64 v2; // d9
  __int64 v3; // d10
  __int64 v4; // d11
  __int64 v5; // d12
  __int64 v6; // d13
  __int64 v7; // d14
  int v8; // r2
  float v9; // s4
  float v10; // s2
  float v11; // s0
  int v12; // r1
  int v13; // r2
  float v14; // s6
  float v15; // s8
  unsigned int v16; // r3
  unsigned int v17; // r1
  int v18; // s10
  float *v19; // r3
  unsigned int v20; // r4
  float *v21; // lr
  float v22; // s8
  float v23; // s1
  float v24; // s13
  float v25; // s15
  float v26; // s16
  float v27; // s18
  float v28; // s20
  float v29; // s22
  float v30; // s24
  float v31; // s26
  float *v32; // r1
  float v33; // s8
  float v34; // s10
  float v35; // s6
  float v36; // s5
  float v37; // s7
  float v38; // s9
  float v39; // s11
  float v40; // s3
  float v41; // s24
  float v42; // s16
  float v43; // s20
  float v44; // s13
  float v45; // s9
  float v46; // s5
  float v48[12]; // [sp+0h] [bp-70h] BYREF
  __int64 v49; // [sp+30h] [bp-40h]
  __int64 v50; // [sp+38h] [bp-38h]
  __int64 v51; // [sp+40h] [bp-30h]
  __int64 v52; // [sp+48h] [bp-28h]
  __int64 v53; // [sp+50h] [bp-20h]
  __int64 v54; // [sp+58h] [bp-18h]
  __int64 v55; // [sp+60h] [bp-10h]

  v8 = FIELD_U32(a1, 4);
  v9 = FIELD_F32(a1, 36);
  v10 = FIELD_F32(a1, 40);
  v11 = FIELD_F32(a1, 44);
  v12 = FIELD_U32(v8, 4);
  if ( (unsigned int)(FIELD_U32(v12, 28) - 155) > 1 )
  {
    v14 = 0.0;
  }
  else
  {
    v13 = *(_DWORD *)(FIELD_U32(v8, 12) + 472);
    if ( FIELD_U32(a1, 8) == 5 )
    {
      v14 = (float)(v9 * -6.0) + 20.0;
      v11 = v11 * 0.85;
      v10 = v10 * 0.85;
      v15 = v9 * 0.85;
    }
    else
    {
      if ( v13 && v13 != 3 )
      {
        v11 = v11 * 0.9;
        v10 = v10 * 0.9;
        v15 = v9 * 0.9;
      }
      else
      {
        v15 = FIELD_F32(a1, 36);
      }
      v14 = flt_60B01658[v13] * v9;
    }
    if ( (unsigned int)(v13 - 7) <= 1 && (FIELD_U32(v12, 164) | 1) == 3 )
      v14 = v14 + (float)(v9 + v9);
    v9 = v15;
  }
  v49 = v1;
  v50 = v2;
  v51 = v3;
  v52 = v4;
  v53 = v5;
  v54 = v6;
  v55 = v7;
  v16 = FIELD_U32(a1, 16);
  v17 = FIELD_U32(a1, 20);
  v18 = v16 & 0xFFFFFF;
  v19 = (float *)((char *)sinLutTable + ((v16 >> 20) & 0xFF0));
  v20 = FIELD_U32(a1, 12);
  v21 = (float *)((char *)sinLutTable + ((v17 >> 20) & 0xFF0));
  v22 = (float)(v17 & 0xFFFFFF);
  v23 = FIELD_F32(a1, 32);
  v24 = *v19;
  v25 = v19[1];
  v26 = v19[2];
  v27 = v19[3];
  v28 = *v21;
  v29 = v21[1];
  v30 = v21[2];
  v31 = v21[3];
  v32 = (float *)((char *)sinLutTable + ((v20 >> 20) & 0xFF0));
  v33 = v22 * 0.000000059605;
  v34 = (float)(unsigned int)v18 * 0.000000059605;
  v35 = v14 + FIELD_F32(a1, 28);
  v36 = *v32;
  v37 = v32[1];
  v38 = v32[2];
  v39 = v32[3];
  v40 = (float)(v20 & 0xFFFFFF);
  v48[3] = FIELD_F32(a1, 24);
  v41 = v30 + (float)(v33 * v31);
  v42 = v26 + (float)(v34 * v27);
  v43 = v28 + (float)(v33 * v29);
  v44 = v24 + (float)(v34 * v25);
  v48[7] = v35;
  v48[11] = v23 + -64.0;
  v45 = v38 + (float)((float)(v40 * 0.000000059605) * v39);
  v46 = v36 + (float)((float)(v40 * 0.000000059605) * v37);
  v48[0] = v9 * (float)(v42 * v41);
  v48[4] = v9 * (float)(v42 * v43);
  v48[8] = -(float)(v44 * v9);
  v48[1] = v10 * (float)((float)((float)(v46 * v44) * v41) - (float)(v45 * v43));
  v48[5] = v10 * (float)((float)(v45 * v41) + (float)((float)(v46 * v44) * v43));
  v48[9] = v10 * (float)(v46 * v42);
  v48[2] = v11 * (float)((float)(v44 * (float)(v45 * v41)) + (float)(v46 * v43));
  v48[6] = v11 * (float)((float)(v44 * (float)(v45 * v43)) - (float)(v46 * v41));
  v48[10] = v11 * (float)(v45 * v42);
  return ((int (__fastcall *)(_DWORD, float *))loc_60793FF0)(*(_DWORD *)(FIELD_U32(a1, 4) + 4), v48);
}
