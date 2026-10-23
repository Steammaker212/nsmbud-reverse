/* Pokey__collisionFireballYoshi
 * address: 0x60382EF4   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6FC4
// 
// Overridden by: None
int __fastcall Pokey__collisionFireballYoshi(int a1, int a2, float *a3)
{
  StageActor *v4; // r5
  float v5; // r1
  float v6; // r2
  float v7; // r0
  char v8; // r0
  float v9; // s0
  float x; // s2
  char playerId; // r1
  float v13[3]; // [sp+4h] [bp-3Ch] BYREF
  float v14; // [sp+10h] [bp-30h] BYREF
  float v15; // [sp+14h] [bp-2Ch]
  float v16; // [sp+18h] [bp-28h]
  _BOOL4 v17; // [sp+1Ch] [bp-24h]
  int v18; // [sp+20h] [bp-20h]
  char v19; // [sp+24h] [bp-1Ch]
  char v20; // [sp+25h] [bp-1Bh]
  char v21; // [sp+26h] [bp-1Ah]
  _BOOL4 v22; // [sp+28h] [bp-18h]
  char v23; // [sp+2Ch] [bp-14h]

  v4 = *((StageActor **)a3 + 16);
  v5 = a3[21];
  v6 = a3[22];
  v7 = FIELD_F32(a1, 116);
  v13[0] = v5;
  v13[1] = v6;
  v13[2] = v7;
  v14 = v5;
  v15 = v6;
  v16 = v7;
  v17 = FIELD_U32(v4, 0x78).x < 0.0;
  v18 = 1;
  v19 = 0;
  v21 = 0;
  v20 = 0;
  sub_60583000(dword_60CAF15C, &v14, 3);
  sub_602A38A4(a1, v13);
  SE_EMY_KAME_HIT_ref((int)v4, FIELD_U32(v4, 0x234), 0);
  sub_60000A18(v4);
  v8 = sub_602856EC((int *)(a1 + 6292), FIELD_U32(v4, 0x234));
  v9 = FIELD_F32(a1, 108);
  x = FIELD_U32(v4, 0x6C).x;
  playerId = FIELD_U8(v4, 0x54);
  v17 = 0;
  v16 = 0.0;
  v15 = 0.0;
  v14 = 0.0;
  v18 = (int)&unk_60C96A1C;
  v19 = v8;
  v22 = x >= v9;
  v23 = playerId;
  sub_602A852C(a1 + 6104, &v14);
  return 1;
}
