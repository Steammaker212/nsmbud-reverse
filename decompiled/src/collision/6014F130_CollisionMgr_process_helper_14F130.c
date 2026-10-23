/* CollisionMgr_process_helper_14F130
 * address: 0x6014F130   size: 1228   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall CollisionMgr_process_helper_14F130(int a1, float *a2)
{
  float *v4; // r0
  float result; // s0
  int v6; // r1
  _BOOL4 v7; // r2
  int v8; // r3
  int v9; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r6
  int v13; // r12
  unsigned int v14; // lr
  int v15; // r6
  float v16; // s16
  bool v17; // zf
  float *v18; // r2
  float v19; // s6
  float v20; // s4
  float v21; // s2
  int *v22; // r2
  float v23; // s2
  int v24; // r1
  int v25; // r1
  int v26; // r3
  unsigned int v27; // r6
  bool v28; // zf
  float *v29; // r2
  float v30; // s6
  float v31; // s4
  float v32; // s2
  int *v33; // r1
  float v34; // s2
  float v35; // s0
  float v36; // s0
  float *v37; // r0
  int v38; // r6
  float v39; // s6
  float v40; // s0
  int v41; // r1
  int v42; // r0
  int v43; // r1
  int v44; // r3
  bool v45; // vf
  int v46; // r0
  float v47; // s0
  TileCheck_Result v48; // [sp+8h] [bp-68h] BYREF
  Vec2 positionOffset; // [sp+34h] [bp-3Ch] BYREF
  Vec2 a3; // [sp+3Ch] [bp-34h] BYREF
  float v51; // [sp+44h] [bp-2Ch] BYREF
  float v52; // [sp+48h] [bp-28h]
  __int16 v53; // [sp+4Ch] [bp-24h] BYREF
  char v54; // [sp+4Eh] [bp-22h]
  char v55; // [sp+4Fh] [bp-21h]
  int v56; // [sp+50h] [bp-20h]
  int v57; // [sp+54h] [bp-1Ch]

  v4 = *(float **)(a1 + 2204);
  result = *v4 - *a2;
  if ( result > 0.0001 || result < -0.0001 )
  {
    if ( (v6 = FIELD_U32(a1, 2224), (v6 & 0x440000) != 0) && (v6 & 0x10000000) == 0
      || (v6 & 0x880000) != 0 && (v6 & 0x20000000) == 0 )
    {
      v7 = result >= 0.0;
      v8 = a1 + v7;
      if ( *(_BYTE *)(a1 + v7 + 2341) )
      {
        if ( FIELD_U8(v8, 2345) )
          return result;
      }
      else if ( !FIELD_U8(v8, 2349) )
      {
        return result;
      }
      v9 = 0x40000;
      if ( result >= 0.0 )
        v9 = 0x80000;
      if ( (v6 & v9) != 0 )
        goto LABEL_73;
      v10 = 0x400000;
      if ( result >= 0.0 )
        v10 = 0x800000;
      if ( (v6 & v10) != 0 )
      {
LABEL_73:
        v11 = 0x10000000;
        if ( result >= 0.0 )
          v11 = 0x20000000;
        if ( (v6 & v11) == 0 )
        {
          v12 = *(_DWORD *)(a1 + 4 * v7 + 2560);
          if ( v12 <= 5 )
          {
            if ( (v6 & 1) == 0
              || (v13 = FIELD_U32(a1, 2572), v13 > 5)
              || (v14 = a1 + 56 * v13, !FIELD_U8(v14, 3603)) )
            {
              v16 = 0.0;
              if ( (v6 & 0x10400) == 0x400 )
              {
                v24 = FIELD_U32(a1, 2568);
                if ( v24 <= 5 )
                {
                  v25 = a1 + 56 * v24;
                  if ( FIELD_U8(v25, 3267) )
                  {
                    v26 = 7 * v12;
                    v27 = *(unsigned __int8 *)(336 * (result >= 0.0) + a1 + 56 * v12 + 2595);
                    v28 = v27 == 0;
                    if ( v27 )
                    {
                      v25 = FIELD_U32(v25, 3272);
                      v27 = v25 ^ 0x80000000;
                      v28 = v25 == 0x80000000;
                    }
                    if ( !v28 && v27 != *(_DWORD *)(336 * (result >= 0.0) + a1 + 8 * v26 + 2600) )
                    {
                      v29 = (float *)((char *)sinLutTable + ((v27 >> 20) & 0xFF0));
                      v30 = (float)(v25 & 0xFFFFFF) * 0.000000059605;
                      v31 = v29[2] + (float)(v30 * v29[3]);
                      v32 = *v29 + (float)(v30 * v29[1]);
                      if ( v31 > 0.00000011921 || v31 < -0.00000011921 )
                      {
                        v34 = v32 / v31;
                      }
                      else
                      {
                        v33 = dword_6014F610;
                        if ( v32 > 0.0 )
                          v33 = &dword_6014F610[1];
                        v34 = *(float *)v33;
                      }
                      v47 = result * v34;
                      v16 = -8.0;
                      if ( v47 >= -8.0 )
                      {
                        v16 = 8.0;
                        if ( v47 <= 8.0 )
                          v16 = v47;
                      }
                    }
                  }
                }
              }
              goto LABEL_70;
            }
            v15 = 7 * v12;
            v16 = 0.0;
            v17 = *(_BYTE *)(336 * (result >= 0.0) + a1 + 8 * v15 + 2595) == 0;
            if ( *(_BYTE *)(336 * (result >= 0.0) + a1 + 8 * v15 + 2595) )
            {
              v14 = FIELD_U32(v14, 3608);
              v17 = v14 == 0;
            }
            if ( !v17 && v14 != *(_DWORD *)(336 * (result >= 0.0) + a1 + 8 * v15 + 2600) )
            {
              v18 = (float *)((char *)sinLutTable + ((v14 >> 20) & 0xFF0));
              v19 = (float)(v14 & 0xFFFFFF) * 0.000000059605;
              v20 = v18[2] + (float)(v19 * v18[3]);
              v21 = *v18 + (float)(v19 * v18[1]);
              if ( v20 > 0.00000011921 || v20 < -0.00000011921 )
              {
                v23 = v21 / v20;
              }
              else
              {
                v22 = dword_6014F610;
                if ( v21 > 0.0 )
                  v22 = &dword_6014F610[1];
                v23 = *(float *)v22;
              }
              v35 = result * v23;
              v16 = -8.0;
              if ( v35 >= -8.0 )
              {
                v16 = v35;
                if ( v35 > 8.0 )
                  v16 = 8.0;
              }
              if ( (v6 & 0x10400) == 0x400 )
              {
                if ( v16 >= 0.0 || v13 < FIELD_U32(a1, 2568) )
                  goto LABEL_70;
LABEL_54:
                sub_60153134(a1 + 2440, &v51);
                v36 = a2[1];
                v37 = *(float **)(a1 + 2204);
                v38 = 0;
                a3.x = *v37 + v51;
                a3.y = (float)(v36 + v52) + 4.0;
                v39 = v37[1];
                v40 = *v37;
                v48.field_C = 0;
                v48.field_10 = 0;
                v53 = 0;
                positionOffset.x = v40 + v51;
                positionOffset.y = (float)((float)(v16 + v39) + v52) + -8.0;
                v54 = **(_BYTE **)(a1 + 2212);
                v55 = **(_BYTE **)(a1 + 2216);
                v56 = 0;
                v57 = a1 + 80;
                sub_6015D144((TileCheck *)(a1 + 4), (int)&v53);
                v41 = FIELD_U32(a1, 2196);
                FIELD_U32(a1, 12) = v41;
                FIELD_U32(a1, 28) = 0;
                FIELD_U32(a1, 32) = 0;
                v42 = FIELD_U32(a1, 24);
                if ( v42 >= 1 )
                {
                  FIELD_U32(a1, 32) = 1;
                  **(_DWORD **)(a1 + 20) = v41;
                  v42 = FIELD_U32(a1, 24);
                  v38 = FIELD_U32(a1, 32);
                }
                if ( v38 < v42 )
                {
                  v43 = FIELD_U32(a1, 2200);
                  FIELD_U32(a1, 32) = v38 + 1;
                  v44 = FIELD_U32(a1, 28) + v38;
                  v45 = __OFSUB__(v44, v42);
                  v46 = v44 - v42;
                  if ( v46 < 0 != v45 )
                    v46 = FIELD_U32(a1, 28) + v38;
                  *(_DWORD *)(FIELD_U32(a1, 20) + 4 * v46) = v43;
                }
                FIELD_U16(a1, 4) = 257;
                if ( TileCheck_check((TileCheck *)(a1 + 4), &v48, &a3, &positionOffset, 8) == 1 )
                {
                  if ( v48.field_8 > positionOffset.y )
                    v16 = (float)(v48.field_8 - *(float *)(FIELD_U32(a1, 2204) + 4)) - v52;
                }
                else
                {
                  v16 = 0.0;
                }
                v4 = *(float **)(a1 + 2204);
                goto LABEL_70;
              }
              if ( v16 < 0.0 )
                goto LABEL_54;
            }
LABEL_70:
            result = v16 + v4[1];
            v4[1] = result;
          }
        }
      }
    }
  }
  return result;
}
