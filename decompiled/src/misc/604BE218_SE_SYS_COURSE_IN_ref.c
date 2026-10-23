/* SE_SYS_COURSE_IN_ref
 * address: 0x604BE218   size: 2436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_COURSE_IN_ref(int a1)
{
  int result; // r0
  int v3; // r1
  float v4; // s18
  int v5; // r5
  int v6; // r7
  int v7; // r0
  int v8; // r0
  float v9; // s18
  int v10; // r5
  int v11; // r7
  int v12; // r0
  int v13; // r1
  float v14; // s18
  int v15; // r5
  int v16; // r7
  int v17; // r0
  int v18; // r1
  float v19; // s18
  int v20; // r5
  int v21; // r7
  int v22; // r0
  int v23; // r1
  float v24; // s18
  int v25; // r5
  int v26; // r7
  int v27; // r0
  bool v28; // zf
  int v29; // r1
  float v30; // s18
  int v31; // r7
  int v32; // r6
  int v33; // r0
  int v34; // r0
  float v35; // s18
  int v36; // r6
  int v37; // r7
  int v38; // r0
  int v39; // r1
  float v40; // s18
  int v41; // r6
  int v42; // r7
  int v43; // r0
  int v44; // r1
  float v45; // s18
  int v46; // r6
  int v47; // r7
  int v48; // r0
  int v49; // r1
  float v50; // s18
  int v51; // r6
  int v52; // r7
  int v53; // r0
  int *v54; // r1
  int v55; // r1
  float v56; // s18
  int v57; // r7
  int v58; // r6
  int v59; // r0
  int v60; // r0
  float v61; // s18
  int v62; // r6
  int v63; // r7
  int v64; // r0
  int v65; // r1
  float v66; // s18
  int v67; // r6
  int v68; // r7
  int v69; // r0
  int v70; // r1
  float v71; // s18
  int v72; // r6
  int v73; // r7
  int v74; // r0
  int v75; // r1
  float v76; // s18
  int v77; // r6
  int v78; // r7
  int v79; // r0
  int v80; // r1
  float v81; // s18
  int v82; // r7
  int v83; // r6
  int v84; // r0
  int v85; // r0
  float v86; // s18
  int v87; // r6
  int v88; // r7
  int v89; // r0
  int v90; // r1
  float v91; // s18
  int v92; // r6
  int v93; // r7
  int v94; // r0
  int v95; // r1
  float v96; // s18
  int v97; // r6
  int v98; // r7
  int v99; // r0
  int v100; // r1
  float v101; // s18
  int v102; // r6
  int v103; // r7
  int v104; // r0

  result = sub_605094C4(a1 + 13672);
  if ( result != 1 )
    return result;
  if ( FIELD_U8(a1, 1607) )
  {
    result = FIELD_U32(a1, 1592);
    if ( result != 3 )
    {
      if ( result == 4 )
      {
        sub_604C0EF0(a1);
        v3 = FIELD_U32(a1, 2648);
        v4 = FIELD_F32(a1, 2668);
        v5 = FIELD_U32(v3, 24);
        v6 = FIELD_U32(v3, 32);
        *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 196) = 0;
        *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 200) = 0;
        v7 = FIELD_U32(a1, 2648);
        FIELD_U32(v7, 24) = v5;
        FIELD_F32(v7, 28) = v4 + 10000.0;
        FIELD_U32(v7, 32) = v6;
        FIELD_U8(v7, 64) |= 0x10u;
        v8 = FIELD_U32(a1, 2652);
        v9 = FIELD_F32(a1, 2672);
        v10 = FIELD_U32(v8, 24);
        v11 = FIELD_U32(v8, 32);
        *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 196) = 0;
        *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 200) = 0;
        v12 = FIELD_U32(a1, 2652);
        FIELD_U32(v12, 24) = v10;
        FIELD_F32(v12, 28) = v9 + 10000.0;
        FIELD_U32(v12, 32) = v11;
        FIELD_U8(v12, 64) |= 0x10u;
        v13 = FIELD_U32(a1, 2656);
        v14 = FIELD_F32(a1, 2676);
        v15 = FIELD_U32(v13, 24);
        v16 = FIELD_U32(v13, 32);
        *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 196) = 0;
        *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 200) = 0;
        v17 = FIELD_U32(a1, 2656);
        FIELD_U32(v17, 24) = v15;
        FIELD_F32(v17, 28) = v14 + 10000.0;
        FIELD_U32(v17, 32) = v16;
        FIELD_U8(v17, 64) |= 0x10u;
        v18 = FIELD_U32(a1, 2660);
        v19 = FIELD_F32(a1, 2680);
        v20 = FIELD_U32(v18, 24);
        v21 = FIELD_U32(v18, 32);
        *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 196) = 0;
        *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 200) = 0;
        v22 = FIELD_U32(a1, 2660);
        FIELD_U32(v22, 24) = v20;
        FIELD_F32(v22, 28) = v19 + 10000.0;
        FIELD_U32(v22, 32) = v21;
        FIELD_U8(v22, 64) |= 0x10u;
        v23 = FIELD_U32(a1, 2664);
        v24 = FIELD_F32(a1, 2684);
        v25 = FIELD_U32(v23, 24);
        v26 = FIELD_U32(v23, 32);
        *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 196) = 0;
        *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 200) = 0;
        v27 = FIELD_U32(a1, 2664);
        FIELD_U32(v27, 24) = v25;
        FIELD_F32(v27, 28) = v24 + 10000.0;
        FIELD_U32(v27, 32) = v26;
        FIELD_U8(v27, 64) |= 0x10u;
        sub_60502548(a1 + 564);
        StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)&dword_60CA2938);
        return sub_60807EF0(SoundSystem_instance, "SE_SYS_COURSE_IN", 0, 1);
      }
      return result;
    }
    v29 = FIELD_U32(a1, 2648);
    v30 = FIELD_F32(a1, 2668);
    v31 = FIELD_U32(v29, 24);
    v32 = FIELD_U32(v29, 32);
    *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 196) = 0;
    *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 200) = 0;
    v33 = FIELD_U32(a1, 2648);
    FIELD_U32(v33, 24) = v31;
    FIELD_F32(v33, 28) = v30 + 10000.0;
    FIELD_U32(v33, 32) = v32;
    FIELD_U8(v33, 64) |= 0x10u;
    v34 = FIELD_U32(a1, 2652);
    v35 = FIELD_F32(a1, 2672);
    v36 = FIELD_U32(v34, 24);
    v37 = FIELD_U32(v34, 32);
    *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 196) = 0;
    *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 200) = 0;
    v38 = FIELD_U32(a1, 2652);
    FIELD_U32(v38, 24) = v36;
    FIELD_F32(v38, 28) = v35 + 10000.0;
    FIELD_U32(v38, 32) = v37;
    FIELD_U8(v38, 64) |= 0x10u;
    v39 = FIELD_U32(a1, 2656);
    v40 = FIELD_F32(a1, 2676);
    v41 = FIELD_U32(v39, 24);
    v42 = FIELD_U32(v39, 32);
    *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 196) = 0;
    *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 200) = 0;
    v43 = FIELD_U32(a1, 2656);
    FIELD_U32(v43, 24) = v41;
    FIELD_F32(v43, 28) = v40 + 10000.0;
    FIELD_U32(v43, 32) = v42;
    FIELD_U8(v43, 64) |= 0x10u;
    v44 = FIELD_U32(a1, 2660);
    v45 = FIELD_F32(a1, 2680);
    v46 = FIELD_U32(v44, 24);
    v47 = FIELD_U32(v44, 32);
    *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 196) = 0;
    *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 200) = 0;
    v48 = FIELD_U32(a1, 2660);
    FIELD_U32(v48, 24) = v46;
    FIELD_F32(v48, 28) = v45 + 10000.0;
    FIELD_U32(v48, 32) = v47;
    FIELD_U8(v48, 64) |= 0x10u;
    v49 = FIELD_U32(a1, 2664);
    v50 = FIELD_F32(a1, 2684);
    v51 = FIELD_U32(v49, 24);
    v52 = FIELD_U32(v49, 32);
    *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 196) = 0;
    *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 200) = 0;
    v53 = FIELD_U32(a1, 2664);
    FIELD_U32(v53, 24) = v51;
    FIELD_F32(v53, 28) = v50 + 10000.0;
    FIELD_U32(v53, 32) = v52;
    FIELD_U8(v53, 64) |= 0x10u;
    v54 = &dword_60CA28D8;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v54);
  }
  result = sub_60502D80(a1 + 564);
  v28 = result == 0;
  if ( !result )
  {
    result = FIELD_U8(a1, 1610);
    v28 = result == 0;
  }
  if ( v28 )
  {
    result = FIELD_U8(a1, 1606);
    if ( !FIELD_U8(a1, 1606) )
    {
      FIELD_U8(a1, 1607) = 0;
      result = FIELD_U32(a1, 92);
      if ( (result & 0x2000) != 0 )
      {
        FIELD_U32(a1, 1592) = 4;
        sub_60502694(a1 + 564);
        sub_604C0EF0(a1);
        v80 = FIELD_U32(a1, 2648);
        v81 = FIELD_F32(a1, 2668);
        v82 = FIELD_U32(v80, 24);
        v83 = FIELD_U32(v80, 32);
        *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 196) = 0;
        *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 200) = 0;
        v84 = FIELD_U32(a1, 2648);
        FIELD_U32(v84, 24) = v82;
        FIELD_F32(v84, 28) = v81 + 10000.0;
        FIELD_U32(v84, 32) = v83;
        FIELD_U8(v84, 64) |= 0x10u;
        v85 = FIELD_U32(a1, 2652);
        v86 = FIELD_F32(a1, 2672);
        v87 = FIELD_U32(v85, 24);
        v88 = FIELD_U32(v85, 32);
        *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 196) = 0;
        *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 200) = 0;
        v89 = FIELD_U32(a1, 2652);
        FIELD_U32(v89, 24) = v87;
        FIELD_F32(v89, 28) = v86 + 10000.0;
        FIELD_U32(v89, 32) = v88;
        FIELD_U8(v89, 64) |= 0x10u;
        v90 = FIELD_U32(a1, 2656);
        v91 = FIELD_F32(a1, 2676);
        v92 = FIELD_U32(v90, 24);
        v93 = FIELD_U32(v90, 32);
        *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 196) = 0;
        *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 200) = 0;
        v94 = FIELD_U32(a1, 2656);
        FIELD_U32(v94, 24) = v92;
        FIELD_F32(v94, 28) = v91 + 10000.0;
        FIELD_U32(v94, 32) = v93;
        FIELD_U8(v94, 64) |= 0x10u;
        v95 = FIELD_U32(a1, 2660);
        v96 = FIELD_F32(a1, 2680);
        v97 = FIELD_U32(v95, 24);
        v98 = FIELD_U32(v95, 32);
        *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 196) = 0;
        *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 200) = 0;
        v99 = FIELD_U32(a1, 2660);
        FIELD_U32(v99, 24) = v97;
        FIELD_F32(v99, 28) = v96 + 10000.0;
        FIELD_U32(v99, 32) = v98;
        FIELD_U8(v99, 64) |= 0x10u;
        v100 = FIELD_U32(a1, 2664);
        v101 = FIELD_F32(a1, 2684);
        v102 = FIELD_U32(v100, 24);
        v103 = FIELD_U32(v100, 32);
        *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 196) = 0;
        *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 200) = 0;
        v104 = FIELD_U32(a1, 2664);
        FIELD_U32(v104, 24) = v102;
        FIELD_F32(v104, 28) = v101 + 10000.0;
        FIELD_U32(v104, 32) = v103;
        FIELD_U8(v104, 64) |= 0x10u;
        StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)&dword_60CA2898);
        return sub_60807EF0(SoundSystem_instance, "SE_SYS_COURSE_IN", 0, 1);
      }
      if ( (result & 0x4000) != 0 )
      {
        FIELD_U32(a1, 1592) = 3;
        sub_60502694(a1 + 564);
        v55 = FIELD_U32(a1, 2648);
        v56 = FIELD_F32(a1, 2668);
        v57 = FIELD_U32(v55, 24);
        v58 = FIELD_U32(v55, 32);
        *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 196) = 0;
        *(_DWORD *)(sub_608DE61C(a1 + 616, 0) - FIELD_U32(a1, 628) + 200) = 0;
        v59 = FIELD_U32(a1, 2648);
        FIELD_U32(v59, 24) = v57;
        FIELD_F32(v59, 28) = v56 + 10000.0;
        FIELD_U32(v59, 32) = v58;
        FIELD_U8(v59, 64) |= 0x10u;
        v60 = FIELD_U32(a1, 2652);
        v61 = FIELD_F32(a1, 2672);
        v62 = FIELD_U32(v60, 24);
        v63 = FIELD_U32(v60, 32);
        *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 196) = 0;
        *(_DWORD *)(sub_608DE61C(a1 + 616, 1) - FIELD_U32(a1, 628) + 200) = 0;
        v64 = FIELD_U32(a1, 2652);
        FIELD_U32(v64, 24) = v62;
        FIELD_F32(v64, 28) = v61 + 10000.0;
        FIELD_U32(v64, 32) = v63;
        FIELD_U8(v64, 64) |= 0x10u;
        v65 = FIELD_U32(a1, 2656);
        v66 = FIELD_F32(a1, 2676);
        v67 = FIELD_U32(v65, 24);
        v68 = FIELD_U32(v65, 32);
        *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 196) = 0;
        *(_DWORD *)(sub_608DE61C(a1 + 616, 2) - FIELD_U32(a1, 628) + 200) = 0;
        v69 = FIELD_U32(a1, 2656);
        FIELD_U32(v69, 24) = v67;
        FIELD_F32(v69, 28) = v66 + 10000.0;
        FIELD_U32(v69, 32) = v68;
        FIELD_U8(v69, 64) |= 0x10u;
        v70 = FIELD_U32(a1, 2660);
        v71 = FIELD_F32(a1, 2680);
        v72 = FIELD_U32(v70, 24);
        v73 = FIELD_U32(v70, 32);
        *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 196) = 0;
        *(_DWORD *)(sub_608DE61C(a1 + 616, 3) - FIELD_U32(a1, 628) + 200) = 0;
        v74 = FIELD_U32(a1, 2660);
        FIELD_U32(v74, 24) = v72;
        FIELD_F32(v74, 28) = v71 + 10000.0;
        FIELD_U32(v74, 32) = v73;
        FIELD_U8(v74, 64) |= 0x10u;
        v75 = FIELD_U32(a1, 2664);
        v76 = FIELD_F32(a1, 2684);
        v77 = FIELD_U32(v75, 24);
        v78 = FIELD_U32(v75, 32);
        *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 196) = 0;
        *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 200) = 0;
        v79 = FIELD_U32(a1, 2664);
        FIELD_U32(v79, 24) = v77;
        FIELD_F32(v79, 28) = v76 + 10000.0;
        FIELD_U32(v79, 32) = v78;
        FIELD_U8(v79, 64) |= 0x10u;
        v54 = &dword_60CA28B8;
        return (int)StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v54);
      }
    }
  }
  return result;
}
