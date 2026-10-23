/* CollisionMgr_process
 * address: 0x6014C6E4   size: 2344   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall CollisionMgr_process(_BYTE *a1, float result)
{
  int v3; // r2
  int v4; // r1
  _BYTE *v5; // r0
  int v6; // r2
  bool v7; // cc
  float *v8; // r1
  int v9; // r0
  float v10; // s0
  float v11; // s2
  int v12; // r0
  int v13; // r2
  float *v14; // r1
  int v15; // r0
  bool v16; // cc
  int v17; // r0
  float v18; // s0
  float v19; // s2
  int v20; // r2
  float *v21; // r1
  int v22; // r0
  bool v23; // cc
  int v24; // r0
  float v25; // s2
  float v26; // s0
  float *v27; // r1
  float *v28; // r2
  int v29; // r9
  float *v30; // r8
  float v31; // s18
  float v32; // s20
  _BOOL4 v33; // r5
  _BOOL4 v34; // r6
  float v35; // s16
  int v36; // r3
  _BYTE *v37; // r7
  int v38; // r7
  float *v39; // lr
  float *v40; // r7
  int v41; // r12
  signed int v42; // lr
  int v43; // r3
  float v44; // s0
  int *v45; // r0
  int v46; // r1
  int v47; // r0
  int v48; // r0
  int v49; // r1
  int v50; // r1
  int v51; // r1
  bool v52; // zf
  int v53; // r2
  _BYTE *v54; // r1
  _BOOL4 v55; // r2
  int v56; // r2
  int v57; // r2
  _BYTE *v58; // r0
  bool v59; // zf
  int v60; // r1
  bool v61; // zf
  bool v62; // zf
  int v63; // r1
  _BYTE *v64; // r6
  unsigned int *v65; // r7
  int v66; // r0
  _BYTE *v67; // r5
  bool v68; // zf
  int v69; // r0
  _BYTE *v70; // r9
  _BYTE *v71; // r6
  int v72; // r1
  int v73; // r0
  bool v74; // zf
  bool v75; // zf
  int v76; // r5
  int v77; // r11
  int v78; // r7
  int v79; // r0
  bool v80; // zf
  bool v81; // zf
  int v82; // r6
  int v83; // r1
  int v84; // r0
  int v85; // r1
  int v86; // r3
  bool v87; // vf
  int v88; // r0
  float v89; // s0
  int v90; // r0
  _DWORD v91[2]; // [sp+0h] [bp-60h] BYREF
  __int16 v92; // [sp+8h] [bp-58h] BYREF
  char v93; // [sp+Ah] [bp-56h]
  char v94; // [sp+Bh] [bp-55h]
  int v95; // [sp+Ch] [bp-54h]
  _BYTE *v96; // [sp+10h] [bp-50h]
  _DWORD v97[18]; // [sp+18h] [bp-48h] BYREF

  if ( !a1[2337] )
    return result;
  CollisionMgr_process_helper_14D020(a1);
  if ( !a1[2352] && !a1[2351] && !a1[2349] && !a1[2350] )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 20))(a1);
    return result;
  }
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 20))(a1);
  CollisionMgr_process_helper((int)a1);
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 40))(a1);
  ((void (__fastcall *)(_BYTE *))sub_6014D680)(a1);
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 44))(a1);
  ((void (__fastcall *)(_BYTE *))loc_6014D97C)(a1);
  v3 = *((_DWORD *)a1 + 556);
  if ( (v3 & 1) != 0 )
  {
    v4 = *((_DWORD *)a1 + 643);
    if ( v4 <= 5 )
    {
      v5 = &a1[56 * v4];
      if ( v5[3603] )
      {
        if ( (v3 & 0x10400) != 0x400 )
          goto LABEL_13;
        v6 = *((_DWORD *)a1 + 642);
        v7 = v6 < 5;
        if ( v6 <= 5 )
          v7 = v4 < v6;
        if ( v7 && a1[56 * v6 + 3267] )
        {
          v9 = *((_DWORD *)a1 + 551);
          v11 = 0.0;
          v10 = FIELD_F32(v9, 4);
        }
        else
        {
LABEL_13:
          v8 = (float *)(v5 + 3624);
          v9 = *((_DWORD *)a1 + 551);
          v10 = FIELD_F32(v9, 4);
          v11 = *v8 - v10;
        }
        FIELD_F32(v9, 4) = v10 + v11;
      }
    }
  }
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 48))(a1);
  CollisionMgr_process_helper_14DDD0(a1);
  v12 = *((_DWORD *)a1 + 556);
  if ( (v12 & 0x10400) == 0x400 )
  {
    v13 = *((_DWORD *)a1 + 642);
    if ( v13 <= 5 )
    {
      v14 = (float *)&a1[56 * v13];
      if ( *((_BYTE *)v14 + 3267) )
      {
        if ( (v12 & 1) == 0 )
          goto LABEL_22;
        v15 = *((_DWORD *)a1 + 643);
        v16 = v15 <= 5;
        if ( v15 <= 5 )
          v16 = v13 <= v15;
        if ( v16 && a1[56 * v15 + 3603] )
        {
          v17 = *((_DWORD *)a1 + 551);
          v19 = 0.0;
          v18 = FIELD_F32(v17, 4);
        }
        else
        {
LABEL_22:
          v17 = *((_DWORD *)a1 + 551);
          v18 = FIELD_F32(v17, 4);
          v19 = v14[822] - v18;
        }
        FIELD_F32(v17, 4) = v18 + v19;
        v12 = *((_DWORD *)a1 + 556);
      }
    }
  }
  if ( (v12 & 0x10401) == 0x400 )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 44))(a1);
    ((void (__fastcall *)(_BYTE *))loc_6014D97C)(a1);
    v12 = *((_DWORD *)a1 + 556);
    if ( (v12 & 1) != 0 )
    {
      v20 = *((_DWORD *)a1 + 643);
      if ( v20 <= 5 )
      {
        v21 = (float *)&a1[56 * v20];
        if ( *((_BYTE *)v21 + 3603) )
        {
          if ( (v12 & 0x10400) != 0x400 )
            goto LABEL_35;
          v22 = *((_DWORD *)a1 + 642);
          v23 = v22 < 5;
          if ( v22 <= 5 )
            v23 = v20 < v22;
          if ( v23 && a1[56 * v22 + 3267] )
          {
            v24 = *((_DWORD *)a1 + 551);
            v25 = 0.0;
            v26 = FIELD_F32(v24, 4);
          }
          else
          {
LABEL_35:
            v24 = *((_DWORD *)a1 + 551);
            v26 = FIELD_F32(v24, 4);
            v25 = v21[906] - v26;
          }
          FIELD_F32(v24, 4) = v26 + v25;
          v12 = *((_DWORD *)a1 + 556);
        }
      }
    }
  }
  v27 = *((float **)a1 + 551);
  v28 = *((float **)a1 + 552);
  v29 = 0;
  v30 = 0;
  v31 = *v28;
  v32 = *v27;
  v33 = *v27 < *v28;
  v34 = *v27 >= *v28;
  v35 = (float)(*(float *)(*((_DWORD *)a1 + 549) + 108) - *(float *)(*((_DWORD *)a1 + 549) + 584))
      - *(float *)(*((_DWORD *)a1 + 549) + 180);
  if ( (v12 & 1) == 0 )
    goto LABEL_59;
  v36 = *((_DWORD *)a1 + 643);
  v29 = 0;
  v30 = 0;
  if ( v36 > 5 )
    goto LABEL_59;
  v29 = 1;
  v37 = &a1[56 * v36];
  v30 = (float *)(v37 + 3600);
  if ( !v37[3603] )
    goto LABEL_59;
  if ( (unsigned int)*((unsigned __int16 *)v37 + 1820) - 37 < 2 )
    goto LABEL_59;
  if ( (v12 & 0x10400) != 0x400 )
    goto LABEL_59;
  v38 = *((_DWORD *)a1 + 642);
  if ( v38 > 5 )
    goto LABEL_59;
  if ( !a1[56 * v38 + 3267] )
    goto LABEL_59;
  v39 = (float *)&a1[56 * v36 + 2592];
  v40 = (float *)&a1[56 * v38 + 2592];
  if ( v40[174] >= v39[258] )
    goto LABEL_59;
  v41 = *((_DWORD *)v39 + 254);
  v42 = *((_DWORD *)v40 + 170) ^ 0x80000000;
  v43 = v41 - v42;
  if ( v41 - v42 >= 0 )
    goto LABEL_48;
  if ( v43 != 0x80000000 )
  {
    v43 = v42 - v41;
LABEL_48:
    if ( !v43 )
      goto LABEL_59;
  }
  if ( v41 > v42 )
  {
    *((_DWORD *)a1 + 556) = v12 | 0x400000;
    v44 = *v27;
    if ( *v27 <= *v28 )
      goto LABEL_59;
    goto LABEL_58;
  }
  *((_DWORD *)a1 + 556) = v12 | 0x800000;
  v44 = *v27;
  if ( *v27 < *v28 )
LABEL_58:
    *v27 = v44 - v35;
LABEL_59:
  v45 = *((int **)a1 + 551);
  v46 = *v45;
  v47 = v45[1];
  v97[0] = v46;
  v97[1] = v47;
  *((_DWORD *)a1 + 583) = v34;
  ((void (__fastcall *)(_BYTE *, _BOOL4))loc_6014DEE4)(a1, v33);
  (*(void (__fastcall **)(_BYTE *, _BOOL4))(*(_DWORD *)a1 + 52))(a1, v33);
  CollisionMgr_process_helper_14E8B8(a1, v33);
  ((void (__fastcall *)(_BYTE *, _BOOL4, bool, float))loc_6014EB4C)(a1, v33, !v33, v35);
  ((void (__fastcall *)(_BYTE *, bool))loc_6014DEE4)(a1, !v33);
  (*(void (__fastcall **)(_BYTE *, bool))(*(_DWORD *)a1 + 52))(a1, !v33);
  CollisionMgr_process_helper_14E8B8(a1, !v33);
  ((void (__fastcall *)(_BYTE *, bool, _BOOL4, float))loc_6014EB4C)(a1, !v33, v33, v35);
  v48 = *((_DWORD *)a1 + 556);
  v49 = 0x40000;
  if ( v32 < v31 )
    v49 = 0x80000;
  if ( (v48 & v49) == 0 )
  {
    v50 = 0x400000;
    if ( v32 < v31 )
      v50 = 0x800000;
    if ( (v48 & v50) == 0 )
      goto LABEL_68;
  }
  v51 = 0x10000000;
  if ( v32 < v31 )
    v51 = 0x20000000;
  if ( (v48 & v51) != 0 )
  {
LABEL_68:
    v52 = (v48 & (1 << (v34 | 0x12))) == 0;
    if ( (v48 & (1 << (v34 | 0x12))) == 0 )
      v52 = (v48 & (1 << (v34 | 0x16))) == 0;
    if ( !v52 && (v48 & (1 << (v34 | 0x1C))) == 0 )
    {
      ((void (__fastcall *)(_BYTE *, _BOOL4, int))loc_6014DEE4)(a1, v33, v34 | 0x1C);
      (*(void (__fastcall **)(_BYTE *, _BOOL4))(*(_DWORD *)a1 + 52))(a1, v33);
      CollisionMgr_process_helper_14E8B8(a1, v33);
      ((void (__fastcall *)(_BYTE *, _BOOL4, bool, float))loc_6014EB4C)(a1, v33, !v33, v35);
      v48 = *((_DWORD *)a1 + 556);
    }
  }
  v53 = v48 & 0x10000000;
  if ( ((v48 & 0x440000) != 0 && !v53 || (v48 & 0x880000) != 0 && (v48 & 0x20000000) == 0)
    && v48 & 1 | ((v48 & 0x10400) == 1024)
    && (v48 & 0xC00000) == 0 )
  {
    v54 = 0;
    v55 = v53 != 0;
    if ( (v48 & 0x40000) != 0 && !v55 )
    {
      v56 = *((_DWORD *)a1 + 640);
      v54 = 0;
      if ( v56 < 6 )
        v54 = &a1[56 * v56 + 2592];
    }
    if ( (v48 & 0x880000) != 0 && (v48 & 0x20000000) == 0 )
    {
      v57 = *((_DWORD *)a1 + 641);
      v58 = 0;
      if ( v57 < 6 )
        v58 = &a1[56 * v57 + 2928];
      if ( v54 && v57 <= 5 )
      {
        v59 = v54[3] == 0;
        if ( v54[3] )
          v59 = v58[3] == 0;
        if ( !v59 && *((_DWORD *)a1 + 640) == v57 )
        {
          v60 = *((_DWORD *)v54 + 2);
          v61 = v60 == 0x40000000;
          if ( v60 == 0x40000000 )
            v61 = *((_DWORD *)v58 + 2) == -1073741824;
          if ( v61 )
            **((_DWORD **)a1 + 551) = **((_DWORD **)a1 + 552);
        }
      }
    }
  }
  CollisionMgr_process_helper_14F130(a1, v97);
  if ( v29 == 1 )
  {
    v62 = *((_BYTE *)v30 + 3) == 0;
    if ( *((_BYTE *)v30 + 3) )
      v62 = *((_BYTE *)v30 + 2) == 0;
    if ( !v62 && (*((_DWORD *)a1 + 556) & 0x10400) == 0x400 )
    {
      v63 = *((_DWORD *)a1 + 642);
      if ( v63 <= 5 )
      {
        v64 = &a1[56 * v63];
        v65 = (unsigned int *)(v64 + 3292);
        if ( ActorMgrRelated_getById(ActorMgr__instance + 27168, *((_DWORD *)v64 + 823)) )
        {
          v67 = v64 + 3296;
          v66 = *((_DWORD *)v64 + 824);
          v68 = v66 == 0;
          if ( v66 )
            v68 = v64[3267] == 0;
          if ( !v68 )
          {
            v69 = *((_DWORD *)a1 + 556);
            v70 = 0;
            v71 = 0;
            if ( (v69 & 0x440000) != 0 )
            {
              v71 = 0;
              if ( (v69 & 0x10000000) == 0 )
              {
                v72 = *((_DWORD *)a1 + 640);
                v71 = 0;
                if ( v72 < 6 )
                  v71 = &a1[56 * v72 + 2592];
              }
            }
            if ( (v69 & 0x880000) != 0 && (v69 & 0x20000000) == 0 )
            {
              v73 = *((_DWORD *)a1 + 641);
              v70 = 0;
              if ( v73 < 6 )
                v70 = &a1[56 * v73 + 2928];
            }
            v74 = v71 == 0;
            if ( v71 )
              v74 = v70 == 0;
            if ( !v74 )
            {
              v75 = v71[3] == 0;
              if ( v71[3] )
                v75 = v70[3] == 0;
              if ( !v75 )
              {
                ActorMgrRelated_getById(ActorMgr__instance + 27168, *v65);
                v76 = *(_DWORD *)(*(_DWORD *)v67 + 144);
                v77 = 0;
                v78 = 0;
                if ( ActorMgrRelated_getById(ActorMgr__instance + 27168, *((_DWORD *)v71 + 7)) )
                {
                  v78 = 0;
                  if ( *((_DWORD *)v71 + 8) )
                  {
                    ActorMgrRelated_getById(ActorMgr__instance + 27168, *((_DWORD *)v71 + 7));
                    v78 = *(_DWORD *)(*((_DWORD *)v71 + 8) + 144);
                  }
                }
                v79 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *((_DWORD *)v70 + 7));
                v80 = v79 == 0;
                if ( v79 )
                  v80 = *((_DWORD *)v70 + 8) == 0;
                if ( !v80 )
                {
                  ActorMgrRelated_getById(ActorMgr__instance + 27168, *((_DWORD *)v70 + 7));
                  v77 = *(_DWORD *)(*((_DWORD *)v70 + 8) + 144);
                }
                v81 = v78 == v76;
                if ( v78 != v76 )
                  v81 = v77 == v76;
                if ( v81 )
                {
                  v82 = 0;
                  v92 = 0;
                  v93 = **((_BYTE **)a1 + 553);
                  v94 = **((_BYTE **)a1 + 554);
                  v95 = 0;
                  v96 = a1 + 80;
                  sub_6015D144((TileCheck *)(a1 + 4), (int)&v92);
                  v83 = *((_DWORD *)a1 + 549);
                  *((_DWORD *)a1 + 3) = v83;
                  *((_DWORD *)a1 + 7) = 0;
                  *((_DWORD *)a1 + 8) = 0;
                  v84 = *((_DWORD *)a1 + 6);
                  if ( v84 >= 1 )
                  {
                    *((_DWORD *)a1 + 8) = 1;
                    **((_DWORD **)a1 + 5) = v83;
                    v84 = *((_DWORD *)a1 + 6);
                    v82 = *((_DWORD *)a1 + 8);
                  }
                  if ( v82 < v84 )
                  {
                    v85 = *((_DWORD *)a1 + 550);
                    *((_DWORD *)a1 + 8) = v82 + 1;
                    v86 = *((_DWORD *)a1 + 7) + v82;
                    v87 = __OFSUB__(v86, v84);
                    v88 = v86 - v84;
                    if ( v88 < 0 != v87 )
                      v88 = *((_DWORD *)a1 + 7) + v82;
                    *(_DWORD *)(*((_DWORD *)a1 + 5) + 4 * v88) = v85;
                  }
                  a1[5] = 1;
                  v89 = v30[4];
                  *(float *)v91 = v30[3];
                  *(float *)&v91[1] = v89 + 1.0;
                  if ( sub_6015DF58(a1 + 4, &v92, v91) == 1 )
                  {
                    v90 = *((_DWORD *)a1 + 551);
                    result = FIELD_F32(v90, 4) + 8.0;
                    FIELD_F32(v90, 4) = result;
                  }
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
