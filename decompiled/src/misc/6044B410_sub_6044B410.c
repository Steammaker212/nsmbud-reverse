/* sub_6044B410
 * address: 0x6044B410   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6044B410(_DWORD *a1)
{
  int v1; // r11
  int v2; // r10
  unsigned int v3; // r9
  int v5; // r8
  float v6; // s30
  unsigned __int8 *v7; // r1
  unsigned int result; // r0
  _DWORD *v9; // r3
  unsigned int v10; // r12
  unsigned int v11; // r4
  unsigned int v12; // r1
  float *v13; // r2
  float *v14; // r7
  float v15; // s12
  float v16; // s0
  float v17; // s2
  float v18; // s4
  float v19; // s0
  float v20[10]; // [sp+10h] [bp-288h] BYREF
  float v21; // [sp+38h] [bp-260h]
  float v22; // [sp+3Ch] [bp-25Ch]
  float v23; // [sp+40h] [bp-258h]
  float v24; // [sp+44h] [bp-254h]
  float v25; // [sp+48h] [bp-250h]
  float v26; // [sp+4Ch] [bp-24Ch]
  float v27; // [sp+50h] [bp-248h]
  float v28; // [sp+54h] [bp-244h]
  float v29; // [sp+98h] [bp-200h]
  float v30; // [sp+9Ch] [bp-1FCh]
  int v31; // [sp+A0h] [bp-1F8h]
  int v32; // [sp+B0h] [bp-1E8h]
  int v33; // [sp+B4h] [bp-1E4h]
  float v34; // [sp+C0h] [bp-1D8h]
  float v35; // [sp+C4h] [bp-1D4h]
  float v36; // [sp+C8h] [bp-1D0h]
  float v37; // [sp+CCh] [bp-1CCh]
  float v38; // [sp+D0h] [bp-1C8h]
  float v39; // [sp+D4h] [bp-1C4h]
  float v40; // [sp+D8h] [bp-1C0h]
  float v41; // [sp+DCh] [bp-1BCh]
  float v42; // [sp+120h] [bp-178h]
  float v43; // [sp+124h] [bp-174h]
  int v44; // [sp+128h] [bp-170h]
  int v45; // [sp+138h] [bp-160h]
  int v46; // [sp+13Ch] [bp-15Ch]
  float v47; // [sp+148h] [bp-150h]
  float v48; // [sp+14Ch] [bp-14Ch]
  float v49; // [sp+150h] [bp-148h]
  float v50; // [sp+154h] [bp-144h]
  float v51; // [sp+158h] [bp-140h]
  float v52; // [sp+15Ch] [bp-13Ch]
  float v53; // [sp+160h] [bp-138h]
  float v54; // [sp+164h] [bp-134h]
  float v55; // [sp+1A8h] [bp-F0h]
  float v56; // [sp+1ACh] [bp-ECh]
  int v57; // [sp+1B0h] [bp-E8h]
  int v58; // [sp+1C0h] [bp-D8h]
  int v59; // [sp+1C4h] [bp-D4h]
  float v60; // [sp+1D0h] [bp-C8h]
  float v61; // [sp+1D4h] [bp-C4h]
  float v62; // [sp+1D8h] [bp-C0h]
  float v63; // [sp+1DCh] [bp-BCh]
  float v64; // [sp+1E0h] [bp-B8h]
  float v65; // [sp+1E4h] [bp-B4h]
  float v66; // [sp+1E8h] [bp-B0h]
  float v67; // [sp+1ECh] [bp-ACh]

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v5 = 0;
  v6 = (float)((float)(-0.00030118 * 0.0) * 0.000000059605) + 1.0;
  do
  {
    v7 = (unsigned __int8 *)a1[36];
    if ( a1[35] > v3 )
      v7 += v1;
    result = *v7;
    if ( *v7 )
    {
      v9 = (_DWORD *)a1[30];
      if ( a1[29] > v3 )
        v9 = (_DWORD *)((char *)v9 + v1);
      if ( *v9 )
      {
        v10 = v7[1];
        v11 = v7[2];
        v12 = v7[3];
        v13 = (float *)a1[18];
        v14 = (float *)a1[22];
        if ( a1[17] > v3 )
          v13 = (float *)((char *)v13 + v5);
        if ( a1[21] > v3 )
          v14 = (float *)((char *)v14 + v2);
        v15 = *v14;
        v16 = v14[1];
        v17 = *v13;
        v18 = v13[1];
        v21 = (float)v12 / 255.0;
        v22 = (float)v11 / 255.0;
        v23 = (float)v10 / 255.0;
        v24 = (float)result / 255.0;
        v25 = v21;
        v26 = v22;
        v27 = v23;
        v28 = v24;
        v34 = v21;
        v35 = v22;
        v36 = v23;
        v37 = v24;
        v38 = v21;
        v39 = v22;
        v40 = v23;
        v41 = v24;
        v47 = v21;
        v48 = v22;
        v49 = v23;
        v50 = v24;
        v51 = v21;
        v52 = v22;
        v53 = v23;
        v54 = v24;
        v60 = v21;
        v61 = v22;
        v62 = v23;
        v63 = v24;
        v64 = v21;
        v65 = v22;
        v66 = v23;
        v67 = v24;
        v20[0] = v17 + (float)((float)((float)((float)(0.024541 * 0.0) * 0.000000059605) + 0.0) * v15);
        v20[1] = v18 + (float)((float)((float)((float)(-0.00030118 * 0.0) * 0.000000059605) + 1.0) * v16);
        v20[2] = 6500.0;
        v29 = v17 + (float)(v6 * v15);
        v30 = v18 + (float)((float)((float)((float)(-0.024541 * 0.0) * 0.000000059605) + 0.0) * v16);
        v31 = 1170939904;
        v42 = v17 + (float)((float)((float)((float)(-0.024541 * 0.0) * 0.000000059605) + 0.0) * v15);
        v43 = v18 + (float)((float)((float)((float)(0.00030118 * 0.0) * 0.000000059605) + -1.0) * v16);
        v44 = 1170939904;
        v55 = v17 + (float)((float)((float)((float)(0.00030118 * 0.0) * 0.000000059605) + -1.0) * v15);
        v56 = v18 + (float)((float)((float)((float)(0.024541 * 0.0) * 0.000000059605) + 0.0) * v16);
        v57 = 1170939904;
        v20[6] = 1.0;
        v20[7] = 1.0;
        v32 = 0;
        v33 = 1065353216;
        v45 = 0;
        v46 = 0;
        v58 = 1065353216;
        v59 = 0;
        result = dword_60CC6484;
        v19 = FIELD_F32(dword_60CC6484, 112);
        if ( v20[0] >= (float)(v19 + -8.0)
          && (float)(v17 + (float)(v6 * v15)) <= (float)((float)(v19 + FIELD_F32(dword_60CC6484, 104)) + 8.0) )
        {
          result = sub_60450A48(dword_60C9CEF0, v20, 4, a1[14], 4);
        }
      }
    }
    ++v3;
    v1 += 4;
    v5 += 12;
    v2 += 8;
  }
  while ( v3 != 600 );
  return result;
}
