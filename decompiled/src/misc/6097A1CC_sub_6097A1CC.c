/* sub_6097A1CC
 * address: 0x6097A1CC   size: 1624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097A1CC(int a1, int a2, int a3, int a4)
{
  int v8; // r6
  bool v9; // zf
  int v10; // r1
  int v11; // r0
  int v12; // r10
  _BYTE *v13; // r10
  int v14; // t1
  float v15; // s0
  float v16; // s0
  int v17; // r0
  int v18; // r0
  int v19; // s1
  int v20; // s2
  int v21; // s3
  int v22; // r7
  int v23; // r6
  _BOOL4 v24; // r0
  int v25; // r7
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r1
  float *v33; // r0
  int v34; // r1
  int v35; // r0
  _BOOL4 v36; // r9
  int v37; // r1
  int v38; // r0
  int v39; // r1
  int v40; // r0
  float v41; // s16
  int v42; // s1
  int v43; // s2
  int v44; // s3
  int v45; // s1
  int v46; // s2
  int v47; // s3
  int v48; // s1
  int v49; // s2
  int v50; // s3
  int v51; // r0
  _DWORD *v52; // r6
  int v53; // r9
  float *v54; // r3
  float v55; // s16
  int v56; // s1
  int v57; // s2
  int v58; // s3
  int v59; // s1
  int v60; // s2
  int v61; // s3
  int v62; // r6
  int v63; // r1
  int v64; // r2
  int v65; // r3
  int v66; // r1
  int v67; // r2
  int v68; // r3
  float *v69; // r0
  float *v70; // r1
  float v71; // s4
  float v72; // s0
  float v73; // s2
  int v74; // r0
  _BYTE *v75; // r0
  int v76; // t1
  int v77; // r1
  int v78; // r2
  int v79; // r0
  int v80; // t1
  int v81; // r1
  int v82; // r2
  int v83; // r3
  int v84; // r0
  int v85; // r1
  int v86; // r2
  int v87; // r3
  int v88; // r1
  int v89; // r0
  int v90; // r2
  _DWORD *v91; // r1
  _DWORD *v92; // r0
  int v93; // r2
  int v94; // r2
  int v95; // r0
  int v96; // t1
  float v98; // [sp+0h] [bp-58h] BYREF
  int v99; // [sp+4h] [bp-54h]
  int v100; // [sp+8h] [bp-50h]
  int v101; // [sp+Ch] [bp-4Ch]
  float v102; // [sp+10h] [bp-48h] BYREF
  int v103; // [sp+14h] [bp-44h]
  int v104; // [sp+18h] [bp-40h]
  int v105; // [sp+1Ch] [bp-3Ch]
  float v106; // [sp+20h] [bp-38h] BYREF
  int v107; // [sp+24h] [bp-34h]
  int v108; // [sp+28h] [bp-30h]
  int v109; // [sp+2Ch] [bp-2Ch]

  v8 = 0;
  v9 = a2 == 0;
  if ( a2 )
    v9 = FIELD_U8(a2, 48) == 0;
  if ( !v9 )
  {
    v10 = FIELD_U32(a3, 12);
    v11 = a1 + 92 * a4;
    v12 = a1 + 92 * a4;
    v14 = FIELD_U8(v12, 848);
    v13 = (_BYTE *)(v12 + 848);
    if ( v14 != v10 )
    {
      FIELD_U8(a1, 840) |= 0x10u;
      *v13 = v10;
    }
    v15 = FIELD_F32(a3, 44);
    if ( FIELD_F32(v11, 932) != v15 )
    {
      FIELD_U8(a1, 840) |= 0x10u;
      FIELD_F32(v11, 932) = v15;
    }
    v16 = FIELD_F32(a3, 60);
    v17 = a1 + 92 * a4;
    if ( FIELD_F32(v17, 936) != v16 )
    {
      FIELD_U8(a1, 840) |= 0x10u;
      FIELD_F32(v17, 936) = v16;
    }
    v18 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 88))(a2);
    if ( v18 == *(__int16 *)dword_60CD09C0 )
    {
      v106 = sub_6090B1D8((float *)(a2 + 184), FIELD_F32(a2, 212));
      v107 = v19;
      v108 = v20;
      v109 = v21;
      v22 = a1 + 92 * a4;
      v23 = v22 + 856;
      v24 = sub_6090B200((float *)(v22 + 856), &v106);
      v25 = v22 + 872;
      if ( !v24 || !sub_6090B200((float *)v25, &v106) )
      {
        FIELD_U8(a1, 840) |= 0x10u;
        v26 = v107;
        v27 = v108;
        v28 = v109;
        *(float *)v23 = v106;
        FIELD_U32(v23, 4) = v26;
        FIELD_U32(v23, 8) = v27;
        FIELD_U32(v23, 12) = v28;
        v29 = v107;
        v30 = v108;
        v31 = v109;
        *(float *)v25 = v106;
        FIELD_U32(v25, 4) = v29;
        FIELD_U32(v25, 8) = v30;
        FIELD_U32(v25, 12) = v31;
      }
      v32 = a1 + 92 * a4;
      v33 = (float *)(v32 + 924);
      if ( FIELD_F32(v32, 920) != 0.0 || *v33 != 0.0 || *(float *)(a1 + 92 * a4 + 928) != 1.0 )
      {
        FIELD_U8(a1, 840) |= 0x10u;
        v78 = a1 + 92 * a4;
        FIELD_U32(v78, 920) = 0;
        *v33 = 0.0;
        FIELD_U32(v78, 928) = 1065353216;
      }
      v77 = FIELD_U8(a3, 120);
      v79 = a1 + 92 * a4;
      if ( FIELD_U8(v79, 849) != v77 )
      {
        FIELD_U8(a1, 840) |= 0x10u;
        FIELD_U8(v79, 849) = v77;
        v77 = FIELD_U8(a3, 120);
      }
      v80 = FIELD_U8(v79, 850);
      v75 = (_BYTE *)(v79 + 850);
      if ( v80 == v77 )
        return 1;
      goto LABEL_68;
    }
    if ( v18 == *(__int16 *)dword_60CD09C8 )
    {
      v34 = a1;
      do
      {
        v35 = v34;
        v34 = FIELD_U32(v34, 208);
      }
      while ( v34 );
      if ( FIELD_U32(v35, 1764) != 3 || (v36 = 1, *v13 != 1) )
      {
        v37 = a1;
        do
        {
          v38 = v37;
          v37 = FIELD_U32(v37, 208);
        }
        while ( v37 );
        v36 = 1;
        if ( FIELD_U32(v38, 1764) != 1 )
        {
          v39 = a1;
          do
          {
            v40 = v39;
            v39 = FIELD_U32(v39, 208);
          }
          while ( v39 );
          v36 = FIELD_U32(v40, 1764) == 2;
        }
      }
      v41 = FIELD_F32(a2, 268);
      v106 = sub_6090B1D8((float *)(a2 + 184), v41);
      v107 = v42;
      v108 = v43;
      v109 = v44;
      v102 = sub_6090B1D8((float *)(a2 + 212), v41);
      v103 = v45;
      v104 = v46;
      v105 = v47;
      v98 = sub_6090B1D8((float *)(a2 + 240), v41);
      v99 = v48;
      v100 = v49;
      v101 = v50;
      v51 = a1 + 92 * a4;
      v52 = (_DWORD *)(v51 + 856);
      if ( v36 )
      {
        v53 = v51 + 872;
        if ( !sub_6090B200((float *)(v51 + 856), dword_60B45CCC) || !sub_6090B200((float *)v53, &v102) )
        {
          FIELD_U8(a1, 840) |= 0x10u;
          *v52 = 0;
          v52[1] = 0;
          v52[2] = 0;
          v52[3] = 1065353216;
          v54 = &v102;
LABEL_53:
          v84 = *(_DWORD *)v54;
          v85 = *((_DWORD *)v54 + 1);
          v86 = *((_DWORD *)v54 + 2);
          v87 = *((_DWORD *)v54 + 3);
          *(_DWORD *)v53 = v84;
          FIELD_U32(v53, 4) = v85;
          FIELD_U32(v53, 8) = v86;
          FIELD_U32(v53, 12) = v87;
        }
      }
      else
      {
        v53 = v51 + 872;
        if ( !sub_6090B200((float *)(v51 + 856), &v98) || !sub_6090B200((float *)v53, &v106) )
        {
          FIELD_U8(a1, 840) |= 0x10u;
          v81 = v99;
          v82 = v100;
          v83 = v101;
          *v52 = LODWORD(v98);
          v52[1] = v81;
          v52[2] = v82;
          v52[3] = v83;
          v54 = &v106;
          goto LABEL_53;
        }
      }
      v88 = a1;
      do
      {
        v89 = v88;
        v88 = FIELD_U32(v88, 208);
      }
      while ( v88 );
      if ( FIELD_U32(v89, 1764) == 2 && *v13 != 1 )
      {
        FIELD_U8(a1, 840) |= 0x10u;
        *v13 = 1;
      }
      v90 = a1 + 92 * a4;
      if ( FIELD_F32(v90, 920) == FIELD_F32(a2, 284) )
      {
        v91 = (_DWORD *)(a2 + 288);
        v92 = (_DWORD *)(v90 + 924);
        if ( FIELD_F32(v90, 924) == FIELD_F32(a2, 288) && *(float *)(a1 + 92 * a4 + 928) == FIELD_F32(a2, 292) )
        {
LABEL_65:
          v94 = FIELD_U8(a3, 120);
          v95 = a1 + 92 * a4;
          if ( FIELD_U8(v95, 849) != v94 )
          {
            FIELD_U8(a1, 840) |= 0x10u;
            FIELD_U8(v95, 849) = v94;
          }
          v96 = FIELD_U8(v95, 850);
          v75 = (_BYTE *)(v95 + 850);
          v77 = FIELD_U8(a3, 180);
          if ( v96 == v77 )
            return 1;
LABEL_68:
          FIELD_U8(a1, 840) |= 0x10u;
LABEL_69:
          *v75 = v77;
          return 1;
        }
      }
      else
      {
        v92 = (_DWORD *)(v90 + 924);
        v91 = (_DWORD *)(a2 + 288);
      }
      FIELD_U8(a1, 840) |= 0x10u;
      v93 = a1 + 92 * a4;
      FIELD_U32(v93, 920) = FIELD_U32(a2, 284);
      *v92 = *v91;
      FIELD_U32(v93, 928) = FIELD_U32(a2, 292);
      goto LABEL_65;
    }
    if ( v18 == *(__int16 *)dword_60CD09C4 )
    {
      v55 = FIELD_F32(a2, 240);
      v102 = sub_6090B1D8((float *)(a2 + 184), v55);
      v103 = v56;
      v104 = v57;
      v105 = v58;
      v106 = sub_6090B1D8((float *)(a2 + 212), v55);
      v107 = v59;
      v108 = v60;
      v109 = v61;
      v62 = a1 + 92 * a4;
      if ( !sub_6090B200((float *)(v62 + 856), &v106) || !sub_6090B200((float *)(v62 + 872), &v102) )
      {
        FIELD_U8(a1, 840) |= 0x10u;
        v63 = v107;
        v64 = v108;
        v65 = v109;
        FIELD_F32(v62, 856) = v106;
        FIELD_U32(v62, 860) = v63;
        FIELD_U32(v62, 864) = v64;
        FIELD_U32(v62, 868) = v65;
        v66 = v103;
        v67 = v104;
        v68 = v105;
        FIELD_F32(v62, 872) = v102;
        FIELD_U32(v62, 876) = v66;
        FIELD_U32(v62, 880) = v67;
        FIELD_U32(v62, 884) = v68;
      }
      v69 = (float *)(a1 + 92 * a4);
      v70 = v69 + 231;
      v71 = -FIELD_F32(a2, 256);
      v72 = -FIELD_F32(a2, 264);
      v73 = -FIELD_F32(a2, 260);
      if ( v69[230] != v71 || *v70 != v73 || *(float *)(a1 + 92 * a4 + 928) != v72 )
      {
        FIELD_U8(a1, 840) |= 0x10u;
        v69[230] = v71;
        *v70 = v73;
        v69[232] = v72;
      }
      v74 = a1 + 92 * a4;
      if ( FIELD_U8(v74, 849) != 2 )
      {
        FIELD_U8(a1, 840) |= 0x10u;
        FIELD_U8(v74, 849) = 2;
      }
      v76 = FIELD_U8(v74, 850);
      v75 = (_BYTE *)(v74 + 850);
      if ( v76 == 2 )
        return 1;
      FIELD_U8(a1, 840) |= 0x10u;
      LOBYTE(v77) = 2;
      goto LABEL_69;
    }
  }
  return v8;
}
