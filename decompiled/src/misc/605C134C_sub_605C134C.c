/* sub_605C134C
 * address: 0x605C134C   size: 2588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C134C(int a1, void *a2)
{
  int v3; // r5
  int v4; // r1
  nn__util__BinaryFileHeader *v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r10
  int v13; // r3
  int v14; // r5
  int v15; // r6
  int v16; // r3
  int v17; // r5
  int v18; // r6
  int v19; // r7
  __int16 v20; // r2
  int v21; // r2
  int v22; // r3
  int v23; // r6
  int v24; // r7
  int v25; // r2
  int v26; // r3
  int v27; // r6
  int v28; // r7
  int v29; // r2
  int v30; // r3
  int v31; // r6
  int v32; // r7
  __int16 v33; // r1
  int v34; // r10
  int v35; // r3
  int v36; // r5
  int v37; // r6
  int v38; // r3
  int v39; // r5
  int v40; // r6
  int v41; // r7
  __int16 v42; // r2
  int v43; // r2
  int v44; // r3
  int v45; // r6
  int v46; // r7
  int v47; // r2
  int v48; // r3
  int v49; // r6
  int v50; // r7
  int v51; // r2
  int v52; // r3
  int v53; // r6
  int v54; // r7
  __int16 v55; // r1
  int v56; // r10
  int v57; // r3
  int v58; // r5
  int v59; // r6
  int v60; // r3
  int v61; // r5
  int v62; // r6
  int v63; // r7
  __int16 v64; // r2
  int v65; // r2
  int v66; // r3
  int v67; // r6
  int v68; // r7
  int v69; // r2
  int v70; // r3
  int v71; // r6
  int v72; // r7
  int v73; // r2
  int v74; // r3
  int v75; // r6
  int v76; // r7
  __int16 v77; // r1
  int v78; // r10
  int v79; // r3
  int v80; // r5
  int v81; // r6
  int v82; // r3
  int v83; // r5
  int v84; // r6
  int v85; // r7
  __int16 v86; // r2
  int v87; // r2
  int v88; // r3
  int v89; // r6
  int v90; // r7
  int v91; // r2
  int v92; // r3
  int v93; // r6
  int v94; // r7
  int v95; // r2
  int v96; // r3
  int v97; // r6
  int v98; // r7
  __int16 v99; // r1
  int v100; // r10
  int v101; // r3
  int v102; // r5
  int v103; // r6
  int v104; // r3
  int v105; // r5
  int v106; // r6
  int v107; // r7
  __int16 v108; // r2
  int v109; // r2
  int v110; // r3
  int v111; // r6
  int v112; // r7
  int v113; // r2
  int v114; // r3
  int v115; // r6
  int v116; // r7
  int v117; // r2
  int v118; // r3
  int v119; // r6
  int v120; // r7
  __int16 v121; // r1
  int v122; // r9
  float v123; // s2
  int v124; // r2
  int v125; // r6
  float v126; // r5
  float v127; // s4
  float *v128; // r4
  int v129; // r4
  int v130; // r3
  float v131; // s0
  float v132; // s0
  float v133; // s0
  float v134; // s0
  int v135; // r3
  __int64 v136; // d17
  __int64 v137; // d17
  __int64 v139; // d17
  int v140; // [sp+38h] [bp-698h]
  int v141; // [sp+3Ch] [bp-694h]
  int v142; // [sp+40h] [bp-690h]
  int v143; // [sp+44h] [bp-68Ch]
  int v144; // [sp+48h] [bp-688h]
  int v145; // [sp+4Ch] [bp-684h]
  int v146; // [sp+50h] [bp-680h]
  int v147; // [sp+54h] [bp-67Ch]
  int v148; // [sp+58h] [bp-678h]
  int v149; // [sp+5Ch] [bp-674h]
  int v150; // [sp+60h] [bp-670h]
  int v151; // [sp+64h] [bp-66Ch]
  int v152; // [sp+68h] [bp-668h]
  int v153; // [sp+6Ch] [bp-664h]
  int v154; // [sp+70h] [bp-660h]
  __int16 v155; // [sp+74h] [bp-65Ch]
  char v156; // [sp+76h] [bp-65Ah]
  _BYTE v157[200]; // [sp+78h] [bp-658h] BYREF
  int v158; // [sp+140h] [bp-590h]
  int v159; // [sp+148h] [bp-588h]
  int v160; // [sp+14Ch] [bp-584h]
  int v161; // [sp+150h] [bp-580h]
  int v162; // [sp+154h] [bp-57Ch]
  int v163; // [sp+158h] [bp-578h]
  int v164; // [sp+15Ch] [bp-574h]
  int v165; // [sp+160h] [bp-570h]
  int v166; // [sp+164h] [bp-56Ch]
  int v167; // [sp+168h] [bp-568h]
  int v168; // [sp+16Ch] [bp-564h]
  int v169; // [sp+170h] [bp-560h]
  int v170; // [sp+174h] [bp-55Ch]
  int v171; // [sp+178h] [bp-558h]
  int v172; // [sp+17Ch] [bp-554h]
  int v173; // [sp+180h] [bp-550h]
  __int16 v174; // [sp+184h] [bp-54Ch]
  char v175; // [sp+186h] [bp-54Ah]
  _BYTE v176[200]; // [sp+188h] [bp-548h] BYREF
  int v177; // [sp+250h] [bp-480h]
  int v178; // [sp+258h] [bp-478h]
  int v179; // [sp+25Ch] [bp-474h]
  int v180; // [sp+260h] [bp-470h]
  int v181; // [sp+264h] [bp-46Ch]
  int v182; // [sp+268h] [bp-468h]
  int v183; // [sp+26Ch] [bp-464h]
  int v184; // [sp+270h] [bp-460h]
  int v185; // [sp+274h] [bp-45Ch]
  int v186; // [sp+278h] [bp-458h]
  int v187; // [sp+27Ch] [bp-454h]
  int v188; // [sp+280h] [bp-450h]
  int v189; // [sp+284h] [bp-44Ch]
  int v190; // [sp+288h] [bp-448h]
  int v191; // [sp+28Ch] [bp-444h]
  int v192; // [sp+290h] [bp-440h]
  __int16 v193; // [sp+294h] [bp-43Ch]
  char v194; // [sp+296h] [bp-43Ah]
  _BYTE v195[200]; // [sp+298h] [bp-438h] BYREF
  int v196; // [sp+360h] [bp-370h]
  int v197; // [sp+368h] [bp-368h]
  int v198; // [sp+36Ch] [bp-364h]
  int v199; // [sp+370h] [bp-360h]
  int v200; // [sp+374h] [bp-35Ch]
  int v201; // [sp+378h] [bp-358h]
  int v202; // [sp+37Ch] [bp-354h]
  int v203; // [sp+380h] [bp-350h]
  int v204; // [sp+384h] [bp-34Ch]
  int v205; // [sp+388h] [bp-348h]
  int v206; // [sp+38Ch] [bp-344h]
  int v207; // [sp+390h] [bp-340h]
  int v208; // [sp+394h] [bp-33Ch]
  int v209; // [sp+398h] [bp-338h]
  int v210; // [sp+39Ch] [bp-334h]
  int v211; // [sp+3A0h] [bp-330h]
  __int16 v212; // [sp+3A4h] [bp-32Ch]
  char v213; // [sp+3A6h] [bp-32Ah]
  _BYTE v214[88]; // [sp+3A8h] [bp-328h] BYREF
  int v215; // [sp+470h] [bp-260h]
  int v216; // [sp+478h] [bp-258h]
  int v217; // [sp+47Ch] [bp-254h]
  int v218; // [sp+480h] [bp-250h]
  int v219; // [sp+484h] [bp-24Ch]
  int v220; // [sp+488h] [bp-248h]
  int v221; // [sp+48Ch] [bp-244h]
  int v222; // [sp+490h] [bp-240h]
  int v223; // [sp+494h] [bp-23Ch]
  int v224; // [sp+498h] [bp-238h]
  int v225; // [sp+49Ch] [bp-234h]
  int v226; // [sp+4A0h] [bp-230h]
  int v227; // [sp+4A4h] [bp-22Ch]
  int v228; // [sp+4A8h] [bp-228h]
  int v229; // [sp+4ACh] [bp-224h]
  int v230; // [sp+4B0h] [bp-220h]
  __int16 v231; // [sp+4B4h] [bp-21Ch]
  char v232; // [sp+4B6h] [bp-21Ah]
  _BYTE v233[200]; // [sp+4B8h] [bp-218h] BYREF
  int v234; // [sp+580h] [bp-150h]
  int v235; // [sp+588h] [bp-148h]
  int v236; // [sp+58Ch] [bp-144h]
  int v237; // [sp+590h] [bp-140h]
  int v238; // [sp+594h] [bp-13Ch]
  int v239; // [sp+598h] [bp-138h]
  int v240; // [sp+59Ch] [bp-134h]
  int v241; // [sp+5A0h] [bp-130h]
  int v242; // [sp+5A4h] [bp-12Ch]
  int v243; // [sp+5A8h] [bp-128h]
  int v244; // [sp+5ACh] [bp-124h]
  int v245; // [sp+5B0h] [bp-120h]
  int v246; // [sp+5B4h] [bp-11Ch]
  int v247; // [sp+5B8h] [bp-118h]
  int v248; // [sp+5BCh] [bp-114h]
  int v249; // [sp+5C0h] [bp-110h]
  __int16 v250; // [sp+5C4h] [bp-10Ch]
  char v251; // [sp+5C6h] [bp-10Ah]
  _BYTE v252[200]; // [sp+5C8h] [bp-108h] BYREF
  int v253; // [sp+690h] [bp-40h]
  int (**v254)(); // [sp+69Ch] [bp-34h] BYREF
  char *v255; // [sp+6A0h] [bp-30h]
  int (**v256)(); // [sp+6A4h] [bp-2Ch] BYREF
  char *v257; // [sp+6A8h] [bp-28h]

  v3 = operator_new_8DE25C(0x5CDCu, a2, 4);
  sub_60448BFC((_DWORD *)(v3 + 4));
  memset((void *)(v3 + 68), 0, 88);
  *(_DWORD *)v3 = &off_60C09EA0;
  FIELD_U32(v3, 23752) = -1;
  FIELD_U32(v3, 23756) = -1;
  FIELD_U32(v3, 23760) = 0;
  FIELD_U16(v3, 23768) = 0;
  FIELD_U16(v3, 23770) = 0;
  FIELD_U32(a1, 4) = v3;
  if ( FIELD_U8(TileMgr_instance, 35448) )
  {
    sub_6044E668(
      v3,
      TileMgr_instance + 35456,
      TileMgr_instance + 35728,
      TileMgr_instance + 36000,
      TileMgr_instance + 36272,
      TileMgr_instance + 36544,
      TileMgr_instance + 36816,
      FIELD_U8(a1, 160),
      3,
      -1);
  }
  else
  {
    FIELD_U8(TileMgr_instance, 35448) = 1;
    v4 = FIELD_U8(a1, 160);
    v256 = &sead__SafeStringBase__vtable;
    v254 = &sead__SafeStringBase__vtable;
    v257 = off_60C09E38[v4];
    v255 = off_60C09E44[v4];
    v5 = (nn__util__BinaryFileHeader *)sub_608226EC(ArchiveManagerMaybe_instance, &v256, &v254, 0);
    FIELD_U32(a1, 15016) = sub_6086EDAC(v5);
    v6 = FIELD_U8(a1, 160);
    v256 = &sead__SafeStringBase__vtable;
    v254 = &sead__SafeStringBase__vtable;
    v257 = off_60C09E38[v6];
    v255 = off_60C09E50[v6];
    output_bfres_ref_448C14(&v256, &v254, a1 + 15024, (_DWORD *)(a1 + 15016), 0);
    v7 = FIELD_U8(a1, 160);
    v256 = &sead__SafeStringBase__vtable;
    v254 = &sead__SafeStringBase__vtable;
    v257 = off_60C09E38[v7];
    v255 = off_60C09E5C[v7];
    output_bfres_ref_448C14(&v256, &v254, a1 + 15296, (_DWORD *)(a1 + 15016), 0);
    v8 = FIELD_U8(a1, 160);
    v256 = &sead__SafeStringBase__vtable;
    v254 = &sead__SafeStringBase__vtable;
    v257 = off_60C09E38[v8];
    v255 = off_60C09E68[v8];
    output_bfres_ref_448C14(&v256, &v254, a1 + 15568, (_DWORD *)(a1 + 15016), 0);
    v9 = FIELD_U8(a1, 160);
    v256 = &sead__SafeStringBase__vtable;
    v254 = &sead__SafeStringBase__vtable;
    v257 = off_60C09E38[v9];
    v255 = off_60C09E74[v9];
    output_bfres_ref_448D04(&v256, (void (__fastcall ***)(const char **))&v254, a1 + 15840, (_DWORD *)(a1 + 15016), 0);
    v10 = FIELD_U8(a1, 160);
    v256 = &sead__SafeStringBase__vtable;
    v254 = &sead__SafeStringBase__vtable;
    v257 = off_60C09E38[v10];
    v255 = off_60C09E80[v10];
    output_bfres_ref_448D04(&v256, (void (__fastcall ***)(const char **))&v254, a1 + 16112, (_DWORD *)(a1 + 15016), 0);
    v11 = FIELD_U8(a1, 160);
    v256 = &sead__SafeStringBase__vtable;
    v254 = &sead__SafeStringBase__vtable;
    v257 = off_60C09E38[v11];
    v255 = off_60C09E8C[v11];
    output_bfres_ref_448D04(&v256, (void (__fastcall ***)(const char **))&v254, a1 + 0x4000, (_DWORD *)(a1 + 15016), 0);
    v235 = FIELD_U32(a1, 15024);
    v12 = TileMgr_instance;
    v236 = FIELD_U32(a1, 15028);
    v237 = FIELD_U32(a1, 15032);
    v238 = FIELD_U32(a1, 15036);
    v239 = FIELD_U32(a1, 15040);
    v240 = FIELD_U32(a1, 15044);
    v13 = FIELD_U32(a1, 15052);
    v14 = FIELD_U32(a1, 15056);
    v15 = FIELD_U32(a1, 15060);
    v241 = FIELD_U32(a1, 15048);
    v242 = v13;
    v243 = v14;
    v244 = v15;
    v16 = FIELD_U32(a1, 15068);
    v17 = FIELD_U32(a1, 15072);
    v18 = FIELD_U32(a1, 15076);
    v19 = FIELD_U32(a1, 15080);
    v245 = FIELD_U32(a1, 15064);
    v246 = v16;
    v247 = v17;
    v248 = v18;
    v249 = v19;
    v20 = FIELD_U16(a1, 15084);
    v251 = FIELD_U8(a1, 15086);
    v250 = v20;
    sub_609176C0(v252, a1 + 15088);
    v253 = FIELD_U32(a1, 15288);
    v21 = v236;
    v22 = v237;
    v23 = v238;
    v24 = v239;
    FIELD_U32(v12, 35456) = v235;
    FIELD_U32(v12, 35460) = v21;
    FIELD_U32(v12, 35464) = v22;
    FIELD_U32(v12, 35468) = v23;
    FIELD_U32(v12, 35472) = v24;
    v25 = v241;
    v26 = v242;
    v27 = v243;
    v28 = v244;
    FIELD_U32(v12, 35476) = v240;
    FIELD_U32(v12, 35480) = v25;
    FIELD_U32(v12, 35484) = v26;
    FIELD_U32(v12, 35488) = v27;
    FIELD_U32(v12, 35492) = v28;
    v29 = v246;
    v30 = v247;
    v31 = v248;
    v32 = v249;
    FIELD_U32(v12, 35496) = v245;
    FIELD_U32(v12, 35500) = v29;
    FIELD_U32(v12, 35504) = v30;
    FIELD_U32(v12, 35508) = v31;
    FIELD_U32(v12, 35512) = v32;
    v33 = v250;
    FIELD_U8(v12, 35518) = v251;
    FIELD_U16(v12, 35516) = v33;
    sub_60917754(v12 + 35520, v252);
    FIELD_U32(v12, 35720) = v253;
    sub_609175E4(v252);
    v34 = TileMgr_instance;
    v216 = FIELD_U32(a1, 15296);
    v217 = FIELD_U32(a1, 15300);
    v218 = FIELD_U32(a1, 15304);
    v219 = FIELD_U32(a1, 15308);
    v220 = FIELD_U32(a1, 15312);
    v221 = FIELD_U32(a1, 15316);
    v35 = FIELD_U32(a1, 15324);
    v36 = FIELD_U32(a1, 15328);
    v37 = FIELD_U32(a1, 15332);
    v222 = FIELD_U32(a1, 15320);
    v223 = v35;
    v224 = v36;
    v225 = v37;
    v38 = FIELD_U32(a1, 15340);
    v39 = FIELD_U32(a1, 15344);
    v40 = FIELD_U32(a1, 15348);
    v41 = FIELD_U32(a1, 15352);
    v226 = FIELD_U32(a1, 15336);
    v227 = v38;
    v228 = v39;
    v229 = v40;
    v230 = v41;
    v42 = FIELD_U16(a1, 15356);
    v232 = FIELD_U8(a1, 15358);
    v231 = v42;
    sub_609176C0(v233, a1 + 15360);
    v234 = FIELD_U32(a1, 15560);
    v43 = v217;
    v44 = v218;
    v45 = v219;
    v46 = v220;
    FIELD_U32(v34, 35728) = v216;
    FIELD_U32(v34, 35732) = v43;
    FIELD_U32(v34, 35736) = v44;
    FIELD_U32(v34, 35740) = v45;
    FIELD_U32(v34, 35744) = v46;
    v47 = v222;
    v48 = v223;
    v49 = v224;
    v50 = v225;
    FIELD_U32(v34, 35748) = v221;
    FIELD_U32(v34, 35752) = v47;
    FIELD_U32(v34, 35756) = v48;
    FIELD_U32(v34, 35760) = v49;
    FIELD_U32(v34, 35764) = v50;
    v51 = v227;
    v52 = v228;
    v53 = v229;
    v54 = v230;
    FIELD_U32(v34, 35768) = v226;
    FIELD_U32(v34, 35772) = v51;
    FIELD_U32(v34, 35776) = v52;
    FIELD_U32(v34, 35780) = v53;
    FIELD_U32(v34, 35784) = v54;
    v55 = v231;
    FIELD_U8(v34, 35790) = v232;
    FIELD_U16(v34, 35788) = v55;
    sub_60917754(v34 + 35792, v233);
    FIELD_U32(v34, 35992) = v234;
    sub_609175E4(v233);
    v56 = TileMgr_instance;
    v197 = FIELD_U32(a1, 15568);
    v198 = FIELD_U32(a1, 15572);
    v199 = FIELD_U32(a1, 15576);
    v200 = FIELD_U32(a1, 15580);
    v201 = FIELD_U32(a1, 15584);
    v202 = FIELD_U32(a1, 15588);
    v57 = FIELD_U32(a1, 15596);
    v58 = FIELD_U32(a1, 15600);
    v59 = FIELD_U32(a1, 15604);
    v203 = FIELD_U32(a1, 15592);
    v204 = v57;
    v205 = v58;
    v206 = v59;
    v60 = FIELD_U32(a1, 15612);
    v61 = FIELD_U32(a1, 15616);
    v62 = FIELD_U32(a1, 15620);
    v63 = FIELD_U32(a1, 15624);
    v207 = FIELD_U32(a1, 15608);
    v208 = v60;
    v209 = v61;
    v210 = v62;
    v211 = v63;
    v64 = FIELD_U16(a1, 15628);
    v213 = FIELD_U8(a1, 15630);
    v212 = v64;
    sub_609176C0(v214, a1 + 15632);
    v215 = FIELD_U32(a1, 15832);
    v65 = v198;
    v66 = v199;
    v67 = v200;
    v68 = v201;
    FIELD_U32(v56, 36000) = v197;
    FIELD_U32(v56, 36004) = v65;
    FIELD_U32(v56, 36008) = v66;
    FIELD_U32(v56, 36012) = v67;
    FIELD_U32(v56, 36016) = v68;
    v69 = v203;
    v70 = v204;
    v71 = v205;
    v72 = v206;
    FIELD_U32(v56, 36020) = v202;
    FIELD_U32(v56, 36024) = v69;
    FIELD_U32(v56, 36028) = v70;
    FIELD_U32(v56, 36032) = v71;
    FIELD_U32(v56, 36036) = v72;
    v73 = v208;
    v74 = v209;
    v75 = v210;
    v76 = v211;
    FIELD_U32(v56, 36040) = v207;
    FIELD_U32(v56, 36044) = v73;
    FIELD_U32(v56, 36048) = v74;
    FIELD_U32(v56, 36052) = v75;
    FIELD_U32(v56, 36056) = v76;
    v77 = v212;
    FIELD_U8(v56, 36062) = v213;
    FIELD_U16(v56, 36060) = v77;
    sub_60917754(v56 + 36064, v214);
    FIELD_U32(v56, 36264) = v215;
    sub_609175E4(v214);
    v78 = TileMgr_instance;
    v178 = FIELD_U32(a1, 15840);
    v179 = FIELD_U32(a1, 15844);
    v180 = FIELD_U32(a1, 15848);
    v181 = FIELD_U32(a1, 15852);
    v182 = FIELD_U32(a1, 15856);
    v183 = FIELD_U32(a1, 15860);
    v79 = FIELD_U32(a1, 15868);
    v80 = FIELD_U32(a1, 15872);
    v81 = FIELD_U32(a1, 15876);
    v184 = FIELD_U32(a1, 15864);
    v185 = v79;
    v186 = v80;
    v187 = v81;
    v82 = FIELD_U32(a1, 15884);
    v83 = FIELD_U32(a1, 15888);
    v84 = FIELD_U32(a1, 15892);
    v85 = FIELD_U32(a1, 15896);
    v188 = FIELD_U32(a1, 15880);
    v189 = v82;
    v190 = v83;
    v191 = v84;
    v192 = v85;
    v86 = FIELD_U16(a1, 15900);
    v194 = FIELD_U8(a1, 15902);
    v193 = v86;
    sub_609176C0(v195, a1 + 15904);
    v196 = FIELD_U32(a1, 16104);
    v87 = v179;
    v88 = v180;
    v89 = v181;
    v90 = v182;
    FIELD_U32(v78, 36272) = v178;
    FIELD_U32(v78, 36276) = v87;
    FIELD_U32(v78, 36280) = v88;
    FIELD_U32(v78, 36284) = v89;
    FIELD_U32(v78, 36288) = v90;
    v91 = v184;
    v92 = v185;
    v93 = v186;
    v94 = v187;
    FIELD_U32(v78, 36292) = v183;
    FIELD_U32(v78, 36296) = v91;
    FIELD_U32(v78, 36300) = v92;
    FIELD_U32(v78, 36304) = v93;
    FIELD_U32(v78, 36308) = v94;
    v95 = v189;
    v96 = v190;
    v97 = v191;
    v98 = v192;
    FIELD_U32(v78, 36312) = v188;
    FIELD_U32(v78, 36316) = v95;
    FIELD_U32(v78, 36320) = v96;
    FIELD_U32(v78, 36324) = v97;
    FIELD_U32(v78, 36328) = v98;
    v99 = v193;
    FIELD_U8(v78, 36334) = v194;
    FIELD_U16(v78, 36332) = v99;
    sub_60917754(v78 + 36336, v195);
    FIELD_U32(v78, 36536) = v196;
    sub_609175E4(v195);
    v100 = TileMgr_instance;
    v159 = FIELD_U32(a1, 16112);
    v160 = FIELD_U32(a1, 16116);
    v161 = FIELD_U32(a1, 16120);
    v162 = FIELD_U32(a1, 16124);
    v163 = FIELD_U32(a1, 16128);
    v164 = FIELD_U32(a1, 16132);
    v101 = FIELD_U32(a1, 16140);
    v102 = FIELD_U32(a1, 16144);
    v103 = FIELD_U32(a1, 16148);
    v165 = FIELD_U32(a1, 16136);
    v166 = v101;
    v167 = v102;
    v168 = v103;
    v104 = FIELD_U32(a1, 16156);
    v105 = FIELD_U32(a1, 16160);
    v106 = FIELD_U32(a1, 16164);
    v107 = FIELD_U32(a1, 16168);
    v169 = FIELD_U32(a1, 16152);
    v170 = v104;
    v171 = v105;
    v172 = v106;
    v173 = v107;
    v108 = FIELD_U16(a1, 16172);
    v175 = FIELD_U8(a1, 16174);
    v174 = v108;
    sub_609176C0(v176, a1 + 16176);
    v177 = FIELD_U32(a1, 16376);
    v109 = v160;
    v110 = v161;
    v111 = v162;
    v112 = v163;
    FIELD_U32(v100, 36544) = v159;
    FIELD_U32(v100, 36548) = v109;
    FIELD_U32(v100, 36552) = v110;
    FIELD_U32(v100, 36556) = v111;
    FIELD_U32(v100, 36560) = v112;
    v113 = v165;
    v114 = v166;
    v115 = v167;
    v116 = v168;
    FIELD_U32(v100, 36564) = v164;
    FIELD_U32(v100, 36568) = v113;
    FIELD_U32(v100, 36572) = v114;
    FIELD_U32(v100, 36576) = v115;
    FIELD_U32(v100, 36580) = v116;
    v117 = v170;
    v118 = v171;
    v119 = v172;
    v120 = v173;
    FIELD_U32(v100, 36584) = v169;
    FIELD_U32(v100, 36588) = v117;
    FIELD_U32(v100, 36592) = v118;
    FIELD_U32(v100, 36596) = v119;
    FIELD_U32(v100, 36600) = v120;
    v121 = v174;
    FIELD_U8(v100, 36606) = v175;
    FIELD_U16(v100, 36604) = v121;
    sub_60917754(v100 + 36608, v176);
    FIELD_U32(v100, 36808) = v177;
    sub_609175E4(v176);
    v122 = TileMgr_instance;
    v140 = FIELD_U32(a1, 0x4000);
    v141 = FIELD_U32(a1, 16388);
    v142 = FIELD_U32(a1, 16392);
    v143 = FIELD_U32(a1, 16396);
    v144 = FIELD_U32(a1, 16400);
    v145 = FIELD_U32(a1, 16404);
    v146 = FIELD_U32(a1, 16408);
    v147 = FIELD_U32(a1, 16412);
    v148 = FIELD_U32(a1, 16416);
    v149 = FIELD_U32(a1, 16420);
    v150 = FIELD_U32(a1, 16424);
    v151 = FIELD_U32(a1, 16428);
    v152 = FIELD_U32(a1, 16432);
    v153 = FIELD_U32(a1, 16436);
    v154 = FIELD_U32(a1, 16440);
    v156 = FIELD_U8(a1, 16446);
    v155 = FIELD_U16(a1, 16444);
    sub_609176C0(v157, a1 + 16448);
    v158 = FIELD_U32(a1, 16648);
    FIELD_U32(v122, 36816) = v140;
    FIELD_U32(v122, 36820) = v141;
    FIELD_U32(v122, 36824) = v142;
    FIELD_U32(v122, 36828) = v143;
    FIELD_U32(v122, 36832) = v144;
    FIELD_U32(v122, 36836) = v145;
    FIELD_U32(v122, 36840) = v146;
    FIELD_U32(v122, 36844) = v147;
    FIELD_U32(v122, 36848) = v148;
    FIELD_U32(v122, 36852) = v149;
    FIELD_U32(v122, 36856) = v150;
    FIELD_U32(v122, 36860) = v151;
    FIELD_U32(v122, 36864) = v152;
    FIELD_U32(v122, 36868) = v153;
    FIELD_U32(v122, 36872) = v154;
    FIELD_U8(v122, 36878) = v156;
    FIELD_U16(v122, 36876) = v155;
    sub_60917754(v122 + 36880, v157);
    FIELD_U32(v122, 37080) = v158;
    sub_609175E4(v157);
    sub_6044E668(
      FIELD_U32(a1, 4),
      a1 + 15024,
      a1 + 15296,
      a1 + 15568,
      a1 + 15840,
      a1 + 16112,
      a1 + 0x4000,
      FIELD_U8(a1, 160),
      3,
      -1);
  }
  v123 = 0.0;
  v124 = 1082130432;
  v125 = 0;
  v126 = 0.0;
  v127 = 4.0;
  do
  {
    v127 = v127 + 4.0;
    v123 = v123 + 4.0;
    v128 = (float *)(FIELD_U32(a1, 4) + v125);
    v125 += 8;
    v128[178] = v126;
    v128[179] = 0.0;
    *((_DWORD *)v128 + 3058) = v124;
    v124 = LODWORD(v127);
    v126 = v123;
    v128[3059] = 0.0;
  }
  while ( v125 != 11528 );
  v129 = FIELD_U32(a1, 8);
  v130 = FIELD_U32(a1, 12);
  v131 = FIELD_F32(a1, 16);
  FIELD_U32(a1, 32) = v129;
  FIELD_U32(a1, 36) = v130;
  v132 = v131 + 4.0;
  FIELD_F32(a1, 40) = v132;
  FIELD_U32(a1, 44) = 1065353216;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 64) = 1065353216;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 84) = 1065353216;
  FIELD_U32(a1, 56) = v129;
  FIELD_U32(a1, 72) = v130;
  FIELD_F32(a1, 88) = v132;
  if ( FIELD_F32(a1, 104) != 0.0 )
  {
    v133 = FIELD_F32(a1, 108);
    FIELD_F32(a1, 44) = v133;
    v134 = v133 * 0.0;
    FIELD_F32(a1, 60) = v134;
    FIELD_F32(a1, 76) = v134;
  }
  v135 = FIELD_U32(a1, 4);
  v136 = FIELD_U64(a1, 52);
  FIELD_U64(v135, 4) = FIELD_U64(a1, 44);
  FIELD_U64(v135, 12) = v136;
  v137 = FIELD_U64(a1, 68);
  FIELD_U64(v135, 20) = FIELD_U64(a1, 60);
  FIELD_U64(v135, 28) = v137;
  v139 = FIELD_U64(a1, 84);
  FIELD_U64(v135, 36) = FIELD_U64(a1, 76);
  FIELD_U64(v135, 44) = v139;
  return v135 + 36;
}
