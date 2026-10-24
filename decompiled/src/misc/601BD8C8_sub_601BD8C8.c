/* sub_601BD8C8
 * address: 0x601BD8C8   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_601BD8C8(__n64 *a1)
{
  __int8 *v2; // r5
  __n64 *v3; // r6
  int v4; // r0
  int v5; // r0
  float v6; // r1
  float v7; // r2
  int v8; // r0
  float v9; // r1
  float v10; // r2
  int v11; // r5
  float v12; // s0
  float v13; // s0
  float v14; // s4
  float v15; // s2
  float v16; // s0
  unsigned __int32 v17; // s2
  unsigned int result; // r0
  float v19; // [sp+0h] [bp-40h] BYREF
  float v20; // [sp+4h] [bp-3Ch]
  float v21; // [sp+8h] [bp-38h]
  float v22; // [sp+10h] [bp-30h] BYREF
  float v23; // [sp+14h] [bp-2Ch]
  float v24; // [sp+18h] [bp-28h]
  float v25; // [sp+20h] [bp-20h] BYREF
  float v26; // [sp+24h] [bp-1Ch]
  float v27; // [sp+28h] [bp-18h]

  v2 = &a1[143].n64_i8[4];
  v3 = a1 + 145;
  v4 = sub_601E0070(&a1[143].n64_u8[4], &a1[145]);
  sub_601C4960(a1, &a1[123], v3, v4);
  v5 = sub_601E0040(v2);
  v6 = *(float *)v5;
  v7 = FIELD_F32(v5, 4);
  v27 = FIELD_F32(v5, 8);
  v26 = v7;
  v25 = v6;
  v8 = sub_601E0040(v3);
  v9 = *(float *)v8;
  v10 = FIELD_F32(v8, 4);
  v24 = FIELD_F32(v8, 8);
  v23 = v10;
  v22 = v9;
  v11 = sub_608332B0(&v25, &v22);
  v19 = v22;
  v20 = v23;
  v21 = v24;
  v22 = v22 - v25;
  v23 = v23 - v26;
  v24 = v24 - v27;
  v12 = sqrtf((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v24 * v24));
  if ( v12 <= 0.0 )
  {
    v14 = v22;
    v15 = v23;
    v16 = v24;
  }
  else
  {
    v13 = 1.0 / v12;
    v14 = v13 * v22;
    v22 = v13 * v22;
    v15 = v13 * v23;
    v23 = v13 * v23;
    v16 = v13 * v24;
    v24 = v16;
  }
  v19 = v19 - (float)(v14 * 30.0);
  v20 = v20 - (float)(v15 * 30.0);
  v21 = v21 - (float)(v16 * 30.0);
  FIELD_U64(a1 + (120) * 8, 0x0)[0] = sub_601BA56C((int)a1, &v19, v11).n64_u64[0];
  a1[121].n64_u32[0] = v17;
  result = a1[138].n64_u32[1] & 0xFFFFFFFC;
  a1[138].n64_u32[1] = result;
  return result;
}
