/* sub_607D9E90
 * address: 0x607D9E90   size: 1000   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D9E90(int a1, __int16 *a2, _WORD *a3, unsigned int a4, int a5)
{
  int result; // r0
  double v10; // d17
  double v11; // d31
  double v12; // d0
  double v13; // d24
  double v14; // d29
  double v15; // d26
  double v16; // d25
  double v17; // d28
  double v18; // d16
  double v19; // d18
  double v20; // d19
  double v21; // d20
  double v22; // d21
  double v23; // d22
  double v24; // d23
  int v25; // r3
  _WORD *v26; // r5
  unsigned int v27; // r12
  unsigned int v28; // lr
  __int16 *v29; // r2
  int v30; // s6
  __int16 *v31; // r7
  int v32; // t1
  __int16 *v33; // r7
  int v34; // t1
  double v35; // d27
  double v36; // d4
  int v37; // s6
  __int16 *v38; // r7
  int v39; // t1
  int v40; // r1
  double v41; // d5
  __int16 *v42; // r7
  int v43; // t1
  double v44; // d4
  double v45; // d6
  double v46; // d6
  double v47; // d7
  double v48; // d30
  int v49; // r0
  double v50; // d4
  double v51; // d5
  double v52; // d3
  double v53; // d3
  double v54; // d5
  int v55; // r0
  double v56; // d2
  double v57; // d3
  double v58; // d7
  double v59; // d6
  double v60; // d1
  double v61; // d25
  double v62; // d26
  int v63; // r1

  result = FIELD_U32(a1, 360);
  if ( result != 4 )
    result = nn__diag__detail__OnAssertionFailure(2, &byte_60ABC94D, &byte_60ABC94D, &byte_60ABC94D, 0);
  v10 = FIELD_F64(a1, 352);
  v11 = FIELD_F64(a1, 272);
  v12 = FIELD_F64(a1, 280);
  v13 = FIELD_F64(a1, 288);
  v14 = FIELD_F64(a1, 296);
  v15 = FIELD_F64(a1, 184);
  v16 = FIELD_F64(a1, 192);
  v17 = FIELD_F64(a1, 200);
  v18 = FIELD_F64(a1, 208);
  v19 = FIELD_F64(a1, 96);
  v20 = FIELD_F64(a1, 104);
  v21 = *(double *)a1;
  v22 = FIELD_F64(a1, 8);
  v23 = FIELD_F64(a1, 16);
  v24 = FIELD_F64(a1, 24);
  if ( a4 < 5 )
  {
    v48 = FIELD_F64(a1, 264);
    v35 = FIELD_F64(a1, 176);
    if ( !a4 )
    {
LABEL_30:
      v60 = v12;
      v56 = v11;
      v57 = v17;
      v59 = v16;
      v58 = v15;
      goto LABEL_31;
    }
  }
  else
  {
    v25 = a5;
    v26 = a3;
    v27 = (a4 - 5) % 5;
    v28 = 5 * ((a4 - 5) / 5) + 5;
    do
    {
      v29 = a2;
      v30 = *a2;
      v32 = a2[a5];
      v31 = &a2[v25];
      v49 = v32;
      v34 = v31[a5];
      v33 = &v31[v25];
      v35 = v10 * (double)v30;
      v36 = v15 + v35;
      v37 = v34;
      v39 = v33[a5];
      v38 = &v33[v25];
      LOWORD(v40) = 0x7FFF;
      v41 = (double)v39;
      v15 = v10 * (double)v49;
      v43 = v38[a5];
      v42 = &v38[v25];
      v44 = v36 + v19 * v16 + v20 * v17;
      v45 = v16 + v15;
      v16 = v10 * (double)v37;
      v46 = v45 + v19 * v17;
      v47 = v17 + v16;
      v17 = v10 * v41;
      v48 = v21 * v11 + v22 * v12 + v23 * v13 + v24 * v14 + v19 * v18 + v44;
      LOWORD(v49) = 0x7FFF;
      v50 = v19 * v35 + v46 + v20 * v18;
      v51 = v19 * v18 + v47 + v20 * v35;
      v52 = v19 * v35 + v18 + v17;
      v18 = v10 * (double)v43;
      if ( v48 <= 32767.0 )
      {
        LOWORD(v49) = 0x8000;
        if ( v48 >= -32768.0 )
          v49 = (int)v48;
      }
      v11 = v50 + v21 * v12 + v22 * v13 + v23 * v14 + v24 * v48;
      v53 = v52 + v20 * v15;
      *v26 = v49;
      v54 = v19 * v15 + v51;
      if ( v11 <= 32767.0 )
      {
        LOWORD(v40) = 0x8000;
        if ( v11 >= -32768.0 )
          v40 = (int)v11;
      }
      v12 = v54 + v22 * v14 + v21 * v13 + v23 * v48 + v24 * v11;
      v26[1] = v40;
      LOWORD(v40) = 0x7FFF;
      LOWORD(v55) = 0x7FFF;
      v13 = v53 + v19 * v16 + v22 * v48 + v21 * v14 + v23 * v11 + v24 * v12;
      if ( v12 <= 32767.0 )
      {
        LOWORD(v55) = 0x8000;
        if ( v12 >= -32768.0 )
          v55 = (int)v12;
      }
      v26[2] = v55;
      v14 = v19 * v15 + v35 + v18 + v20 * v16 + v19 * v17 + v22 * v11 + v21 * v48 + v23 * v12 + v24 * v13;
      if ( v13 <= 32767.0 )
      {
        LOWORD(v40) = 0x8000;
        if ( v13 >= -32768.0 )
          v40 = (int)v13;
      }
      result = 0x7FFF;
      v26[3] = v40;
      if ( v14 <= 32767.0 )
      {
        result = 0x8000;
        if ( v14 >= -32768.0 )
          result = (int)v14;
      }
      a4 -= 5;
      v26[4] = result;
      a2 = &v42[v25];
      v26 += 5;
    }
    while ( a4 > 4 );
    a3 += v28;
    a2 = &v29[5 * a5];
    a4 = v27;
    if ( !v27 )
      goto LABEL_30;
  }
  result = 2 * a5;
  do
  {
    v56 = v12;
    v57 = v18;
    v35 = v15;
    v58 = v16;
    v48 = v11;
    v59 = v17;
    v60 = v13;
    v13 = v14;
    v61 = v15;
    v62 = v18 + v58;
    LOWORD(v63) = 0x7FFF;
    v18 = v10 * (double)*a2;
    v14 = v20 * v17 + v23 * v60 + v61 + v21 * v11 + v24 * v14 + v18 + v22 * v12 + v19 * v62;
    if ( v14 <= 32767.0 )
    {
      LOWORD(v63) = 0x8000;
      if ( v14 >= -32768.0 )
        v63 = (int)v14;
    }
    v15 = v58;
    v16 = v17;
    v17 = v57;
    v11 = v12;
    v12 = v60;
    a2 = (__int16 *)((char *)a2 + result);
    *a3++ = v63;
    --a4;
  }
  while ( a4 );
LABEL_31:
  FIELD_F64(a1, 176) = v35;
  FIELD_F64(a1, 264) = v48;
  FIELD_F64(a1, 184) = v58;
  FIELD_F64(a1, 272) = v56;
  FIELD_F64(a1, 192) = v59;
  FIELD_F64(a1, 280) = v60;
  FIELD_F64(a1, 200) = v57;
  FIELD_F64(a1, 288) = v13;
  FIELD_F64(a1, 208) = v18;
  FIELD_F64(a1, 296) = v14;
  return result;
}
