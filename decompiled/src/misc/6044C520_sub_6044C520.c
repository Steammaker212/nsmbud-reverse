/* sub_6044C520
 * address: 0x6044C520   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044C520(int a1, unsigned int a2)
{
  float v4; // s5
  float v5; // s11
  float v6; // s13
  float v7; // s16
  float *v8; // r1
  int v9; // r0
  float v10; // r2
  float v11; // s15
  int v12; // r5
  float v13; // s0
  float v14; // s2
  float v15; // s4
  float v16; // s6
  float v17; // s8
  float v18; // s10
  float v19; // s12
  float v20; // s14
  float v21; // s1
  float v22; // s3
  float v23; // s7
  float v24; // s9
  unsigned int v25; // r1
  float *v26; // r3
  float v27; // s18
  int v28; // r2
  int v29; // r0
  int v30; // r7
  int v32; // [sp+8h] [bp-268h] BYREF
  int v33; // [sp+Ch] [bp-264h]
  int v34; // [sp+10h] [bp-260h]
  int v35; // [sp+14h] [bp-25Ch]
  _DWORD v36[6]; // [sp+18h] [bp-258h] BYREF
  float v37; // [sp+30h] [bp-240h]
  int v38; // [sp+34h] [bp-23Ch]
  float v39; // [sp+38h] [bp-238h]
  int v40; // [sp+3Ch] [bp-234h]
  int v41; // [sp+40h] [bp-230h]
  int v42; // [sp+44h] [bp-22Ch]
  int v43; // [sp+48h] [bp-228h]
  int v44; // [sp+4Ch] [bp-224h]
  int v45; // [sp+A0h] [bp-1D0h]
  int v46; // [sp+A4h] [bp-1CCh]
  int v47; // [sp+A8h] [bp-1C8h]
  int v48; // [sp+ACh] [bp-1C4h]
  int v49; // [sp+B0h] [bp-1C0h]
  unsigned int v50; // [sp+B4h] [bp-1BCh]
  float v51; // [sp+B8h] [bp-1B8h]
  int v52; // [sp+BCh] [bp-1B4h]
  float v53; // [sp+C0h] [bp-1B0h]
  int v54; // [sp+C4h] [bp-1ACh]
  int v55; // [sp+C8h] [bp-1A8h]
  int v56; // [sp+CCh] [bp-1A4h]
  int v57; // [sp+D0h] [bp-1A0h]
  int v58; // [sp+D4h] [bp-19Ch]
  int v59; // [sp+128h] [bp-148h]
  int v60; // [sp+12Ch] [bp-144h]
  int v61; // [sp+130h] [bp-140h]
  unsigned int v62; // [sp+134h] [bp-13Ch]
  int v63; // [sp+138h] [bp-138h]
  unsigned int v64; // [sp+13Ch] [bp-134h]
  float v65; // [sp+140h] [bp-130h]
  int v66; // [sp+144h] [bp-12Ch]
  float v67; // [sp+148h] [bp-128h]
  int v68; // [sp+14Ch] [bp-124h]
  int v69; // [sp+150h] [bp-120h]
  int v70; // [sp+154h] [bp-11Ch]
  int v71; // [sp+158h] [bp-118h]
  int v72; // [sp+15Ch] [bp-114h]
  int v73; // [sp+1B0h] [bp-C0h]
  int v74; // [sp+1B4h] [bp-BCh]
  int v75; // [sp+1B8h] [bp-B8h]
  unsigned int v76; // [sp+1BCh] [bp-B4h]
  int v77; // [sp+1C0h] [bp-B0h]
  int v78; // [sp+1C4h] [bp-ACh]
  float v79; // [sp+1C8h] [bp-A8h]
  int v80; // [sp+1CCh] [bp-A4h]
  float v81; // [sp+1D0h] [bp-A0h]
  int v82; // [sp+1D4h] [bp-9Ch]
  int v83; // [sp+1D8h] [bp-98h]
  int v84; // [sp+1DCh] [bp-94h]
  int v85; // [sp+1E0h] [bp-90h]
  int v86; // [sp+1E4h] [bp-8Ch]

  *(_DWORD *)(FIELD_U32(dword_60C9CEF0, 48) + 28) = 1;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 1065353216;
  sub_60426858((_DWORD *)dword_60C9BBD4, (float *)&v32, 6u);
  v4 = 0.0;
  v5 = 1.0;
  v6 = 0.0;
  v7 = 0.0;
  v41 = v32;
  v42 = v33;
  v43 = v34;
  v44 = v35;
  v55 = v32;
  v56 = v33;
  v57 = v34;
  v58 = v35;
  v69 = v32;
  v70 = v33;
  v71 = v34;
  v72 = v35;
  v83 = v32;
  v84 = v33;
  v85 = v34;
  v86 = v35;
  v8 = (float *)(a1 + 8 * a2);
  v9 = 0;
  v10 = v8[40];
  *(float *)v36 = v8[39];
  *(float *)&v36[1] = v10;
  v36[2] = 0;
  v11 = v10;
  v12 = *((_DWORD *)v8 + 14440);
  v45 = *((_DWORD *)v8 + 14439);
  v46 = v12;
  v47 = 0;
  v59 = v45;
  v60 = -1056964608;
  v61 = 0;
  v73 = v36[0];
  v74 = -1056964608;
  v75 = 0;
  v36[3] = 0;
  v36[4] = 1065353216;
  v36[5] = 0;
  v48 = 0;
  v49 = 1065353216;
  v50 = 0x80000000;
  v62 = 0x80000000;
  v63 = 1065353216;
  v64 = 0x80000000;
  v76 = 0x80000000;
  v77 = 1065353216;
  v78 = 0;
  v13 = FIELD_F32(a1, 36);
  v14 = FIELD_F32(a1, 40);
  v15 = FIELD_F32(a1, 44);
  v16 = FIELD_F32(a1, 48);
  v17 = FIELD_F32(a1, 8);
  v18 = FIELD_F32(a1, 12);
  v19 = FIELD_F32(a1, 16);
  v20 = FIELD_F32(a1, 20);
  v21 = FIELD_F32(a1, 24);
  v22 = FIELD_F32(a1, 28);
  v23 = FIELD_F32(a1, 32);
  v24 = FIELD_F32(a1, 4);
  v25 = 23 * (a2 % 0x2C);
  while ( 1 )
  {
    v26 = (float *)&v36[v9];
    v27 = *(float *)&v36[v9];
    *v26 = v19 + (float)((float)((float)(v11 * v17) + (float)(v27 * v24)) + (float)(v7 * v18));
    v26[1] = v23 + (float)((float)((float)(v11 * v21) + (float)(v27 * v20)) + (float)(v7 * v22));
    v26[2] = v16 + (float)((float)((float)(v11 * v14) + (float)(v27 * v13)) + (float)(v7 * v15));
    v26[3] = (float)((float)(v5 * v17) + (float)(v6 * v24)) + (float)(v4 * v18);
    v26[4] = (float)((float)(v5 * v21) + (float)(v6 * v20)) + (float)(v4 * v22);
    v26[5] = (float)((float)(v5 * v14) + (float)(v6 * v13)) + (float)(v4 * v15);
    if ( v9 == 102 )
      break;
    v11 = v26[35];
    v7 = v26[36];
    v6 = v26[37];
    v5 = v26[38];
    v4 = v26[39];
    v9 += 34;
  }
  v28 = (unsigned __int16)v25 + 22;
  v29 = FIELD_S16(a1, 115372);
  v37 = (float)(v29 + (unsigned __int16)v25) / 1023.0;
  v38 = 0;
  v51 = (float)(v29 + v28) / 1023.0;
  v52 = 0;
  v65 = v51;
  v66 = 1065353216;
  v79 = v37;
  v80 = 1065353216;
  v30 = FIELD_S16(a1, 115374);
  v39 = (float)(v30 + (unsigned __int16)v25) / 1023.0;
  v40 = 0;
  v53 = (float)(v30 + v28) / 1023.0;
  v54 = 0;
  v67 = v53;
  v68 = 1065353216;
  v81 = v39;
  v82 = 1065353216;
  sub_60450CF0(dword_60C9CEF0, FIELD_U32(a1, 56), 8);
  return sub_60450A48(dword_60C9CEF0, v36, 4, FIELD_U32(a1, 60), 8);
}
