/* Enemy__vf19C
 * address: 0x602A3AEC   size: 368   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60316B64 : DryBones
int __fastcall Enemy__vf19C(float *a1, int a2)
{
  char v2; // r12
  unsigned int v5; // r0
  int *v6; // r6
  unsigned int v7; // r5
  float v8; // s0
  float v9; // s6
  float v10; // s2
  float v11; // s4
  const char *v12; // r4
  int v13; // r5
  Vec2 v15; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  if ( ((unsigned int)&dword_60C90380[3] & ~(1613380368 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C90380[3]) )
  {
    dword_60C903F0[0] = (int)"SE_EMY_YOSHI_FUMU_1";
    dword_60C903F4 = (int)"SE_EMY_YOSHI_FUMU_2";
    dword_60C903F8 = (int)"SE_EMY_YOSHI_FUMU_3";
    dword_60C903FC = (int)"SE_EMY_YOSHI_FUMU_4";
    dword_60C90400 = (int)"SE_EMY_YOSHI_FUMU_5";
    dword_60C90404 = (int)"SE_EMY_YOSHI_FUMU_6";
    dword_60C90408 = (int)"SE_EMY_YOSHI_FUMU_7";
    dword_60C9040C = (int)"SE_EMY_YOSHI_FUMU_7";
    dword_60C90410 = (int)"SE_EMY_YOSHI_FUMU_7";
    _cxa_guard_release(&dword_60C90380[3]);
  }
  v5 = FIELD_S8(a2, 84);
  LODWORD(position.x) = 21;
  v6 = sub_60002B90(v5, unk_60C263C8);
  v7 = FIELD_S8(a2, 1313);
  if ( v7 >= 8 )
    v7 = 8;
  if ( (*(int (__fastcall **)(float *, unsigned int))(*(_DWORD *)a1 + 204))(a1, v7) == 1 )
    SE_SYS_NICE_S_ref();
  v8 = a1[28];
  v9 = a1[144];
  v10 = a1[27];
  v11 = a1[143];
  v12 = (const char *)dword_60C903F0[v7];
  position.x = v10 + v11;
  position.y = v8 + v9;
  v13 = Global_BasicSoundActor1;
  mapPositionToScreen(&v15, &position);
  return BasicSoundActor1_playSound(v13, v12, (int)&v15, (int)v6);
}
