/* sub_6092DC18
 * address: 0x6092DC18   size: 1588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092DC18(int result)
{
  int v1; // r2
  int v2; // r11
  int v3; // r7
  _DWORD *v4; // r3
  int v5; // r7
  unsigned int v6; // r6
  int v7; // r3
  unsigned int v8; // r7
  _DWORD *v9; // r2
  int v10; // r7
  int v11; // r3
  unsigned int v12; // r7
  int v13; // r2
  unsigned int v14; // r3
  int v15; // r8
  int v16; // r9
  _BOOL4 v17; // r2
  int v18; // r10
  float v19; // s0
  int v20; // r6
  int v21; // lr
  float v22; // s0
  _DWORD *v23; // r7
  int v24; // r12
  int v25; // r3
  unsigned int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r2
  int v30; // r2
  int v31; // r3
  int v32; // r1
  unsigned int v33; // r2
  int v34; // r6
  unsigned int v35; // r3
  int v36; // r1
  _DWORD *v37; // r7
  int v38; // r4
  unsigned int v39; // r1
  int v40; // r2
  int v41; // r2
  int v42; // r3
  int v43; // r3
  int v44; // r2
  int v45; // r3
  int v46; // r3
  _DWORD *v47; // r2
  unsigned int v48; // r1
  int v49; // r2
  unsigned int v50; // r3
  int v51; // r2
  _DWORD *v52; // r6
  int v53; // r1
  int v54; // r3
  int v55; // r4
  int v56; // r3
  _DWORD *v57; // r2
  unsigned int v58; // r1
  int v59; // r2
  unsigned int v60; // r3
  int v61; // r2
  _BOOL4 v62; // r4
  int v63; // r1
  _DWORD *v64; // r2
  int v65; // r7
  int v66; // r3
  int v67; // r6
  int v68; // r1
  int v69; // r1
  int v70; // r3
  unsigned int v71; // r1
  int v72; // r2
  unsigned int v73; // r3
  int v74; // r3
  int v75; // r2
  _DWORD *v76; // r1
  int v77; // r5
  int v78; // r7
  _BOOL4 v79; // r10
  int v80; // r7
  int v81; // r2
  unsigned int v82; // r3
  int v83; // r1
  unsigned int v84; // r2
  int v85; // [sp+0h] [bp-2Ch]
  int v86; // [sp+4h] [bp-28h]

  v1 = 0;
  v2 = dword_60CD0B60;
  if ( FIELD_U32(dword_60CD0B60, 20) >= 0x43u )
    v1 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 264);
  v3 = 1;
  v4 = *(_DWORD **)(v1 + 4);
  if ( byte_60C5E0C9 )
    v3 = 2;
  v5 = v3 * *(unsigned __int16 *)(v4[7] + 24);
  if ( v5 )
  {
    v6 = v4[4];
    v7 = v4[5];
    v8 = v5 - 1;
    if ( v6 > v8 )
      v7 += 936 * v8;
  }
  else
  {
    v7 = v4[3];
  }
  FIELD_U32(result, 684) = v7;
  v9 = *(_DWORD **)(v1 + 4);
  v10 = v9[7];
  if ( v9[6] > 1u )
    v10 += 28;
  v11 = FIELD_U16(v10, 24);
  if ( FIELD_U16(v10, 24) )
  {
    v12 = v9[4];
    v13 = v9[5];
    v14 = v11 - 1;
    if ( v12 > v14 )
      v13 += 936 * v14;
  }
  else
  {
    v13 = v9[3];
  }
  FIELD_U32(result, 688) = v13;
  v15 = 0;
  v16 = 0;
  v86 = FIELD_U8(result, 12);
  if ( FIELD_U8(result, 12) )
  {
    v16 = 0;
    v17 = 0;
    if ( FIELD_U8(result, 44) )
      v17 = FIELD_F32(result, 284) > 0.0;
    if ( FIELD_F32(result, 284) > 0.0 )
    {
      v16 = 1;
      if ( v17 )
        v16 = 2;
    }
  }
  v18 = FIELD_U8(result, 76);
  if ( FIELD_U8(result, 76) )
  {
    v19 = FIELD_F32(result, 284);
    if ( v19 > 0.0 )
    {
      v15 = 1;
      if ( FIELD_U8(result, 60) )
      {
        if ( !FIELD_U8(result, 92) && !FIELD_U32(result, 464) && v19 > 0.0 )
        {
          v15 = 3;
          if ( FIELD_F32(result, 480) == 0.0 && FIELD_F32(result, 484) == 0.0 )
          {
            v15 = 3;
            if ( FIELD_F32(result, 488) == 0.0 )
              v15 = 2;
          }
        }
      }
    }
  }
  v20 = 0;
  v21 = 0;
  v85 = FIELD_U8(result, 28);
  if ( FIELD_U8(result, 28) )
  {
    v22 = FIELD_F32(result, 284);
    if ( v22 > 0.0
      || (v21 = 0, FIELD_U8(result, 140))
      && (v21 = 0, FIELD_U32(result, 736))
      && ((v21 = 0, (int)v22 == (v22 < 0.0 && (float)(int)v22 != v22)) || FIELD_U8(result, 204)) )
    {
      v21 = 2;
      if ( !FIELD_U8(result, 188) )
        v21 = 1;
      if ( FIELD_U8(result, 108) )
      {
        if ( FIELD_F32(result, 332) != 1.0 )
          v21 += 2;
        if ( FIELD_F32(result, 660) == 1.0 && FIELD_F32(result, 664) == 1.0 )
        {
          if ( FIELD_F32(result, 668) != 1.0 )
            v21 += 4;
        }
        else
        {
          v21 += 4;
        }
      }
    }
  }
  if ( FIELD_U32(v2, 20) >= 0x44u )
    v20 = *(_DWORD *)(FIELD_U32(v2, 28) + 268);
  v23 = *(_DWORD **)(v20 + 4);
  v24 = v23[7];
  if ( v21 )
  {
    v25 = 1;
    if ( FIELD_U8(result, 188) )
      v25 = 2;
  }
  else
  {
    v25 = 0;
  }
  v26 = v23[6];
  v27 = v23[7];
  v28 = v25 * FIELD_U16(v24, 24);
  if ( v26 > 1 )
    v27 = v24 + 28;
  v29 = FIELD_U16(v27, 24);
  if ( v26 > 2 )
    v24 += 56;
  v30 = v28 + v29 * v16 + (FIELD_U16(v24, 24) & -v18);
  if ( v30 )
  {
    v31 = v23[5];
    if ( v23[4] > (unsigned int)(v30 - 1) )
      v31 += 936 * (v30 - 1);
  }
  else
  {
    v31 = v23[3];
  }
  FIELD_U32(result, 692) = v31;
  v32 = FIELD_U32(v20, 4);
  v33 = (v30 | 1) - 1;
  v34 = 0;
  v35 = FIELD_U32(v32, 16);
  v36 = FIELD_U32(v32, 20);
  if ( v35 > v33 )
    v36 += 936 * v33;
  FIELD_U32(result, 696) = v36;
  if ( FIELD_U32(v2, 20) >= 0x45u )
    v34 = *(_DWORD *)(FIELD_U32(v2, 28) + 272);
  v37 = *(_DWORD **)(v34 + 4);
  v38 = v37[7];
  v39 = v37[6];
  v40 = v38;
  if ( v39 > 1 )
    v40 = v38 + 28;
  v41 = FIELD_U16(v38, 24) * v21 + FIELD_U16(v40, 24) * v16;
  v42 = v37[7];
  if ( v39 > 2 )
    v42 = v38 + 56;
  v43 = FIELD_U16(v42, 24);
  if ( v39 > 3 )
    v38 += 84;
  v44 = v41 + (v43 & -FIELD_U8(result, 788)) + FIELD_U16(v38, 24) * v15;
  if ( v44 <= 0 )
  {
    v45 = v37[3];
  }
  else
  {
    v45 = v37[5];
    if ( v37[4] > (unsigned int)(v44 - 1) )
      v45 += 936 * (v44 - 1);
  }
  FIELD_U32(result, 700) = v45;
  v46 = v44 | 1;
  v47 = *(_DWORD **)(v34 + 4);
  if ( v46 <= 0 )
  {
    v49 = v47[3];
  }
  else
  {
    v48 = v47[4];
    v49 = v47[5];
    v50 = v46 - 1;
    if ( v48 > v50 )
      v49 += 936 * v50;
  }
  FIELD_U32(result, 704) = v49;
  v51 = 0;
  if ( FIELD_U32(v2, 20) >= 0x46u )
    v51 = *(_DWORD *)(FIELD_U32(v2, 28) + 276);
  v52 = *(_DWORD **)(v51 + 4);
  v53 = v52[7];
  v54 = FIELD_U16(v53, 24);
  if ( v52[6] > 1u )
    v53 += 28;
  v55 = (FIELD_U16(v53, 24) & -FIELD_U8(result, 156)) + v54 * v21;
  if ( v55 <= 0 )
  {
    v56 = v52[3];
  }
  else
  {
    v56 = v52[5];
    if ( v52[4] > (unsigned int)(v55 - 1) )
      v56 += 936 * (v55 - 1);
  }
  FIELD_U32(result, 708) = v56;
  v57 = *(_DWORD **)(v51 + 4);
  if ( v55 < 0 )
  {
    v59 = v57[3];
  }
  else
  {
    v58 = v57[4];
    v59 = v57[5];
    v60 = (v55 | 1) - 1;
    if ( v58 > v60 )
      v59 += 936 * v60;
  }
  FIELD_U32(result, 712) = v59;
  v61 = 0;
  if ( FIELD_U32(v2, 20) >= 0x47u )
    v61 = *(_DWORD *)(FIELD_U32(v2, 28) + 280);
  v62 = 1;
  if ( FIELD_F32(result, 480) == 0.0 && FIELD_F32(result, 484) == 0.0 )
    v62 = FIELD_F32(result, 488) != 0.0;
  v63 = FIELD_U32(result, 464);
  v64 = *(_DWORD **)(v61 + 4);
  v65 = 0;
  v66 = v64[7];
  if ( v63 == 3 )
    v65 = 2;
  if ( v63 == 2 )
    v65 = 1;
  v67 = FIELD_U16(v66, 24);
  v68 = v64[7];
  if ( v64[6] > 1u )
    v68 = v66 + 28;
  v69 = FIELD_U16(v68, 24);
  v70 = v69 * v65;
  if ( v62 )
    v70 = v67 + v69 * v65;
  if ( v70 )
  {
    v71 = v64[4];
    v72 = v64[5];
    v73 = v70 - 1;
    if ( v71 > v73 )
      v72 += 936 * v73;
  }
  else
  {
    v72 = v64[3];
  }
  FIELD_U32(result, 716) = v72;
  v74 = 0;
  v75 = 0;
  if ( !v18 )
    v74 = -v85;
  v76 = *(_DWORD **)(*(_DWORD *)(FIELD_U32(v2, 28) + 284) + 4);
  v77 = v76[7];
  v78 = FIELD_U16(v77, 24);
  if ( v76[6] > 1u )
    v77 += 28;
  v79 = v18 != 0;
  v80 = v78 & v74;
  if ( v86 && !v79 )
    v75 = FIELD_U8(result, 44) ^ 1;
  v81 = v80 + v75 * FIELD_U16(v77, 24);
  if ( v81 )
  {
    v82 = v76[4];
    v83 = v76[5];
    v84 = v81 - 1;
    if ( v82 > v84 )
      v83 += 936 * v84;
  }
  else
  {
    v83 = v76[3];
  }
  FIELD_U32(result, 720) = v83;
  return result;
}
