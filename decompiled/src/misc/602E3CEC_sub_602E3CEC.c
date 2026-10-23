/* sub_602E3CEC
 * address: 0x602E3CEC   size: 1356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_602E3CEC(float *result)
{
  float v1; // s2
  float v2; // s4
  float v3; // s10
  float v4; // s12
  int v5; // r3
  float v6; // s8
  unsigned int v7; // r2
  float v8; // s6
  int v9; // r6
  unsigned int v10; // r1
  float *v11; // r1
  float v12; // s14
  float v13; // s1
  float v14; // s14
  float v15; // s1
  unsigned int v16; // r1
  bool v17; // cc
  float v18; // s2
  float v19; // s4
  float v20; // s6
  float v21; // s10
  float v22; // s12
  float v23; // s8
  int v24; // r3
  int v25; // r6
  int v26; // r7
  int v27; // r5
  float *v28; // r5
  float v29; // s14
  float v30; // s1
  float v31; // s14
  float v32; // s1
  float *v33; // r4
  int v34; // r5
  int v35; // r4
  unsigned int v36; // r1
  float v37; // s2
  float v38; // s4
  float v39; // s12
  int v40; // r3
  float v41; // s10
  float v42; // s8
  int v43; // r2
  float v44; // s6
  int v45; // r5
  unsigned int v46; // r4
  float *v47; // r4
  float v48; // s14
  float v49; // s1
  float v50; // s14
  float v51; // s1
  float v52; // s2
  float v53; // s4
  float v54; // s10
  float v55; // s12
  int v56; // r3
  float v57; // s8
  unsigned int v58; // r2
  float v59; // s6
  int v60; // r4
  unsigned int v61; // r1
  float *v62; // r1
  float v63; // s14
  float v64; // s1
  float v65; // s14
  float v66; // s1
  unsigned int v67; // r1
  float v68; // s2
  float v69; // s4
  int v70; // r4
  float v71; // s10
  float v72; // s12
  float v73; // s6
  float v74; // s8
  int v75; // r3
  int v76; // r2
  int v77; // s1
  int v78; // r2
  float *v79; // r2
  float v80; // s14
  float v81; // s1
  float v82; // s14
  float v83; // s1
  int v84; // r7
  int v85; // r2
  unsigned int v86; // r1
  float v87; // s2
  float v88; // s4
  float v89; // s12
  int v90; // r3
  float v91; // s10
  float v92; // s8
  int v93; // r2
  float v94; // s6
  int v95; // r5
  unsigned int v96; // r4
  float *v97; // r4
  float v98; // s14
  float v99; // s1
  float v100; // s14
  float v101; // s1

  v1 = result[27];
  v2 = result[28];
  v3 = result[1603];
  v4 = result[1602];
  v5 = -1;
  v6 = result[1605];
  v7 = 0;
  v8 = result[1606];
  do
  {
    v9 = v5 + dword_60AFEC90[v7];
    v10 = 0;
    --v5;
    if ( v7 < 6 )
      v10 = v7;
    v11 = &result[76 * v10];
    v12 = (float)v9 / (float)dword_60AFEC90[v7];
    v13 = (float)(v3 * (float)(1.0 - v12)) + (float)(v8 * v12);
    v14 = (float)((float)(v4 * (float)(1.0 - v12)) + (float)(v6 * v12)) - v1;
    v15 = v13 - v2;
    v11[1661] = v14;
    v11[1662] = v15;
    v11[2801] = v14;
    v11[2802] = v15;
    v16 = v7 + 1;
    v17 = (int)(v7 + 2) < 3;
    ++v7;
  }
  while ( v17 );
  v18 = result[27];
  v19 = result[28];
  v20 = result[1609];
  v21 = result[1606];
  v22 = result[1605];
  v23 = result[1608];
  v24 = -1;
  v25 = 0;
  do
  {
    v26 = v24 + dword_60AFEC90[v25];
    v27 = v16 + v25;
    --v24;
    if ( v16 + v25 >= 6 )
      v27 = 0;
    v28 = &result[76 * v27];
    v29 = (float)v26 / (float)dword_60AFEC90[v25];
    v30 = (float)(v21 * (float)(1.0 - v29)) + (float)(v20 * v29);
    v31 = (float)((float)(v22 * (float)(1.0 - v29)) + (float)(v23 * v29)) - v18;
    v32 = v30 - v19;
    v28[1661] = v31;
    v28[1662] = v32;
    v28[2801] = v31;
    v33 = v28 + 2802;
    v34 = v25 + 1;
    *v33 = v32;
    v35 = v25 + 2;
    ++v25;
  }
  while ( v35 < 3 );
  v36 = v16 + v34;
  v37 = result[27];
  v38 = result[28];
  v39 = result[1608];
  v40 = -1;
  v41 = result[1609];
  v42 = result[1611];
  v43 = 0;
  v44 = result[1612];
  do
  {
    v45 = v40 + dword_60AFEC90[v43];
    v46 = 0;
    --v40;
    if ( v36 < 6 )
      v46 = v36;
    ++v36;
    v47 = &result[76 * v46];
    v48 = (float)v45 / (float)dword_60AFEC90[v43];
    v49 = (float)(v41 * (float)(1.0 - v48)) + (float)(v44 * v48);
    v50 = (float)((float)(v39 * (float)(1.0 - v48)) + (float)(v42 * v48)) - v37;
    v51 = v49 - v38;
    v47[1661] = v50;
    v47[1662] = v51;
    v47[2801] = v50;
    v47[2802] = v51;
    v17 = v43 + 2 < 3;
    ++v43;
  }
  while ( v17 );
  v52 = result[27];
  v53 = result[28];
  v54 = result[1615];
  v55 = result[1614];
  v56 = -1;
  v57 = result[1617];
  v58 = 0;
  v59 = result[1618];
  do
  {
    v60 = v56 + dword_60AFEC90[v58];
    v61 = 0;
    --v56;
    if ( v58 < 6 )
      v61 = v58;
    v62 = &result[76 * v61];
    v63 = (float)v60 / (float)dword_60AFEC90[v58];
    v64 = (float)(v54 * (float)(1.0 - v63)) + (float)(v59 * v63);
    v65 = (float)((float)(v55 * (float)(1.0 - v63)) + (float)(v57 * v63)) - v52;
    v66 = v64 - v53;
    v62[2117] = v65;
    v62[2118] = v66;
    v62[3257] = v65;
    v62[3258] = v66;
    v67 = v58 + 1;
    v17 = (int)(v58 + 2) < 3;
    ++v58;
  }
  while ( v17 );
  v68 = result[27];
  v69 = result[28];
  v70 = 0;
  v71 = result[1618];
  v72 = result[1617];
  v73 = result[1621];
  v74 = result[1620];
  v75 = -1;
  do
  {
    v76 = v75 + dword_60AFEC90[v70];
    --v75;
    v77 = v76;
    v78 = v67 + v70;
    if ( v67 + v70 >= 6 )
      v78 = 0;
    v79 = &result[76 * v78];
    v80 = (float)v77 / (float)dword_60AFEC90[v70];
    v81 = (float)(v71 * (float)(1.0 - v80)) + (float)(v73 * v80);
    v82 = (float)((float)(v72 * (float)(1.0 - v80)) + (float)(v74 * v80)) - v68;
    v83 = v81 - v69;
    v79[2117] = v82;
    v79[2118] = v83;
    v84 = v70 + 1;
    v79[3257] = v82;
    v79[3258] = v83;
    v85 = v70 + 2;
    ++v70;
  }
  while ( v85 < 3 );
  v86 = v67 + v84;
  v87 = result[27];
  v88 = result[28];
  v89 = result[1620];
  v90 = -1;
  v91 = result[1621];
  v92 = result[1623];
  v93 = 0;
  v94 = result[1624];
  do
  {
    v95 = v90 + dword_60AFEC90[v93];
    v96 = 0;
    --v90;
    if ( v86 < 6 )
      v96 = v86;
    ++v86;
    v97 = &result[76 * v96];
    v98 = (float)v95 / (float)dword_60AFEC90[v93];
    v99 = (float)(v91 * (float)(1.0 - v98)) + (float)(v94 * v98);
    v100 = (float)((float)(v89 * (float)(1.0 - v98)) + (float)(v92 * v98)) - v87;
    v101 = v99 - v88;
    v97[2117] = v100;
    v97[2118] = v101;
    v97[3257] = v100;
    v97[3258] = v101;
    v17 = v93 + 2 < 3;
    ++v93;
  }
  while ( v17 );
  return result;
}
