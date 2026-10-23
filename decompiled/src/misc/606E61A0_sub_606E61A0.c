/* sub_606E61A0
 * address: 0x606E61A0   size: 1540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E61A0(int a1)
{
  int v2; // r2
  _DWORD *v3; // r0
  int v4; // r2
  int v5; // r2
  int v6; // r1
  _DWORD *v7; // r0
  bool v8; // zf
  int v9; // r0
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s3
  float32x2_t v14; // d2
  float v15; // s6
  float v16; // s7
  float v17; // s8
  float v18; // s9
  double v19; // d5
  int v20; // r7
  int v21; // r8
  unsigned int v22; // r10
  float v23; // s20
  unsigned int v24; // r1
  float v25; // s22
  int v26; // r11
  unsigned int v27; // r7
  int *v28; // r0
  int *v29; // r9
  char v30; // r0
  int v31; // r2
  int v32; // r0
  unsigned int v33; // r2
  _DWORD *v34; // r1
  unsigned int v35; // r2
  char v36; // r7
  int v37; // r0
  int v38; // r1
  int v39; // r2
  int v40; // r1
  _DWORD *v41; // r1
  _DWORD *v42; // r1
  _DWORD *v43; // r1
  _DWORD *v44; // r1
  _DWORD *v45; // r1
  _DWORD *v46; // r1
  _DWORD *v47; // r1
  _DWORD *v48; // r1
  _DWORD *v49; // r1
  _DWORD *v50; // r1
  _DWORD *v51; // r1
  _DWORD *v52; // r1
  _DWORD *v53; // r1
  _DWORD *v54; // r1
  _DWORD *v55; // r1
  int v56; // r4
  float v57; // s16
  unsigned int v58; // r11
  unsigned int v59; // r1
  float v60; // s20
  int v61; // r7
  unsigned int v62; // r9
  int *v63; // r0
  int *v64; // r8
  char v65; // r7
  int v66; // r2
  int v67; // r6
  unsigned int v68; // r2
  int v69; // r1
  unsigned int v70; // r2
  int v71; // r3
  _DWORD *v72; // r1
  int v74; // [sp+4h] [bp-64h]
  int v75; // [sp+8h] [bp-60h]
  int v76; // [sp+Ch] [bp-5Ch]
  int v77; // [sp+10h] [bp-58h]
  int v78; // [sp+10h] [bp-58h]
  unsigned int v79; // [sp+14h] [bp-54h]
  unsigned int v80; // [sp+14h] [bp-54h]
  int speed; // [sp+18h] [bp-50h] BYREF
  int target[19]; // [sp+1Ch] [bp-4Ch] BYREF

  v2 = 0;
  v3 = (_DWORD *)PlayerMgr_instance;
  if ( !FIELD_U32(PlayerMgr_instance, 32) )
    v2 = -1;
  FIELD_U32(a1, 644) = v2;
  v4 = 1;
  if ( !v3[9] )
    v4 = -1;
  FIELD_U32(a1, 660) = v4;
  v5 = 2;
  v6 = 3;
  if ( !v3[10] )
    v5 = -1;
  FIELD_U32(a1, 676) = v5;
  if ( !v3[11] )
    v6 = -1;
  FIELD_U32(a1, 692) = v6;
  v7 = *(_DWORD **)(a1 + 1080);
  v8 = v7 == 0;
  if ( v7 )
  {
    v7 = (_DWORD *)*v7;
    v8 = v7 == 0;
  }
  if ( !v8 && v7[549] || (StageActor__cullCheck((StageActor *)a1, 0), !v9) )
  {
    sub_606E5000(a1, a1 + 1204);
    sub_606E5828(a1, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19);
    v75 = a1;
    if ( FIELD_S32(a1, 716) >= 1 )
    {
      v20 = 0;
      v74 = a1 + 2036;
      v77 = a1 + 2240;
      do
      {
        SE_PLY_TARZAN_ref(a1);
        v21 = FIELD_U32(a1, 1172);
        v76 = v20;
        if ( FIELD_U8(a1, 2561) )
        {
          v22 = v74;
          v23 = 0.0;
          v24 = 0;
          v79 = a1 + 4 * FIELD_U8(a1, 2561) + 2036;
          do
          {
            if ( v24 != 16 )
            {
              v25 = *(float *)(*(_DWORD *)v22 + 36);
              if ( v25 >= v23 )
              {
                v26 = *(_DWORD *)(*(_DWORD *)v22 + 4);
                v27 = v24;
                v28 = (int *)(v77 + 4 * v24);
                do
                {
                  v29 = v28 + 1;
                  v21 = *v28;
                  target[0] = v26;
                  speed = 0x2000000;
                  moveValueTo(v28, target, &speed);
                  v23 = v23 + 8.0;
                  v24 = v27 + 1;
                  if ( v27 == 15 )
                    break;
                  v28 = v29;
                  ++v27;
                }
                while ( v25 >= v23 );
              }
            }
            v22 += 4;
          }
          while ( v22 < v79 );
        }
        else
        {
          v24 = 0;
        }
        a1 = v75;
        v30 = FIELD_U8(v75, 2560);
        FIELD_U8(v75, 2560) = v30 + 1;
        v31 = (v30 + 1) & 0x3F;
        *(_DWORD *)(v75 + 4 * v31 + 2304) = v21;
        if ( v24 > 0xF )
          goto LABEL_33;
        if ( (v24 & 1) != 0 )
        {
          v32 = (v30 + 62) & 0x3F;
          *(_DWORD *)(v75 + 4 * v24 + 2240) = *(_DWORD *)(v75 + 4 * v32 + 2304);
          v33 = v24 + 1;
          if ( v24 != 15 )
          {
LABEL_31:
            v34 = (_DWORD *)(v77 + 4 * v33);
            v35 = 16 - v33;
            do
            {
              v36 = v32 + 62;
              v35 -= 2;
              v32 = ((_BYTE)v32 + 60) & 0x3F;
              *v34 = *(_DWORD *)(v75 + 2304 + 4 * (v36 & 0x3F));
              v34[1] = *(_DWORD *)(v75 + 2304 + 4 * v32);
              v34 += 2;
            }
            while ( v35 );
          }
        }
        else
        {
          LOBYTE(v32) = v31 - 1;
          v33 = v24;
          if ( v24 != 15 )
            goto LABEL_31;
        }
LABEL_33:
        v37 = FIELD_U32(v75, 716);
        if ( v76 == v37 - 1 )
        {
          FIELD_U32(v75, 716) = v76;
          v37 = v76;
        }
        v20 = v76 + 1;
      }
      while ( v76 + 1 < v37 );
    }
    if ( !FIELD_U8(a1, 712) )
      ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 732));
    if ( FIELD_U8(a1, 713) )
    {
      if ( FIELD_U8(a1, 712) )
        goto LABEL_44;
      v38 = **(_DWORD **)(FIELD_U32(a1, 732) + 12);
      FIELD_U32(v38, 20) = 0;
      FIELD_U32(v38, 28) |= 2u;
      v39 = 1065353216;
    }
    else
    {
      if ( !FIELD_U8(a1, 712) )
        goto LABEL_44;
      v39 = 0;
      v40 = **(_DWORD **)(FIELD_U32(a1, 732) + 12);
      FIELD_U32(v40, 20) = 0;
      FIELD_U32(v40, 28) |= 2u;
    }
    *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 732) + 12) + 24) = v39;
LABEL_44:
    SwingingCollider_execute((ColliderBase *)(a1 + 736));
    **(_DWORD **)(a1 + 1124) = FIELD_U32(a1, 2240);
    v41 = *(_DWORD **)(a1 + 1124);
    if ( FIELD_U32(a1, 1120) > 1u )
      ++v41;
    *v41 = FIELD_U32(a1, 2244);
    v42 = *(_DWORD **)(a1 + 1124);
    if ( FIELD_U32(a1, 1120) > 2u )
      v42 += 2;
    *v42 = FIELD_U32(a1, 2248);
    v43 = *(_DWORD **)(a1 + 1124);
    if ( FIELD_U32(a1, 1120) > 3u )
      v43 += 3;
    *v43 = FIELD_U32(a1, 2252);
    v44 = *(_DWORD **)(a1 + 1124);
    if ( FIELD_U32(a1, 1120) > 4u )
      v44 += 4;
    *v44 = FIELD_U32(a1, 2256);
    v45 = *(_DWORD **)(a1 + 1124);
    if ( FIELD_U32(a1, 1120) > 5u )
      v45 += 5;
    *v45 = FIELD_U32(a1, 2260);
    v46 = *(_DWORD **)(a1 + 1124);
    if ( FIELD_U32(a1, 1120) > 6u )
      v46 += 6;
    *v46 = FIELD_U32(a1, 2264);
    v47 = *(_DWORD **)(a1 + 1124);
    if ( FIELD_U32(a1, 1120) > 7u )
      v47 += 7;
    *v47 = FIELD_U32(a1, 2268);
    v48 = *(_DWORD **)(a1 + 1124);
    if ( FIELD_U32(a1, 1120) > 8u )
      v48 += 8;
    *v48 = FIELD_U32(a1, 2272);
    v49 = *(_DWORD **)(a1 + 1124);
    if ( FIELD_U32(a1, 1120) > 9u )
      v49 += 9;
    *v49 = FIELD_U32(a1, 2276);
    v50 = *(_DWORD **)(a1 + 1124);
    if ( FIELD_U32(a1, 1120) > 0xAu )
      v50 += 10;
    *v50 = FIELD_U32(a1, 2280);
    v51 = *(_DWORD **)(a1 + 1124);
    if ( FIELD_U32(a1, 1120) > 0xBu )
      v51 += 11;
    *v51 = FIELD_U32(a1, 2284);
    v52 = *(_DWORD **)(a1 + 1124);
    if ( FIELD_U32(a1, 1120) > 0xCu )
      v52 += 12;
    *v52 = FIELD_U32(a1, 2288);
    v53 = *(_DWORD **)(a1 + 1124);
    if ( FIELD_U32(a1, 1120) > 0xDu )
      v53 += 13;
    *v53 = FIELD_U32(a1, 2292);
    v54 = *(_DWORD **)(a1 + 1124);
    if ( FIELD_U32(a1, 1120) > 0xEu )
      v54 += 14;
    *v54 = FIELD_U32(a1, 2296);
    v55 = *(_DWORD **)(a1 + 1124);
    if ( FIELD_U32(a1, 1120) > 0xFu )
      v55 += 15;
    *v55 = FIELD_U32(a1, 2300);
    v56 = FIELD_U32(a1, 1172);
    if ( FIELD_U8(a1, 2561) )
    {
      v57 = 0.0;
      v58 = a1 + 2036;
      v59 = 0;
      v80 = a1 + 4 * FIELD_U8(a1, 2561) + 2036;
      v78 = a1 + 2240;
      do
      {
        if ( v59 != 16 )
        {
          v60 = *(float *)(*(_DWORD *)v58 + 36);
          if ( v60 >= v57 )
          {
            v61 = *(_DWORD *)(*(_DWORD *)v58 + 4);
            v62 = v59;
            v63 = (int *)(v78 + 4 * v59);
            do
            {
              v64 = v63 + 1;
              v56 = *v63;
              target[0] = v61;
              speed = 0x2000000;
              moveValueTo(v63, target, &speed);
              v57 = v57 + 8.0;
              v59 = v62 + 1;
              if ( v62 == 15 )
                break;
              v63 = v64;
              ++v62;
            }
            while ( v60 >= v57 );
          }
        }
        v58 += 4;
      }
      while ( v58 < v80 );
    }
    else
    {
      v59 = 0;
    }
    v65 = FIELD_U8(v75, 2560);
    FIELD_U8(v75, 2560) = v65 + 1;
    v66 = (v65 + 1) & 0x3F;
    *(_DWORD *)(v75 + 4 * v66 + 2304) = v56;
    if ( v59 > 0xF )
      goto LABEL_91;
    if ( (v59 & 1) != 0 )
    {
      v67 = (v65 + 62) & 0x3F;
      *(_DWORD *)(v75 + 4 * v59 + 2240) = *(_DWORD *)(v75 + 4 * v67 + 2304);
      v68 = v59 + 1;
      if ( v59 == 15 )
      {
LABEL_91:
        sub_606E5E10(v75);
        return 1;
      }
    }
    else
    {
      LOBYTE(v67) = v66 - 1;
      v68 = v59;
      if ( v59 == 15 )
        goto LABEL_91;
    }
    v69 = v75 + 4 * v68;
    v70 = 16 - v68;
    v71 = v75 + 2304;
    v72 = (_DWORD *)(v69 + 2240);
    do
    {
      v70 -= 2;
      *v72 = *(_DWORD *)(v71 + 4 * (((_BYTE)v67 + 62) & 0x3F));
      v67 = ((_BYTE)v67 + 60) & 0x3F;
      v72[1] = *(_DWORD *)(v71 + 4 * v67);
      v72 += 2;
    }
    while ( v70 );
    goto LABEL_91;
  }
  return 1;
}
