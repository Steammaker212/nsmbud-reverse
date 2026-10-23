/* SE_OBJ_PNGN_ICE_BREAK_ref_36D3A8
 * address: 0x6036D3A8   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PNGN_ICE_BREAK_ref_36D3A8(int a1)
{
  int result; // r0
  float v3; // r1
  int v4; // r5
  float v5; // s0
  Vec2 v6; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  result = FIELD_U8(a1, 7309);
  if ( !result )
  {
    result = FIELD_U8(a1, 7310);
    if ( !FIELD_U8(a1, 7310) )
    {
      FIELD_U8(a1, 6292) = 1;
      ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6072));
      v3 = FIELD_F32(a1, 112);
      v4 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v3;
      mapPositionToScreen(&v6, &position);
      BasicSoundActor2_play(v4, "SE_OBJ_PNGN_ICE_BREAK", &v6.x, 0);
      v5 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
      position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
      position.y = v5;
      result = sub_602F335C((_BYTE *)(a1 + 6728), (int *)&position, 4u);
      FIELD_U8(a1, 7310) = 1;
      FIELD_U8(a1, 19) = 1;
    }
  }
  return result;
}
