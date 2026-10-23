/* sub_60964200
 * address: 0x60964200   size: 984   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60964200(float *a1, float *a2, float *a3, float a4, float a5)
{
  float v5; // s2
  float v6; // s8
  float v7; // s4
  float v8; // s6
  float v11; // s0
  float v12; // s2
  float v13; // s4
  float v14; // s6
  float v15; // s8
  float v16; // s10
  float v17; // s12
  float v18; // s14
  float v19; // s1
  float v20; // s3
  float v21; // s5
  float v22; // s7
  float v23; // s9
  float v24; // s11
  float v25; // s13
  float v26; // s15
  int v27; // r0
  float *v28; // r3
  float *v29; // r2
  float v30; // s18
  float v31; // s20
  float v32; // s22
  float v33; // s24
  float v34; // s26
  float v35; // s18
  float v36; // s18
  float v37; // s16
  float v38; // s20
  float v39; // s22
  float v40; // s0
  int v41; // r1
  float *v42; // r7
  int v43; // r2
  int v44; // r6
  float *v45; // r0
  float *v46; // r3
  float *v47; // r5
  float *v48; // r4
  float *v49; // r0
  float v50; // s4
  float v51; // s2
  float v52; // s6
  float v53; // s2
  float v54; // s0
  float v55; // s2
  float v56; // s4
  float v57; // s6
  float v58; // s8
  float v59; // s10
  float v60; // s12
  float v61; // s14
  float v62; // s1
  float v63; // s3
  float v64; // s5
  float v65; // s7
  int v66; // r0
  float *v67; // r1
  float v68; // s11
  float v69; // s9
  float v70; // s13
  float v71; // s11
  float v72; // s9
  float v73; // s13
  float v75[12]; // [sp+0h] [bp-130h] BYREF
  float v76[16]; // [sp+30h] [bp-100h] BYREF
  _DWORD v77[2]; // [sp+70h] [bp-C0h] BYREF
  float v78; // [sp+78h] [bp-B8h]
  int v79; // [sp+7Ch] [bp-B4h]
  int v80; // [sp+80h] [bp-B0h]
  float v81; // [sp+84h] [bp-ACh]
  int v82; // [sp+88h] [bp-A8h]
  int v83; // [sp+8Ch] [bp-A4h]
  float v84; // [sp+90h] [bp-A0h]
  int v85; // [sp+94h] [bp-9Ch]
  int v86; // [sp+98h] [bp-98h]
  float v87; // [sp+9Ch] [bp-94h]
  int v88; // [sp+A0h] [bp-90h]
  int v89; // [sp+A4h] [bp-8Ch]
  float v90; // [sp+A8h] [bp-88h]
  int v91; // [sp+ACh] [bp-84h]
  int v92; // [sp+B0h] [bp-80h]
  float v93; // [sp+B4h] [bp-7Ch]
  int v94; // [sp+B8h] [bp-78h]
  int v95; // [sp+BCh] [bp-74h]
  float v96; // [sp+C0h] [bp-70h]
  int v97; // [sp+C4h] [bp-6Ch]
  int v98; // [sp+C8h] [bp-68h]
  float v99; // [sp+CCh] [bp-64h]

  v5 = a3[11];
  v6 = a3[15];
  v7 = a3[10];
  v8 = a3[14];
  v77[0] = -1082130432;
  v77[1] = -1082130432;
  v78 = (float)(v5 - (float)(v7 * a4)) / (float)(v6 - (float)(v8 * a4));
  v79 = 1065353216;
  v80 = -1082130432;
  v81 = v78;
  v82 = 1065353216;
  v83 = 1065353216;
  v84 = v78;
  v85 = -1082130432;
  v86 = 1065353216;
  v87 = v78;
  v88 = -1082130432;
  v89 = -1082130432;
  v90 = (float)(v5 - (float)(v7 * a5)) / (float)(v6 - (float)(v8 * a5));
  v91 = 1065353216;
  v92 = -1082130432;
  v93 = v90;
  v94 = 1065353216;
  v95 = 1065353216;
  v96 = v90;
  v97 = -1082130432;
  v98 = 1065353216;
  v99 = v90;
  sub_6042E898(v76, a3);
  sub_601B59CC(v75, a2);
  v11 = v76[11];
  v12 = v76[10];
  v13 = v76[9];
  v14 = v76[8];
  v15 = v76[7];
  v16 = v76[6];
  v17 = v76[5];
  v18 = v76[4];
  v19 = v76[0];
  v20 = v76[1];
  v21 = v76[2];
  v22 = v76[3];
  v23 = v76[15];
  v24 = v76[14];
  v25 = v76[13];
  v26 = v76[12];
  v27 = 0;
  do
  {
    v28 = (float *)&v77[v27];
    v29 = &a1[v27];
    v27 += 3;
    v30 = v28[1];
    v31 = v28[2];
    v32 = v23 + (float)((float)((float)(v30 * v25) + (float)(*v28 * v26)) + (float)(v31 * v24));
    v33 = (float)((float)(v30 * (float)(v20 / v32)) + (float)(*v28 * (float)(v19 / v32)))
        + (float)(v31 * (float)(v21 / v32));
    v34 = (float)((float)(v30 * (float)(v17 / v32)) + (float)(*v28 * (float)(v18 / v32)))
        + (float)(v31 * (float)(v16 / v32));
    v35 = (float)((float)(v30 * (float)(v13 / v32)) + (float)(*v28 * (float)(v14 / v32)))
        + (float)(v31 * (float)(v12 / v32));
    v29[10] = (float)(v22 / v32) + v33;
    v29[11] = (float)(v15 / v32) + v34;
    v29[12] = (float)(v11 / v32) + v35;
    v36 = v28[13];
    v37 = v28[12];
    v38 = v28[14];
    v39 = v23 + (float)((float)((float)(v36 * v25) + (float)(v37 * v26)) + (float)(v38 * v24));
    v29[22] = (float)(v22 / v39)
            + (float)((float)((float)(v36 * (float)(v20 / v39)) + (float)(v37 * (float)(v19 / v39)))
                    + (float)(v38 * (float)(v21 / v39)));
    v29[23] = (float)(v15 / v39)
            + (float)((float)((float)(v36 * (float)(v17 / v39)) + (float)(v37 * (float)(v18 / v39)))
                    + (float)(v38 * (float)(v16 / v39)));
    v29[24] = (float)(v11 / v39)
            + (float)((float)((float)(v36 * (float)(v13 / v39)) + (float)(v37 * (float)(v14 / v39)))
                    + (float)(v38 * (float)(v12 / v39)));
  }
  while ( v27 != 12 );
  v40 = 0.0;
  v41 = 0;
  v42 = a1 + 13;
  a1[34] = 0.0;
  do
  {
    v43 = v41++;
    if ( v41 <= 7 )
    {
      v44 = 7;
      v45 = &a1[3 * v43];
      v46 = v45 + 12;
      v47 = v45 + 11;
      v48 = v45 + 10;
      v49 = v42;
      do
      {
        v50 = v49[1];
        v51 = *v49;
        v52 = v49[2];
        --v44;
        v49 += 3;
        v53 = (float)((float)((float)(*v47 - v50) * (float)(*v47 - v50))
                    + (float)((float)(*v48 - v51) * (float)(*v48 - v51)))
            + (float)((float)(*v46 - v52) * (float)(*v46 - v52));
        if ( v40 < v53 )
        {
          v40 = v53;
          a1[34] = v53;
        }
      }
      while ( v44 != v43 );
    }
    v42 += 3;
  }
  while ( v41 != 8 );
  if ( v40 > 0.0 )
    a1[34] = sqrtf(v40);
  v54 = v75[11];
  v55 = v75[10];
  v56 = v75[9];
  v57 = v75[8];
  v58 = v75[7];
  v59 = v75[6];
  v60 = v75[5];
  v61 = v75[4];
  v62 = v75[0];
  v63 = v75[1];
  v64 = v75[2];
  v65 = v75[3];
  v66 = -12;
  do
  {
    v67 = &a1[v66];
    v66 += 3;
    v68 = v67[23];
    v69 = v67[22];
    v70 = v67[24];
    v67[22] = v65 + (float)((float)((float)(v68 * v63) + (float)(v69 * v62)) + (float)(v70 * v64));
    v67[23] = v58 + (float)((float)((float)(v68 * v60) + (float)(v69 * v61)) + (float)(v70 * v59));
    v67[24] = v54 + (float)((float)((float)(v68 * v56) + (float)(v69 * v57)) + (float)(v70 * v55));
    v71 = v67[35];
    v72 = v67[34];
    v73 = v67[36];
    v67[34] = v65 + (float)((float)((float)(v71 * v63) + (float)(v72 * v62)) + (float)(v73 * v64));
    v67[35] = v58 + (float)((float)((float)(v71 * v60) + (float)(v72 * v61)) + (float)(v73 * v59));
    v67[36] = v54 + (float)((float)((float)(v71 * v56) + (float)(v72 * v57)) + (float)(v73 * v55));
  }
  while ( v66 * 4 );
  return sub_60963AA8(a1);
}
