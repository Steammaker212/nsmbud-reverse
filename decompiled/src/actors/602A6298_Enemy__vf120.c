/* Enemy__vf120
 * address: 0x602A6298   size: 296   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60259D2C : Amp
//   - 0x60026624 : BossBase
signed int __fastcall Enemy__vf120(int a1, int a2, int a3)
{
  int v3; // r6
  _BOOL4 v5; // r5
  char v6; // r8
  float v7; // r1
  int v8; // r6
  char v9; // r12
  float *v10; // r0
  float v11; // r1
  Vec3 v13; // [sp+0h] [bp-40h] BYREF
  int v14; // [sp+Ch] [bp-34h]
  StateVirtual *v15; // [sp+10h] [bp-30h]
  char v16; // [sp+14h] [bp-2Ch]
  _BOOL4 v17; // [sp+18h] [bp-28h]
  char v18; // [sp+1Ch] [bp-24h]
  Vec2 out; // [sp+20h] [bp-20h] BYREF

  v3 = FIELD_U32(a3, 64);
  v5 = sub_6000ADDC(a1, v3);
  v6 = FIELD_U8(v3, 84);
  v7 = FIELD_F32(a1, 112);
  v8 = Global_BasicSoundActor1;
  v13.x = FIELD_F32(a1, 108);
  v13.y = v7;
  mapPositionToScreen(&out, &v13);
  BasicSoundActor1_playSound(v8, "SE_EMY_DOWN", (int)&out, 0);
  if ( ((unsigned int)&unk_60C907F0 & ~(1613390600 << v9) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C907F0) )
  {
    dword_60C9080C = 1066401792;
    dword_60C90810 = 1081711002;
    dword_60C90814 = -1081081856;
    dword_60C90818 = 1081711002;
    _cxa_guard_release((__guard *)&unk_60C907F0);
  }
  v10 = (float *)((char *)&unk_60C907F0 + 8 * v5);
  v11 = v10[7];
  v13.y = v10[8];
  v13.x = v11;
  v13.z = -4.0;
  v14 = unk_60C906E8;
  v15 = &stru_60C90710;
  v16 = -1;
  v17 = v5;
  v18 = v6;
  sub_602A852C(a1 + 6104, &v13);
  return 1;
}
