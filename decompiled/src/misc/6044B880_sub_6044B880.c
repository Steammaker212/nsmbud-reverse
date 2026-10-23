/* sub_6044B880
 * address: 0x6044B880   size: 1224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6044B880(int a1, float result)
{
  unsigned int v3; // r8
  int v4; // r12
  unsigned __int8 *v5; // r0
  float *v6; // r6
  unsigned __int8 *v7; // r1
  float v8; // s4
  int v9; // r2
  float v10; // s10
  float v11; // s11
  float v12; // s2
  unsigned int v13; // s1
  float *v14; // r7
  float v15; // s12
  float v16; // s14
  unsigned int v17; // r3
  float v18; // s12
  float v19; // s14
  float v20; // s4
  char v21; // r1
  unsigned int v22; // r7
  int *v23; // r6
  int v24; // r2
  float v25; // s1
  float v26; // s8
  float v27; // s3
  float v28; // s12
  int v29; // r3
  float v30; // s27
  float v31; // s13
  float *v32; // r6
  float *v33; // r2
  float v34; // s16
  float v35; // s24
  float v36; // s28
  float v37; // s29
  float v38; // s19
  float v39; // s18
  float v40; // s22
  int v41; // r0
  float *v42; // r7
  float v43; // s6
  float v44; // s5
  float v45; // s8
  float v46; // s12
  float v47; // s25
  float v48; // s23
  float v49; // s14
  float v50; // s10
  float v51; // s17
  float v52; // s3
  float v53; // s1
  float v54; // s6
  float v55; // s5
  float v56; // s9
  float v57; // s21
  float v58; // s0
  float v59; // s1
  float v60; // s3
  float v61; // s11
  float v62; // s15
  float v63; // s7
  float v64; // s7
  float v65; // s0
  float v66; // s24
  float v67; // s28
  float v68; // s19
  float v69; // s13
  float v70; // s16
  float v71; // s6
  float v72; // s2
  float v73; // s0
  int v74; // r3
  int v75; // [sp+Ch] [bp-29Ch]
  float v76; // [sp+14h] [bp-294h]
  float v77; // [sp+18h] [bp-290h]
  float v78; // [sp+1Ch] [bp-28Ch]
  float v79[162]; // [sp+20h] [bp-288h] BYREF

  if ( FIELD_S32(a1, 52) >= 1 )
  {
    v3 = 0;
    v4 = dword_60CC6484;
    v75 = dword_60CC6484;
    do
    {
      v5 = *(unsigned __int8 **)(a1 + 144);
      v6 = *(float **)(a1 + 72);
      v7 = *(unsigned __int8 **)(a1 + 152);
      v8 = FIELD_F32(a1, 168);
      if ( FIELD_U32(a1, 140) > v3 )
        v5 += 4 * v3;
      if ( FIELD_U32(a1, 68) > v3 )
        v6 += 3 * v3;
      v9 = 0;
      if ( FIELD_U32(a1, 148) > v3 )
        v7 += 4 * v3;
      v10 = v6[2];
      v11 = *v6;
      v12 = v6[1];
      do
      {
        v13 = *v5;
        v14 = &v79[v9];
        v9 += 34;
        v15 = (float)v5[2] / 255.0;
        v16 = (float)v5[1] / 255.0;
        v14[14] = (float)v5[3] / 255.0;
        v14[15] = v15;
        v14[16] = v16;
        v14[17] = (float)v13 / 255.0;
        v17 = *v7;
        v18 = (float)v7[2] / 255.0;
        v19 = (float)v7[1] / 255.0;
        v14[10] = (float)v7[3] / 255.0;
        v14[11] = v18;
        v14[12] = v19;
        v14[13] = (float)v17;
      }
      while ( v9 != 136 );
      v20 = v8 * (float)((float)(v10 * 0.7) + 0.3);
      v21 = 0;
      v79[6] = 0.0;
      v79[7] = 0.0;
      v79[40] = 1.0;
      v79[41] = 0.0;
      v79[74] = 1.0;
      v79[75] = 1.0;
      v79[108] = 0.0;
      v79[109] = 1.0;
      if ( v10 >= 0.985 )
      {
        v21 = 2;
        v20 = v20
            * (float)((float)((float)((float)(v10 + -0.985) * 100.0) + 1.0)
                    + (float)((float)((float)(v10 + -0.985) * 100.0) + 1.0));
      }
      v22 = FIELD_U32(a1, 184);
      v23 = dword_6044BD60;
      if ( v10 > 0.7 )
        v23 = &dword_6044BD60[1];
      v24 = (v22 >> 20) & 0xFF0;
      v25 = *(float *)((char *)sinLutTable + v24);
      v26 = *(float *)((char *)&sinLutTable[1] + v24);
      v27 = *(float *)((char *)&sinLutTable[2] + v24);
      v28 = *(float *)((char *)&sinLutTable[3] + v24);
      v29 = (v22 + 0x40000000) & 0xFFFFFF;
      v30 = v10 + *(float *)v23;
      v31 = (float)(v22 & 0xFFFFFF);
      v32 = (float *)((char *)sinLutTable + (((v22 + 0x40000000) >> 20) & 0xFF0));
      v33 = (float *)((char *)sinLutTable + (v24 ^ 0x800));
      v34 = *v32;
      v35 = v32[1];
      v36 = v32[2];
      v37 = v32[3];
      v38 = *v33;
      v39 = v33[1];
      v40 = v33[2];
      v41 = (v22 - 0x40000000) & 0xFFFFFF;
      v42 = (float *)((char *)sinLutTable + (((v22 - 0x40000000) >> 20) & 0xFF0));
      v43 = v31 * v28;
      v44 = v31 * v26;
      v45 = FIELD_F32(a1, 4);
      v46 = FIELD_F32(a1, 8);
      v76 = FIELD_F32(a1, 16);
      v47 = *v42;
      v48 = v42[2];
      v49 = FIELD_F32(a1, 24);
      v50 = FIELD_F32(a1, 20);
      v51 = FIELD_F32(a1, 44);
      v52 = v27 + (float)(v43 * 0.000000059605);
      v53 = v25 + (float)(v44 * 0.000000059605);
      v54 = v11;
      v55 = v30 * FIELD_F32(a1, 12);
      v56 = FIELD_F32(a1, 48);
      v57 = v12 + (float)(v20 * v52);
      v58 = v11 + (float)(v20 * v53);
      v59 = v30 * FIELD_F32(a1, 28);
      v60 = FIELD_F32(a1, 32);
      v61 = FIELD_F32(a1, 36);
      v62 = FIELD_F32(a1, 40);
      v63 = v42[1];
      v79[0] = v76 + (float)((float)((float)(v57 * v46) + (float)(v58 * v45)) + v55);
      v79[1] = v60 + (float)((float)((float)(v57 * v49) + (float)(v58 * v50)) + v59);
      v77 = v63;
      v78 = v42[3];
      v64 = v33[3];
      v79[2] = v56 + (float)((float)((float)(v57 * v62) + (float)(v58 * v61)) + (float)(v30 * v51));
      v65 = v12 + (float)(v20 * (float)(v36 + (float)((float)((float)(unsigned int)v29 * v37) * 0.000000059605)));
      v66 = v54 + (float)(v20 * (float)(v34 + (float)((float)((float)(unsigned int)v29 * v35) * 0.000000059605)));
      v67 = (float)((float)(v65 * v46) + (float)(v66 * v45)) + v55;
      v79[34] = v76 + v67;
      v79[35] = v60 + (float)((float)((float)(v65 * v49) + (float)(v66 * v50)) + v59);
      v68 = v38 + (float)((float)(v31 * v39) * 0.000000059605);
      v69 = v12 + (float)(v20 * (float)(v40 + (float)((float)(v31 * v64) * 0.000000059605)));
      v70 = v54 + (float)(v20 * v68);
      v79[36] = v56 + (float)((float)((float)(v65 * v62) + (float)(v66 * v61)) + (float)(v30 * v51));
      v71 = v54 + (float)(v20 * (float)(v47 + (float)((float)((float)(unsigned int)v41 * v77) * 0.000000059605)));
      v72 = v12 + (float)(v20 * (float)(v48 + (float)((float)((float)(unsigned int)v41 * v78) * 0.000000059605)));
      v79[68] = v76 + (float)((float)((float)(v69 * v46) + (float)(v70 * v45)) + v55);
      v79[69] = v60 + (float)((float)((float)(v69 * v49) + (float)(v70 * v50)) + v59);
      v79[70] = v56 + (float)((float)((float)(v69 * v62) + (float)(v70 * v61)) + (float)(v30 * v51));
      v79[102] = v76 + (float)((float)((float)(v72 * v46) + (float)(v71 * v45)) + v55);
      v79[103] = v60 + (float)((float)((float)(v72 * v49) + (float)(v71 * v50)) + v59);
      v79[104] = v56 + (float)((float)((float)(v72 * v62) + (float)(v71 * v61)) + (float)(v30 * v51));
      v73 = FIELD_F32(v4, 112);
      if ( v79[0] >= (float)(v73 + -8.0) && (float)(v76 + v67) <= (float)((float)(v73 + FIELD_F32(v4, 104)) + 8.0) )
      {
        if ( (v21 & 3) != 0 )
          v74 = FIELD_U32(a1, 64);
        else
          v74 = FIELD_U32(a1, 56);
        sub_60450A48(dword_60C9CEF0, v79, 4, v74, 0);
        v4 = v75;
      }
      result = 0.7;
      ++v3;
    }
    while ( (signed int)v3 < FIELD_U32(a1, 52) );
  }
  return result;
}
