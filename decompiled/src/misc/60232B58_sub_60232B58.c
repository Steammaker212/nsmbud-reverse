/* sub_60232B58
 * address: 0x60232B58   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60232B58(int a1)
{
  int v2; // r0
  float v3; // s0
  float v4; // s22
  float v5; // s18
  float v6; // s24
  float v7; // s26
  float v8; // s20
  float v9; // s0
  int v10; // r0
  float v11; // s0
  float v12; // s18
  float v13; // s2
  float v14; // s0
  float v15; // s2
  float v16; // s4
  float v17; // s6
  float v18; // s8
  float v19; // s14
  int v20; // r6
  char v21; // r2
  float v22; // s6
  float v23; // s8
  float v24; // s10
  float v25; // s12
  float v26; // s6
  float v27; // s8
  float v28; // s4
  float v29; // s2
  int v30; // r4
  int v31; // t1

  v2 = FIELD_U32(a1, 428);
  FIELD_U32(a1, 344) = FIELD_U32(v2, 68);
  FIELD_U32(a1, 348) = FIELD_U32(v2, 72);
  FIELD_U8(a1, 172) = 1;
  v3 = tanf((float)(FIELD_F32(a1, 24) * 0.5) * 0.017453);
  v4 = FIELD_F32(a1, 28);
  v5 = FIELD_F32(dword_60CC6484, 116);
  v6 = FIELD_F32(dword_60CC6484, 128);
  v7 = FIELD_F32(dword_60CC6484, 316);
  v8 = (float)(112.0 / v3) * FIELD_F32(dword_60CC6484, 16);
  v9 = tanf((float)(FIELD_F32(a1, 24) * 0.5) * 0.017453);
  v10 = FIELD_U32(a1, 428);
  v11 = (float)((float)(v8 * v4) * v9) + (float)((float)(v8 * v4) * v9);
  v12 = v5 - (float)(v11 * FIELD_F32(v10, 68));
  v13 = (float)(v6 - v7) - (float)(v11 * FIELD_F32(v10, 72));
  FIELD_F32(a1, 32) = v12;
  FIELD_F32(a1, 36) = v13;
  FIELD_F32(a1, 40) = v8 * v4;
  if ( FIELD_U32(v10, 112) == 1 )
  {
    v13 = v13 + (float)(FIELD_F32(v10, 192) * (float)(FIELD_F32(dword_60CC6484, 132) - FIELD_F32(a1, 452)));
    FIELD_F32(a1, 36) = v13;
  }
  v14 = v12 + FIELD_F32(a1, 44);
  FIELD_F32(a1, 56) = v14;
  v15 = v13 + FIELD_F32(a1, 48);
  FIELD_F32(a1, 60) = v15;
  v16 = (float)(v8 * v4) + FIELD_F32(a1, 52);
  FIELD_F32(a1, 64) = v16;
  if ( AreaRumbleMgr_instance )
  {
    v17 = FIELD_F32(AreaRumbleMgr_instance, 76);
    v18 = FIELD_F32(AreaRumbleMgr_instance, 80);
  }
  else
  {
    v17 = 0.0;
    v18 = 0.0;
  }
  if ( !FIELD_U32(v10, 112) )
    v18 = v18 + (float)(FIELD_F32(v10, 152) * (float)(FIELD_F32(dword_60CC6484, 132) - FIELD_F32(a1, 452)));
  if ( v17 != 0.0 )
  {
    v19 = FIELD_F32(a1, 348) + (float)(v18 * 0.0013889);
    FIELD_F32(a1, 344) = FIELD_F32(a1, 344) + (float)(v17 * 0.00078125);
    FIELD_F32(a1, 348) = v19;
    FIELD_U8(a1, 172) = 1;
  }
  v20 = a1 + 168;
  if ( FIELD_U8(a1, 4722) )
  {
    v21 = FIELD_U8(a1, 4723) + 1;
    FIELD_U8(a1, 4723) = v21;
    v22 = FIELD_F32(a1, 344);
    v23 = (float)(FIELD_F32(a1, 4728) * 0.5) / 720.0;
    v24 = (float)(FIELD_F32(a1, 4724) * 0.5) / 1280.0;
    v25 = FIELD_F32(a1, 348);
    if ( (v21 & 1) != 0 )
    {
      v26 = v22 - v24;
      v27 = v25 - v23;
    }
    else
    {
      v26 = v22 + v24;
      v27 = v25 + v23;
    }
    FIELD_F32(a1, 344) = v26;
    FIELD_F32(a1, 348) = v27;
    FIELD_U8(a1, 172) = 1;
  }
  FIELD_F32(a1, 132) = v14;
  FIELD_F32(a1, 136) = v15;
  FIELD_F32(a1, 140) = v16;
  v28 = v16 + FIELD_F32(a1, 76);
  v29 = v15 + FIELD_F32(a1, 72);
  FIELD_F32(a1, 144) = v14 + FIELD_F32(a1, 68);
  FIELD_F32(a1, 148) = v29;
  FIELD_F32(a1, 152) = v28 + -1.0;
  v31 = FIELD_U32(a1, 80);
  v30 = a1 + 80;
  (*(void (__fastcall **)(int, int))(v31 + 16))(v30, v30 + 4);
  return sub_60411260(v30 + 272, v30, v20);
}
