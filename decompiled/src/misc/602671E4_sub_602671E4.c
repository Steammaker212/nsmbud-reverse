/* sub_602671E4
 * address: 0x602671E4   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602671E4(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5
  float v5; // r1
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)dword_60C87680 & ~(1613132288 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C87680) )
  {
    dword_60C8767C = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C87680);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C8767C) == 1 )
  {
    v4 = Global_BasicSoundActor1;
    v5 = FIELD_F32(v3, 112);
    if ( FIELD_U8(v3, 12465) )
    {
      position.x = FIELD_F32(v3, 108);
      position.y = v5;
      mapPositionToScreen(&out, &position);
      sub_60813810(v4, (int)"SE_EMY_CMN_TOUCH_POCON", (int)&out, 1, 0);
    }
    else
    {
      position.x = FIELD_F32(v3, 108);
      position.y = v5;
      mapPositionToScreen(&out, &position);
      sub_60813810(v4, (int)"SE_SYS_CMN_TOUCH", (int)&out, 1, 0);
    }
  }
}
