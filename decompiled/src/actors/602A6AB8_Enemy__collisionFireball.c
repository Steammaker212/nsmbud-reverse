/* Enemy__collisionFireball
 * address: 0x602A6AB8   size: 408   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60259234 : Amp
//   - 0x602AE9C0 : FireSnake
//   - 0x6029F05C : Thwomp
//   - 0x603164A0 : DryBones
//   - 0x603832F4 : Pokey
//   - 0x60025454 : BossBase
signed int __fastcall Enemy__collisionFireball(float *a1, int a2, int a3)
{
  int v4; // r0
  float v5; // s16
  char v6; // r6
  char v7; // r5
  char v8; // r12
  float *v9; // r0
  float v10; // r1
  float v12; // [sp+0h] [bp-40h] BYREF
  float v13; // [sp+4h] [bp-3Ch]
  float v14; // [sp+8h] [bp-38h]
  int v15; // [sp+Ch] [bp-34h]
  int v16; // [sp+10h] [bp-30h]
  char v17; // [sp+14h] [bp-2Ch]
  char v18; // [sp+15h] [bp-2Bh]
  char v19; // [sp+16h] [bp-2Ah]
  _BOOL4 v20; // [sp+18h] [bp-28h]
  char v21; // [sp+1Ch] [bp-24h]

  v4 = FIELD_U32(a3, 64);
  v5 = FIELD_F32(v4, 120);
  v6 = FIELD_U8(v4, 84);
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 364))(a1);
  v12 = a1[27] + a1[143];
  v13 = a1[28] + a1[144];
  v14 = a1[29] + a1[145];
  v15 = v5 < 0.0;
  v16 = 1;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  sub_60583000(dword_60CAF15C, &v12, 3);
  v7 = sub_602856C4((_DWORD *)a1 + 1573);
  if ( ((unsigned int)&dword_60C907F4 & ~(1613392780 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C907F4) )
  {
    dword_60C9081C = 1.5;
    dword_60C90820 = 3.9;
    dword_60C90824 = -1.5;
    dword_60C90828 = 3.9;
    _cxa_guard_release(&dword_60C907F4);
  }
  v9 = (float *)((char *)&unk_60C907F0 + 8 * (v5 < 0.0));
  v10 = v9[11];
  v13 = v9[12];
  v12 = v10;
  v14 = -4.0;
  v15 = unk_60C906E8;
  v16 = (int)&stru_60C90710;
  v17 = v7;
  v20 = v5 < 0.0;
  v21 = v6;
  sub_602A852C((int)(a1 + 1526), &v12);
  return 1;
}
