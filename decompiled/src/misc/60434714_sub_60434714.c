/* sub_60434714
 * address: 0x60434714   size: 832   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60434714(_DWORD *result, unsigned int a2)
{
  _DWORD *v2; // r7
  int v3; // r4
  int v4; // r0
  int v5; // r1
  int v6; // r7
  int *v7; // r10
  int v8; // r11
  int v9; // r0
  int v10; // r5
  int v11; // r0
  int v12; // r8
  char *v13; // r0
  int j; // r1
  unsigned int v15; // r7
  int v16; // r0
  int v17; // r0
  int v18; // r1
  int v19; // r6
  _DWORD *v20; // r4
  int *v21; // r5
  int v22; // r8
  int v23; // r7
  int v24; // r0
  int v25; // r4
  int v26; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r12
  int v31; // lr
  _DWORD *v32; // r2
  int i; // r3
  float *v34; // r5
  float v35; // s0
  float v36; // s2
  float v37; // s4
  int *v38; // r6
  int v39; // r4
  float *v40; // r7
  int v41; // r0
  int v42; // r1
  float v43; // s6
  float *v44; // r0
  int v45; // r7
  int v46; // r3
  int v47; // r2
  int v48; // r0
  int v49; // r7
  int v50; // r2
  int v51; // r3
  int v52; // r6
  int v53; // r6
  int k; // r5
  _DWORD *v55; // [sp+18h] [bp-440h]
  unsigned int v56; // [sp+1Ch] [bp-43Ch]
  int v57; // [sp+20h] [bp-438h]
  int v58; // [sp+24h] [bp-434h]
  int v59; // [sp+2Ch] [bp-42Ch] BYREF
  int v60; // [sp+30h] [bp-428h] BYREF
  _BYTE v61[304]; // [sp+328h] [bp-130h] BYREF

  v2 = (_DWORD *)result[61];
  if ( result[60] > a2 )
    v2 += 30 * a2;
  v55 = v2;
  v3 = v2[29];
  if ( v3 )
  {
    v4 = result[18];
    v5 = 7 * a2;
    v7 = (int *)(v4 + 8 * v5);
    v6 = *v7;
    v8 = *(unsigned __int8 *)(*v7 + 104);
    if ( *(_BYTE *)(*v7 + 104) )
      qmemcpy(v61, *(const void **)(v4 + 8 * v5 + 24), 4 * v8);
    v9 = FIELD_U32(v6, 24);
    if ( FIELD_U8(v9, 84) )
    {
      v10 = 0;
      do
      {
        v11 = FIELD_U32(v9, 16);
        v12 = v11 + 16 * v10;
        if ( FIELD_U32(v12, 8) == 6149 || (v13 = (char *)(*(_DWORD *)(v11 + 16 * v10) + 2), v13 == "_p0") )
        {
LABEL_15:
          v15 = FIELD_U8(v12, 14);
          v16 = v55[29];
          if ( v55[28] > v15 )
            v16 += 72 * v15;
          v17 = sub_608354C4(v16);
          v18 = *v7;
          v19 = FIELD_U16(v12, 12);
          v20 = *(_DWORD **)(*v7 + 24);
          v58 = v10;
          v57 = v17;
          v56 = v15;
          if ( v8 )
          {
            v21 = &v59;
            v22 = 0;
            v23 = v8;
            do
            {
              v24 = v20[12];
              v25 = v20[4] + 16 * *(unsigned __int8 *)(FIELD_U32(v18, 48) + v22);
              v26 = sub_608354C4(*(_DWORD *)(v24 + 4 * *(unsigned __int8 *)(v25 - 2)));
              v27 = *(unsigned __int16 *)(v25 - 4);
              v22 += 20;
              --v23;
              *(v21 - 1) = v26 + v27;
              *v21 = v27;
              v18 = *v7;
              v28 = *(unsigned __int8 *)(v25 - 2);
              v20 = *(_DWORD **)(*v7 + 24);
              v29 = v20[16];
              v21[1] = *(_DWORD *)(v29 + 16 * v28);
              v21 += 3;
            }
            while ( v23 );
          }
          else
          {
            v29 = v20[16];
          }
          v30 = v20[22];
          if ( v30 )
          {
            v31 = *(_DWORD *)(v29 + 16 * v56);
            v32 = (_DWORD *)(v57 + v19);
            if ( v8 )
            {
              for ( i = 0; i != v30; ++i )
              {
                v34 = (float *)((char *)v32 + i * v31);
                v35 = 0.0;
                v36 = 0.0;
                v37 = 0.0;
                v38 = &v60;
                v39 = v8;
                v34[1] = 0.0;
                v34[2] = 0.0;
                *v34 = 0.0;
                v40 = (float *)v61;
                do
                {
                  v41 = *(v38 - 2);
                  v42 = *v38;
                  v43 = *v40++;
                  v38 += 3;
                  --v39;
                  v44 = (float *)(v41 + v42 * i);
                  v37 = v37 + (float)(v43 * *v44);
                  *v34 = v37;
                  v36 = v36 + (float)(v43 * v44[1]);
                  v34[1] = v36;
                  v35 = v35 + (float)(v43 * v44[2]);
                  v34[2] = v35;
                }
                while ( v39 );
              }
            }
            else
            {
              v45 = 0;
              if ( (v30 & 1) != 0 )
              {
                *v32 = 0;
                v32[1] = 0;
                v32[2] = 0;
                v45 = 1;
              }
              if ( v30 != 1 )
              {
                v46 = v45 + 1;
                v47 = v19 + v45 * v31;
                v48 = v30 - v45;
                v49 = 0;
                v50 = v57 + v47;
                v51 = v57 + v19 + v31 * v46;
                do
                {
                  v52 = v50 + v49;
                  v48 -= 2;
                  FIELD_U32(v52, 4) = 0;
                  FIELD_U32(v52, 8) = 0;
                  v53 = v51 + v49;
                  *(_DWORD *)(v50 + v49) = 0;
                  FIELD_U32(v53, 4) = 0;
                  FIELD_U32(v53, 8) = 0;
                  *(_DWORD *)(v51 + v49) = 0;
                  v49 += 2 * v31;
                }
                while ( v48 );
              }
            }
          }
          v6 = *v7;
          v10 = v58;
        }
        else
        {
          for ( j = 0; j <= 0x80000; ++j )
          {
            if ( aP0[j] != v13[j] )
              break;
            if ( !aP0[j] )
              goto LABEL_15;
          }
        }
        v9 = FIELD_U32(v6, 24);
        ++v10;
      }
      while ( v10 < FIELD_U8(v9, 84) );
      v3 = v55[29];
    }
    result = v55;
    for ( k = v55[28]; k; --k )
    {
      result = (_DWORD *)nullsub_66(v3);
      v3 += 72;
    }
  }
  return result;
}
