/* sub_605F28FC
 * address: 0x605F28FC   size: 2108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F28FC(int a1)
{
  __int64 v1; // d8
  __int64 v2; // d9
  __int64 v3; // d10
  __int64 v4; // d11
  __int64 v5; // d12
  __int64 v6; // d13
  __int64 v7; // d14
  __int64 v8; // d15
  float *v9; // r3
  unsigned __int8 *v10; // r7
  unsigned int v11; // r12
  unsigned int v12; // r0
  float *v13; // r1
  float v14; // s4
  int v15; // r0
  float v16; // s18
  unsigned int v17; // r6
  _BYTE *v18; // r5
  int *v19; // r1
  int *v20; // r2
  float *v21; // r10
  float *v22; // r4
  unsigned int v23; // r0
  bool v24; // cf
  unsigned int v25; // r0
  int v26; // r9
  _BYTE *v27; // r5
  float *v28; // r2
  float *v29; // r4
  float *v30; // r10
  float *v31; // r11
  unsigned __int8 v32; // r0
  float v33; // s4
  float v34; // s22
  float v35; // s28
  float v36; // s30
  float v37; // r8
  float *v38; // r0
  unsigned int v39; // r1
  float v40; // s20
  float v41; // s19
  float v42; // s17
  float v43; // s21
  float v44; // s24
  float v45; // s26
  _BYTE *v46; // r0
  float *v47; // r7
  float *v48; // r10
  float v49; // s17
  float v50; // s20
  int *v51; // r2
  int *v52; // r11
  int *v53; // r7
  float *v54; // r4
  int *v55; // r10
  unsigned int v56; // r0
  float v57; // s18
  float v58; // s2
  float v59; // s4
  float v60; // s18
  float v61; // s26
  float v62; // r7
  float v63; // s22
  float *v64; // r0
  float v65; // s20
  float v66; // s17
  float v67; // s30
  float v68; // s19
  float v69; // s24
  unsigned int v70; // r1
  float v71; // s28
  float *v72; // r0
  float *v73; // r2
  unsigned int v74; // r1
  int v75; // r10
  float *v76; // r0
  float *v77; // r5
  float v78; // s0
  float v79; // s30
  float v80; // s20
  int result; // r0
  unsigned int v82; // r4
  float *v83; // r5
  unsigned int v84; // r1
  float *v85; // [sp+4h] [bp-C4h]
  unsigned __int8 *v86; // [sp+8h] [bp-C0h]
  float *v87; // [sp+18h] [bp-B0h]
  float *v88; // [sp+20h] [bp-A8h]
  float *v89; // [sp+28h] [bp-A0h]
  int *v90; // [sp+2Ch] [bp-9Ch]
  float *v91; // [sp+2Ch] [bp-9Ch]
  unsigned int v92; // [sp+30h] [bp-98h]
  ActorBuildInfo buildInfo; // [sp+34h] [bp-94h] BYREF
  __int64 v94; // [sp+60h] [bp-68h]
  __int64 v95; // [sp+68h] [bp-60h]
  __int64 v96; // [sp+70h] [bp-58h]
  __int64 v97; // [sp+78h] [bp-50h]
  __int64 v98; // [sp+80h] [bp-48h]
  __int64 v99; // [sp+88h] [bp-40h]
  __int64 v100; // [sp+90h] [bp-38h]
  __int64 v101; // [sp+98h] [bp-30h]

  v94 = v1;
  v95 = v2;
  v96 = v3;
  v97 = v4;
  v98 = v5;
  v99 = v6;
  v100 = v7;
  v101 = v8;
  v9 = (float *)a1;
  v10 = (unsigned __int8 *)(a1 + 6318);
  v11 = FIELD_U8(a1, 6318);
  v12 = FIELD_U32(a1, 6312);
  v13 = (float *)((char *)sinLutTable + ((v12 >> 20) & 0xFF0));
  v14 = (float)(v12 & 0xFFFFFF);
  v15 = v10[1];
  v87 = v9;
  v92 = v11;
  v16 = (float)(*v13 + (float)((float)(v14 * v13[1]) * 0.000000059605)) + 1.0;
  if ( v15 == 1 )
  {
    v17 = v11 - 1;
    if ( v11 != 1 )
    {
LABEL_16:
      v26 = 1;
      v86 = v10;
      v27 = v9 + 1528;
      v28 = v9 + 1573;
      v29 = v9 + 1572;
      v88 = v9 + 1573;
      v30 = v9 + 1571;
      v85 = v9 + 1571;
      v91 = v9 + 1575;
      v89 = v9 + 1574;
      v31 = v9 + 1577;
      v32 = v11;
      while ( 1 )
      {
        v33 = (float)(v32 - 1);
        v34 = (float)((unsigned int)(float)(*v31
                                          * (float)((float)((float)(unsigned int)(v26 - 1)
                                                          + (float)(unsigned int)(v26 - 1))
                                                  / v33))
                    & 0xFFFFFF);
        if ( *v27 )
          goto LABEL_26;
        v35 = *v29;
        v36 = *v30;
        v37 = *v28;
        v38 = (float *)((char *)sinLutTable
                      + (((unsigned int)(float)(*v31
                                              * (float)((float)((float)(unsigned int)(v26 - 1)
                                                              + (float)(unsigned int)(v26 - 1))
                                                      / v33)) >> 20)
                       & 0xFF0));
        v39 = *((_DWORD *)v27 - 2);
        v40 = *v38;
        v41 = v38[1];
        v42 = v38[2];
        v43 = v38[3];
        v44 = *v91;
        v45 = *v89;
        if ( v39 )
          break;
        v47 = v30;
        v48 = v28;
        memset(&buildInfo.settings2, 0, 40);
        buildInfo.settings1 = *((_DWORD *)v27 - 1);
        buildInfo.profile = Profile__get(0x1B5u);
        buildInfo.position.x = *v47;
        buildInfo.position.y = *v29;
        buildInfo.position.z = *v48;
        buildInfo.field_20 = 0;
        v46 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
        if ( v46 )
        {
          *((_DWORD *)v27 - 2) = *((_DWORD *)v46 + 2);
          v10 = v86;
          v30 = v85;
LABEL_24:
          *((float *)v46 + 29) = v37;
          v49 = v42 + (float)(v43 * (float)(v34 * 0.000000059605));
          v50 = v40 + (float)(v41 * (float)(v34 * 0.000000059605));
          *((float *)v46 + 27) = v36 + (float)((float)((float)(v45 * v49) - (float)(v44 * v50)) - v45);
          *((float *)v46 + 28) = v35 + (float)((float)((float)(v44 * v49) + (float)(v45 * v50)) - v44);
          v46[7483] = 0;
LABEL_25:
          v28 = v88;
          goto LABEL_26;
        }
        v28 = v88;
        v10 = v86;
        v30 = v85;
LABEL_26:
        if ( v17 == v26 )
        {
          v9 = v87;
          if ( v17 >= v92 )
            goto LABEL_54;
LABEL_33:
          v51 = (int *)(v9 + 1573);
          v52 = (int *)(v9 + 1572);
          v53 = (int *)(v9 + 1571);
          v54 = &v9[3 * v17 + 1528];
          while ( 1 )
          {
            v55 = v51;
            buildInfo.settings1 = *v53;
            buildInfo.settings2 = *v52;
            buildInfo.parentId = *v51;
            LODWORD(buildInfo.position.x) = 1;
            LODWORD(buildInfo.position.y) = v17;
            LOBYTE(buildInfo.position.z) = FIELD_U8(LevelInfo_instance, 18);
            buildInfo.profile = (Profile *)2;
            if ( sub_605829C8(dword_60CAF15C, (int)&buildInfo) != 2 )
              break;
            ++v17;
            v54 += 3;
            v51 = v55;
            if ( v17 >= v92 )
              goto LABEL_54;
          }
          v56 = (unsigned int)(float)(v16 * v87[1577]);
          v57 = (float)(v56 & 0xFFFFFF);
          if ( *(_BYTE *)v54 )
          {
LABEL_38:
            ++v17;
            goto LABEL_54;
          }
          v61 = *(float *)v52;
          v63 = v87[1575];
          v73 = (float *)v55;
          v69 = v87[1574];
          v74 = *((_DWORD *)v54 - 2);
          v75 = *v55;
          v76 = (float *)((char *)sinLutTable + ((v56 >> 20) & 0xFF0));
          v65 = *v76;
          v66 = v76[1];
          v67 = v76[2];
          v68 = v76[3];
          v71 = v87[1571];
          if ( v74 )
          {
            v72 = (float *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v74);
            if ( !v72 )
            {
              *(_BYTE *)v54 = 1;
              goto LABEL_38;
            }
          }
          else
          {
            v77 = v73;
            memset(&buildInfo.settings2, 0, 40);
            buildInfo.settings1 = *(int *)(v54 - 1);
            buildInfo.profile = Profile__get(0x1B5u);
            LODWORD(buildInfo.position.x) = *v53;
            LODWORD(buildInfo.position.y) = *v52;
            buildInfo.position.z = *v77;
            buildInfo.field_20 = 0;
            v72 = (float *)ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
            if ( !v72 )
              goto LABEL_38;
            *(v54 - 2) = v72[2];
          }
          v78 = v57 * 0.000000059605;
          *((_DWORD *)v72 + 29) = v75;
          ++v17;
LABEL_53:
          v79 = v67 + (float)(v68 * v78);
          v80 = v65 + (float)(v66 * v78);
          v72[27] = v71 + (float)((float)((float)(v69 * v79) - (float)(v63 * v80)) - v69);
          v72[28] = v61 + (float)((float)((float)(v63 * v79) + (float)(v69 * v80)) - v63);
          *((_BYTE *)v72 + 7483) = 1;
          goto LABEL_54;
        }
        v32 = *v10;
        v27 += 12;
        ++v26;
      }
      v46 = (_BYTE *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v39);
      if ( v46 )
        goto LABEL_24;
      *v27 = 1;
      goto LABEL_25;
    }
    goto LABEL_31;
  }
  if ( v15 != 2 )
  {
    v17 = 0;
    v25 = v11 - 1;
    if ( v11 == 1 )
      goto LABEL_32;
    while ( (float)((float)((float)v17 + (float)v17) / (float)v25) <= v16 )
    {
      if ( ++v17 >= v25 )
        goto LABEL_16;
    }
    if ( v17 )
      goto LABEL_16;
LABEL_31:
    v17 = 0;
LABEL_32:
    if ( !v11 )
      goto LABEL_54;
    goto LABEL_33;
  }
  if ( !v11 )
  {
    v17 = 0;
    goto LABEL_54;
  }
  v17 = 1;
  v18 = v9 + 1528;
  v19 = (int *)(v9 + 1573);
  v20 = (int *)(v9 + 1572);
  v90 = (int *)(v9 + 1571);
  while ( 1 )
  {
    v21 = (float *)v19;
    v22 = (float *)v20;
    buildInfo.settings1 = *v90;
    buildInfo.settings2 = *v20;
    buildInfo.parentId = *v19;
    LODWORD(buildInfo.position.x) = 1;
    LODWORD(buildInfo.position.y) = v17 - 1;
    LOBYTE(buildInfo.position.z) = FIELD_U8(LevelInfo_instance, 18);
    buildInfo.profile = (Profile *)2;
    if ( sub_605829C8(dword_60CAF15C, (int)&buildInfo) != 2 )
      break;
    v23 = v17 + 1;
    v18 += 12;
    v20 = (int *)v22;
    v24 = v17++ >= v92;
    v19 = (int *)v21;
    if ( v24 )
    {
      v17 = v23 - 1;
      goto LABEL_54;
    }
  }
  v58 = v87[1577];
  v59 = (float)(*v10 - 1);
  v60 = (float)((unsigned int)(float)(v58 * (float)(0.0 / v59)) & 0xFFFFFF);
  if ( !*v18 )
  {
    v61 = *v22;
    v62 = *v21;
    v63 = v87[1575];
    v64 = (float *)((char *)sinLutTable + (((unsigned int)(float)(v58 * (float)(0.0 / v59)) >> 20) & 0xFF0));
    v65 = *v64;
    v66 = v64[1];
    v67 = v64[2];
    v68 = v64[3];
    v69 = v87[1574];
    v70 = *((_DWORD *)v18 - 2);
    v71 = v87[1571];
    if ( v70 )
    {
      v72 = (float *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v70);
      if ( !v72 )
      {
        *v18 = 1;
        goto LABEL_54;
      }
    }
    else
    {
      memset(&buildInfo.settings2, 0, 40);
      buildInfo.settings1 = *((_DWORD *)v18 - 1);
      buildInfo.profile = Profile__get(0x1B5u);
      LODWORD(buildInfo.position.x) = *v90;
      buildInfo.position.y = *v22;
      buildInfo.position.z = *v21;
      buildInfo.field_20 = 0;
      v72 = (float *)ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
      if ( !v72 )
        goto LABEL_54;
      *((float *)v18 - 2) = v72[2];
    }
    v78 = v60 * 0.000000059605;
    v72[29] = v62;
    goto LABEL_53;
  }
LABEL_54:
  result = v92;
  if ( v17 < v92 )
  {
    v82 = v92 - v17;
    v83 = &v87[3 * v17 + 1528];
    do
    {
      result = *(unsigned __int8 *)v83;
      if ( !*(_BYTE *)v83 )
      {
        v84 = *((_DWORD *)v83 - 2);
        if ( v84 )
        {
          result = ActorMgrRelated_getById(ActorMgr__instance + 27168, v84);
          if ( result )
            FIELD_U8(result, 7482) = 1;
          else
            *(_BYTE *)v83 = 1;
          *(v83 - 2) = 0.0;
        }
      }
      v83 += 3;
      --v82;
    }
    while ( v82 );
  }
  return result;
}
