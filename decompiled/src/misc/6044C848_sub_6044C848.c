/* sub_6044C848
 * address: 0x6044C848   size: 1816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044C848(int a1, unsigned int a2)
{
  _DWORD *v3; // r9
  int v5; // r0
  int *v6; // r5
  int v7; // r0
  unsigned int v8; // s0
  unsigned int v9; // s3
  float v10; // s18
  __int16 *v11; // r6
  int v12; // s0
  unsigned int v13; // r2
  _DWORD *v14; // r10
  float *v15; // r4
  unsigned int v16; // t1
  int *v17; // r9
  int v18; // t1
  int v19; // r3
  float v20; // s22
  float v21; // s0
  unsigned int v22; // s2
  float v23; // s6
  float v24; // s4
  unsigned int v25; // s10
  float v26; // s14
  float v27; // s12
  float v28; // s3
  float v29; // s0
  float v30; // s7
  float v31; // s2
  float v32; // s4
  float v33; // s6
  float v34; // s8
  float v35; // s10
  float v36; // s12
  float v37; // s14
  float v38; // s1
  float v39; // s5
  float *v40; // r1
  float v41; // s11
  float v42; // s13
  float v43; // s15
  float v44; // s26
  float v45; // s11
  float v46; // s13
  float v47; // s11
  float v48; // s9
  float v49; // s13
  float v50; // s9
  float v51; // s11
  int v52; // r0
  float v53; // s6
  unsigned int v54; // s10
  float v55; // s2
  float v56; // s4
  unsigned int v57; // s3
  float v58; // s14
  float v59; // s1
  float v60; // s0
  float v61; // s2
  float v62; // s4
  float v63; // s6
  float v64; // s8
  float v65; // s10
  float v66; // s12
  float v67; // s14
  float v68; // s1
  float v69; // s3
  float v70; // s5
  float v71; // s7
  float *v72; // r1
  float v73; // s13
  float v74; // s11
  float v75; // s9
  float v76; // s13
  int v78; // [sp+10h] [bp-278h] BYREF
  int v79; // [sp+14h] [bp-274h]
  int v80; // [sp+18h] [bp-270h]
  _BYTE v81[12]; // [sp+1Ch] [bp-26Ch]
  float v82; // [sp+28h] [bp-260h]
  int v83; // [sp+2Ch] [bp-25Ch]
  float v84; // [sp+30h] [bp-258h]
  float v85; // [sp+34h] [bp-254h]
  float v86; // [sp+38h] [bp-250h]
  float v87; // [sp+3Ch] [bp-24Ch]
  float v88; // [sp+40h] [bp-248h]
  float v89; // [sp+44h] [bp-244h]
  float v90; // [sp+48h] [bp-240h]
  float v91; // [sp+4Ch] [bp-23Ch]
  float v92; // [sp+50h] [bp-238h]
  float v93; // [sp+54h] [bp-234h]
  int v94; // [sp+98h] [bp-1F0h]
  int v95; // [sp+9Ch] [bp-1ECh]
  int v96; // [sp+A0h] [bp-1E8h]
  float v97; // [sp+B0h] [bp-1D8h]
  int v98; // [sp+B4h] [bp-1D4h]
  float v99; // [sp+B8h] [bp-1D0h]
  float v100; // [sp+BCh] [bp-1CCh]
  float v101; // [sp+C0h] [bp-1C8h]
  float v102; // [sp+C4h] [bp-1C4h]
  float v103; // [sp+C8h] [bp-1C0h]
  float v104; // [sp+CCh] [bp-1BCh]
  float v105; // [sp+D0h] [bp-1B8h]
  float v106; // [sp+D4h] [bp-1B4h]
  float v107; // [sp+D8h] [bp-1B0h]
  float v108; // [sp+DCh] [bp-1ACh]
  int v109; // [sp+120h] [bp-168h]
  int v110; // [sp+124h] [bp-164h]
  int v111; // [sp+128h] [bp-160h]
  float v112; // [sp+138h] [bp-150h]
  int v113; // [sp+13Ch] [bp-14Ch]
  float v114; // [sp+140h] [bp-148h]
  float v115; // [sp+144h] [bp-144h]
  float v116; // [sp+148h] [bp-140h]
  float v117; // [sp+14Ch] [bp-13Ch]
  float v118; // [sp+150h] [bp-138h]
  float v119; // [sp+154h] [bp-134h]
  float v120; // [sp+158h] [bp-130h]
  float v121; // [sp+15Ch] [bp-12Ch]
  float v122; // [sp+160h] [bp-128h]
  float v123; // [sp+164h] [bp-124h]
  int v124; // [sp+1A8h] [bp-E0h]
  int v125; // [sp+1ACh] [bp-DCh]
  int v126; // [sp+1B0h] [bp-D8h]
  float v127; // [sp+1C0h] [bp-C8h]
  int v128; // [sp+1C4h] [bp-C4h]
  float v129; // [sp+1C8h] [bp-C0h]
  float v130; // [sp+1CCh] [bp-BCh]
  float v131; // [sp+1D0h] [bp-B8h]
  float v132; // [sp+1D4h] [bp-B4h]
  float v133; // [sp+1D8h] [bp-B0h]
  float v134; // [sp+1DCh] [bp-ACh]
  float v135; // [sp+1E0h] [bp-A8h]
  float v136; // [sp+1E4h] [bp-A4h]
  float v137; // [sp+1E8h] [bp-A0h]
  float v138; // [sp+1ECh] [bp-9Ch]

  v3 = (_DWORD *)(a1 + 8 * a2);
  v5 = v3[40];
  v6 = v3 + 39;
  v94 = v3[39];
  v95 = v5;
  v7 = 0;
  v8 = 42 * (a2 % 0x18);
  v9 = v8 + 41;
  v96 = 0;
  v10 = (float)v8 / 1023.0;
  v97 = v10;
  v98 = 0;
  v11 = (__int16 *)(a1 + 115372);
  v12 = FIELD_S16(a1, 115372);
  v99 = v10;
  v100 = (float)v12 / 1023.0;
  v14 = (_DWORD *)(a1 + 115356);
  v13 = FIELD_U32(a1, 115356);
  v101 = (float)HIBYTE(v13) / 255.0;
  v102 = (float)BYTE2(v13) / 255.0;
  v103 = (float)BYTE1(v13) / 255.0;
  v104 = (float)(unsigned __int8)v13 / 255.0;
  v16 = FIELD_U32(a1, 115360);
  v15 = (float *)(a1 + 115360);
  v105 = (float)HIBYTE(v16) / 255.0;
  v106 = (float)BYTE2(v16) / 255.0;
  v107 = (float)BYTE1(v16) / 255.0;
  v108 = (float)(unsigned __int8)v16 / 255.0;
  v18 = v3[14439];
  v17 = v3 + 14439;
  v19 = v17[1];
  v78 = v18;
  v79 = v19;
  v80 = 0;
  v20 = (float)v9 / 1023.0;
  v82 = v20;
  v83 = 0;
  v84 = v20;
  v85 = v100;
  v86 = v101;
  v87 = v102;
  v88 = v103;
  v89 = v104;
  v90 = v105;
  v91 = v106;
  v92 = v107;
  v93 = v108;
  v109 = *v6;
  v110 = -1056964608;
  v111 = 0;
  v112 = v10;
  v113 = 1056948208;
  v21 = (float)*v11;
  v114 = v10;
  v115 = (float)(v21 + 511.0) / 1023.0;
  v22 = (unsigned __int8)*v14;
  v23 = (float)(unsigned __int8)BYTE2(*v14) / 255.0;
  v24 = (float)(unsigned __int8)BYTE1(*v14) / 255.0;
  v116 = (float)HIBYTE(*v14) / 255.0;
  v117 = v23;
  v118 = v24;
  v119 = (float)v22 / 255.0;
  v25 = (unsigned __int8)*(_DWORD *)v15;
  v26 = (float)(unsigned __int8)BYTE2(*(_DWORD *)v15) / 255.0;
  v27 = (float)(unsigned __int8)BYTE1(*(_DWORD *)v15) / 255.0;
  v120 = (float)HIBYTE(*(_DWORD *)v15) / 255.0;
  v121 = v26;
  v122 = v27;
  v123 = (float)v25 / 255.0;
  v124 = *v17;
  v125 = -1056964608;
  v126 = 0;
  v127 = v20;
  v128 = 1056948208;
  v129 = v20;
  v130 = v115;
  v131 = v116;
  v132 = v23;
  v133 = v24;
  v134 = v119;
  v135 = v120;
  v136 = v26;
  v137 = v27;
  v138 = v123;
  v28 = *(v15 - 28837);
  v29 = *(v15 - 28828);
  v30 = *(v15 - 28839);
  v31 = *(v15 - 28829);
  v32 = *(v15 - 28830);
  v33 = *(v15 - 28831);
  v34 = *(v15 - 28832);
  v35 = *(v15 - 28833);
  v36 = *(v15 - 28834);
  v37 = *(v15 - 28835);
  v38 = *(v15 - 28836);
  v39 = *(v15 - 28838);
  do
  {
    v40 = (float *)((char *)&v78 + v7);
    v7 += 136;
    v41 = v40[1];
    v42 = v40[2];
    v43 = (float)((float)(v41 * v39) + (float)(*v40 * v30)) + (float)(v42 * v28);
    v44 = v41 * v36;
    v45 = (float)((float)(v41 * v32) + (float)(*v40 * v33)) + (float)(v42 * v31);
    v46 = v34 + (float)((float)(v44 + (float)(*v40 * v37)) + (float)(v42 * v35));
    *v40 = v38 + v43;
    v40[1] = v46;
    v40[2] = v29 + v45;
    v47 = v40[4];
    v48 = v40[3];
    v49 = v40[5];
    v40[3] = (float)((float)(v47 * v39) + (float)(v48 * v30)) + (float)(v49 * v28);
    v40[4] = (float)((float)(v47 * v36) + (float)(v48 * v37)) + (float)(v49 * v35);
    v40[5] = (float)((float)(v47 * v32) + (float)(v48 * v33)) + (float)(v49 * v31);
  }
  while ( v7 != 544 );
  sub_60450CF0(dword_60C9CEF0, FIELD_U32(a1, 56), 8);
  sub_60450A48(dword_60C9CEF0, &v78, 4, FIELD_U32(a1, 60), 8);
  v50 = 0.0;
  v51 = -8.0;
  v52 = 0;
  v94 = *v6;
  v95 = -1056964608;
  v96 = 0;
  v97 = v10;
  v98 = 1056948208;
  v53 = (float)*v11;
  v99 = v10;
  v100 = (float)(v53 + 511.0) / 1023.0;
  v54 = (unsigned __int8)*v14;
  v55 = (float)(unsigned __int8)BYTE2(*v14) / 255.0;
  v56 = (float)(unsigned __int8)BYTE1(*v14) / 255.0;
  v101 = (float)HIBYTE(*v14) / 255.0;
  v102 = v55;
  v103 = v56;
  v104 = (float)v54 / 255.0;
  v57 = (unsigned __int8)*(_DWORD *)v15;
  v58 = (float)(unsigned __int8)BYTE2(*(_DWORD *)v15) / 255.0;
  v59 = (float)(unsigned __int8)BYTE1(*(_DWORD *)v15) / 255.0;
  v105 = (float)HIBYTE(*(_DWORD *)v15) / 255.0;
  v106 = v58;
  v107 = v59;
  v108 = (float)v57 / 255.0;
  v78 = *v17;
  v79 = -1056964608;
  v80 = 0;
  v82 = v20;
  v83 = 1056948208;
  v84 = v20;
  v85 = v100;
  v86 = v101;
  v87 = v55;
  v88 = v56;
  v89 = v104;
  v90 = v105;
  v91 = v58;
  v92 = v59;
  v93 = v108;
  v109 = v94;
  v110 = -1048576000;
  v111 = 0;
  v112 = v10;
  v113 = 1065353216;
  v114 = v10;
  v115 = (float)(v53 + 1023.0) / 1023.0;
  v116 = v101;
  v117 = v55;
  v118 = v56;
  v119 = 0.0;
  v120 = v105;
  v121 = v58;
  v122 = v59;
  v123 = 0.0;
  v124 = v78;
  v125 = -1048576000;
  v126 = 0;
  v127 = v20;
  v128 = 1065353216;
  v129 = v20;
  v130 = v115;
  v131 = v101;
  v132 = v55;
  v133 = v56;
  v134 = 0.0;
  v135 = v105;
  v136 = v58;
  v137 = v59;
  v138 = 0.0;
  v60 = FIELD_F32(a1, 36);
  v61 = FIELD_F32(a1, 40);
  v62 = FIELD_F32(a1, 44);
  v63 = FIELD_F32(a1, 48);
  v64 = FIELD_F32(a1, 8);
  v65 = FIELD_F32(a1, 12);
  v66 = FIELD_F32(a1, 16);
  v67 = FIELD_F32(a1, 20);
  v68 = FIELD_F32(a1, 24);
  v69 = FIELD_F32(a1, 28);
  v70 = FIELD_F32(a1, 32);
  v71 = FIELD_F32(a1, 4);
  while ( 1 )
  {
    v72 = (float *)((char *)&v78 + v52);
    v73 = *(float *)((char *)&v78 + v52);
    *v72 = v66 + (float)((float)((float)(v51 * v64) + (float)(v73 * v71)) + (float)(v50 * v65));
    v72[1] = v70 + (float)((float)((float)(v51 * v68) + (float)(v73 * v67)) + (float)(v50 * v69));
    v72[2] = v63 + (float)((float)((float)(v51 * v61) + (float)(v73 * v60)) + (float)(v50 * v62));
    v74 = *(float *)&v81[v52 + 4];
    v75 = *(float *)&v81[v52];
    v76 = *(float *)&v81[v52 + 8];
    v72[3] = (float)((float)(v74 * v64) + (float)(v75 * v71)) + (float)(v76 * v65);
    v72[4] = (float)((float)(v74 * v68) + (float)(v75 * v67)) + (float)(v76 * v69);
    v72[5] = (float)((float)(v74 * v61) + (float)(v75 * v60)) + (float)(v76 * v62);
    if ( v52 == 408 )
      break;
    v51 = v72[35];
    v50 = v72[36];
    v52 += 136;
  }
  sub_60450CF0(dword_60C9CEF0, FIELD_U32(a1, 56), 8);
  return sub_60450A48(dword_60C9CEF0, &v78, 4, FIELD_U32(a1, 60), 8);
}
