/* BrosBase__collisionHammer
 * address: 0x60264B70   size: 344   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6DF4
// 
// Overridden by: None
int __fastcall BrosBase__collisionHammer(float *a1, int a2, int a3)
{
  int v4; // r7
  float v6; // s0
  _BOOL4 v7; // r6
  int v8; // r1
  _DWORD v10[5]; // [sp+0h] [bp-60h] BYREF
  char v11; // [sp+14h] [bp-4Ch]
  _BOOL4 v12; // [sp+18h] [bp-48h]
  char v13; // [sp+1Ch] [bp-44h]
  int v14[3]; // [sp+24h] [bp-3Ch] BYREF
  float v15[4]; // [sp+30h] [bp-30h] BYREF
  char v16; // [sp+40h] [bp-20h]
  char v17; // [sp+41h] [bp-1Fh]
  char v18; // [sp+42h] [bp-1Eh]
  char v19; // [sp+43h] [bp-1Dh]
  char v20; // [sp+44h] [bp-1Ch]
  char v21; // [sp+45h] [bp-1Bh]
  char v22; // [sp+46h] [bp-1Ah]

  v4 = FIELD_U32(a3, 64);
  v6 = FIELD_F32(v4, 120);
  v15[0] = a1[27] + a1[143];
  v7 = v6 < 0.0;
  v15[1] = a1[28] + a1[144];
  v15[2] = a1[29] + a1[145];
  LODWORD(v15[3]) = v7;
  v16 = 5;
  v17 = 0;
  v20 = 0;
  v19 = 0;
  v22 = 0;
  v21 = 0;
  v18 = 0;
  sub_60583000(dword_60CAF15C, v15, 3);
  LOBYTE(v4) = FIELD_U8(v4, 84);
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 364))(a1);
  v8 = FIELD_U32(a2, 88);
  v14[0] = FIELD_U32(a2, 84);
  v14[1] = v8;
  v14[2] = 1166843904;
  sub_602A38A4((int)a1, v14);
  v10[0] = dword_60AFE3F8[v7];
  v10[1] = 1081711002;
  v10[2] = -1065353216;
  v10[3] = unk_60C906E8;
  v10[4] = &stru_60C90710;
  v11 = sub_602856C4(a1 + 1573);
  v12 = v7;
  v13 = v4;
  sub_602A852C((int)(a1 + 1526), v10);
  return 1;
}
