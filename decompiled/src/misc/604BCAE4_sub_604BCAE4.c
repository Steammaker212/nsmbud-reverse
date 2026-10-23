/* sub_604BCAE4
 * address: 0x604BCAE4   size: 3896   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604BCAE4(int a1)
{
  StateMethodExecuter *result; // r0
  unsigned int v3; // r1
  int v4; // r0
  int v5; // r1
  float v6; // s18
  int v7; // r7
  int v8; // r6
  int v9; // r0
  int v10; // r0
  float v11; // s18
  int v12; // r6
  int v13; // r7
  int v14; // r0
  int v15; // r1
  float v16; // s18
  int v17; // r6
  int v18; // r7
  int v19; // r0
  int v20; // r1
  float v21; // s18
  int v22; // r6
  int v23; // r7
  int v24; // r0
  int v25; // r1
  float v26; // s18
  int v27; // r6
  int v28; // r7
  int v29; // r0
  int *v30; // r1
  int v31; // r1
  float v32; // s18
  int v33; // r7
  int v34; // r6
  int v35; // r0
  int v36; // r0
  float v37; // s18
  int v38; // r6
  int v39; // r7
  int v40; // r0
  int v41; // r1
  float v42; // s18
  int v43; // r6
  int v44; // r7
  int v45; // r0
  int v46; // r1
  float v47; // s18
  int v48; // r6
  int v49; // r7
  int v50; // r0
  int v51; // r1
  float v52; // s18
  int v53; // r6
  int v54; // r7
  int v55; // r0
  bool v56; // zf
  int v57; // r1
  float v58; // s18
  int v59; // r7
  int v60; // r8
  int v61; // r0
  int v62; // r0
  float v63; // s18
  int v64; // r7
  int v65; // r8
  int v66; // r0
  int v67; // r1
  float v68; // s18
  int v69; // r7
  int v70; // r8
  int v71; // r0
  int v72; // r1
  float v73; // s18
  int v74; // r7
  int v75; // r8
  int v76; // r0
  int v77; // r1
  float v78; // s18
  int v79; // r7
  int v80; // r8
  int v81; // r0
  int v82; // r1
  float v83; // s18
  int v84; // r7
  int v85; // r6
  int v86; // r0
  int v87; // r0
  float v88; // s18
  int v89; // r6
  int v90; // r7
  int v91; // r0
  int v92; // r1
  float v93; // s18
  int v94; // r6
  int v95; // r7
  int v96; // r0
  int v97; // r1
  float v98; // s18
  int v99; // r6
  int v100; // r7
  int v101; // r0
  int v102; // r1
  float v103; // s18
  int v104; // r6
  int v105; // r7
  int v106; // r0
  int v107; // r1
  float v108; // s18
  int v109; // r7
  int v110; // r6
  int v111; // r0
  int v112; // r0
  float v113; // s18
  int v114; // r6
  int v115; // r7
  int v116; // r0
  int v117; // r1
  float v118; // s18
  int v119; // r6
  int v120; // r7
  int v121; // r0
  int v122; // r1
  float v123; // s18
  int v124; // r6
  int v125; // r7
  int v126; // r0
  int v127; // r1
  float v128; // s18
  int v129; // r6
  int v130; // r7
  int v131; // r0
  unsigned int v132; // r1

  result = (StateMethodExecuter *)sub_607F6ABC(dword_60CC62E4);
  if ( !result )
  {
    result = (StateMethodExecuter *)sub_605094C4(a1 + 13672);
    if ( result == (StateMethodExecuter *)1 )
    {
      ((void (__fastcall *)(int))loc_604C08B0)(a1);
      if ( FIELD_U8(a1, 35564) )
      {
        v3 = (unsigned __int8)(*(_BYTE *)(FIELD_U32(dword_60CC6E04, 40) + sub_60508FA4(a1 + 13672) + 19712) - 1);
        v4 = SoundSystem_instance;
        if ( v3 <= 1 )
        {
LABEL_5:
          sub_60807EF0(v4, "SE_SYS_DECIDE", 0, 1);
          v5 = FIELD_U32(a1, 2648);
          v6 = FIELD_F32(a1, 2668);
          v7 = FIELD_U32(v5, 24);
          v8 = FIELD_U32(v5, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 200) = 0;
          v9 = FIELD_U32(a1, 2648);
          FIELD_U32(v9, 24) = v7;
          FIELD_F32(v9, 28) = v6 + 10000.0;
          FIELD_U32(v9, 32) = v8;
          FIELD_U8(v9, 64) |= 0x10u;
          v10 = FIELD_U32(a1, 2652);
          v11 = FIELD_F32(a1, 2672);
          v12 = FIELD_U32(v10, 24);
          v13 = FIELD_U32(v10, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 200) = 0;
          v14 = FIELD_U32(a1, 2652);
          FIELD_U32(v14, 24) = v12;
          FIELD_F32(v14, 28) = v11 + 10000.0;
          FIELD_U32(v14, 32) = v13;
          FIELD_U8(v14, 64) |= 0x10u;
          v15 = FIELD_U32(a1, 2656);
          v16 = FIELD_F32(a1, 2676);
          v17 = FIELD_U32(v15, 24);
          v18 = FIELD_U32(v15, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 200) = 0;
          v19 = FIELD_U32(a1, 2656);
          FIELD_U32(v19, 24) = v17;
          FIELD_F32(v19, 28) = v16 + 10000.0;
          FIELD_U32(v19, 32) = v18;
          FIELD_U8(v19, 64) |= 0x10u;
          v20 = FIELD_U32(a1, 2660);
          v21 = FIELD_F32(a1, 2680);
          v22 = FIELD_U32(v20, 24);
          v23 = FIELD_U32(v20, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 200) = 0;
          v24 = FIELD_U32(a1, 2660);
          FIELD_U32(v24, 24) = v22;
          FIELD_F32(v24, 28) = v21 + 10000.0;
          FIELD_U32(v24, 32) = v23;
          FIELD_U8(v24, 64) |= 0x10u;
          v25 = FIELD_U32(a1, 2664);
          v26 = FIELD_F32(a1, 2684);
          v27 = FIELD_U32(v25, 24);
          v28 = FIELD_U32(v25, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 200) = 0;
          v29 = FIELD_U32(a1, 2664);
          FIELD_U32(v29, 24) = v27;
          FIELD_F32(v29, 28) = v26 + 10000.0;
          FIELD_U32(v29, 32) = v28;
          FIELD_U8(v29, 64) |= 0x10u;
          v30 = &dword_60CA2858;
          return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v30);
        }
        result = (StateMethodExecuter *)sub_60807EF0(SoundSystem_instance, "SE_SYS_INVALID", 0, 1);
        FIELD_U8(a1, 35564) = 0;
      }
      else if ( FIELD_U8(a1, 1607) )
      {
        FIELD_U8(a1, 35563) = 0;
        result = *(StateMethodExecuter **)(a1 + 1592);
        if ( !result )
        {
          v57 = FIELD_U32(a1, 2648);
          v58 = FIELD_F32(a1, 2668);
          v59 = FIELD_U32(v57, 24);
          v60 = FIELD_U32(v57, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 200) = 0;
          v61 = FIELD_U32(a1, 2648);
          FIELD_U32(v61, 24) = v59;
          FIELD_F32(v61, 28) = v58 + 10000.0;
          FIELD_U32(v61, 32) = v60;
          FIELD_U8(v61, 64) |= 0x10u;
          v62 = FIELD_U32(a1, 2652);
          v63 = FIELD_F32(a1, 2672);
          v64 = FIELD_U32(v62, 24);
          v65 = FIELD_U32(v62, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 200) = 0;
          v66 = FIELD_U32(a1, 2652);
          FIELD_U32(v66, 24) = v64;
          FIELD_F32(v66, 28) = v63 + 10000.0;
          FIELD_U32(v66, 32) = v65;
          FIELD_U8(v66, 64) |= 0x10u;
          v67 = FIELD_U32(a1, 2656);
          v68 = FIELD_F32(a1, 2676);
          v69 = FIELD_U32(v67, 24);
          v70 = FIELD_U32(v67, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 200) = 0;
          v71 = FIELD_U32(a1, 2656);
          FIELD_U32(v71, 24) = v69;
          FIELD_F32(v71, 28) = v68 + 10000.0;
          FIELD_U32(v71, 32) = v70;
          FIELD_U8(v71, 64) |= 0x10u;
          v72 = FIELD_U32(a1, 2660);
          v73 = FIELD_F32(a1, 2680);
          v74 = FIELD_U32(v72, 24);
          v75 = FIELD_U32(v72, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 200) = 0;
          v76 = FIELD_U32(a1, 2660);
          FIELD_U32(v76, 24) = v74;
          FIELD_F32(v76, 28) = v73 + 10000.0;
          FIELD_U32(v76, 32) = v75;
          FIELD_U8(v76, 64) |= 0x10u;
          v77 = FIELD_U32(a1, 2664);
          v78 = FIELD_F32(a1, 2684);
          v79 = FIELD_U32(v77, 24);
          v80 = FIELD_U32(v77, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 200) = 0;
          v81 = FIELD_U32(a1, 2664);
          FIELD_U32(v81, 24) = v79;
          FIELD_F32(v81, 28) = v78 + 10000.0;
          FIELD_U32(v81, 32) = v80;
          FIELD_U8(v81, 64) |= 0x10u;
          v30 = &dword_60CA2918;
          return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v30);
        }
        if ( result == (StateMethodExecuter *)2 )
        {
          FIELD_U16(a1, 35576) = 256;
          v82 = FIELD_U32(a1, 2648);
          v83 = FIELD_F32(a1, 2668);
          v84 = FIELD_U32(v82, 24);
          v85 = FIELD_U32(v82, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 200) = 0;
          v86 = FIELD_U32(a1, 2648);
          FIELD_U32(v86, 24) = v84;
          FIELD_F32(v86, 28) = v83 + 10000.0;
          FIELD_U32(v86, 32) = v85;
          FIELD_U8(v86, 64) |= 0x10u;
          v87 = FIELD_U32(a1, 2652);
          v88 = FIELD_F32(a1, 2672);
          v89 = FIELD_U32(v87, 24);
          v90 = FIELD_U32(v87, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 200) = 0;
          v91 = FIELD_U32(a1, 2652);
          FIELD_U32(v91, 24) = v89;
          FIELD_F32(v91, 28) = v88 + 10000.0;
          FIELD_U32(v91, 32) = v90;
          FIELD_U8(v91, 64) |= 0x10u;
          v92 = FIELD_U32(a1, 2656);
          v93 = FIELD_F32(a1, 2676);
          v94 = FIELD_U32(v92, 24);
          v95 = FIELD_U32(v92, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 200) = 0;
          v96 = FIELD_U32(a1, 2656);
          FIELD_U32(v96, 24) = v94;
          FIELD_F32(v96, 28) = v93 + 10000.0;
          FIELD_U32(v96, 32) = v95;
          FIELD_U8(v96, 64) |= 0x10u;
          v97 = FIELD_U32(a1, 2660);
          v98 = FIELD_F32(a1, 2680);
          v99 = FIELD_U32(v97, 24);
          v100 = FIELD_U32(v97, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 200) = 0;
          v101 = FIELD_U32(a1, 2660);
          FIELD_U32(v101, 24) = v99;
          FIELD_F32(v101, 28) = v98 + 10000.0;
          FIELD_U32(v101, 32) = v100;
          FIELD_U8(v101, 64) |= 0x10u;
          v102 = FIELD_U32(a1, 2664);
          v103 = FIELD_F32(a1, 2684);
          v104 = FIELD_U32(v102, 24);
          v105 = FIELD_U32(v102, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 200) = 0;
          v106 = FIELD_U32(a1, 2664);
          FIELD_U32(v106, 24) = v104;
          FIELD_F32(v106, 28) = v103 + 10000.0;
          FIELD_U32(v106, 32) = v105;
          FIELD_U8(v106, 64) |= 0x10u;
          v30 = &dword_60CA2818;
          return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v30);
        }
        if ( result == (StateMethodExecuter *)1 )
        {
          FIELD_U16(a1, 35576) = 257;
          v31 = FIELD_U32(a1, 2648);
          v32 = FIELD_F32(a1, 2668);
          v33 = FIELD_U32(v31, 24);
          v34 = FIELD_U32(v31, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 200) = 0;
          v35 = FIELD_U32(a1, 2648);
          FIELD_U32(v35, 24) = v33;
          FIELD_F32(v35, 28) = v32 + 10000.0;
          FIELD_U32(v35, 32) = v34;
          FIELD_U8(v35, 64) |= 0x10u;
          v36 = FIELD_U32(a1, 2652);
          v37 = FIELD_F32(a1, 2672);
          v38 = FIELD_U32(v36, 24);
          v39 = FIELD_U32(v36, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 200) = 0;
          v40 = FIELD_U32(a1, 2652);
          FIELD_U32(v40, 24) = v38;
          FIELD_F32(v40, 28) = v37 + 10000.0;
          FIELD_U32(v40, 32) = v39;
          FIELD_U8(v40, 64) |= 0x10u;
          v41 = FIELD_U32(a1, 2656);
          v42 = FIELD_F32(a1, 2676);
          v43 = FIELD_U32(v41, 24);
          v44 = FIELD_U32(v41, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 200) = 0;
          v45 = FIELD_U32(a1, 2656);
          FIELD_U32(v45, 24) = v43;
          FIELD_F32(v45, 28) = v42 + 10000.0;
          FIELD_U32(v45, 32) = v44;
          FIELD_U8(v45, 64) |= 0x10u;
          v46 = FIELD_U32(a1, 2660);
          v47 = FIELD_F32(a1, 2680);
          v48 = FIELD_U32(v46, 24);
          v49 = FIELD_U32(v46, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 200) = 0;
          v50 = FIELD_U32(a1, 2660);
          FIELD_U32(v50, 24) = v48;
          FIELD_F32(v50, 28) = v47 + 10000.0;
          FIELD_U32(v50, 32) = v49;
          FIELD_U8(v50, 64) |= 0x10u;
          v51 = FIELD_U32(a1, 2664);
          v52 = FIELD_F32(a1, 2684);
          v53 = FIELD_U32(v51, 24);
          v54 = FIELD_U32(v51, 32);
          *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 196) = 0;
          *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 200) = 0;
          v55 = FIELD_U32(a1, 2664);
          FIELD_U32(v55, 24) = v53;
          FIELD_F32(v55, 28) = v52 + 10000.0;
          FIELD_U32(v55, 32) = v54;
          FIELD_U8(v55, 64) |= 0x10u;
          v30 = &dword_60CA2818;
          return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v30);
        }
      }
      else
      {
        result = (StateMethodExecuter *)sub_60502D80(a1 + 564);
        v56 = result == 0;
        if ( !result )
        {
          result = (StateMethodExecuter *)FIELD_U8(a1, 1610);
          v56 = result == 0;
        }
        if ( v56 )
        {
          result = (StateMethodExecuter *)FIELD_U8(a1, 35563);
          if ( !FIELD_U8(a1, 35563) )
          {
            result = (StateMethodExecuter *)FIELD_U8(a1, 1606);
            if ( !FIELD_U8(a1, 1606) )
            {
              FIELD_U8(a1, 1607) = 0;
              if ( (FIELD_U8(a1, 93) & 0x20) != 0 )
              {
                v132 = (unsigned __int8)(*(_BYTE *)(FIELD_U32(dword_60CC6E04, 40) + sub_60508FA4(a1 + 13672) + 19712)
                                       - 1);
                v4 = SoundSystem_instance;
                if ( v132 <= 1 )
                  goto LABEL_5;
                return (StateMethodExecuter *)sub_60807EF0(SoundSystem_instance, "SE_SYS_INVALID", 0, 1);
              }
              else
              {
                if ( sub_6045C130(a1 + 88) )
                {
                  FIELD_U32(a1, 1592) = 0;
                  sub_60502694(a1 + 564);
                  v107 = FIELD_U32(a1, 2648);
                  v108 = FIELD_F32(a1, 2668);
                  v109 = FIELD_U32(v107, 24);
                  v110 = FIELD_U32(v107, 32);
                  *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 196) = 0;
                  *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 200) = 0;
                  v111 = FIELD_U32(a1, 2648);
                  FIELD_U32(v111, 24) = v109;
                  FIELD_F32(v111, 28) = v108 + 10000.0;
                  FIELD_U32(v111, 32) = v110;
                  FIELD_U8(v111, 64) |= 0x10u;
                  v112 = FIELD_U32(a1, 2652);
                  v113 = FIELD_F32(a1, 2672);
                  v114 = FIELD_U32(v112, 24);
                  v115 = FIELD_U32(v112, 32);
                  *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 196) = 0;
                  *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 200) = 0;
                  v116 = FIELD_U32(a1, 2652);
                  FIELD_U32(v116, 24) = v114;
                  FIELD_F32(v116, 28) = v113 + 10000.0;
                  FIELD_U32(v116, 32) = v115;
                  FIELD_U8(v116, 64) |= 0x10u;
                  v117 = FIELD_U32(a1, 2656);
                  v118 = FIELD_F32(a1, 2676);
                  v119 = FIELD_U32(v117, 24);
                  v120 = FIELD_U32(v117, 32);
                  *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 196) = 0;
                  *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 200) = 0;
                  v121 = FIELD_U32(a1, 2656);
                  FIELD_U32(v121, 24) = v119;
                  FIELD_F32(v121, 28) = v118 + 10000.0;
                  FIELD_U32(v121, 32) = v120;
                  FIELD_U8(v121, 64) |= 0x10u;
                  v122 = FIELD_U32(a1, 2660);
                  v123 = FIELD_F32(a1, 2680);
                  v124 = FIELD_U32(v122, 24);
                  v125 = FIELD_U32(v122, 32);
                  *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 196) = 0;
                  *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 200) = 0;
                  v126 = FIELD_U32(a1, 2660);
                  FIELD_U32(v126, 24) = v124;
                  FIELD_F32(v126, 28) = v123 + 10000.0;
                  FIELD_U32(v126, 32) = v125;
                  FIELD_U8(v126, 64) |= 0x10u;
                  v127 = FIELD_U32(a1, 2664);
                  v128 = FIELD_F32(a1, 2684);
                  v129 = FIELD_U32(v127, 24);
                  v130 = FIELD_U32(v127, 32);
                  *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 196) = 0;
                  *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 200) = 0;
                  v131 = FIELD_U32(a1, 2664);
                  FIELD_U32(v131, 24) = v129;
                  FIELD_F32(v131, 28) = v128 + 10000.0;
                  FIELD_U32(v131, 32) = v130;
                  FIELD_U8(v131, 64) |= 0x10u;
                  v30 = &dword_60CA28F8;
                  return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v30);
                }
                result = (StateMethodExecuter *)(FIELD_U32(a1, 100) | FIELD_U32(a1, 92));
                if ( ((unsigned __int16)result & 0x140) != 0 )
                {
                  FIELD_U8(a1, 35576) = 1;
                  FIELD_U8(a1, 35577) = 0;
                  FIELD_U32(a1, 1592) = 1;
                  sub_60502694(a1 + 564);
                  v30 = &dword_60CA27F8;
                  return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v30);
                }
                if ( ((unsigned int)result & 0x10080) != 0 )
                {
                  FIELD_U8(a1, 35576) = 0;
                  FIELD_U8(a1, 35577) = 0;
                  FIELD_U32(a1, 1592) = 2;
                  sub_60502694(a1 + 564);
                  v30 = &dword_60CA27F8;
                  return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v30);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
