/* SE_PLY_GET_ITEM_AGAIN_ref
 * address: 0x60463CD0   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_GET_ITEM_AGAIN_ref(int a1, int a2, unsigned int a3)
{
  float v5; // r1
  int v6; // r6
  int v7; // r6
  unsigned int v8; // r6
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  switch ( a2 )
  {
    case 0:
      return 0;
    case 1:
      v8 = 0;
      sub_60400980(AreaRumbleMgr_instance, (char)a3, 0, 0, 0);
      if ( a3 < 4 )
        v8 = a3;
      if ( *(_DWORD *)(PlayerMgr_instance + 4 * v8 + 32) )
        sub_607AA6F4();
      break;
    case 2:
      sub_604005D0(AreaRumbleMgr_instance, a3, 8, 2, 0, 0);
      v5 = FIELD_F32(a1, 112);
      v6 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v5;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v6, "SE_PLY_GET_ITEM_AGAIN", &out.x, 0);
      break;
  }
  v7 = 1;
  sub_600221A0(dword_60C7F52C, 4, a3, 1);
  sub_603FFD80(dword_60C99DD4 + 852);
  sub_604635F4(a1);
  FIELD_U8(a1, 19) = 1;
  return v7;
}
