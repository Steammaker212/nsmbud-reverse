/* sub_60844F38
 * address: 0x60844F38   size: 1756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60844F38(int a1, int a2, nn__mii *a3)
{
  nn__mii *v3; // r4
  _DWORD *v6; // r0
  int v7; // r3
  int v8; // r5
  int v9; // r6
  int v10; // r7
  int v11; // r6
  int v12; // r0
  int v13; // r1
  bool v14; // zf
  int v15; // r7
  unsigned int v16; // r4
  unsigned int v17; // r2
  int Size_const; // r4
  int v19; // r0
  int v20; // r1
  bool v21; // zf
  int v22; // r4
  unsigned int v23; // r2
  int v24; // r1
  unsigned int v25; // r0
  int v26; // r1
  int v27; // r3
  int v28; // r2
  _BOOL4 v29; // r12
  int v30; // r1
  int v31; // r3
  _BOOL4 v32; // lr
  int v33; // r6
  int v34; // r7
  _BOOL4 v35; // r8
  unsigned int v36; // r1
  int v37; // r6
  _BOOL4 v38; // r7
  int v39; // r4
  int v40; // r5
  int v41; // r6
  int v42; // r2
  int v43; // r1
  int v44; // r5
  int v45; // r1
  int v46; // r5
  int v47; // r1
  int v48; // r5
  int v49; // r1
  int v50; // r5
  int v51; // r1
  int v52; // r2
  int v53; // r4
  int v54; // r1
  int v55; // r1
  int v56; // r0
  int v57; // r6
  unsigned int v58; // r4
  unsigned int v59; // r0
  int v60; // r0
  unsigned int v61; // r4
  unsigned int v62; // r0
  int v63; // r0
  unsigned int v64; // r4
  unsigned int v65; // r0
  int v67; // [sp+0h] [bp-48h]
  unsigned int v68; // [sp+8h] [bp-40h]
  nn__mii *v69; // [sp+Ch] [bp-3Ch]
  _DWORD v70[6]; // [sp+10h] [bp-38h] BYREF
  _BYTE v71[32]; // [sp+28h] [bp-20h] BYREF

  v3 = a3;
  if ( (int)nn__mii__GetExpressionCount(a3, a2) < 1 )
    return 0;
  v67 = a1;
  nn__mii__detail__CalculateSizeAndAlignment__ctor((nn__mii__detail__CalculateSizeAndAlignment *)v71);
  v6 = (_DWORD *)sub_6083E70C(a2);
  v7 = v6[1];
  v8 = v6[2];
  v9 = v6[3];
  v10 = v6[4];
  v70[0] = *v6;
  v70[1] = v7;
  v70[2] = v8;
  v70[3] = v9;
  v70[4] = v10;
  v11 = 0;
  v69 = v3;
  if ( ((unsigned int)v3 & 0x7FFFF) != 0 )
  {
    do
    {
      if ( (unsigned int)v11 >= 3 )
      {
        v12 = 0;
        while ( 1 )
        {
          if ( ((unsigned int)v3 & (1 << v12)) != 0 )
          {
            if ( dword_60B0E77C[2 * v12 + 1] == v11 )
              break;
            v13 = dword_60B0E77C[2 * v12];
            v14 = v13 == v11;
            if ( v13 != v11 )
              v14 = dword_60B0E880[dword_60B0E730[v12]] == v11;
            if ( v14 )
              break;
          }
          if ( ++v12 >= 19 )
            goto LABEL_16;
        }
      }
      v15 = dword_60B0E820[v11];
      v16 = sub_608479DC(v70, v15);
      if ( v11 )
        v17 = sub_608479E4(v70, v15);
      else
        v17 = 1;
      nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment(
        (nn__mii__detail__CalculateSizeAndAlignment *)v71,
        v16,
        v17);
      v3 = v69;
LABEL_16:
      ++v11;
    }
    while ( v11 < 14 );
  }
  else
  {
    do
    {
      if ( (unsigned int)v11 >= 3 )
      {
        v19 = 0;
        while ( 1 )
        {
          if ( ((unsigned int)v3 & (1 << v19)) != 0 )
          {
            if ( dword_60B0E77C[2 * v19 + 1] == v11 )
              break;
            v20 = dword_60B0E77C[2 * v19];
            v21 = v20 == v11;
            if ( v20 != v11 )
              v21 = dword_60B0E880[dword_60B0E730[v19]] == v11;
            if ( v21 )
              break;
          }
          if ( ++v19 >= 19 )
            goto LABEL_29;
        }
        v22 = dword_60B0E820[v11];
        v68 = sub_608479DC(v70, v22);
        v23 = sub_608479E4(v70, v22);
        nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment(
          (nn__mii__detail__CalculateSizeAndAlignment *)v71,
          v68,
          v23);
        v3 = v69;
      }
LABEL_29:
      ++v11;
    }
    while ( v11 < 14 );
  }
  v24 = 0;
  while ( 1 )
  {
    v25 = (0x3033u >> v24) & 1;
    if ( ((unsigned int)v3 & (1 << v24)) == 0 )
      v25 = 4;
    if ( (v25 | 4) != 4 )
      break;
    if ( ++v24 >= 19 )
    {
      v25 = 2;
      break;
    }
  }
  v26 = 0;
  while ( 1 )
  {
    v27 = (v26 | 1) == 17;
    if ( ((unsigned int)v3 & (1 << v26)) == 0 )
      v27 = 4;
    if ( (v27 | 4) != 4 )
      break;
    if ( ++v26 >= 19 )
    {
      v27 = 2;
      break;
    }
  }
  v28 = 0;
  v29 = v27 != 2;
  while ( 1 )
  {
    v30 = v28 == 2;
    if ( ((unsigned int)v3 & (1 << v28)) == 0 )
      v30 = 4;
    if ( (v30 | 4) != 4 )
      break;
    if ( ++v28 >= 19 )
    {
      v30 = 2;
      break;
    }
  }
  v31 = 0;
  v32 = v30 != 2;
  while ( 1 )
  {
    v33 = ((unsigned int)v69 & (1 << v31)) != 0 ? v31 == 3 || v31 == 18 : 4;
    if ( (v33 & 3 | 4) != 4 )
      break;
    if ( ++v31 >= 19 )
    {
      v33 = 2;
      break;
    }
  }
  v34 = 0;
  v35 = v33 != 2;
  while ( 1 )
  {
    v36 = (0xCFC0u >> v34) & 1;
    if ( ((unsigned int)v69 & (1 << v34)) == 0 )
      v36 = 4;
    if ( (v36 | 4) != 4 )
      break;
    if ( ++v34 >= 19 )
    {
      v36 = 2;
      break;
    }
  }
  v37 = 0;
  v38 = v36 != 2;
  while ( 1 )
  {
    v39 = ((unsigned int)v69 & (1 << v37)) != 0 ? v37 == 0 || v37 == 6 : 4;
    if ( (v39 & 3 | 4) != 4 )
      break;
    if ( ++v37 >= 19 )
    {
      v39 = 2;
      break;
    }
  }
  v40 = 0;
  v41 = v39 != 2;
  while ( 1 )
  {
    if ( ((unsigned int)v69 & (1 << v40)) != 0 )
    {
      v42 = v40;
      if ( v40 != 1 )
        v42 = 0;
      v43 = v42 | (v40 == 7);
    }
    else
    {
      v43 = 4;
    }
    if ( (v43 & 3 | 4) != 4 )
      break;
    if ( ++v40 >= 19 )
    {
      v43 = 2;
      break;
    }
  }
  v44 = 0;
  if ( v43 != 2 )
    ++v41;
  while ( 1 )
  {
    v45 = ((unsigned int)v69 & (1 << v44)) != 0 ? v44 == 2 || v44 == 8 : 4;
    if ( (v45 & 3 | 4) != 4 )
      break;
    if ( ++v44 >= 19 )
    {
      v45 = 2;
      break;
    }
  }
  v46 = 0;
  if ( v45 != 2 )
    ++v41;
  while ( 1 )
  {
    v47 = ((unsigned int)v69 & (1 << v46)) != 0 ? v46 == 3 || v46 == 9 : 4;
    if ( (v47 & 3 | 4) != 4 )
      break;
    if ( ++v46 >= 19 )
    {
      v47 = 2;
      break;
    }
  }
  v48 = 0;
  if ( v47 != 2 )
    ++v41;
  while ( 1 )
  {
    v49 = ((unsigned int)v69 & (1 << v48)) != 0 ? v48 == 4 || v48 == 10 : 4;
    if ( (v49 & 3 | 4) != 4 )
      break;
    if ( ++v48 >= 19 )
    {
      v49 = 2;
      break;
    }
  }
  v50 = 0;
  if ( v49 != 2 )
    ++v41;
  while ( 1 )
  {
    v51 = ((unsigned int)v69 & (1 << v50)) != 0 ? v50 == 5 || v50 == 11 : 4;
    if ( (v51 & 3 | 4) != 4 )
      break;
    if ( ++v50 >= 19 )
    {
      v51 = 2;
      break;
    }
  }
  v52 = 0;
  if ( v51 != 2 )
    ++v41;
  while ( 1 )
  {
    v53 = v52 - 12;
    v54 = (unsigned int)(v52 - 12) < 7;
    if ( ((unsigned int)v69 & (1 << v52)) == 0 )
      v54 = 4;
    if ( (v54 | 4) != 4 )
      break;
    ++v52;
    if ( v53 + 13 >= 19 )
    {
      v54 = 2;
      break;
    }
  }
  v14 = v54 == 2;
  v55 = 4;
  if ( !v14 )
    ++v41;
  if ( v25 != 2 )
    v55 = 5;
  v56 = v55 + v29 + v32 + v35 + v38;
  v57 = v56 + 4 * v41;
  v58 = sub_60849570(v56);
  v59 = sub_60849588(v67);
  v60 = nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment_9ADC58(
          (nn__mii__detail__CalculateSizeAndAlignment *)v71,
          v58,
          v59,
          v57);
  v61 = sub_60849578(v60);
  v62 = sub_608495DC(v67);
  v63 = nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment_9ADC58(
          (nn__mii__detail__CalculateSizeAndAlignment *)v71,
          v61,
          v62,
          v57);
  v64 = sub_60849580(v63);
  v65 = sub_60849630(v67);
  nn__mii__detail__CalculateSizeAndAlignment__AddSizeWithAlignment_9ADC58(
    (nn__mii__detail__CalculateSizeAndAlignment *)v71,
    v64,
    v65,
    v57);
  Size_const = nn__mii__detail__CalculateSizeAndAlignment__GetSize_const((nn__mii__detail__CalculateSizeAndAlignment *)v71);
  nullsub_84(v70);
  nn__mii__detail__CalculateSizeAndAlignment__dtor((nn__mii__detail__CalculateSizeAndAlignment *)v71);
  return Size_const;
}
