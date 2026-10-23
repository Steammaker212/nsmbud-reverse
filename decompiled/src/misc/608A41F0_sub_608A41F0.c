/* sub_608A41F0
 * address: 0x608A41F0   size: 964   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A41F0(
        int a1,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        const void *a12)
{
  int v13; // r0
  int v15; // r1
  _DWORD *v16; // r2
  int v17; // r3
  int v18; // r6
  int v19; // r0
  int v20; // r3
  int v21; // r6
  int v22; // r6
  int result; // r0
  int v24; // r3
  int v25; // r6
  int v26; // r6
  int v27; // r5
  unsigned int v28; // r3
  int v29; // r7
  _DWORD *v30; // r7
  _DWORD *v31; // r0
  _DWORD *v32; // r6
  _DWORD *v33; // r3
  _DWORD *v34; // lr
  int v35; // r5
  int v36; // r5
  int v37; // r5
  int v38; // r5
  _DWORD *v39; // r2
  _DWORD *v40; // r3
  _DWORD *v41; // r6
  int v42; // r5
  int v43; // r5
  int v44; // r5
  int v45; // r5
  int v46; // r1
  int v47; // r2
  int v48; // r3
  int v49; // r1
  int v50; // r2
  int v51; // r3
  _DWORD *v52; // [sp+4h] [bp-2Ch]
  int v53; // [sp+8h] [bp-28h]

  v13 = 0;
  v15 = a6;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 16) = a5;
  FIELD_U32(a1, 28) = a4;
  FIELD_U32(a1, 24) = a3;
  v16 = a7;
  v17 = 0;
  FIELD_U8(a1, 4) = 0;
  FIELD_U32(a1, 12) = a6;
  FIELD_U32(a1, 92) = 0;
  if ( a7 )
  {
    v17 = 1;
    FIELD_U32(a1, 8) = 1;
  }
  if ( a8 )
  {
    v13 = 16 * v17;
    v18 = v17 + 1;
    FIELD_U32(a1, 8) = v17 + 1;
  }
  else
  {
    v18 = v17;
  }
  FIELD_U32(a1, 96) = v13;
  v19 = 0;
  if ( a9 )
  {
    v20 = v18 + 1;
    v21 = 16 * v18;
    FIELD_U32(a1, 8) = v20;
  }
  else
  {
    v20 = v18;
    v21 = 0;
  }
  FIELD_U32(a1, 100) = v21;
  if ( a10 )
  {
    v19 = 16 * v20;
    v22 = v20 + 1;
    FIELD_U32(a1, 8) = v20 + 1;
  }
  else
  {
    v22 = v20;
  }
  FIELD_U32(a1, 104) = v19;
  result = 0;
  if ( a11 )
  {
    v24 = v22 + 1;
    v25 = 16 * v22;
    FIELD_U32(a1, 8) = v24;
  }
  else
  {
    v24 = v22;
    v25 = 0;
  }
  FIELD_U32(a1, 108) = v25;
  FIELD_U32(a1, 32) = 16 * v24;
  v26 = 16 * a6 * v24;
  FIELD_U32(a1, 36) = v26;
  FIELD_U32(a1, 40) = 4 * a5;
  v27 = a2[100];
  v28 = ((4 * a5 + v26 + a2[94] - 1) & -a2[94]) + v27;
  if ( v28 <= a2[18] )
  {
    v29 = a2[101];
    a2[100] = v28;
    v30 = (_DWORD *)(v29 + v27);
    if ( v30 )
    {
      FIELD_U32(a1, 80) = a7;
      FIELD_U32(a1, 84) = a8;
      v53 = v27;
      v52 = v30;
      if ( a6 >= 1 )
      {
        v31 = a9;
        if ( a7 )
        {
          v32 = a8;
          v33 = a11;
          v34 = a10;
          while ( 1 )
          {
            *v30 = *v16;
            v30[1] = v16[1];
            v30[2] = v16[2];
            v30[3] = v16[3];
            if ( a8 )
              break;
            v30 += 4;
            if ( a9 )
              goto LABEL_24;
LABEL_25:
            if ( a10 )
            {
              *v30 = *v34;
              v30[1] = v34[1];
              v30[2] = v34[2];
              v37 = v34[3];
              v34 += 4;
              v30[3] = v37;
              v30 += 4;
            }
            if ( a11 )
            {
              *v30 = *v33;
              v30[1] = v33[1];
              v30[2] = v33[2];
              v38 = v33[3];
              v33 += 4;
              v30[3] = v38;
              v30 += 4;
            }
            v16 += 4;
            if ( !--v15 )
              goto LABEL_41;
          }
          v30[4] = *v32;
          v30[5] = v32[1];
          v30[6] = v32[2];
          v35 = v32[3];
          v32 += 4;
          v30[7] = v35;
          v30 += 8;
          if ( !a9 )
            goto LABEL_25;
LABEL_24:
          *v30 = *v31;
          v30[1] = v31[1];
          v30[2] = v31[2];
          v36 = v31[3];
          v31 += 4;
          v30[3] = v36;
          v30 += 4;
          goto LABEL_25;
        }
        v39 = a8;
        v40 = a11;
        v41 = a10;
        do
        {
          if ( a8 )
          {
            *v30 = *v39;
            v30[1] = v39[1];
            v30[2] = v39[2];
            v42 = v39[3];
            v39 += 4;
            v30[3] = v42;
            v30 += 4;
          }
          if ( a9 )
          {
            *v30 = *v31;
            v30[1] = v31[1];
            v30[2] = v31[2];
            v43 = v31[3];
            v31 += 4;
            v30[3] = v43;
            v30 += 4;
          }
          if ( a10 )
          {
            *v30 = *v41;
            v30[1] = v41[1];
            v30[2] = v41[2];
            v44 = v41[3];
            v41 += 4;
            v30[3] = v44;
            v30 += 4;
          }
          if ( a11 )
          {
            *v30 = *v40;
            v30[1] = v40[1];
            v30[2] = v40[2];
            v45 = v40[3];
            v40 += 4;
            v30[3] = v45;
            v30 += 4;
          }
          --v15;
        }
        while ( v15 );
      }
LABEL_41:
      qmemcpy(v30, a12, FIELD_U32(a1, 40));
      FIELD_U32(a1, 88) = a12;
      v46 = a2[97];
      v47 = a2[98];
      v48 = a2[99];
      FIELD_U32(a1, 48) = a2[96];
      FIELD_U32(a1, 52) = v46;
      FIELD_U32(a1, 56) = v47;
      FIELD_U32(a1, 60) = v48;
      v49 = a2[97];
      v50 = a2[98];
      v51 = a2[99];
      FIELD_U32(a1, 64) = a2[96];
      FIELD_U32(a1, 68) = v49;
      FIELD_U32(a1, 72) = v50;
      FIELD_U32(a1, 76) = v51;
      FIELD_U64(a1, 48) += v53;
      FIELD_U64(a1, 64) += (int)v30 + v53 - (int)v52;
      FIELD_U8(a1, 4) = 1;
      return 1;
    }
  }
  return result;
}
