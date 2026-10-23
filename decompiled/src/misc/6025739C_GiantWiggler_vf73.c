/* GiantWiggler_vf73
 * address: 0x6025739C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall GiantWiggler_vf73(int a1, int a2, int a3)
{
  char v3; // r12
  float *v5; // r4
  float v6; // r1
  int v7; // r6
  Vec2 v9; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v5 = *(float **)(a3 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613067196 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v5 && (**(int (__fastcall ***)(float *, int *))v5)(v5, &dword_60C7B378) == 1 )
  {
    v6 = FIELD_F32(a1, 112);
    v7 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&v9, &position);
    BasicSoundActor1_playSound(v7, "SE_EMY_CMN_STEP", (int)&v9, 0);
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, float, float))(*(_DWORD *)v5 + 748))(v5, 1, 0, 0, 4.5, v5[22]);
  }
  return 1;
}
