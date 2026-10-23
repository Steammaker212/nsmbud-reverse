/* CollisionMgr_process_helper
 * address: 0x6014BF68   size: 1056   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CollisionMgr_process_helper(int a1)
{
  float *v2; // r5
  char *v3; // r6
  char v4; // r3
  char v5; // r0
  char v6; // r2
  char v7; // r2
  char v8; // r0
  char v9; // r2
  char v10; // r0
  char v11; // r2
  char v12; // r0
  char v13; // r3
  char v14; // r7
  char v15; // r0
  char v16; // r2
  char v17; // r0
  char v18; // r2
  char v19; // r0
  _BYTE *v20; // r6
  char v21; // t1
  char v22; // r1
  char v23; // r2
  _BYTE *v24; // r5
  float v25; // r0
  float v26; // s6
  float v27; // r1
  float v28; // s4
  float v29; // r2
  float v30; // s2
  float v31; // s0
  float *v32; // r3
  float v33; // s10
  float v34; // r2
  float v35; // r0
  float v36; // r3
  float v37; // r1
  float *v38; // r7
  float v39; // s3
  float v40; // s10
  float v41; // s8

  v2 = (float *)(a1 + 2256);
  v3 = (char *)(a1 + 2240);
  if ( FIELD_F32(a1, 2256) != FIELD_F32(a1, 2240)
    || FIELD_F32(a1, 2260) != FIELD_F32(a1, 2244)
    || FIELD_F32(a1, 2264) != FIELD_F32(a1, 2248)
    || FIELD_F32(a1, 2268) != FIELD_F32(a1, 2252) )
  {
    FIELD_U8(a1, 2269) = FIELD_U8(a1, 2253);
    FIELD_U8(a1, 2265) = FIELD_U8(a1, 2249);
    FIELD_U8(a1, 2261) = FIELD_U8(a1, 2245);
    v4 = *v3;
    v5 = FIELD_U8(a1, 2241);
    v6 = v3[2];
    *((_BYTE *)v2 + 3) = v3[3];
    *((_BYTE *)v2 + 2) = v6;
    *((_BYTE *)v2 + 1) = v5;
    *(_BYTE *)v2 = v4;
    v7 = v3[14];
    v8 = v3[15];
    *((_BYTE *)v2 + 12) = v3[12];
    *((_BYTE *)v2 + 15) = v8;
    *((_BYTE *)v2 + 14) = v7;
    v9 = v3[10];
    v10 = v3[11];
    *((_BYTE *)v2 + 8) = v3[8];
    *((_BYTE *)v2 + 11) = v10;
    *((_BYTE *)v2 + 10) = v9;
    v11 = v3[6];
    v12 = v3[7];
    *((_BYTE *)v2 + 4) = v3[4];
    *((_BYTE *)v2 + 7) = v12;
    *((_BYTE *)v2 + 6) = v11;
  }
  if ( FIELD_U8(a1, 2339) )
  {
    FIELD_U8(a1, 2339) = 0;
    ((void (__fastcall *)(int))loc_6014BD38)(a1);
    if ( *v2 > FIELD_F32(a1, 2264) || FIELD_F32(a1, 2260) > FIELD_F32(a1, 2268) )
    {
      *((_BYTE *)v2 + 13) = v3[13];
      *((_BYTE *)v2 + 9) = v3[9];
      *((_BYTE *)v2 + 5) = v3[5];
      v13 = *v3;
      v14 = v3[1];
      v15 = v3[2];
      *((_BYTE *)v2 + 3) = v3[3];
      *((_BYTE *)v2 + 2) = v15;
      *((_BYTE *)v2 + 1) = v14;
      *(_BYTE *)v2 = v13;
      v16 = v3[14];
      v17 = v3[15];
      *((_BYTE *)v2 + 12) = v3[12];
      *((_BYTE *)v2 + 15) = v17;
      *((_BYTE *)v2 + 14) = v16;
      v18 = v3[10];
      v19 = v3[11];
      *((_BYTE *)v2 + 8) = v3[8];
      *((_BYTE *)v2 + 11) = v19;
      *((_BYTE *)v2 + 10) = v18;
      v21 = v3[4];
      v20 = v3 + 4;
      v22 = v20[2];
      v23 = v20[3];
      *((_BYTE *)v2 + 4) = v21;
      v24 = v2 + 1;
      v24[3] = v23;
      v24[2] = v22;
    }
  }
  v25 = FIELD_F32(a1, 2256);
  FIELD_F32(a1, 2304) = v25;
  v26 = v25;
  v27 = FIELD_F32(a1, 2260);
  FIELD_F32(a1, 2308) = v27;
  v28 = v27;
  v29 = FIELD_F32(a1, 2264);
  FIELD_F32(a1, 2312) = v29;
  v30 = v29;
  v31 = FIELD_F32(a1, 2268);
  FIELD_F32(a1, 2316) = v31;
  if ( v25 <= v29 )
  {
    v32 = *(float **)(a1 + 2208);
    v33 = v32[1];
    v26 = *v32 + v25;
    v28 = v33 + v27;
    v30 = *v32 + v29;
    v31 = v33 + v31;
    FIELD_F32(a1, 2304) = v26;
    FIELD_F32(a1, 2308) = v33 + v27;
    FIELD_F32(a1, 2312) = v30;
    FIELD_F32(a1, 2316) = v31;
  }
  v34 = FIELD_F32(a1, 2240);
  FIELD_F32(a1, 2288) = v34;
  v35 = FIELD_F32(a1, 2244);
  FIELD_F32(a1, 2292) = v35;
  v36 = FIELD_F32(a1, 2248);
  FIELD_F32(a1, 2296) = v36;
  v37 = FIELD_F32(a1, 2252);
  FIELD_F32(a1, 2300) = v37;
  if ( v34 <= v36 )
  {
    v38 = *(float **)(a1 + 2204);
    v39 = v38[1];
    v40 = (float)(*v38 + v34) + -8.1;
    v41 = (float)(*v38 + v36) + 8.1;
    FIELD_F32(a1, 2288) = v40;
    FIELD_F32(a1, 2292) = (float)(v39 + v35) + -8.1;
    FIELD_F32(a1, 2296) = v41;
    FIELD_F32(a1, 2300) = (float)(v39 + v37) + 8.1;
    v37 = (float)(v39 + v37) + 8.1;
    v36 = v41;
    v35 = (float)(v39 + v35) + -8.1;
    v34 = v40;
  }
  FIELD_F32(a1, 2272) = v34;
  FIELD_F32(a1, 2276) = v35;
  FIELD_F32(a1, 2280) = v36;
  FIELD_F32(a1, 2284) = v37;
  if ( v34 <= v36 )
  {
    if ( v34 > v26 )
      FIELD_F32(a1, 2272) = v26;
    if ( v35 > v28 )
      FIELD_F32(a1, 2276) = v28;
    if ( v36 < v30 )
      FIELD_F32(a1, 2280) = v30;
    if ( v37 < v31 )
      FIELD_F32(a1, 2284) = v31;
  }
  FIELD_U8(a1, 2340) = 1;
  return 1;
}
