/* sub_605E8CC8
 * address: 0x605E8CC8   size: 904   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605E8CC8(_DWORD *result, int a2)
{
  int v2; // lr
  int v3; // r2
  bool v4; // zf
  int v5; // r6
  int v6; // r3
  int v7; // r12
  int v8; // r2
  int v9; // r5
  int v10; // r4
  int v11; // r4
  bool v12; // cc
  int v13; // r6
  int v14; // r6
  int v15; // r7
  int v16; // r4
  int v17; // r2
  bool v18; // zf
  int v19; // r6
  int v20; // r3
  int v21; // r12
  int v22; // r2
  int v23; // r5
  int v24; // r4
  int v25; // r4
  bool v26; // cc
  int v27; // r6
  int v28; // r6
  int v29; // r7
  int v30; // r4
  int v31; // r2
  bool v32; // zf
  int v33; // r6
  int v34; // r3
  int v35; // r12
  int v36; // r2
  int v37; // r5
  int v38; // r4
  int v39; // r4
  bool v40; // cc
  int v41; // r6
  int v42; // r6
  int v43; // r7
  int v44; // r4
  int v45; // r2
  bool v46; // zf
  int v47; // r6
  int v48; // r3
  int v49; // r12
  int v50; // r2
  int v51; // r5
  int v52; // r4
  int v53; // r4
  bool v54; // cc
  int v55; // r6
  int i; // r1
  int v57; // r3
  int v58; // r7
  int v59; // r5
  int v60; // r3

  v3 = result[6];
  v4 = v3 == 0;
  if ( v3 )
  {
    v2 = result[9];
    v4 = v2 == 0;
  }
  if ( !v4 )
  {
    v5 = result[8];
    v6 = result[7];
    v7 = v3 + 4 * v5;
    v8 = 0;
    while ( 1 )
    {
      v9 = v5 + v8;
      v10 = result[7];
      if ( v5 + v8 < v6 )
        v10 = 0;
      v11 = v7 - 4 * v10;
      if ( *(_DWORD *)(v11 + 4 * v8) == a2 )
        break;
      if ( v2 == ++v8 )
        return result;
    }
    if ( v2 > v8 )
    {
      v12 = v2 < 1;
      if ( v2 >= 1 )
        v12 = v8 < 0;
      if ( !v12 )
      {
        v13 = v2 - 1;
        if ( v2 - 1 > v8 )
        {
          if ( v9 + 1 < v6 )
            v6 = 0;
          *(_DWORD *)(v11 + 4 * v8) = *(_DWORD *)(v7 - 4 * v6 + 4 * v8 + 4);
          while ( 1 )
          {
            ++v8;
            v13 = result[9] - 1;
            if ( v8 >= v13 )
              break;
            v14 = result[8];
            v15 = result[7];
            v16 = v8 + v14 - v15;
            if ( v8 + v14 < v15 )
              v16 = v8 + v14;
            if ( v8 + v14 + 1 >= v15 )
              v14 -= v15;
            *(_DWORD *)(result[6] + 4 * v16) = *(_DWORD *)(result[6] + 4 * (v8 + v14) + 4);
          }
        }
        result[9] = v13;
      }
    }
    v17 = result[22];
    v18 = v17 == 0;
    if ( v17 )
    {
      v2 = result[25];
      v18 = v2 == 0;
    }
    if ( !v18 )
    {
      v19 = result[24];
      v20 = result[23];
      v21 = v17 + 4 * v19;
      v22 = 0;
      while ( 1 )
      {
        v23 = v19 + v22;
        v24 = result[23];
        if ( v19 + v22 < v20 )
          v24 = 0;
        v25 = v21 - 4 * v24;
        if ( *(_DWORD *)(v25 + 4 * v22) == a2 )
          break;
        if ( v2 == ++v22 )
          goto LABEL_49;
      }
      if ( v2 > v22 )
      {
        v26 = v2 < 1;
        if ( v2 >= 1 )
          v26 = v22 < 0;
        if ( !v26 )
        {
          v27 = v2 - 1;
          if ( v2 - 1 > v22 )
          {
            if ( v23 + 1 < v20 )
              v20 = 0;
            *(_DWORD *)(v25 + 4 * v22) = *(_DWORD *)(v21 - 4 * v20 + 4 * v22 + 4);
            while ( 1 )
            {
              ++v22;
              v27 = result[25] - 1;
              if ( v22 >= v27 )
                break;
              v28 = result[24];
              v29 = result[23];
              v30 = v22 + v28 - v29;
              if ( v22 + v28 < v29 )
                v30 = v22 + v28;
              if ( v22 + v28 + 1 >= v29 )
                v28 -= v29;
              *(_DWORD *)(result[22] + 4 * v30) = *(_DWORD *)(result[22] + 4 * (v22 + v28) + 4);
            }
          }
          result[25] = v27;
        }
      }
    }
LABEL_49:
    v31 = result[38];
    v32 = v31 == 0;
    if ( v31 )
    {
      v2 = result[41];
      v32 = v2 == 0;
    }
    if ( !v32 )
    {
      v33 = result[40];
      v34 = result[39];
      v35 = v31 + 4 * v33;
      v36 = 0;
      while ( 1 )
      {
        v37 = v33 + v36;
        v38 = result[39];
        if ( v33 + v36 < v34 )
          v38 = 0;
        v39 = v35 - 4 * v38;
        if ( *(_DWORD *)(v39 + 4 * v36) == a2 )
          break;
        if ( v2 == ++v36 )
          goto LABEL_73;
      }
      if ( v2 > v36 )
      {
        v40 = v2 < 1;
        if ( v2 >= 1 )
          v40 = v36 < 0;
        if ( !v40 )
        {
          v41 = v2 - 1;
          if ( v2 - 1 > v36 )
          {
            if ( v37 + 1 < v34 )
              v34 = 0;
            *(_DWORD *)(v39 + 4 * v36) = *(_DWORD *)(v35 - 4 * v34 + 4 * v36 + 4);
            while ( 1 )
            {
              ++v36;
              v41 = result[41] - 1;
              if ( v36 >= v41 )
                break;
              v42 = result[40];
              v43 = result[39];
              v44 = v36 + v42 - v43;
              if ( v36 + v42 < v43 )
                v44 = v36 + v42;
              if ( v36 + v42 + 1 >= v43 )
                v42 -= v43;
              *(_DWORD *)(result[38] + 4 * v44) = *(_DWORD *)(result[38] + 4 * (v36 + v42) + 4);
            }
          }
          result[41] = v41;
        }
      }
    }
LABEL_73:
    v45 = result[54];
    v46 = v45 == 0;
    if ( v45 )
    {
      v2 = result[57];
      v46 = v2 == 0;
    }
    if ( !v46 )
    {
      v47 = result[56];
      v48 = result[55];
      v49 = v45 + 4 * v47;
      v50 = 0;
      while ( 1 )
      {
        v51 = v47 + v50;
        v52 = result[55];
        if ( v47 + v50 < v48 )
          v52 = 0;
        v53 = v49 - 4 * v52;
        if ( *(_DWORD *)(v53 + 4 * v50) == a2 )
          break;
        if ( v2 == ++v50 )
          return result;
      }
      if ( v2 > v50 )
      {
        v54 = v2 < 1;
        if ( v2 >= 1 )
          v54 = v50 < 0;
        if ( !v54 )
        {
          v55 = v2 - 1;
          if ( v2 - 1 > v50 )
          {
            if ( v51 + 1 < v48 )
              v48 = 0;
            *(_DWORD *)(v53 + 4 * v50) = *(_DWORD *)(v49 - 4 * v48 + 4 * v50 + 4);
            for ( i = v50 + 1; ; ++i )
            {
              v55 = result[57] - 1;
              if ( i >= v55 )
                break;
              v57 = result[55];
              v58 = result[56];
              v59 = i + v58 - v57;
              if ( i + v58 < v57 )
                v59 = i + v58;
              if ( i + v58 + 1 >= v57 )
                v58 -= v57;
              v60 = i + v58;
              *(_DWORD *)(result[54] + 4 * v59) = *(_DWORD *)(result[54] + 4 * v60 + 4);
            }
          }
          result[57] = v55;
        }
      }
    }
  }
  return result;
}
