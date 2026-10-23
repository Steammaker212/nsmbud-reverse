/* SE_OBJ_PNGN_ICE_BREAK_ref_785B04
 * address: 0x60785B04   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PNGN_ICE_BREAK_ref_785B04(int a1)
{
  char v1; // r12
  int v3; // r5
  float v4; // r1
  int v5; // r5
  float v6; // s0
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  v3 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60C7B374 & ~(1618500388 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B370) == 1 )
    AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, FIELD_S8(v3, 84), 4, 0, 0);
  v4 = FIELD_F32(a1, 112);
  v5 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v5, "SE_OBJ_PNGN_ICE_BREAK", &out.x, 0);
  v6 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  position.y = v6;
  sub_602F335C((_BYTE *)(a1 + 648), (int *)&position, 4u);
  FIELD_U8(a1, 19) = 1;
  return 1;
}
