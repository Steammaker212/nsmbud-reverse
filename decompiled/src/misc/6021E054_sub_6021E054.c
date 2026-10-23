/* sub_6021E054
 * address: 0x6021E054   size: 2064   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021E054(_DWORD *r0_0)
{
  unsigned int v1; // r6
  int v2; // r0
  int *v3; // r0
  int v4; // r2
  int v5; // r1
  int v6; // r7
  int v7; // r6
  int v8; // r0
  bool v9; // zf
  int v10; // r7
  _BOOL4 v11; // r0
  int v12; // r5
  int v13; // r5
  int v14; // r8
  unsigned int v15; // r6
  int v16; // r7
  float *v17; // r0
  float v18; // r8
  float v19; // r9
  float v20; // r10
  unsigned int v21; // r5
  unsigned int v22; // r5
  int v23; // r0
  int v24; // r1
  int v25; // r7
  int v26; // r0
  int v27; // r2
  int v28; // r3
  int v29; // r7
  _DWORD *v30; // r0
  float *v31; // r0
  int *v32; // r5
  int v33; // r10
  signed int v34; // r5
  int v35; // r0
  int v36; // r0
  unsigned __int64 v37; // r0
  _BOOL4 v38; // r5
  int v39; // r0
  int *v40; // r6
  int v41; // r0
  char v42; // r8
  int v43; // r9
  unsigned __int64 v44; // kr00_8
  int v45; // r0
  char v46; // r1
  int v47; // r0
  int v48; // r1
  bool v49; // zf
  int v51; // [sp+20h] [bp-138h]
  int *v52; // [sp+28h] [bp-130h]
  float v54; // [sp+64h] [bp-F4h]
  int v55; // [sp+64h] [bp-F4h]
  unsigned int a1; // [sp+68h] [bp-F0h]
  unsigned int v57; // [sp+6Ch] [bp-ECh]
  _DWORD v58[2]; // [sp+70h] [bp-E8h] BYREF
  signed int v59; // [sp+78h] [bp-E0h]
  int v60; // [sp+7Ch] [bp-DCh] BYREF
  int v61; // [sp+80h] [bp-D8h]
  _DWORD *v62; // [sp+84h] [bp-D4h]
  int v63; // [sp+88h] [bp-D0h] BYREF
  int v64; // [sp+A0h] [bp-B8h] BYREF
  int v65; // [sp+A4h] [bp-B4h]
  int v66; // [sp+A8h] [bp-B0h]
  int v67; // [sp+ACh] [bp-ACh] BYREF
  _DWORD v68[3]; // [sp+CCh] [bp-8Ch] BYREF
  _DWORD v69[6]; // [sp+D8h] [bp-80h] BYREF
  ActorBuildInfo buildInfo; // [sp+F0h] [bp-68h] BYREF
  int v71; // [sp+11Ch] [bp-3Ch] BYREF
  int v72; // [sp+120h] [bp-38h]
  int v73; // [sp+124h] [bp-34h]
  int v74; // [sp+128h] [bp-30h]
  int v75; // [sp+12Ch] [bp-2Ch]
  int v76; // [sp+130h] [bp-28h]

  v1 = 0;
  v52 = &dword_60CC6D78;
  do
  {
    v2 = sub_6021EE50(1, v1);
    if ( v2 == -1 )
      goto LABEL_86;
    a1 = v2;
    v57 = v1;
    v3 = (int *)sub_60186FEC(dword_60CC6D78 + 984, 1u, v1);
    v71 = *v3;
    v4 = v3[1];
    v72 = v4;
    v5 = v3[2];
    v73 = v5;
    v6 = v3[3];
    v7 = v3[4];
    v8 = v3[5];
    v74 = v6;
    v75 = v7;
    v76 = v8;
    if ( v71 != -1 )
    {
      v9 = v4 == -1;
      if ( v4 != -1 )
        v9 = v5 == -1;
      if ( !v9 )
      {
        v10 = v74;
        v11 = sub_601EAA9C(dword_60C8B144, -1);
        v12 = v74;
        if ( v11 && v74 >= 1 )
          v12 = --v74;
        v1 = v57;
        memset(&buildInfo, 0, sizeof(buildInfo));
        if ( v12 )
        {
          sub_60186FC0(dword_60CC6D78 + 984, 1u, v57, (int)&v71);
          goto LABEL_86;
        }
        if ( v10 )
        {
          v51 = v10;
          v29 = 0;
          v68[0] = 1;
          v68[1] = 0;
          memset(v69, 255, 20);
          v68[2] = 0;
          if ( v57 )
          {
            if ( r0_0[4] )
            {
              v29 = 1;
              v69[0] = 0;
            }
            else
            {
              v29 = 0;
            }
            if ( v57 == 1 )
              goto LABEL_40;
          }
          if ( r0_0[5] )
          {
            v30 = (_DWORD *)((unsigned int)v69 | (4 * v29++));
            *v30 = 1;
          }
          if ( v57 != 2 )
          {
LABEL_40:
            if ( r0_0[6] )
              v69[v29++] = 2;
            if ( v57 == 3 )
              goto LABEL_90;
          }
          if ( r0_0[7] )
            v69[v29++] = 3;
          if ( v57 != 4 )
          {
LABEL_90:
            if ( r0_0[8] )
            {
              v69[v29++] = 4;
LABEL_48:
              v64 = 0;
              v65 = 0;
              v66 = 0;
              sub_608DEB0C(&v64, 8, (int)&v67);
              v60 = 0;
              v61 = 0;
              v62 = 0;
              sub_608DEB0C(&v60, 6, (int)&v63);
              v58[0] = 1;
              v58[1] = 0;
              v59 = 0;
              v33 = sub_601A443C(dword_60C89E18, 1, 0);
              if ( FIELD_S32(v33, 28) >= 1 )
              {
                v34 = 0;
                do
                {
                  if ( sub_60183038(v33, v34, 8) )
                  {
                    v59 = v34;
                    v35 = sub_601DFFE4((int)v58);
                    if ( v64 < v65 )
                      *(_DWORD *)(v66 + 4 * v64++) = v35;
                  }
                  if ( sub_60183038(v33, v34, 16) )
                  {
                    v59 = v34;
                    v36 = sub_601DFFE4((int)v58);
                    if ( v60 < v61 )
                      v62[v60++] = v36;
                  }
                  ++v34;
                }
                while ( v34 < FIELD_U32(v33, 28) );
              }
              v37 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance) * (unsigned __int64)(unsigned int)v29;
              v38 = 0;
              if ( HIDWORD(v37) >= 5 )
                HIDWORD(v37) = 0;
              v39 = *(_DWORD *)(sub_60186FEC(dword_60CC6D78 + 984, 1u, v69[HIDWORD(v37)]) + 8);
              if ( v39 != *(_DWORD *)(*v62 + 96)
                && v39 != *(_DWORD *)(v62[1] + 96)
                && v39 != *(_DWORD *)(v62[2] + 96)
                && v39 != *(_DWORD *)(v62[3] + 96)
                && v39 != *(_DWORD *)(v62[4] + 96) )
              {
                v38 = v39 != *(_DWORD *)(v62[5] + 96);
              }
              v40 = &v60;
              if ( v38 )
                v40 = &v64;
              v41 = 6;
              if ( v38 )
                v41 = 8;
              v55 = v41;
              do
              {
                v42 = 0;
                v43 = 1;
                v44 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance) * (unsigned __int64)(unsigned int)v55;
                do
                {
                  v45 = sub_60186FEC(dword_60CC6D78 + 984, 1u, v69[(_DWORD)v44]);
                  v32 = *(int **)(*(_DWORD *)(v40[2] + 4 * HIDWORD(v44)) + 96);
                  v46 = 0;
                  v9 = FIELD_U32(v45, 8) == (_DWORD)v32;
                  v47 = 0;
                  if ( v9 )
                    v46 = 1;
                  else
                    v47 = 1;
                  v42 |= v46;
                  if ( v43 >= v29 )
                    break;
                  ++v43;
                }
                while ( v47 );
              }
              while ( (v42 & 1) != 0 );
              v71 = 1;
              v72 = 0;
              v54 = 0.0;
              v73 = (int)v32;
              v31 = (float *)sub_601DFFE4((int)&v71);
              v1 = v57;
              v10 = v51;
              v19 = 0.0;
              v20 = 0.0;
              goto LABEL_79;
            }
          }
          if ( v29 > 0 )
            goto LABEL_48;
          sub_6021F784(r0_0, &v71, v68, v57);
          v31 = (float *)sub_601DFFE4((int)&v71);
          v19 = v31[19];
          v20 = v31[20];
          v32 = v52;
          v10 = v51;
          v54 = v31[18];
          v48 = *((_DWORD *)v31 + 24);
          v71 = 1;
          v72 = 0;
          v73 = v48;
        }
        else
        {
          v31 = (float *)sub_601DFFE4((int)&v71);
          v32 = v52;
          v54 = v31[18];
          v19 = v31[19];
          v20 = v31[20];
        }
LABEL_79:
        r0_0[v1 + 4] = v31;
        v49 = a1 == 893;
        if ( a1 != 893 )
          v49 = v10 == 0;
        if ( !v49 )
          sub_6021F50C(dword_60C8D4EC, &v71, 1, v1);
        v52 = v32;
        v21 = a1;
        v18 = v54;
        goto LABEL_84;
      }
    }
    memset(&buildInfo, 0, sizeof(buildInfo));
    v13 = sub_601A443C(dword_60C89E18, 1, 0);
    v14 = -1;
    if ( FIELD_S32(v13, 28) >= 1 )
    {
      v15 = 0;
      v16 = dword_60AFD488[v57 + 5];
      while ( !sub_60183038(v13, v15, v16) )
      {
        if ( (signed int)++v15 >= FIELD_U32(v13, 28) )
          goto LABEL_18;
      }
      v14 = v15;
    }
LABEL_18:
    v1 = v57;
    v71 = 1;
    v72 = 0;
    v73 = v14;
    v17 = (float *)sub_601DFFE4((int)&v71);
    v18 = v17[18];
    v19 = v17[19];
    v20 = v17[20];
    r0_0[v57 + 4] = v17;
    v21 = a1;
    if ( a1 != 893 )
    {
      v22 = v57;
      if ( v57 != 1 )
        v22 = 0;
      v23 = sub_60187054(dword_60CC6D78 + 984, 1u, v22);
      v24 = v57;
      v25 = v23;
      v26 = 4;
      if ( v57 )
        v24 = 3;
      else
        v26 = 1;
      v27 = v25;
      do
      {
        v28 = v24;
        if ( v27 <= v26 )
          v28 = v27 + 1;
        v27 = v28;
      }
      while ( dword_60AFD3B0[v28 + 6] == -1 );
      sub_60187030(dword_60CC6D78 + 984, 1u, v22, v28);
      v76 = dword_60AFD3B0[v25 + 6];
      v1 = v57;
      sub_60186FC0(dword_60CC6D78 + 984, 1u, v57, (int)&v71);
      v21 = a1;
      goto LABEL_85;
    }
LABEL_84:
    sub_60186FC0(dword_60CC6D78 + 984, 1u, v1, (int)&v71);
LABEL_85:
    buildInfo.settings1 = 0;
    buildInfo.profile = Profile__get(v21);
    buildInfo.position.x = v18;
    buildInfo.position.y = v19;
    buildInfo.position.z = v20;
    buildInfo.field_1C = 0;
    buildInfo.eventId2 = 1;
    buildInfo.field_20 = 0;
    buildInfo.linkId = v1;
    ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
LABEL_86:
    ++v1;
  }
  while ( v1 != 5 );
  return 1;
}
