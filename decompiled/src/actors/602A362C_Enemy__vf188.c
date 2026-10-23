/* Enemy__vf188
 * address: 0x602A362C   size: 364   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x603169DC : DryBones
//   - 0x600396DC : BowserJrBase
//   - 0x603A15C8 : ShellEnemy
//   - 0x603116EC : KaniboTama
int __fastcall Enemy__vf188(float *a1, int a2)
{
  char v2; // r12
  unsigned int v5; // r0
  int *v6; // r6
  unsigned int v7; // r5
  float v8; // s2
  float v9; // s0
  const char *v10; // r4
  int v11; // r5
  Vec2 v13; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  if ( ((unsigned int)&dword_60C90380[1] & ~(1613379152 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C90380[1]) )
  {
    dword_60C903A0 = (int)"SE_EMY_FUMU_1";
    dword_60C903A4 = (int)"SE_EMY_FUMU_2";
    dword_60C903A8 = (int)"SE_EMY_FUMU_3";
    dword_60C903AC = (int)"SE_EMY_FUMU_4";
    dword_60C903B0 = (int)"SE_EMY_FUMU_5";
    dword_60C903B4 = (int)"SE_EMY_FUMU_6";
    dword_60C903B8 = (int)"SE_EMY_FUMU_7";
    dword_60C903BC = (int)"SE_EMY_FUMU_7";
    dword_60C903C0 = (int)"SE_EMY_FUMU_7";
    _cxa_guard_release(&dword_60C90380[1]);
  }
  v5 = FIELD_S8(a2, 84);
  LODWORD(position.x) = 19;
  v6 = sub_60002B90(v5, unk_60C263C0);
  v7 = FIELD_S8(a2, 1313);
  if ( v7 >= 8 )
    v7 = 8;
  if ( (*(int (__fastcall **)(float *, unsigned int))(*(_DWORD *)a1 + 204))(a1, v7) == 1 )
    SE_SYS_NICE_S_ref();
  v8 = a1[27] + a1[143];
  v9 = a1[28] + a1[144];
  v10 = (const char *)dword_60C90380[v7 + 8];
  position.x = v8;
  position.y = v9;
  v11 = Global_BasicSoundActor1;
  mapPositionToScreen(&v13, &position);
  return BasicSoundActor1_playSound(v11, v10, (int)&v13, (int)v6);
}
