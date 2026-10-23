/* TerrainEffects_update
 * address: 0x60705F6C   size: 1200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TerrainEffects_update(int this)
{
  int v2; // r3
  __int16 v3; // r5
  _WORD *v4; // r3
  int v5; // t1
  int v6; // r7
  _BOOL4 v7; // r0
  _BOOL4 v8; // r6
  __int16 v9; // r1
  char v10; // r3
  int v11; // r3
  _WORD *v12; // r3
  int v13; // t1
  int v14; // r7
  int v15; // r7
  float v16; // s0
  int *playerMgrThing; // r0
  int v18; // r3
  float v19; // s0
  float v20; // s0
  int v21; // r3
  __int64 v22; // d17
  __int64 v23; // d17
  __int64 v24; // d17
  int v25; // r7
  int v26; // r1
  int i; // r4
  float *v28; // r5
  float v29; // s0
  int v30; // r0
  float v31; // s2
  int v32; // r0
  int v33; // r3
  float *v34; // r1
  int v35; // r2
  float v36; // s10
  bool v37; // cc
  float *v38; // r6
  float *v39; // r5
  float v40; // s6
  float v41; // s4
  float *v42; // r6
  float v43; // s6
  int result; // r0
  int v45; // r3
  float *v46; // r1
  int v47; // r2
  float v48; // s10
  bool v49; // cc
  float *v50; // r6
  float *v51; // r5
  float v52; // s6
  float v53; // s4
  float *v54; // r6
  float v55; // s6

  if ( !FIELD_U32(dword_60C995D0, 32) || dword_60C96478 && sub_60377E2C(dword_60C96478) )
  {
    v2 = FIELD_U32(this, 4);
    v3 = 1024;
    v5 = FIELD_S16(v2, 115372);
    v4 = (_WORD *)(v2 + 115372);
    v6 = v5 + FIELD_U32(this, 176);
    v7 = 0;
    v8 = v6 > 1024;
    if ( v6 > 0 )
      v3 = -1024;
    else
      v8 = v6 < -1024;
    v9 = 1024;
    if ( v8 )
      LOWORD(v6) = v6 + v3;
    *v4 = v6;
    v10 = FIELD_U8(this, 232);
    if ( !v10 )
    {
      v11 = FIELD_U32(this, 4);
      v13 = FIELD_S16(v11, 115374);
      v12 = (_WORD *)(v11 + 115374);
      v14 = v13 + FIELD_U32(this, 180);
      if ( v14 > 1024 )
        v7 = 1;
      if ( v14 > 0 )
        v9 = -1024;
      else
        v7 = v14 < -1024;
      if ( v7 )
        LOWORD(v14) = v14 + v9;
      *v12 = v14;
      v10 = FIELD_U8(this, 232);
    }
    if ( (unsigned __int8)(v10 - 1) <= 1u )
      TerrainEffects_update_helper(this);
    FIELD_U32(this, 184) += FIELD_U32(this, 200);
    FIELD_U32(this, 188) += FIELD_U32(this, 204);
    FIELD_U32(this, 192) += (int)(float)((float)(2147500000.0 * 0.5) / 180.0);
    FIELD_U32(this, 196) += (int)(float)(2147500000.0 / 180.0);
  }
  v15 = FIELD_U32(this, 16);
  v16 = FIELD_F32(this, 20) + 4.0;
  playerMgrThing = (int *)(AreaTask_intance + 0x714);
  if ( !FIELD_U8(this, 0xE9) )
    playerMgrThing = (int *)(this + 0xC);
  v18 = *playerMgrThing;
  FIELD_U32(this, 36) = *playerMgrThing;
  FIELD_U32(this, 40) = v15;
  FIELD_F32(this, 44) = v16;
  FIELD_U32(this, 48) = 1065353216;
  FIELD_U32(this, 52) = 0;
  FIELD_U32(this, 56) = 0;
  FIELD_U32(this, 64) = 0;
  FIELD_U32(this, 68) = 1065353216;
  FIELD_U32(this, 72) = 0;
  FIELD_U32(this, 80) = 0;
  FIELD_U32(this, 84) = 0;
  FIELD_U32(this, 88) = 1065353216;
  FIELD_U32(this, 60) = v18;
  FIELD_U32(this, 76) = v15;
  FIELD_F32(this, 92) = v16;
  if ( FIELD_F32(this, 156) != 0.0 )
  {
    v19 = FIELD_F32(this, 160);
    FIELD_F32(this, 48) = v19;
    v20 = v19 * 0.0;
    FIELD_F32(this, 64) = v20;
    FIELD_F32(this, 80) = v20;
  }
  v21 = FIELD_U32(this, 4);
  v22 = FIELD_U64(this, 56);
  FIELD_U64(v21, 4) = FIELD_U64(this, 48);
  FIELD_U64(v21, 12) = v22;
  v23 = FIELD_U64(this, 72);
  FIELD_U64(v21, 20) = FIELD_U64(this, 64);
  FIELD_U64(v21, 28) = v23;
  v24 = FIELD_U64(this, 88);
  FIELD_U64(v21, 36) = FIELD_U64(this, 80);
  FIELD_U64(v21, 44) = v24;
  TerrainEffects_update_helper_7067D8(this);
  ((void (__fastcall *)(int))loc_60706A70)(this);
  ((void (__fastcall *)(int))loc_60706EA0)(this);
  if ( FIELD_U8(this, 0xE8) == 3 )
  {
    v25 = FIELD_U32(this, 164);
    v26 = FIELD_U32(this, 168);
    if ( v25 < v26 )
    {
      while ( 2 )
      {
        for ( i = 0; i < 4; ++i )
        {
          v28 = *(float **)(PlayerMgr_instance + 4 * i + 32);
          if ( v28 )
          {
            v29 = v28[27];
            v30 = FIELD_U32(this, 4) + 8 * v25;
            v31 = FIELD_F32(this, 36) + FIELD_F32(v30, 156);
            if ( v31 >= (float)(v29 + -4.0)
              && v31 < (float)(v29 + 4.0)
              && (float)(FIELD_F32(this, 40) + FIELD_F32(v30, 160)) > (float)(v28[28] + 10.0) )
            {
              if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v28 + 236))(*(_DWORD *)(PlayerMgr_instance + 4 * i + 32)) == 1
                && (*(int (__fastcall **)(float *))(*(_DWORD *)v28 + 240))(v28) )
              {
                v26 = FIELD_U32(this, 0xA8);
                goto LABEL_39;
              }
              (*(void (__fastcall **)(float *, _DWORD, int))(*(_DWORD *)v28 + 1172))(v28, 0, 10);
            }
          }
        }
        v26 = FIELD_U32(this, 168);
        if ( ++v25 < v26 )
          continue;
        break;
      }
    }
LABEL_39:
    v32 = FIELD_U32(this, 164);
    if ( v32 < v26 )
    {
      v33 = 1;
      v34 = (float *)(TileMgr_instance + 5152);
      v35 = 8 * v32;
      do
      {
        v36 = FIELD_F32(this, 16);
        v37 = v33 < 1280;
        v38 = (float *)(FIELD_U32(this, 4) + v35);
        if ( v33 < 1280 )
          v35 += 8;
        v39 = v38 + 14440;
        v40 = v38[40];
        v41 = v38[39];
        v42 = v34 - 1280;
        v43 = v40 + *v39;
        *(v34 - 1280) = FIELD_F32(this, 36) + v41;
        if ( v33 < 1280 )
          v42 = (float *)(v32 + v33++);
        *v34 = (float)(v36 + (float)(v43 * 0.5)) + -4.0;
        if ( !v37 )
          break;
        ++v34;
      }
      while ( (int)v42 < FIELD_U32(this, 168) );
    }
  }
  result = FIELD_U8(this, 0xE9);
  if ( FIELD_U8(this, 0xE9) )
  {
    result = FIELD_U8(this, 0xE8);
    if ( result == 1 )
    {
      result = FIELD_U32(this, 164);
      if ( result < FIELD_U32(this, 0xA8) )
      {
        v45 = 1;
        v46 = (float *)(TileMgr_instance + 0x1420);
        v47 = 8 * result;
        do
        {
          v48 = FIELD_F32(this, 16);
          v49 = v45 < 1280;
          v50 = (float *)(FIELD_U32(this, 4) + v47);
          if ( v45 < 1280 )
            v47 += 8;
          v51 = v50 + 14440;
          v52 = v50[40];
          v53 = v50[39];
          v54 = v46 - 1280;
          v55 = v52 + *v51;
          *(v46 - 1280) = FIELD_F32(this, 36) + v53;
          if ( v45 < 1280 )
            v54 = (float *)(result + v45++);
          *v46 = (float)(v48 + (float)(v55 * 0.5)) + -4.0;
          if ( !v49 )
            break;
          ++v46;
        }
        while ( (int)v54 < FIELD_U32(this, 0xA8) );
      }
    }
  }
  return result;
}
