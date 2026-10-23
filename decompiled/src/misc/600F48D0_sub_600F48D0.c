/* sub_600F48D0
 * address: 0x600F48D0   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F48D0(int a1)
{
  float v2; // s0
  float v3; // s2
  float v4; // s0
  int v5; // r2
  int v6; // r0
  float v7; // s4
  int v8; // r7
  float v9; // s2
  int v10; // r0
  int v11; // r7
  float v12; // s4
  int v13; // r0
  int v14; // r0
  int v15; // r6
  int v16; // r0
  int v17; // r6
  int v18; // r0
  int v19; // r0
  int v20; // r6
  int v21; // r0
  int v22; // r6
  int v23; // r0
  int v24; // r0
  int v25; // r6
  int v26; // r0
  int v27; // r6
  int v28; // r0
  int v29; // r0
  int v30; // r6
  int v31; // r0
  int v32; // r2
  int result; // r0
  _BYTE v34[8]; // [sp+8h] [bp-50h] BYREF
  float v35; // [sp+10h] [bp-48h]
  int v36; // [sp+14h] [bp-44h]
  int v37; // [sp+18h] [bp-40h]
  _DWORD v38[2]; // [sp+30h] [bp-28h] BYREF
  _DWORD v39[8]; // [sp+38h] [bp-20h] BYREF

  sub_600F55E8();
  v2 = FIELD_F32(a1, 112);
  v39[0] = FIELD_U32(a1, 108);
  *(float *)&v39[1] = v2 + 10.0;
  v3 = FIELD_F32(dword_60CC6484, 108);
  v38[0] = v39[0];
  v36 = 0;
  v37 = 0;
  *(float *)&v38[1] = v2 - v3;
  ((void (__fastcall *)(int, _BYTE *, _DWORD *, _DWORD *, int))loc_6015D2DC)(a1 + 652, v34, v39, v38, 8);
  v4 = v35;
  v5 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6332) = v5;
  FIELD_F32(a1, 6336) = v4 + -32.0;
  FIELD_U32(a1, 6340) = 1166843904;
  v6 = FIELD_U32(a1, 6300);
  v7 = FIELD_F32(v6, 112);
  v8 = FIELD_U32(v6, 116);
  FIELD_U32(v6, 6344) = v5;
  FIELD_F32(v6, 6348) = v4;
  v9 = (float)(v4 + -140.0) + -18.0;
  FIELD_U32(v6, 6352) = v8;
  v10 = FIELD_U32(a1, 6300);
  v11 = FIELD_U32(v10, 116);
  FIELD_U32(v10, 6332) = FIELD_U32(a1, 108);
  FIELD_F32(v10, 6336) = v9;
  FIELD_U32(v10, 6340) = v11;
  v12 = (float)((float)((float)((float)((float)(v4 + -18.0) + -28.0) + 16.0) - v7) * -2.0) / 900.0;
  *(float *)(FIELD_U32(a1, 6300) + 100) = v12;
  v13 = FIELD_U32(a1, 6300);
  FIELD_U32(v13, 120) = 0;
  FIELD_F32(v13, 124) = v12 * -30.0;
  FIELD_U32(v13, 128) = 0;
  v14 = FIELD_U32(a1, 6304);
  v15 = FIELD_U32(v14, 116);
  FIELD_U32(v14, 6344) = FIELD_U32(a1, 108);
  FIELD_F32(v14, 6348) = v4;
  FIELD_U32(v14, 6352) = v15;
  v16 = FIELD_U32(a1, 6304);
  v17 = FIELD_U32(v16, 116);
  FIELD_U32(v16, 6332) = FIELD_U32(a1, 108);
  FIELD_F32(v16, 6336) = v9;
  FIELD_U32(v16, 6340) = v17;
  *(float *)(FIELD_U32(a1, 6304) + 100) = v12;
  v18 = FIELD_U32(a1, 6304);
  FIELD_U32(v18, 120) = 0;
  FIELD_F32(v18, 124) = v12 * -30.0;
  FIELD_U32(v18, 128) = 0;
  v19 = FIELD_U32(a1, 6308);
  v20 = FIELD_U32(v19, 116);
  FIELD_U32(v19, 6344) = FIELD_U32(a1, 108);
  FIELD_F32(v19, 6348) = v4;
  FIELD_U32(v19, 6352) = v20;
  v21 = FIELD_U32(a1, 6308);
  v22 = FIELD_U32(v21, 116);
  FIELD_U32(v21, 6332) = FIELD_U32(a1, 108);
  FIELD_F32(v21, 6336) = v9;
  FIELD_U32(v21, 6340) = v22;
  *(float *)(FIELD_U32(a1, 6308) + 100) = v12;
  v23 = FIELD_U32(a1, 6308);
  FIELD_U32(v23, 120) = 0;
  FIELD_F32(v23, 124) = v12 * -30.0;
  FIELD_U32(v23, 128) = 0;
  v24 = FIELD_U32(a1, 6312);
  v25 = FIELD_U32(v24, 116);
  FIELD_U32(v24, 6344) = FIELD_U32(a1, 108);
  FIELD_F32(v24, 6348) = v4;
  FIELD_U32(v24, 6352) = v25;
  v26 = FIELD_U32(a1, 6312);
  v27 = FIELD_U32(v26, 116);
  FIELD_U32(v26, 6332) = FIELD_U32(a1, 108);
  FIELD_F32(v26, 6336) = v9;
  FIELD_U32(v26, 6340) = v27;
  *(float *)(FIELD_U32(a1, 6312) + 100) = v12;
  v28 = FIELD_U32(a1, 6312);
  FIELD_U32(v28, 120) = 0;
  FIELD_F32(v28, 124) = v12 * -30.0;
  FIELD_U32(v28, 128) = 0;
  v29 = FIELD_U32(a1, 6316);
  v30 = FIELD_U32(v29, 116);
  FIELD_U32(v29, 6344) = FIELD_U32(a1, 108);
  FIELD_F32(v29, 6348) = v4;
  FIELD_U32(v29, 6352) = v30;
  v31 = FIELD_U32(a1, 6316);
  v32 = FIELD_U32(v31, 116);
  FIELD_U32(v31, 6332) = FIELD_U32(a1, 108);
  FIELD_F32(v31, 6336) = v9;
  FIELD_U32(v31, 6340) = v32;
  *(float *)(FIELD_U32(a1, 6316) + 100) = v12;
  result = FIELD_U32(a1, 6316);
  FIELD_U32(result, 120) = 0;
  FIELD_F32(result, 124) = v12 * -30.0;
  FIELD_U32(result, 128) = 0;
  return result;
}
