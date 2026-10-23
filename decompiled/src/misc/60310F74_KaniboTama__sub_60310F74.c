/* KaniboTama__sub_60310F74
 * address: 0x60310F74   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KaniboTama__sub_60310F74(int a1, int a2)
{
  int result; // r0
  int v4; // r5
  float v5; // r1
  float v6; // r1
  float v7; // r1
  float v8; // r1
  ActiveColliderMgr *v9; // r5
  Vec3 position; // [sp+4h] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  result = 0;
  if ( !FIELD_U8(a1, 19) )
  {
    v4 = Global_BasicSoundActor2;
    if ( FIELD_U32(a1, 6408) )
    {
      v5 = FIELD_F32(a1, 112);
      position.x = FIELD_F32(a1, 108);
      position.y = v5;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v4, "SE_OBJ_PNGN_ICEBALL_DISAPP", &out.x, 0);
    }
    else
    {
      if ( a2 == 1 )
      {
        v6 = FIELD_F32(a1, 112);
        position.x = FIELD_F32(a1, 108);
        position.y = v6;
        mapPositionToScreen(&out, &position);
        sub_60813BDC(v4, "SE_OBJ_ROCK_S_CRASH", &out, 1, 0);
      }
      else
      {
        v7 = FIELD_F32(a1, 112);
        position.x = FIELD_F32(a1, 108);
        position.y = v7;
        mapPositionToScreen(&out, &position);
        BasicSoundActor2_play(v4, "SE_OBJ_ROCK_S_CRASH", &out.x, 0);
      }
      v8 = FIELD_F32(a1, 112);
      position.x = FIELD_F32(a1, 108);
      position.y = v8;
      position.z = 4500.0;
      EffectData_create(708, &position, 0, 0);
    }
    v9 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
    ActiveColldierMgr_removeFromCreateList(v9, (ActiveCollider *)(a1 + 188));
    ActiveColldierMgr_removeFromList3(v9, a1 + 188);
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
