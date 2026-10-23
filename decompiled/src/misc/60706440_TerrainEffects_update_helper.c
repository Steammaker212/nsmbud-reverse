/* TerrainEffects_update_helper
 * address: 0x60706440   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *__fastcall TerrainEffects_update_helper(int a1)
{
  float *v2; // r1
  _QWORD *result; // r0
  float v4; // s0
  float v5; // s16
  float v6; // s18
  unsigned int v7; // r8
  float v8; // s26
  int v9; // r5
  unsigned int v10; // r0
  int v11; // r10
  float *v12; // r6
  float v13; // s19
  float v14; // s21
  float v15; // s4
  bool v16; // r0
  float v17; // s0
  float v18; // s2
  float v19; // s0
  unsigned __int8 v20; // r0
  float v21; // s19
  float v22; // s21
  float v23; // s4
  bool v24; // r0
  float v25; // s0
  float v26; // s2
  int v27; // r0
  _QWORD *v28; // r2
  _QWORD *v29; // r7
  int v30; // r4
  __int64 v31; // d17
  _QWORD *v32; // r0
  _QWORD *v33; // r1
  __int64 v34; // d17
  __int64 v35; // d17

  v2 = (float *)(a1 + 65348);
  result = (_QWORD *)(FIELD_U32(a1, 65348) + 1);
  if ( (unsigned int)result > 4 )
    result = 0;
  *(_DWORD *)v2 = result;
  v4 = *(v2 - 16334);
  v5 = FIELD_F32(dword_60CC6484, 104);
  v6 = FIELD_F32(dword_60CC6484, 112);
  if ( v4 <= (float)((float)(v6 + v5) + 8.0) && (float)(v4 + FIELD_F32(a1, 144)) >= (float)(v6 + -8.0) )
  {
    if ( FIELD_S32(a1, 172) >= 1 )
    {
      v7 = 0;
      v8 = v5 + -16.0;
      while ( 1 )
      {
        v9 = (int)result;
        v10 = 0;
        if ( v7 < 0x14 )
          v10 = v7;
        v11 = FIELD_U32(a1, 8) + 32 * v10;
        v12 = (float *)(v11 + 48);
        if ( FIELD_U8(v11, 64) )
        {
          v13 = FIELD_F32(dword_60CC6484, 112);
          v14 = v13 + FIELD_F32(dword_60CC6484, 104);
          LODWORD(v15) = (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 9) | 0x3F800000;
          v16 = 0;
          v17 = (float)(v13 + -8.0) + (float)((float)((float)(v14 + 8.0) - (float)(v13 + -8.0)) * (float)(v15 + -1.0));
          *v12 = v17;
          FIELD_U32(v11, 52) = -1071644672;
          FIELD_U32(v11, 56) = 0;
          v18 = FIELD_F32(a1, 12);
          if ( v17 >= (float)(v18 + 8.0) )
            v16 = v17 <= (float)((float)(v18 + FIELD_F32(a1, 144)) + -8.0);
          FIELD_U8(v11, 76) = v16;
          FIELD_U8(v11, 64) = 0;
          if ( v9 )
            goto LABEL_26;
LABEL_22:
          v20 = FIELD_U8(v11, 65) + 1;
          FIELD_U8(v11, 65) = v20;
          if ( v20 >= 0xDu )
          {
            v21 = FIELD_F32(dword_60CC6484, 112);
            v22 = v21 + FIELD_F32(dword_60CC6484, 104);
            LODWORD(v23) = (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 9) | 0x3F800000;
            v24 = 0;
            v25 = (float)(v21 + -8.0) + (float)((float)((float)(v22 + 8.0) - (float)(v21 + -8.0)) * (float)(v23 + -1.0));
            *v12 = v25;
            FIELD_U32(v11, 52) = -1063256064;
            FIELD_U32(v11, 56) = 0;
            FIELD_U8(v11, 65) = 0;
            v26 = FIELD_F32(a1, 12);
            if ( v25 >= (float)(v26 + 8.0) )
              v24 = v25 <= (float)((float)(v26 + FIELD_F32(a1, 144)) + -8.0);
            FIELD_U8(v11, 76) = v24;
          }
          goto LABEL_26;
        }
        v19 = *v12;
        if ( *v12 < v6 )
          break;
        if ( v19 > (float)(v6 + v5) && (float)(v19 - v5) > FIELD_F32(a1, 12) )
        {
          v19 = v19 - v8;
LABEL_20:
          *v12 = v19;
        }
LABEL_21:
        FIELD_F32(v11, 52) = *(float *)(FIELD_U32(a1, 4)
                                        + 8 * (int)(float)((float)(v19 - FIELD_F32(a1, 12)) * 0.5)
                                        + 160)
                             + -5.0;
        if ( !v9 )
          goto LABEL_22;
LABEL_26:
        TerrainEffects_update_helper_helper_707290(a1, v11 + 48, v9);
        result = (_QWORD *)(v9 + 1);
        ++v7;
        if ( v9 > 3 )
          result = 0;
        if ( (signed int)v7 >= FIELD_U32(a1, 172) )
          goto LABEL_29;
      }
      if ( (float)(v5 + v19) >= (float)(FIELD_F32(a1, 12) + FIELD_F32(a1, 144)) )
        goto LABEL_21;
      v19 = v8 + v19;
      goto LABEL_20;
    }
LABEL_29:
    v27 = FIELD_U32(a1, 16);
    FIELD_U32(a1, 28) = v27;
    FIELD_U32(a1, 96) = 1065353216;
    v28 = (_QWORD *)(a1 + 96);
    FIELD_U32(a1, 100) = 0;
    FIELD_U32(a1, 104) = 0;
    FIELD_U32(a1, 112) = 0;
    v29 = (_QWORD *)(a1 + 112);
    FIELD_U32(a1, 116) = 1065353216;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 128) = 0;
    v30 = a1 + 128;
    FIELD_U32(v30, 4) = 0;
    FIELD_U32(v30, 8) = 1065353216;
    *(_DWORD *)(v30 - 20) = *(_DWORD *)(v30 - 104);
    *(_DWORD *)(v30 - 4) = v27;
    FIELD_U32(v30, 12) = *(_DWORD *)(v30 - 96);
    v31 = v28[1];
    v32 = *(_QWORD **)(v30 - 120);
    v33 = v32 + 4;
    *v32 = *v28;
    v32[1] = v31;
    result = v32 + 2;
    v34 = v29[1];
    *result = *v29;
    result[1] = v34;
    v35 = FIELD_U64(v30, 8);
    *v33 = *(_QWORD *)v30;
    v33[1] = v35;
  }
  return result;
}
