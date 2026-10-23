/* sub_607DA290
 * address: 0x607DA290   size: 1672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DA290(int a1, __int16 *a2, _WORD *a3, unsigned int a4, int a5)
{
  int result; // r0
  double v10; // d4
  double v11; // d3
  double v12; // d5
  double v13; // d9
  double v14; // d30
  double v15; // d6
  double v16; // d17
  double v17; // d28
  double v18; // d1
  double v19; // d21
  double v20; // d29
  double v21; // d16
  double v22; // d24
  double v23; // d19
  double v24; // d22
  double v25; // d26
  double v26; // d20
  double v27; // d25
  double v28; // d23
  double v29; // d27
  int v30; // r3
  _WORD *v31; // r5
  unsigned int v32; // r12
  unsigned int v33; // lr
  __int16 *v34; // r11
  double v35; // d14
  double v36; // d12
  double v37; // d2
  double v38; // d15
  double v39; // d27
  __int16 *v40; // r7
  int v41; // t1
  __int16 *v42; // r7
  int v43; // t1
  double v44; // d18
  double v45; // d27
  double v46; // d28
  double v47; // d20
  double v48; // d10
  double v49; // d11
  int v50; // r0
  __int16 *v51; // r7
  int v52; // t1
  __int16 *v53; // r7
  int v54; // t1
  double v55; // d7
  __int16 *v56; // r7
  int v57; // t1
  __int16 *v58; // r7
  int v59; // t1
  double v60; // d13
  double v61; // d3
  double v62; // d12
  double v63; // d3
  double v64; // d2
  double v65; // d15
  double v66; // d31
  double v67; // d9
  double v68; // d31
  int v69; // r1
  int v70; // r0
  double v71; // d31
  double v72; // d30
  double v73; // d10
  double v74; // d11
  double v75; // d2
  double v76; // d30
  double v77; // d6
  double v78; // d8
  double v79; // d18
  double v80; // d12
  double v81; // d12
  double v82; // d10
  int v83; // r0
  double v84; // d6
  double v85; // d30
  double v86; // d6
  double v87; // d6
  int v88; // r0
  double v89; // d18
  double v90; // d31
  double v91; // d11
  double v92; // d0
  double v93; // d13
  double v94; // d2
  double v95; // d7
  double v96; // d12
  double v97; // d8
  double v98; // d10
  double v99; // d20
  double v100; // d29
  int v101; // r1
  double v102; // [sp+8h] [bp-98h]
  double v103; // [sp+10h] [bp-90h]
  double v104; // [sp+18h] [bp-88h]
  double v105; // [sp+20h] [bp-80h]
  double v106; // [sp+28h] [bp-78h]
  double v107; // [sp+30h] [bp-70h]

  result = FIELD_U32(a1, 360);
  if ( result != 6 )
    result = nn__diag__detail__OnAssertionFailure(2, &byte_60ABC94D, &byte_60ABC94D, &byte_60ABC94D, 0);
  v105 = FIELD_F64(a1, 352);
  v10 = FIELD_F64(a1, 272);
  v11 = FIELD_F64(a1, 280);
  v12 = FIELD_F64(a1, 288);
  v13 = FIELD_F64(a1, 296);
  v14 = FIELD_F64(a1, 304);
  v15 = FIELD_F64(a1, 312);
  v16 = FIELD_F64(a1, 184);
  v17 = FIELD_F64(a1, 192);
  v18 = FIELD_F64(a1, 200);
  v19 = FIELD_F64(a1, 208);
  v20 = FIELD_F64(a1, 216);
  v21 = FIELD_F64(a1, 224);
  v22 = FIELD_F64(a1, 96);
  v23 = FIELD_F64(a1, 104);
  v107 = FIELD_F64(a1, 112);
  v24 = *(double *)a1;
  v25 = FIELD_F64(a1, 8);
  v26 = FIELD_F64(a1, 16);
  v27 = FIELD_F64(a1, 24);
  v28 = FIELD_F64(a1, 32);
  v29 = FIELD_F64(a1, 40);
  if ( a4 < 7 )
  {
    v65 = FIELD_F64(a1, 264);
    v106 = FIELD_F64(a1, 176);
    if ( !a4 )
    {
LABEL_36:
      v95 = v13;
      v97 = v12;
      v98 = v11;
      v96 = v10;
      v91 = v20;
      v93 = v19;
      v92 = v18;
      v90 = v17;
      v94 = v16;
      goto LABEL_37;
    }
  }
  else
  {
    v30 = a5;
    v31 = a3;
    v32 = (a4 - 7) % 7;
    v33 = 7 * ((a4 - 7) / 7) + 7;
    do
    {
      v34 = a2;
      v35 = v29;
      v36 = v17;
      v37 = v18;
      v38 = v26;
      v39 = (double)*a2;
      v41 = a2[a5];
      v40 = &a2[v30];
      v69 = v41;
      v43 = v40[a5];
      v42 = &v40[v30];
      v44 = v105 * v39;
      v45 = v21;
      v46 = v24 * v10
          + v25 * v11
          + v26 * v12
          + v27 * v13
          + v28 * v14
          + v35 * v15
          + v22 * v21
          + v23 * v20
          + v16
          + v44
          + v22 * v17
          + v23 * v18
          + v107 * v19;
      v47 = v24 * v11 + v25 * v12 + v26 * v13 + v27 * v14 + v28 * v15 + v35 * v46;
      v48 = v25 * v15 + v24 * v14 + v38 * v46;
      v49 = v24 * v13 + v25 * v14 + v38 * v15 + v27 * v46;
      v104 = v105 * (double)v43;
      v102 = v23 * v44 + v23 * v20 + v18 + v104 + v22 * v19 + v107 * v21;
      v52 = v42[a5];
      v51 = &v42[v30];
      v50 = v52;
      v54 = v51[a5];
      v53 = &v51[v30];
      v103 = v105 * (double)v54;
      v55 = v22 * v21 + v20 + v103;
      v18 = v105 * (double)v50;
      v57 = v53[a5];
      v56 = &v53[v30];
      v70 = v57;
      v59 = v56[a5];
      v58 = &v56[v30];
      v16 = v105 * (double)v69;
      v60 = v23 * v21 + v19 + v18 + v22 * v20 + v107 * v44;
      v61 = v36 + v16;
      v62 = v24 * v15;
      v63 = v61 + v22 * v37;
      v64 = v38;
      v65 = v46;
      v66 = v24 * v12 + v25 * v13;
      v67 = v64;
      v68 = v66 + v64 * v14;
      LOWORD(v69) = 0x7FFF;
      LODWORD(v64) = v70;
      LOWORD(v70) = 0x7FFF;
      v71 = v68 + v27 * v15 + v28 * v46;
      v10 = v22 * v44 + v23 * v21 + v63 + v23 * v19 + v107 * v20 + v47;
      v106 = v44;
      v21 = v105 * (double)v59;
      v20 = v105 * (double)SLODWORD(v64);
      v72 = v45 + v20;
      if ( v46 <= 32767.0 )
      {
        LOWORD(v70) = 0x8000;
        if ( v46 >= -32768.0 )
          v70 = (int)v46;
      }
      v29 = v35;
      v73 = v48 + v27 * v10;
      v74 = v49 + v28 * v10;
      v75 = v23 * v44 + v55 + v107 * v16;
      v76 = v23 * v16 + v22 * v44 + v72;
      v77 = v24 * v46;
      *v31 = v70;
      v78 = v44 + v21;
      v79 = v67;
      v11 = v22 * v16 + v102 + v71 + v35 * v10;
      v80 = v62 + v25 * v46 + v67 * v10;
      if ( v10 <= 32767.0 )
      {
        LOWORD(v69) = 0x8000;
        if ( v10 >= -32768.0 )
          v69 = (int)v10;
      }
      v17 = v104;
      v81 = v80 + v27 * v11;
      v82 = v73 + v28 * v11;
      v31[1] = v69;
      LOWORD(v69) = 0x7FFF;
      LOWORD(v83) = 0x7FFF;
      v84 = v77 + v25 * v10 + v67 * v11;
      v85 = v76 + v107 * v104;
      v12 = v23 * v16 + v60 + v22 * v104 + v74 + v35 * v11;
      if ( v11 <= 32767.0 )
      {
        LOWORD(v83) = 0x8000;
        if ( v11 >= -32768.0 )
          v83 = (int)v11;
      }
      v19 = v103;
      v31[2] = v83;
      v13 = v23 * v104 + v75 + v22 * v18 + v82 + v35 * v12;
      v86 = v84 + v27 * v12 + v28 * v13;
      v14 = v85 + v23 * v18 + v22 * v103 + v81 + v28 * v12 + v35 * v13;
      if ( v12 <= 32767.0 )
      {
        LOWORD(v69) = 0x8000;
        if ( v12 >= -32768.0 )
          v69 = (int)v12;
      }
      v87 = v86 + v35 * v14;
      v31[3] = v69;
      LOWORD(v69) = 0x7FFF;
      LOWORD(v88) = 0x7FFF;
      if ( v13 <= 32767.0 )
      {
        LOWORD(v88) = 0x8000;
        if ( v13 >= -32768.0 )
          v88 = (int)v13;
      }
      v15 = v23 * v104 + v22 * v16 + v78 + v107 * v18 + v23 * v103 + v22 * v20 + v87;
      v31[4] = v88;
      if ( v14 <= 32767.0 )
      {
        LOWORD(v69) = 0x8000;
        if ( v14 >= -32768.0 )
          v69 = (int)v14;
      }
      result = 0x7FFF;
      v31[5] = v69;
      if ( v15 <= 32767.0 )
      {
        result = 0x8000;
        if ( v15 >= -32768.0 )
          result = (int)v15;
      }
      v26 = v79;
      a4 -= 7;
      v31[6] = result;
      a2 = &v58[v30];
      v31 += 7;
    }
    while ( a4 > 6 );
    a3 += v33;
    a2 = &v34[7 * a5];
    a4 = v32;
    if ( !v32 )
      goto LABEL_36;
  }
  v89 = v26;
  result = 2 * a5;
  do
  {
    v90 = v18;
    v91 = v21;
    v92 = v19;
    v65 = v10;
    v93 = v20;
    v94 = v17;
    v95 = v14;
    v96 = v11;
    v14 = v15;
    v97 = v13;
    v98 = v12;
    v99 = v20 + v18;
    v100 = v21 + v17;
    LOWORD(v101) = 0x7FFF;
    v106 = v16;
    v21 = v105 * (double)*a2;
    v15 = v23 * v99
        + v27 * v13
        + v16
        + v24 * v10
        + v28 * v95
        + v107 * v19
        + v22 * v100
        + v89 * v12
        + v21
        + v25 * v11
        + v29 * v15;
    if ( v15 <= 32767.0 )
    {
      LOWORD(v101) = 0x8000;
      if ( v15 >= -32768.0 )
        v101 = (int)v15;
    }
    v16 = v17;
    v17 = v18;
    v18 = v19;
    v19 = v93;
    v20 = v91;
    v10 = v11;
    v11 = v12;
    v12 = v13;
    v13 = v95;
    a2 = (__int16 *)((char *)a2 + result);
    *a3++ = v101;
    --a4;
  }
  while ( a4 );
LABEL_37:
  FIELD_F64(a1, 176) = v106;
  FIELD_F64(a1, 264) = v65;
  FIELD_F64(a1, 184) = v94;
  FIELD_F64(a1, 272) = v96;
  FIELD_F64(a1, 192) = v90;
  FIELD_F64(a1, 280) = v98;
  FIELD_F64(a1, 200) = v92;
  FIELD_F64(a1, 288) = v97;
  FIELD_F64(a1, 208) = v93;
  FIELD_F64(a1, 296) = v95;
  FIELD_F64(a1, 216) = v91;
  FIELD_F64(a1, 304) = v14;
  FIELD_F64(a1, 224) = v21;
  FIELD_F64(a1, 312) = v15;
  return result;
}
