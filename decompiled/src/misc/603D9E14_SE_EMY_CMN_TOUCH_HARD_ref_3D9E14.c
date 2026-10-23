/* SE_EMY_CMN_TOUCH_HARD_ref_3D9E14
 * address: 0x603D9E14   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_EMY_CMN_TOUCH_HARD_ref_3D9E14(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  float v4; // r1
  int v5; // r5
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C9911C & ~(1614650928 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9911C) )
  {
    dword_60C99118 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C9911C);
  }
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C99118) == 1 )
    {
      v4 = FIELD_F32(v3, 112);
      v5 = Global_BasicSoundActor1;
      position.x = FIELD_F32(v3, 108);
      position.y = v4;
      mapPositionToScreen(&out, &position);
      sub_60813810(v5, (int)"SE_EMY_CMN_TOUCH_HARD", (int)&out, 1, 0);
    }
  }
}
