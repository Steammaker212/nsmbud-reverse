/* sub_609600C8
 * address: 0x609600C8   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609600C8(int result)
{
  int v1; // r12
  float v2; // r9
  float v3; // lr
  int v4; // r8
  float v5; // r10
  float v6; // r11
  float v7; // r6
  float v8; // r7
  int v9; // r1
  float v10; // s9
  float v11; // s13
  float v12; // s11
  float v13; // s0
  float v14; // s2
  float v15; // s4
  float v16; // s6
  float v17; // s8
  float v18; // s10
  float v19; // s12
  float v20; // s14
  float v21; // s1
  float v22; // s3
  float v23; // s5
  float v24; // s7
  float *v25; // r2
  float v26; // s16
  float v27; // s15
  float v28; // s9
  float v29; // s13
  float v30; // s15

  v2 = 3.4028e38;
  v3 = -3.4028e38;
  v4 = 0;
  v5 = -3.4028e38;
  v6 = -3.4028e38;
  FIELD_U32(result, 212) = -1;
  FIELD_U32(result, 216) = -1;
  FIELD_U32(result, 220) = -1;
  FIELD_U32(result, 228) = -1;
  FIELD_U32(result, 232) = -1;
  FIELD_U32(result, 236) = -1;
  v7 = 3.4028e38;
  v8 = 3.4028e38;
  v9 = 0;
  v10 = -1.0;
  v11 = -1.0;
  v12 = -1.0;
  v13 = FIELD_F32(result, 276);
  v14 = FIELD_F32(result, 280);
  v15 = FIELD_F32(result, 284);
  v16 = FIELD_F32(result, 288);
  v17 = FIELD_F32(result, 248);
  v18 = FIELD_F32(result, 252);
  v19 = FIELD_F32(result, 256);
  v20 = FIELD_F32(result, 260);
  v21 = FIELD_F32(result, 264);
  v22 = FIELD_F32(result, 268);
  v23 = FIELD_F32(result, 272);
  v24 = FIELD_F32(result, 244);
  while ( 1 )
  {
    v25 = (float *)(v1 + v4);
    v26 = (float)((float)(v11 * v21) + (float)(v10 * v20)) + (float)(v12 * v22);
    v27 = (float)((float)(v11 * v17) + (float)(v10 * v24)) + (float)(v12 * v18);
    v28 = v16 + (float)((float)((float)(v11 * v14) + (float)(v10 * v13)) + (float)(v12 * v15));
    v29 = v23 + v26;
    v30 = v19 + v27;
    if ( v3 < v28 )
      v3 = v28;
    *v25 = v30;
    v25[1] = v29;
    v25[2] = v28;
    if ( v5 < (float)(v23 + v26) )
      v5 = v23 + v26;
    if ( v6 < v30 )
      v6 = v30;
    if ( v8 > v28 )
      v8 = v28;
    if ( v7 > v29 )
      v7 = v23 + v26;
    if ( v2 > v30 )
      v2 = v30;
    if ( v2 == v30 )
      FIELD_U32(result, 212) = v9;
    if ( v7 == v29 )
      FIELD_U32(result, 216) = v9;
    if ( v8 == v28 )
      FIELD_U32(result, 220) = v9;
    if ( v6 == v30 )
      FIELD_U32(result, 228) = v9;
    if ( v5 == v29 )
      FIELD_U32(result, 232) = v9;
    if ( v3 == v28 )
      FIELD_U32(result, 236) = v9;
    if ( v4 == 84 )
      break;
    v10 = v25[3];
    v11 = v25[4];
    v12 = v25[5];
    ++v9;
    v4 += 12;
  }
  return result;
}
