/* sub_609750D0
 * address: 0x609750D0   size: 1732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609750D0(int a1, int a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8, char a9)
{
  int v11; // r7
  int *v13; // r10
  int v14; // s0
  int v15; // s2
  int v16; // r4
  int v17; // r9
  __int16 v18; // r8
  int v19; // r0
  int v20; // r1
  int *v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int *v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r1
  int v31; // r5
  int v32; // r1
  int v33; // r2
  int *v34; // r3
  int v35; // r1
  int v36; // r2
  int v37; // r3
  bool v38; // zf
  unsigned int *v39; // r0
  unsigned int v40; // r1
  unsigned int v41; // r0
  int *v42; // r1
  int v43; // r2
  int v44; // r3
  int v45; // r1
  int v46; // r0
  int v47; // r1
  int v48; // r2
  int v49; // r3
  bool v50; // zf
  unsigned int *v51; // r0
  unsigned int v52; // r1
  __int64 v53; // r0
  _WORD *v54; // r7
  int v55; // r9
  int v56; // r8
  int v57; // r3
  int v58; // r4
  int v59; // r5
  int v60; // r6
  int v61; // r3
  int v62; // r4
  int v63; // r5
  int v64; // r6
  int v65; // r3
  int v66; // r4
  int v67; // r5
  int v68; // r6
  __int16 v69; // r2
  unsigned int *v70; // r0
  unsigned int v71; // r1
  unsigned int v72; // r1
  unsigned int v73; // r1
  int result; // r0
  _WORD *v75; // r7
  int v76; // r9
  int v77; // r8
  int v78; // r3
  int v79; // r4
  int v80; // r5
  int v81; // r6
  int v82; // r3
  int v83; // r4
  int v84; // r5
  int v85; // r6
  int v86; // r3
  int v87; // r4
  int v88; // r5
  int v89; // r6
  __int16 v90; // r2
  unsigned int *v91; // r0
  unsigned int v92; // r1
  unsigned int v93; // r1
  unsigned int v94; // r1
  int v95; // r8
  _WORD *v96; // r7
  int v97; // r10
  int v98; // r3
  int v99; // r4
  int v100; // r5
  int v101; // r6
  int v102; // r3
  int v103; // r4
  int v104; // r5
  int v105; // r6
  int v106; // r3
  int v107; // r4
  int v108; // r5
  int v109; // r6
  __int16 v110; // r2
  unsigned int *v111; // r0
  unsigned int v112; // r1
  unsigned int v113; // r1
  unsigned int v114; // r1
  int v115; // [sp+0h] [bp-58h]
  int v116; // [sp+10h] [bp-48h]
  int v118; // [sp+1Ch] [bp-3Ch]
  int v119; // [sp+1Ch] [bp-3Ch]
  int v120; // [sp+1Ch] [bp-3Ch]
  int (**v121)(); // [sp+20h] [bp-38h] BYREF
  const char *v122; // [sp+24h] [bp-34h]
  int v123; // [sp+28h] [bp-30h] BYREF
  int v124; // [sp+2Ch] [bp-2Ch]
  int v125; // [sp+30h] [bp-28h]

  v11 = a6;
  v13 = (int *)(a1 + 24);
  v14 = (unsigned int)FIELD_F32(a1, 2292);
  v15 = (unsigned int)FIELD_F32(a1, 2288);
  v16 = v14;
  v17 = v15;
  if ( a2 )
  {
    v18 = a4;
    if ( a2 < 1 )
    {
      sub_6091FDB0((int)v13, 1, a4, v15, v14, 1, 1, 0, 0, 1);
      v115 = v16;
      v20 = 1;
      v116 = 0;
      v19 = a1 + 296;
    }
    else
    {
      sub_6091FDB0((int)v13, 5, a4, v15, v14, 1, 1, 0, a2, 1);
      v115 = v16;
      v116 = a2;
      v19 = a1 + 296;
      v20 = 5;
    }
    v11 = a6;
    sub_6091FDB0(v19, v20, a6, v17, v115, 1, 1, 0, v116, 1);
    sub_6091FDB0(a1 + 1672, 1, v18, v17, v16, 1, a2, 0, 0, 1);
  }
  else
  {
    sub_6091FDB0(a1 + 24, 1, a4, v15, v14, 1, 1, 0, 0, 1);
    sub_6091FDB0(a1 + 296, 1, a6, v17, v16, 1, 1, 0, 0, 1);
  }
  if ( a3 )
  {
    if ( a5 != -1 )
    {
      FIELD_U32(a1, 12) = v13;
      v21 = (int *)a3[3];
      v22 = *v21;
      v23 = v21[1];
      v24 = v21[2];
      v123 = v22;
      v124 = v23;
      v125 = v24;
      sub_609208DC(v13, &v123, 0);
      v25 = a3[215];
      v26 = a3[216];
      FIELD_U32(a1, 856) = a3[214];
      FIELD_U32(a1, 860) = v25;
      FIELD_U32(a1, 864) = v26;
      if ( a3[416] )
      {
        FIELD_U32(a1, 1664) = a1 + 1672;
        v27 = (int *)a3[416];
        v28 = *v27;
        v29 = v27[1];
        v30 = v27[2];
        v123 = v28;
        v124 = v29;
        v125 = v30;
        sub_609208DC((int *)(a1 + 1672), &v123, 0);
        if ( a7 == -1 )
          goto LABEL_32;
        goto LABEL_26;
      }
      FIELD_U32(a1, 1664) = 0;
    }
    if ( a7 == -1 )
    {
LABEL_32:
      v41 = FIELD_U32(a1, 2352) & 0xFFFFFFFB;
      goto LABEL_33;
    }
LABEL_26:
    FIELD_U32(a1, 16) = a1 + 296;
    v42 = (int *)a3[4];
    v43 = *v42;
    v44 = v42[1];
    v45 = v42[2];
    v123 = v43;
    v124 = v44;
    v125 = v45;
    sub_609208DC((int *)(a1 + 296), &v123, 0);
    v46 = a3[300];
    v47 = a3[301];
    v48 = a3[302];
    if ( v46 != FIELD_U32(a1, 1200) )
      goto LABEL_30;
    v49 = FIELD_U32(a1, 1204);
    v50 = v47 == v49;
    if ( v47 == v49 )
      v50 = v48 == FIELD_U32(a1, 1208);
    if ( !v50 )
    {
LABEL_30:
      FIELD_U32(a1, 1200) = v46;
      FIELD_U32(a1, 1204) = v47;
      FIELD_U32(a1, 1208) = v48;
      v51 = (unsigned int *)(a1 + 1184);
      do
        v52 = __ldrex(v51);
      while ( __strex(v52 | 8, v51) );
    }
    goto LABEL_32;
  }
  v31 = dword_60CD09F8;
  if ( a5 != -1 )
  {
    v123 = 0;
    v124 = 0;
    v125 = 0;
    v121 = &sead__SafeStringBase__vtable;
    v122 = "agl__RenderDisplay(color)";
    FIELD_U32(a1, 12) = sub_6093EA20(
                             dword_60CD09F8,
                             0,
                             (int)&v121,
                             a4,
                             v17,
                             v16,
                             FIELD_U8(a1, 56),
                             (int)&v123,
                             0,
                             0,
                             a9);
    v32 = v124;
    v33 = v125;
    FIELD_U32(a1, 856) = v123;
    FIELD_U32(a1, 860) = v32;
    FIELD_U32(a1, 864) = v33;
  }
  if ( a7 != -1 )
  {
    v34 = &v123;
    v123 = 0;
    v124 = 0;
    v125 = 0;
    if ( !a8 )
      v34 = 0;
    v121 = &sead__SafeStringBase__vtable;
    v122 = "agl__RenderDisplay(depth)";
    FIELD_U32(a1, 16) = sub_6093EA20(
                             v31,
                             0,
                             (int)&v121,
                             v11,
                             v17,
                             v16,
                             FIELD_U8(a1, 328),
                             (int)v34,
                             0,
                             0,
                             a9);
    v35 = v124;
    v36 = v125;
    if ( v123 != FIELD_U32(a1, 1200) )
      goto LABEL_21;
    v37 = FIELD_U32(a1, 1204);
    v38 = v124 == v37;
    if ( v124 == v37 )
      v38 = v125 == FIELD_U32(a1, 1208);
    if ( !v38 )
    {
LABEL_21:
      FIELD_U32(a1, 1200) = v123;
      FIELD_U32(a1, 1204) = v35;
      FIELD_U32(a1, 1208) = v36;
      v39 = (unsigned int *)(a1 + 1184);
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 | 8, v39) );
    }
  }
  v41 = FIELD_U32(a1, 2352) | 4;
LABEL_33:
  FIELD_U32(a1, 2352) = v41;
  v53 = FIELD_U64(a1, 8);
  if ( HIDWORD(v53) )
  {
    FIELD_U32(v53, 28) = a1 + 568;
    v54 = (_WORD *)(a1 + 844);
    v55 = FIELD_U16(a1, 844);
    v118 = FIELD_U8(a1, 846);
    v56 = FIELD_U32(a1, 12);
    v57 = FIELD_U32(v56, 4);
    v58 = FIELD_U32(v56, 8);
    v59 = FIELD_U32(v56, 12);
    v60 = FIELD_U32(v56, 16);
    FIELD_U32(a1, 568) = *(_DWORD *)v56;
    FIELD_U32(a1, 572) = v57;
    FIELD_U32(a1, 576) = v58;
    FIELD_U32(a1, 580) = v59;
    FIELD_U32(a1, 584) = v60;
    v61 = FIELD_U32(v56, 24);
    v62 = FIELD_U32(v56, 28);
    v63 = FIELD_U32(v56, 32);
    v64 = FIELD_U32(v56, 36);
    FIELD_U32(a1, 588) = FIELD_U32(v56, 20);
    FIELD_U32(a1, 592) = v61;
    FIELD_U32(a1, 596) = v62;
    FIELD_U32(a1, 600) = v63;
    FIELD_U32(a1, 604) = v64;
    v65 = FIELD_U32(v56, 44);
    v66 = FIELD_U32(v56, 48);
    v67 = FIELD_U32(v56, 52);
    v68 = FIELD_U32(v56, 56);
    FIELD_U32(a1, 608) = FIELD_U32(v56, 40);
    FIELD_U32(a1, 612) = v65;
    FIELD_U32(a1, 616) = v66;
    FIELD_U32(a1, 620) = v67;
    FIELD_U32(a1, 624) = v68;
    v69 = FIELD_U16(v56, 60);
    FIELD_U8(a1, 630) = FIELD_U8(v56, 62);
    FIELD_U16(a1, 628) = v69;
    sub_60917754(a1 + 632, v56 + 64);
    FIELD_U32(a1, 832) = FIELD_U32(v56, 264);
    v70 = (unsigned int *)(a1 + 840);
    do
      v71 = __ldrex(v70);
    while ( __strex(v71 | 4, v70) );
    if ( (unsigned __int16)*v54 != v55 )
    {
      do
        v72 = __ldrex(v70);
      while ( __strex(v72 | 2, v70) );
      *v54 = v55;
    }
    if ( FIELD_U8(a1, 846) != v118 )
    {
      do
        v73 = __ldrex(v70);
      while ( __strex(v73 | 1, v70) );
      FIELD_U8(a1, 846) = v118;
    }
    sub_6091AC94(a1 + 568);
  }
  else
  {
    FIELD_U32(v53, 28) = 0;
  }
  result = FIELD_U32(a1, 8);
  if ( FIELD_U32(a1, 16) )
  {
    FIELD_U32(result, 60) = a1 + 912;
    v75 = (_WORD *)(a1 + 1188);
    v76 = FIELD_U16(a1, 1188);
    v119 = FIELD_U8(a1, 1190);
    v77 = FIELD_U32(a1, 16);
    v78 = FIELD_U32(v77, 4);
    v79 = FIELD_U32(v77, 8);
    v80 = FIELD_U32(v77, 12);
    v81 = FIELD_U32(v77, 16);
    FIELD_U32(a1, 912) = *(_DWORD *)v77;
    FIELD_U32(a1, 916) = v78;
    FIELD_U32(a1, 920) = v79;
    FIELD_U32(a1, 924) = v80;
    FIELD_U32(a1, 928) = v81;
    v82 = FIELD_U32(v77, 24);
    v83 = FIELD_U32(v77, 28);
    v84 = FIELD_U32(v77, 32);
    v85 = FIELD_U32(v77, 36);
    FIELD_U32(a1, 932) = FIELD_U32(v77, 20);
    FIELD_U32(a1, 936) = v82;
    FIELD_U32(a1, 940) = v83;
    FIELD_U32(a1, 944) = v84;
    FIELD_U32(a1, 948) = v85;
    v86 = FIELD_U32(v77, 44);
    v87 = FIELD_U32(v77, 48);
    v88 = FIELD_U32(v77, 52);
    v89 = FIELD_U32(v77, 56);
    FIELD_U32(a1, 952) = FIELD_U32(v77, 40);
    FIELD_U32(a1, 956) = v86;
    FIELD_U32(a1, 960) = v87;
    FIELD_U32(a1, 964) = v88;
    FIELD_U32(a1, 968) = v89;
    v90 = FIELD_U16(v77, 60);
    FIELD_U8(a1, 974) = FIELD_U8(v77, 62);
    FIELD_U16(a1, 972) = v90;
    sub_60917754(a1 + 976, v77 + 64);
    FIELD_U32(a1, 1176) = FIELD_U32(v77, 264);
    v91 = (unsigned int *)(a1 + 1184);
    do
      v92 = __ldrex(v91);
    while ( __strex(v92 | 4, v91) );
    if ( (unsigned __int16)*v75 != v76 )
    {
      do
        v93 = __ldrex(v91);
      while ( __strex(v93 | 2, v91) );
      *v75 = v76;
    }
    if ( FIELD_U8(a1, 1190) != v119 )
    {
      do
        v94 = __ldrex(v91);
      while ( __strex(v94 | 1, v91) );
      FIELD_U8(a1, 1190) = v119;
    }
    result = sub_6091ACB0((_DWORD *)(a1 + 912));
  }
  else
  {
    FIELD_U32(result, 60) = 0;
  }
  v95 = FIELD_U32(a1, 1664);
  if ( v95 )
  {
    v96 = (_WORD *)(a1 + 2220);
    v97 = FIELD_U16(a1, 2220);
    v120 = FIELD_U8(a1, 2222);
    v98 = FIELD_U32(v95, 4);
    v99 = FIELD_U32(v95, 8);
    v100 = FIELD_U32(v95, 12);
    v101 = FIELD_U32(v95, 16);
    FIELD_U32(a1, 1944) = *(_DWORD *)v95;
    FIELD_U32(a1, 1948) = v98;
    FIELD_U32(a1, 1952) = v99;
    FIELD_U32(a1, 1956) = v100;
    FIELD_U32(a1, 1960) = v101;
    v102 = FIELD_U32(v95, 24);
    v103 = FIELD_U32(v95, 28);
    v104 = FIELD_U32(v95, 32);
    v105 = FIELD_U32(v95, 36);
    FIELD_U32(a1, 1964) = FIELD_U32(v95, 20);
    FIELD_U32(a1, 1968) = v102;
    FIELD_U32(a1, 1972) = v103;
    FIELD_U32(a1, 1976) = v104;
    FIELD_U32(a1, 1980) = v105;
    v106 = FIELD_U32(v95, 44);
    v107 = FIELD_U32(v95, 48);
    v108 = FIELD_U32(v95, 52);
    v109 = FIELD_U32(v95, 56);
    FIELD_U32(a1, 1984) = FIELD_U32(v95, 40);
    FIELD_U32(a1, 1988) = v106;
    FIELD_U32(a1, 1992) = v107;
    FIELD_U32(a1, 1996) = v108;
    FIELD_U32(a1, 2000) = v109;
    v110 = FIELD_U16(v95, 60);
    FIELD_U8(a1, 2006) = FIELD_U8(v95, 62);
    FIELD_U16(a1, 2004) = v110;
    sub_60917754(a1 + 2008, v95 + 64);
    FIELD_U32(a1, 2208) = FIELD_U32(v95, 264);
    v111 = (unsigned int *)(a1 + 2216);
    do
      v112 = __ldrex(v111);
    while ( __strex(v112 | 4, v111) );
    if ( (unsigned __int16)*v96 != v97 )
    {
      do
        v113 = __ldrex(v111);
      while ( __strex(v113 | 2, v111) );
      *v96 = v97;
    }
    if ( FIELD_U8(a1, 2222) != v120 )
    {
      do
        v114 = __ldrex(v111);
      while ( __strex(v114 | 1, v111) );
      FIELD_U8(a1, 2222) = v120;
    }
    return sub_6091AC94(a1 + 1944);
  }
  return result;
}
