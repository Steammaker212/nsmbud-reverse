/* sub_6093A72C
 * address: 0x6093A72C   size: 1212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093A72C(int a1, float *a2, float *a3, int a4, int a5, int a6, int a7)
{
  float v9; // s6
  float v10; // s8
  float v11; // s10
  float v12; // s12
  float v13; // s14
  float v14; // s1
  float v15; // s3
  float v16; // s5
  float v17; // s7
  float v18; // s9
  int v19; // r1
  float v20; // s11
  float v21; // s13
  float v22; // s15
  float v23; // s18
  float v24; // s20
  float v25; // s22
  float v26; // s24
  float v27; // s26
  float v28; // s28
  float v29; // s30
  float v30; // s17
  float v31; // s19
  float v32; // s21
  float v33; // s23
  float *v34; // r3
  float v35; // s29
  float v36; // s31
  float v37; // s25
  float v38; // s0
  float v39; // s2
  float v40; // s25
  float v41; // s2
  float v42; // s0
  float v43; // s4
  float v44; // s25
  float v45; // s27
  float v46; // s29
  float v47; // s0
  float v48; // s4
  float v49; // s2
  float v50; // s0
  int v51; // r6
  int v53; // [sp+0h] [bp-190h]
  int v54; // [sp+0h] [bp-190h]
  int v55; // [sp+0h] [bp-190h]
  int v56; // [sp+0h] [bp-190h]
  int v57; // [sp+0h] [bp-190h]
  int v58; // [sp+0h] [bp-190h]
  int v59; // [sp+0h] [bp-190h]
  int v60; // [sp+0h] [bp-190h]
  int v61; // [sp+0h] [bp-190h]
  int v62; // [sp+0h] [bp-190h]
  int v63; // [sp+0h] [bp-190h]
  int v64; // [sp+0h] [bp-190h]
  int v65; // [sp+4h] [bp-18Ch]
  int v66; // [sp+4h] [bp-18Ch]
  int v67; // [sp+4h] [bp-18Ch]
  int v68; // [sp+4h] [bp-18Ch]
  int v69; // [sp+4h] [bp-18Ch]
  int v70; // [sp+4h] [bp-18Ch]
  int v71; // [sp+4h] [bp-18Ch]
  int v72; // [sp+4h] [bp-18Ch]
  int v73; // [sp+4h] [bp-18Ch]
  int v74; // [sp+4h] [bp-18Ch]
  int v75; // [sp+4h] [bp-18Ch]
  int v76; // [sp+4h] [bp-18Ch]
  int v77; // [sp+8h] [bp-188h]
  int v78; // [sp+8h] [bp-188h]
  int v79; // [sp+8h] [bp-188h]
  int v80; // [sp+8h] [bp-188h]
  int v81; // [sp+8h] [bp-188h]
  int v82; // [sp+8h] [bp-188h]
  int v83; // [sp+8h] [bp-188h]
  int v84; // [sp+8h] [bp-188h]
  int v85; // [sp+8h] [bp-188h]
  int v86; // [sp+8h] [bp-188h]
  int v87; // [sp+8h] [bp-188h]
  float v89; // [sp+44h] [bp-14Ch]
  float v90; // [sp+7Ch] [bp-114h]
  float v91; // [sp+80h] [bp-110h]
  float v92; // [sp+84h] [bp-10Ch]
  _DWORD v93[3]; // [sp+88h] [bp-108h] BYREF
  _DWORD v94[3]; // [sp+94h] [bp-FCh] BYREF
  _DWORD v95[3]; // [sp+A0h] [bp-F0h] BYREF
  _DWORD v96[3]; // [sp+ACh] [bp-E4h] BYREF
  _DWORD v97[3]; // [sp+B8h] [bp-D8h] BYREF
  _DWORD v98[3]; // [sp+C4h] [bp-CCh] BYREF
  _DWORD v99[3]; // [sp+D0h] [bp-C0h] BYREF
  _DWORD v100[3]; // [sp+DCh] [bp-B4h] BYREF
  float v101[42]; // [sp+E8h] [bp-A8h] BYREF

  sub_6042E898(v101, a3);
  v93[0] = -1082130432;
  v93[1] = -1082130432;
  v93[2] = -1082130432;
  v94[0] = 1065353216;
  v94[1] = -1082130432;
  v94[2] = -1082130432;
  v95[0] = 1065353216;
  v95[1] = 1065353216;
  v95[2] = -1082130432;
  v96[0] = -1082130432;
  v96[1] = 1065353216;
  v96[2] = -1082130432;
  v97[0] = -1082130432;
  v97[1] = -1082130432;
  v97[2] = 1065353216;
  v98[0] = 1065353216;
  v98[1] = -1082130432;
  v98[2] = 1065353216;
  v99[0] = 1065353216;
  v99[1] = 1065353216;
  v99[2] = 1065353216;
  v100[0] = -1082130432;
  v100[1] = 1065353216;
  v100[2] = 1065353216;
  v90 = a2[8];
  v9 = a2[9];
  v10 = a2[10];
  v11 = a2[11];
  v12 = *a2;
  v13 = a2[1];
  v14 = a2[2];
  v15 = a2[3];
  v16 = a2[4];
  v17 = a2[5];
  v18 = a2[6];
  v19 = 0;
  v20 = a2[7];
  v21 = v101[11];
  v22 = v101[10];
  v89 = v101[9];
  v23 = v101[8];
  v24 = v101[7];
  v25 = v101[6];
  v26 = v101[5];
  v27 = v101[4];
  v28 = v101[0];
  v29 = v101[1];
  v30 = v101[2];
  v31 = v101[3];
  v32 = v101[15];
  v33 = v101[14];
  v92 = v101[13];
  v91 = v101[12];
  do
  {
    v34 = (float *)&v93[v19];
    v19 += 3;
    v35 = v34[1];
    v36 = v34[2];
    v37 = 1.0 / (float)(v32 + (float)((float)((float)(v35 * v92) + (float)(*v34 * v91)) + (float)(v36 * v33)));
    v38 = v37 * (float)(v24 + (float)((float)((float)(v35 * v26) + (float)(*v34 * v27)) + (float)(v36 * v25)));
    v39 = v37 * (float)(v31 + (float)((float)((float)(v35 * v29) + (float)(*v34 * v28)) + (float)(v36 * v30)));
    v40 = v37 * (float)(v21 + (float)((float)((float)(v35 * v89) + (float)(*v34 * v23)) + (float)(v36 * v22)));
    *v34 = v15 + (float)((float)((float)(v38 * v13) + (float)(v39 * v12)) + (float)(v40 * v14));
    v34[1] = v20 + (float)((float)((float)(v38 * v17) + (float)(v39 * v16)) + (float)(v40 * v18));
    v34[2] = v11 + (float)((float)((float)(v38 * v9) + (float)(v39 * v90)) + (float)(v40 * v10));
    v41 = v34[13];
    v42 = v34[12];
    v43 = v34[14];
    v44 = (float)((float)(v41 * v26) + (float)(v42 * v27)) + (float)(v43 * v25);
    v45 = (float)((float)(v41 * v29) + (float)(v42 * v28)) + (float)(v43 * v30);
    v46 = (float)((float)(v41 * v89) + (float)(v42 * v23)) + (float)(v43 * v22);
    v47 = 1.0 / (float)(v32 + (float)((float)((float)(v41 * v92) + (float)(v42 * v91)) + (float)(v43 * v33)));
    v48 = v47 * (float)(v24 + v44);
    v49 = v47 * (float)(v31 + v45);
    v50 = v47 * (float)(v21 + v46);
    v34[12] = v15 + (float)((float)((float)(v48 * v13) + (float)(v49 * v12)) + (float)(v50 * v14));
    v34[13] = v20 + (float)((float)((float)(v48 * v17) + (float)(v49 * v16)) + (float)(v50 * v18));
    v34[14] = v11 + (float)((float)((float)(v48 * v9) + (float)(v49 * v90)) + (float)(v50 * v10));
  }
  while ( v19 != 12 );
  sub_6093AC5C(a1, a4, a5);
  sub_6093AD38(a1, v93, v94, a7, v53, v65, v99);
  sub_6093AD38(a1, v94, v95, a7, v54, v66, v77);
  sub_6093AD38(a1, v95, v96, a7, v55, v67, v78);
  sub_6093AD38(a1, v96, v93, a7, v56, v68, v79);
  sub_6093AD38(a1, v97, v98, a7, v57, v69, v80);
  v51 = v81;
  sub_6093AD38(a1, v98, v81, a7, v58, v70, v81);
  sub_6093AD38(a1, v51, v100, a7, v59, v71, v82);
  sub_6093AD38(a1, v100, v97, a7, v60, v72, v83);
  sub_6093AD38(a1, v93, v97, a7, v61, v73, v84);
  sub_6093AD38(a1, v94, v98, a7, v62, v74, v85);
  sub_6093AD38(a1, v95, v51, a7, v63, v75, v86);
  return sub_6093AD38(a1, v96, v100, a7, v64, v76, v87);
}
