/* SE_EMY_DOWN_ref_2723A8
 * address: 0x602723A8   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_2723A8(_DWORD *a1, int a2, int a3)
{
  char v3; // r12
  float v6; // r1
  int v7; // r6
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  if ( a3 == 1 )
  {
    sub_602A38A4((int)a1, a1 + 27);
    v6 = *((float *)a1 + 28);
    v7 = Global_BasicSoundActor1;
    position.x = (float)a1[27];
    position.y = v6;
    mapPositionToScreen(&out, &position);
    BasicSoundActor1_playSound(v7, "SE_EMY_DOWN", (int)&out, 0);
  }
  if ( ((unsigned int)dword_60C8EAF0 & ~(1613177888 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C8EAF0) )
  {
    dword_60C8EAE0 = 0;
    unk_60C8EAE4 = 0;
    unk_60C8EAE8 = 0;
    dword_60C8EAEC = 0;
    _cxa_guard_release(dword_60C8EAF0);
  }
  return sub_602A63E4(a1, &dword_60C8EAE0, a1[20], FIELD_S8(a2, 84), -1);
}
