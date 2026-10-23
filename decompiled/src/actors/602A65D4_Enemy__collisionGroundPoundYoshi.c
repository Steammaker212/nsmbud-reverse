/* Enemy__collisionGroundPoundYoshi
 * address: 0x602A65D4   size: 268   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60277F8C : Fuzzy
//   - 0x60316454 : DryBones
//   - 0x6033CB84 : GoombaBase
//   - 0x60382D9C : Pokey
//   - 0x603DF290 : RiverPiranha
//   - 0x606243C4 : FixedIcicle
//   - 0x603A1360 : ShellEnemy
signed int __fastcall Enemy__collisionGroundPoundYoshi(int a1, int a2, int a3)
{
  int v3; // r5
  unsigned int v5; // r6
  int v6; // r0
  signed int v7; // r0
  float v8; // r1
  int v9; // r6
  _BOOL4 v10; // r0
  char v11; // r1
  Vec3 v13; // [sp+0h] [bp-40h] BYREF
  int v14; // [sp+Ch] [bp-34h]
  _DWORD *v15; // [sp+10h] [bp-30h]
  char v16; // [sp+14h] [bp-2Ch]
  _BOOL4 v17; // [sp+18h] [bp-28h]
  char v18; // [sp+1Ch] [bp-24h]
  Vec2 out; // [sp+20h] [bp-20h] BYREF

  v3 = FIELD_U32(a3, 64);
  v5 = FIELD_S8(v3, 84);
  v6 = sub_602A3358(a1, v3);
  v7 = sub_602856EC((int *)(a1 + 6292), v6);
  if ( v5 <= 3 && v7 >= 0 )
    sub_60022760(0.0, 24.0, dword_60C7F52C, a1, v7, v5);
  v8 = FIELD_F32(a1, 112);
  v9 = Global_BasicSoundActor1;
  v13.x = FIELD_F32(a1, 108);
  v13.y = v8;
  mapPositionToScreen(&out, &v13);
  BasicSoundActor1_playSound(v9, "SE_EMY_YOSHI_HPDP", (int)&out, 0);
  v10 = sub_6000ADDC(a1, v3);
  v11 = FIELD_U8(v3, 84);
  v14 = 0;
  memset(&v13, 0, sizeof(v13));
  v15 = &dword_60C90734;
  v16 = -1;
  v17 = v10;
  v18 = v11;
  sub_602A852C(a1 + 6104, &v13);
  return 1;
}
