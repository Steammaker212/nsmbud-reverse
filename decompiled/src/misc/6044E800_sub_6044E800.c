/* sub_6044E800
 * address: 0x6044E800   size: 1376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044E800(int a1, int a2)
{
  int v2; // lr
  __int64 v3; // d8
  float *v5; // r5
  float v6; // lr
  int v7; // r0
  int v8; // r12
  float v9; // s0
  float v10; // s0
  float v11; // s2
  float v12; // s0
  float *v13; // r2
  float v14; // s12
  float v15; // s0
  float v16; // s2
  float v17; // s4
  int v18; // s2
  float v19; // s4
  float v20; // s2
  int v21; // r3
  int v22; // r0
  int v25; // r0
  float v26; // s9
  float v27; // r2
  float v28; // s11
  float v29; // s0
  float v30; // s2
  float v31; // s4
  float v32; // s6
  float v33; // s8
  float v34; // s10
  float v35; // s12
  float v36; // s14
  float v37; // s1
  float v38; // s3
  float v39; // s5
  float v40; // s7
  float *v41; // r3
  float v42; // s13
  float v43; // s11
  float v44; // s9
  float v45; // s13
  int v46; // s2
  int v47; // r3
  _DWORD v48[6]; // [sp+8h] [bp-240h] BYREF
  float v49; // [sp+20h] [bp-228h]
  int v50; // [sp+24h] [bp-224h]
  int v51; // [sp+30h] [bp-218h]
  int v52; // [sp+34h] [bp-214h]
  int v53; // [sp+38h] [bp-210h]
  int v54; // [sp+3Ch] [bp-20Ch]
  int v55; // [sp+40h] [bp-208h]
  int v56; // [sp+44h] [bp-204h]
  int v57; // [sp+48h] [bp-200h]
  int v58; // [sp+4Ch] [bp-1FCh]
  int v59; // [sp+90h] [bp-1B8h]
  float v60; // [sp+94h] [bp-1B4h]
  int v61; // [sp+98h] [bp-1B0h]
  float v62; // [sp+A8h] [bp-1A0h]
  int v63; // [sp+ACh] [bp-19Ch]
  int v64; // [sp+B8h] [bp-190h]
  int v65; // [sp+BCh] [bp-18Ch]
  int v66; // [sp+C0h] [bp-188h]
  int v67; // [sp+C4h] [bp-184h]
  int v68; // [sp+C8h] [bp-180h]
  int v69; // [sp+CCh] [bp-17Ch]
  int v70; // [sp+D0h] [bp-178h]
  int v71; // [sp+D4h] [bp-174h]
  int v72; // [sp+118h] [bp-130h]
  float v73; // [sp+11Ch] [bp-12Ch]
  int v74; // [sp+120h] [bp-128h]
  float v75; // [sp+130h] [bp-118h]
  int v76; // [sp+134h] [bp-114h]
  int v77; // [sp+140h] [bp-108h]
  int v78; // [sp+144h] [bp-104h]
  int v79; // [sp+148h] [bp-100h]
  int v80; // [sp+14Ch] [bp-FCh]
  int v81; // [sp+150h] [bp-F8h]
  int v82; // [sp+154h] [bp-F4h]
  int v83; // [sp+158h] [bp-F0h]
  int v84; // [sp+15Ch] [bp-ECh]
  int v85; // [sp+1A0h] [bp-A8h]
  float v86; // [sp+1A4h] [bp-A4h]
  int v87; // [sp+1A8h] [bp-A0h]
  float v88; // [sp+1B8h] [bp-90h]
  int v89; // [sp+1BCh] [bp-8Ch]
  int v90; // [sp+1C8h] [bp-80h]
  int v91; // [sp+1CCh] [bp-7Ch]
  int v92; // [sp+1D0h] [bp-78h]
  int v93; // [sp+1D4h] [bp-74h]
  int v94; // [sp+1D8h] [bp-70h]
  int v95; // [sp+1DCh] [bp-6Ch]
  int v96; // [sp+1E0h] [bp-68h]
  int v97; // [sp+1E4h] [bp-64h]
  __int64 v98; // [sp+228h] [bp-20h]
  int v99; // [sp+244h] [bp-4h]

  if ( FIELD_U32(a1, 23764) > 1u )
  {
    v99 = v2;
    v98 = v3;
    v25 = 0;
    v26 = 0.0;
    v55 = 1065353216;
    v56 = 1065353216;
    v57 = 1065353216;
    v58 = 1065353216;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 1065353216;
    v68 = 1065353216;
    v69 = 1065353216;
    v70 = 1065353216;
    v71 = 1065353216;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = 1065353216;
    v81 = 1065353216;
    v82 = 1065353216;
    v83 = 1065353216;
    v84 = 1065353216;
    v77 = 0;
    v78 = 0;
    v79 = 0;
    v80 = 1065353216;
    v94 = 1065353216;
    v95 = 1065353216;
    v96 = 1065353216;
    v97 = 1065353216;
    v90 = 0;
    v91 = 0;
    v92 = 0;
    v93 = 1065353216;
    v27 = *(float *)(a1 + 712 + 8 * (a2 & 0xFFFC) + 4);
    v48[0] = *(_DWORD *)(a1 + 712 + 8 * a2);
    v28 = v27;
    *(float *)&v48[1] = v27;
    v48[2] = 0;
    v59 = *(_DWORD *)(a1 + 712 + 8 * a2 + 11520);
    v60 = v27;
    v61 = 0;
    v72 = v59;
    v73 = v27 + -32.0;
    v74 = 0;
    v85 = v48[0];
    v86 = v27 + -32.0;
    v87 = 0;
    v29 = FIELD_F32(a1, 36);
    v30 = FIELD_F32(a1, 40);
    v31 = FIELD_F32(a1, 44);
    v32 = FIELD_F32(a1, 48);
    v33 = FIELD_F32(a1, 8);
    v34 = FIELD_F32(a1, 12);
    v35 = FIELD_F32(a1, 16);
    v36 = FIELD_F32(a1, 20);
    v37 = FIELD_F32(a1, 24);
    v38 = FIELD_F32(a1, 28);
    v39 = FIELD_F32(a1, 32);
    v40 = FIELD_F32(a1, 4);
    while ( 1 )
    {
      v41 = (float *)&v48[v25];
      v42 = *(float *)&v48[v25];
      *v41 = v35 + (float)((float)((float)(v28 * v33) + (float)(v42 * v40)) + (float)(v26 * v34));
      v41[1] = v39 + (float)((float)((float)(v28 * v37) + (float)(v42 * v36)) + (float)(v26 * v38));
      v41[2] = v32 + (float)((float)((float)(v28 * v30) + (float)(v42 * v29)) + (float)(v26 * v31));
      v43 = *(float *)&v48[v25 + 4];
      v44 = *(float *)&v48[v25 + 3];
      v45 = *(float *)&v48[v25 + 5];
      v41[3] = (float)((float)(v43 * v33) + (float)(v44 * v40)) + (float)(v45 * v34);
      v41[4] = (float)((float)(v43 * v37) + (float)(v44 * v36)) + (float)(v45 * v38);
      v41[5] = (float)((float)(v43 * v30) + (float)(v44 * v29)) + (float)(v45 * v31);
      if ( v25 == 102 )
        break;
      v28 = v41[35];
      v26 = v41[36];
      v25 += 34;
    }
    v46 = (a2 << 8) & 0x300;
    v49 = (float)(unsigned int)v46 / 1023.0;
    v50 = 0;
    v62 = (float)(v46 | 0xFFu) / 1023.0;
    v63 = 0;
    v75 = v62;
    v76 = 1065353216;
    v88 = v49;
    v89 = 1065353216;
    if ( (unsigned int)a2 >= 4 )
    {
      if ( a2 >= FIELD_U32(a1, 23760) - 4 )
      {
        sub_60450CF0(dword_60C9CEF0, FIELD_U32(a1, 64), 10);
        v47 = FIELD_U32(a1, 164);
      }
      else
      {
        sub_60450CF0(dword_60C9CEF0, FIELD_U32(a1, 56), 10);
        v47 = FIELD_U32(a1, 156);
      }
      return sub_60450A48(dword_60C9CEF0, v48, 4, v47, 10);
    }
    else
    {
      sub_60450CF0(dword_60C9CEF0, FIELD_U32(a1, 60), 10);
      return sub_60450A48(dword_60C9CEF0, v48, 4, FIELD_U32(a1, 160), 10);
    }
  }
  else
  {
    v5 = (float *)(a1 + 8 * a2);
    v6 = v5[179];
    FIELD_F32(a1, 168) = v5[178];
    v7 = 0;
    FIELD_F32(a1, 172) = v6;
    FIELD_U32(a1, 176) = 0;
    v8 = *((_DWORD *)v5 + 3059);
    FIELD_F32(a1, 304) = v5[3058];
    FIELD_U32(a1, 308) = v8;
    FIELD_U32(a1, 312) = 0;
    v9 = v5[3059];
    FIELD_F32(a1, 440) = v5[3058];
    FIELD_F32(a1, 444) = v9 + -16.0;
    FIELD_U32(a1, 448) = 0;
    v10 = v5[179];
    FIELD_F32(a1, 576) = v5[178];
    v11 = v6;
    FIELD_F32(a1, 580) = v10 + -16.0;
    v12 = 0.0;
    FIELD_U32(a1, 584) = 0;
    while ( 1 )
    {
      v13 = (float *)(a1 + v7);
      v14 = *(float *)(a1 + v7 + 168);
      v13[42] = FIELD_F32(a1, 16)
              + (float)((float)((float)(v11 * FIELD_F32(a1, 8)) + (float)(v14 * FIELD_F32(a1, 4)))
                      + (float)(v12 * FIELD_F32(a1, 12)));
      v13[43] = FIELD_F32(a1, 32)
              + (float)((float)((float)(v11 * FIELD_F32(a1, 24)) + (float)(v14 * FIELD_F32(a1, 20)))
                      + (float)(v12 * FIELD_F32(a1, 28)));
      v13[44] = FIELD_F32(a1, 48)
              + (float)((float)((float)(v11 * FIELD_F32(a1, 40)) + (float)(v14 * FIELD_F32(a1, 36)))
                      + (float)(v12 * FIELD_F32(a1, 44)));
      v15 = *(float *)(a1 + v7 + 180);
      v16 = *(float *)(a1 + v7 + 184);
      v17 = *(float *)(a1 + v7 + 188);
      v13[45] = (float)((float)(v16 * FIELD_F32(a1, 8)) + (float)(v15 * FIELD_F32(a1, 4)))
              + (float)(v17 * FIELD_F32(a1, 12));
      v13[46] = (float)((float)(v16 * FIELD_F32(a1, 24)) + (float)(v15 * FIELD_F32(a1, 20)))
              + (float)(v17 * FIELD_F32(a1, 28));
      v13[47] = (float)((float)(v16 * FIELD_F32(a1, 40)) + (float)(v15 * FIELD_F32(a1, 36)))
              + (float)(v17 * FIELD_F32(a1, 44));
      if ( v7 == 408 )
        break;
      v11 = v13[77];
      v12 = v13[78];
      v7 += 136;
    }
    v18 = (a2 << 8) & 0x300;
    v19 = (float)(v18 | 0xFFu);
    v20 = (float)(unsigned int)v18 / 1023.0;
    FIELD_F32(a1, 192) = v20;
    FIELD_U32(a1, 196) = 0;
    FIELD_F32(a1, 328) = v19 / 1023.0;
    FIELD_U32(a1, 332) = 0;
    FIELD_F32(a1, 464) = v19 / 1023.0;
    FIELD_U32(a1, 468) = 1065353216;
    FIELD_F32(a1, 600) = v20;
    FIELD_U32(a1, 604) = 1065353216;
    if ( (unsigned int)a2 >= 4 )
    {
      if ( a2 >= FIELD_U32(a1, 23760) - 4 )
      {
        sub_60450CF0(dword_60C9CEF0, FIELD_U32(a1, 64), 10);
        v21 = FIELD_U32(a1, 164);
      }
      else
      {
        sub_60450CF0(dword_60C9CEF0, FIELD_U32(a1, 56), 10);
        v21 = FIELD_U32(a1, 156);
      }
      v22 = dword_60C9CEF0;
      LODWORD(v98) = 10;
    }
    else
    {
      sub_60450CF0(dword_60C9CEF0, FIELD_U32(a1, 60), 10);
      v21 = FIELD_U32(a1, 160);
      v22 = dword_60C9CEF0;
      LODWORD(v98) = 10;
    }
    return sub_60450A48(v22, a1 + 168, 4, v21, v98);
  }
}
