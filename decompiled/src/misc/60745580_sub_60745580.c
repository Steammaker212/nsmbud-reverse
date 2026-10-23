/* sub_60745580
 * address: 0x60745580   size: 992   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60745580(float *a1)
{
  _DWORD *v2; // r7
  unsigned int v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r7
  int v7; // s2
  int v8; // s12
  float *v9; // r3
  float *v10; // r1
  float *v11; // r0
  float v12; // s0
  float v13; // s2
  float v14; // s8
  float v15; // s3
  float v16; // s4
  float v17; // s14
  float v18; // s10
  float v19; // s11
  float v20; // s7
  float *v21; // r4
  float v22; // t1
  float v23; // r0
  float v24; // s0
  float v25; // s2
  float v26; // s0
  int v27; // r7
  int v28; // r7
  int result; // r0
  int v30; // r1
  int v31; // r2
  unsigned int v32; // r0
  unsigned int v33; // r1
  unsigned int v34; // r2
  int v35; // r4
  int v36; // s2
  float *v37; // r7
  float *v38; // r1
  float v39; // s0
  float v40; // s2
  float v41; // s8
  float v42; // s3
  float v43; // s4
  float v44; // s14
  float v45; // s10
  float v46; // s11
  float v47; // s7
  float v48[3]; // [sp+4h] [bp-5Ch] BYREF
  float v49; // [sp+10h] [bp-50h] BYREF
  float v50; // [sp+14h] [bp-4Ch]
  float v51; // [sp+18h] [bp-48h]
  float v52; // [sp+1Ch] [bp-44h]
  float v53; // [sp+20h] [bp-40h]
  float v54; // [sp+24h] [bp-3Ch]
  float v55; // [sp+28h] [bp-38h]
  float v56; // [sp+2Ch] [bp-34h]
  float v57; // [sp+30h] [bp-30h]
  float v58; // [sp+34h] [bp-2Ch]
  float v59; // [sp+38h] [bp-28h]
  float v60; // [sp+3Ch] [bp-24h]

  v2 = a1 + 39;
  v4 = *((_DWORD *)a1 + 39);
  v5 = v2[1];
  v6 = v2[2];
  v7 = v5 & 0xFFFFFF;
  v8 = v4 & 0xFFFFFF;
  v9 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v11 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v12 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(unsigned int)v7 * 0.000000059605;
  v14 = v9[2] + (float)(v12 * v9[3]);
  v15 = v10[2] + (float)(v13 * v10[3]);
  v16 = *v9 + (float)(v12 * v9[1]);
  v17 = *v10 + (float)(v13 * v10[1]);
  v18 = (float)(unsigned int)v8 * 0.000000059605;
  v19 = v11[2] + (float)(v18 * v11[3]);
  v20 = *v11 + (float)(v18 * v11[1]);
  v49 = v15 * v14;
  v53 = v15 * v16;
  v57 = -v17;
  v50 = (float)((float)(v20 * v17) * v14) - (float)(v19 * v16);
  v54 = (float)(v19 * v14) + (float)((float)(v20 * v17) * v16);
  v58 = v20 * v15;
  v51 = (float)(v17 * (float)(v19 * v14)) + (float)(v20 * v16);
  v55 = (float)(v17 * (float)(v19 * v16)) - (float)(v20 * v14);
  v59 = v19 * v15;
  v22 = a1[27];
  v21 = a1 + 27;
  v52 = v22;
  v56 = v21[1];
  v60 = v21[2];
  v23 = v21[11];
  v24 = v21[162] + 1.0;
  v25 = v21[9] * v24;
  v26 = v24 * v21[10];
  v48[0] = v25;
  v48[1] = v26;
  v48[2] = v23;
  v27 = **((_DWORD **)v21 + 135);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v27 + 60))(v27, &v49);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v27 + 68))(v27, v48);
  (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 52))(v27);
  (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 56))(v27);
  v52 = v52 + 0.0;
  v56 = v56 + 0.0;
  v60 = v60 + -32.0;
  v28 = **((_DWORD **)v21 + 136);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v28 + 60))(v28, &v49);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v28 + 68))(v28, v48);
  (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 52))(v28);
  (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 56))(v28);
  result = *((unsigned __int8 *)v21 - 88);
  if ( (result & 1) == 0 )
  {
    result = *((_DWORD *)a1 + 164);
    if ( result )
    {
      v30 = *((_DWORD *)v21 + 1);
      v31 = *((_DWORD *)v21 + 2);
      a1[165] = *v21;
      *((_DWORD *)a1 + 166) = v30;
      *((_DWORD *)a1 + 167) = v31;
      a1[167] = a1[167] + -16.0;
      v32 = *((_DWORD *)a1 + 171);
      v33 = *((_DWORD *)a1 + 172);
      v34 = *((_DWORD *)a1 + 173);
      v35 = (v34 >> 20) & 0xFF0;
      v36 = v33 & 0xFFFFFF;
      v37 = (float *)((char *)sinLutTable + ((v33 >> 20) & 0xFF0));
      v38 = (float *)((char *)sinLutTable + ((v32 >> 20) & 0xFF0));
      v39 = (float)(v34 & 0xFFFFFF) * 0.000000059605;
      v40 = (float)(unsigned int)v36 * 0.000000059605;
      v41 = *(float *)((char *)&sinLutTable[2] + v35) + (float)(v39 * *(float *)((char *)&sinLutTable[3] + v35));
      v42 = v37[2] + (float)(v40 * v37[3]);
      v43 = *(float *)((char *)sinLutTable + v35) + (float)(v39 * *(float *)((char *)&sinLutTable[1] + v35));
      v44 = *v37 + (float)(v40 * v37[1]);
      v45 = (float)(v32 & 0xFFFFFF) * 0.000000059605;
      v46 = v38[2] + (float)(v45 * v38[3]);
      v47 = *v38 + (float)(v45 * v38[1]);
      v49 = v42 * v41;
      v53 = v42 * v43;
      v57 = -v44;
      v50 = (float)((float)(v47 * v44) * v41) - (float)(v46 * v43);
      v54 = (float)(v46 * v41) + (float)((float)(v47 * v44) * v43);
      v58 = v47 * v42;
      v51 = (float)(v44 * (float)(v46 * v41)) + (float)(v47 * v43);
      v55 = (float)(v44 * (float)(v46 * v43)) - (float)(v47 * v41);
      v59 = v46 * v42;
      v52 = a1[165];
      v56 = a1[166];
      v60 = a1[167];
      (*(void (__fastcall **)(_DWORD, float *))(**((_DWORD **)a1 + 164) + 60))(*((_DWORD *)a1 + 164), &v49);
      (*(void (__fastcall **)(_DWORD, _DWORD *))(**((_DWORD **)a1 + 164) + 68))(
        *((_DWORD *)a1 + 164),
        (_DWORD *)a1 + 168);
      (*(void (__fastcall **)(_DWORD))(**((_DWORD **)a1 + 164) + 52))(*((_DWORD *)a1 + 164));
      return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)a1 + 164) + 56))(*((_DWORD *)a1 + 164));
    }
  }
  return result;
}
