/* SE_OBJ_CMN_TOUCH_HARD_ref_61B058
 * address: 0x6061B058   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_OBJ_CMN_TOUCH_HARD_ref_61B058(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  float v4; // r1
  int v5; // r5
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  v3 = FIELD_U32(a2, 144);
  if ( ((unsigned int)&dword_60CB34B4 & ~(1617014900 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB34B4) )
  {
    dword_60CB34B0 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB34B4);
  }
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CB34B0) == 1 )
    {
      v4 = FIELD_F32(v3, 112);
      v5 = Global_BasicSoundActor2;
      position.x = FIELD_F32(v3, 108);
      position.y = v4;
      mapPositionToScreen(&out, &position);
      sub_60813BDC(v5, "SE_OBJ_CMN_TOUCH_HARD", &out, 1, 0);
    }
  }
}
