/* sub_60963AA8
 * address: 0x60963AA8   size: 1880   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60963AA8(_DWORD *a1)
{
  unsigned int *v2; // r5
  unsigned int *v3; // r7
  _DWORD *v4; // r1
  int v5; // r0
  _DWORD *v6; // r6
  unsigned int v7; // r2
  unsigned int **v8; // r1
  unsigned int v9; // r0
  _DWORD *v10; // r2
  unsigned int v11; // r0
  _DWORD *v12; // r2
  unsigned int v13; // r0
  _DWORD *v14; // r2
  unsigned int v15; // r0
  _DWORD *v16; // r2
  _DWORD *v17; // r1
  int v18; // r0
  _DWORD *v19; // r6
  unsigned int v20; // r2
  unsigned int **v21; // r1
  unsigned int v22; // r0
  unsigned int *v23; // r7
  _DWORD *v24; // r2
  unsigned int v25; // r0
  _DWORD *v26; // r2
  unsigned int v27; // r0
  _DWORD *v28; // r2
  unsigned int v29; // r0
  unsigned int v30; // r1
  _DWORD *v31; // r2
  unsigned int *v32; // r5
  _DWORD *v33; // r1
  int v34; // r0
  _DWORD *v35; // r6
  unsigned int v36; // r2
  unsigned int **v37; // r1
  unsigned int v38; // r0
  _DWORD *v39; // r2
  unsigned int v40; // r0
  _DWORD *v41; // r2
  unsigned int v42; // r0
  _DWORD *v43; // r2
  unsigned int v44; // r0
  _DWORD *v45; // r2
  _DWORD *v46; // r1
  int v47; // r0
  _DWORD *v48; // r6
  unsigned int v49; // r2
  unsigned int **v50; // r1
  unsigned int v51; // r0
  unsigned int *v52; // r7
  _DWORD *v53; // r2
  unsigned int v54; // r0
  _DWORD *v55; // r2
  unsigned int v56; // r0
  _DWORD *v57; // r2
  unsigned int v58; // r0
  unsigned int v59; // r1
  _DWORD *v60; // r2
  unsigned int *v61; // r5
  _DWORD *v62; // r1
  int v63; // r0
  _DWORD *v64; // r6
  unsigned int v65; // r2
  unsigned int **v66; // r1
  unsigned int v67; // r0
  _DWORD *v68; // r2
  unsigned int v69; // r0
  _DWORD *v70; // r2
  unsigned int v71; // r0
  _DWORD *v72; // r2
  unsigned int v73; // r0
  _DWORD *v74; // r2
  _DWORD *v75; // r1
  int v76; // r0
  _DWORD *v77; // r6
  unsigned int v78; // r2
  unsigned int **v79; // r1
  unsigned int v80; // r0
  _DWORD *v81; // r2
  unsigned int v82; // r0
  _DWORD *v83; // r2
  unsigned int v84; // r0
  _DWORD *v85; // r2
  unsigned int v86; // r0
  _DWORD *v87; // r2
  int v88; // r0
  _DWORD *result; // r0

  v2 = 0;
  v3 = 0;
  v4 = &a1[3 * ((a1[9] & 1) == 0)];
  v6 = v4 + 5;
  v5 = v4[5];
  if ( v5 <= 15 )
  {
    v7 = v4[3];
    v8 = (unsigned int **)v4[4];
    if ( v7 > v5 )
      v8 += v5;
    v3 = *v8;
    memset((void *)(*v8)[1], 0, 12 * **v8);
    v3[2] = 0;
    ++*v6;
  }
  v9 = v3[2];
  v3[2] = v9 + 1;
  v10 = (_DWORD *)v3[1];
  if ( *v3 > v9 )
    v10 += 3 * v9;
  *v10 = a1[10];
  v10[1] = a1[11];
  v10[2] = a1[12];
  v11 = v3[2];
  v3[2] = v11 + 1;
  v12 = (_DWORD *)v3[1];
  if ( *v3 > v11 )
    v12 += 3 * v11;
  *v12 = a1[13];
  v12[1] = a1[14];
  v12[2] = a1[15];
  v13 = v3[2];
  v3[2] = v13 + 1;
  v14 = (_DWORD *)v3[1];
  if ( *v3 > v13 )
    v14 += 3 * v13;
  *v14 = a1[16];
  v14[1] = a1[17];
  v14[2] = a1[18];
  v15 = v3[2];
  v3[2] = v15 + 1;
  v16 = (_DWORD *)v3[1];
  if ( *v3 > v15 )
    v16 += 3 * v15;
  *v16 = a1[19];
  v16[1] = a1[20];
  v16[2] = a1[21];
  v17 = &a1[3 * ((a1[9] & 1) == 0)];
  v19 = v17 + 5;
  v18 = v17[5];
  if ( v18 <= 15 )
  {
    v20 = v17[3];
    v21 = (unsigned int **)v17[4];
    if ( v20 > v18 )
      v21 += v18;
    v2 = *v21;
    memset((void *)(*v21)[1], 0, 12 * **v21);
    v2[2] = 0;
    ++*v19;
  }
  v22 = v2[2];
  v23 = 0;
  v2[2] = v22 + 1;
  v24 = (_DWORD *)v2[1];
  if ( *v2 > v22 )
    v24 += 3 * v22;
  *v24 = a1[31];
  v24[1] = a1[32];
  v24[2] = a1[33];
  v25 = v2[2];
  v2[2] = v25 + 1;
  v26 = (_DWORD *)v2[1];
  if ( *v2 > v25 )
    v26 += 3 * v25;
  *v26 = a1[28];
  v26[1] = a1[29];
  v26[2] = a1[30];
  v27 = v2[2];
  v2[2] = v27 + 1;
  v28 = (_DWORD *)v2[1];
  if ( *v2 > v27 )
    v28 += 3 * v27;
  *v28 = a1[25];
  v28[1] = a1[26];
  v28[2] = a1[27];
  v29 = v2[2];
  v2[2] = v29 + 1;
  v30 = *v2;
  v31 = (_DWORD *)v2[1];
  v32 = 0;
  if ( v30 > v29 )
    v31 += 3 * v29;
  *v31 = a1[22];
  v31[1] = a1[23];
  v31[2] = a1[24];
  v33 = &a1[3 * ((a1[9] & 1) == 0)];
  v35 = v33 + 5;
  v34 = v33[5];
  if ( v34 <= 15 )
  {
    v36 = v33[3];
    v37 = (unsigned int **)v33[4];
    if ( v36 > v34 )
      v37 += v34;
    v23 = *v37;
    memset((void *)(*v37)[1], 0, 12 * **v37);
    v23[2] = 0;
    ++*v35;
  }
  v38 = v23[2];
  v23[2] = v38 + 1;
  v39 = (_DWORD *)v23[1];
  if ( *v23 > v38 )
    v39 += 3 * v38;
  *v39 = a1[10];
  v39[1] = a1[11];
  v39[2] = a1[12];
  v40 = v23[2];
  v23[2] = v40 + 1;
  v41 = (_DWORD *)v23[1];
  if ( *v23 > v40 )
    v41 += 3 * v40;
  *v41 = a1[19];
  v41[1] = a1[20];
  v41[2] = a1[21];
  v42 = v23[2];
  v23[2] = v42 + 1;
  v43 = (_DWORD *)v23[1];
  if ( *v23 > v42 )
    v43 += 3 * v42;
  *v43 = a1[31];
  v43[1] = a1[32];
  v43[2] = a1[33];
  v44 = v23[2];
  v23[2] = v44 + 1;
  v45 = (_DWORD *)v23[1];
  if ( *v23 > v44 )
    v45 += 3 * v44;
  *v45 = a1[22];
  v45[1] = a1[23];
  v45[2] = a1[24];
  v46 = &a1[3 * ((a1[9] & 1) == 0)];
  v48 = v46 + 5;
  v47 = v46[5];
  if ( v47 <= 15 )
  {
    v49 = v46[3];
    v50 = (unsigned int **)v46[4];
    if ( v49 > v47 )
      v50 += v47;
    v32 = *v50;
    memset((void *)(*v50)[1], 0, 12 * **v50);
    v32[2] = 0;
    ++*v48;
  }
  v51 = v32[2];
  v52 = 0;
  v32[2] = v51 + 1;
  v53 = (_DWORD *)v32[1];
  if ( *v32 > v51 )
    v53 += 3 * v51;
  *v53 = a1[25];
  v53[1] = a1[26];
  v53[2] = a1[27];
  v54 = v32[2];
  v32[2] = v54 + 1;
  v55 = (_DWORD *)v32[1];
  if ( *v32 > v54 )
    v55 += 3 * v54;
  *v55 = a1[28];
  v55[1] = a1[29];
  v55[2] = a1[30];
  v56 = v32[2];
  v32[2] = v56 + 1;
  v57 = (_DWORD *)v32[1];
  if ( *v32 > v56 )
    v57 += 3 * v56;
  *v57 = a1[16];
  v57[1] = a1[17];
  v57[2] = a1[18];
  v58 = v32[2];
  v32[2] = v58 + 1;
  v59 = *v32;
  v60 = (_DWORD *)v32[1];
  v61 = 0;
  if ( v59 > v58 )
    v60 += 3 * v58;
  *v60 = a1[13];
  v60[1] = a1[14];
  v60[2] = a1[15];
  v62 = &a1[3 * ((a1[9] & 1) == 0)];
  v64 = v62 + 5;
  v63 = v62[5];
  if ( v63 <= 15 )
  {
    v65 = v62[3];
    v66 = (unsigned int **)v62[4];
    if ( v65 > v63 )
      v66 += v63;
    v52 = *v66;
    memset((void *)(*v66)[1], 0, 12 * **v66);
    v52[2] = 0;
    ++*v64;
  }
  v67 = v52[2];
  v52[2] = v67 + 1;
  v68 = (_DWORD *)v52[1];
  if ( *v52 > v67 )
    v68 += 3 * v67;
  *v68 = a1[28];
  v68[1] = a1[29];
  v68[2] = a1[30];
  v69 = v52[2];
  v52[2] = v69 + 1;
  v70 = (_DWORD *)v52[1];
  if ( *v52 > v69 )
    v70 += 3 * v69;
  *v70 = a1[31];
  v70[1] = a1[32];
  v70[2] = a1[33];
  v71 = v52[2];
  v52[2] = v71 + 1;
  v72 = (_DWORD *)v52[1];
  if ( *v52 > v71 )
    v72 += 3 * v71;
  *v72 = a1[19];
  v72[1] = a1[20];
  v72[2] = a1[21];
  v73 = v52[2];
  v52[2] = v73 + 1;
  v74 = (_DWORD *)v52[1];
  if ( *v52 > v73 )
    v74 += 3 * v73;
  *v74 = a1[16];
  v74[1] = a1[17];
  v74[2] = a1[18];
  v75 = &a1[3 * ((a1[9] & 1) == 0)];
  v77 = v75 + 5;
  v76 = v75[5];
  if ( v76 <= 15 )
  {
    v78 = v75[3];
    v79 = (unsigned int **)v75[4];
    if ( v78 > v76 )
      v79 += v76;
    v61 = *v79;
    memset((void *)(*v79)[1], 0, 12 * **v79);
    v61[2] = 0;
    ++*v77;
  }
  v80 = v61[2];
  v61[2] = v80 + 1;
  v81 = (_DWORD *)v61[1];
  if ( *v61 > v80 )
    v81 += 3 * v80;
  *v81 = a1[13];
  v81[1] = a1[14];
  v81[2] = a1[15];
  v82 = v61[2];
  v61[2] = v82 + 1;
  v83 = (_DWORD *)v61[1];
  if ( *v61 > v82 )
    v83 += 3 * v82;
  *v83 = a1[10];
  v83[1] = a1[11];
  v83[2] = a1[12];
  v84 = v61[2];
  v61[2] = v84 + 1;
  v85 = (_DWORD *)v61[1];
  if ( *v61 > v84 )
    v85 += 3 * v84;
  *v85 = a1[22];
  v85[1] = a1[23];
  v85[2] = a1[24];
  v86 = v61[2];
  v61[2] = v86 + 1;
  v87 = (_DWORD *)v61[1];
  if ( *v61 > v86 )
    v87 += 3 * v86;
  *v87 = a1[25];
  v87[1] = a1[26];
  v87[2] = a1[27];
  v88 = 3 * (a1[9] & 1);
  a1[9] = !(a1[9] & 1);
  result = &a1[v88];
  result[5] = 0;
  return result;
}
